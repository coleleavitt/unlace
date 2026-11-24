/* Fixture for the TerminateProcess(GetCurrentProcess(), code) no-return rule
 * (noreturn_propagate, unlace#837).
 *
 * Build:
 *   i686-w64-mingw32-gcc -O2 -s -mno-accumulate-outgoing-args -fno-omit-frame-pointer \
 *       -o terminatecurrent_i686.exe terminatecurrent_i686.c
 *
 * Stripped: fastfail_watson is sub_4014b0 (it stores 0xc000000d and the
 * GetCurrentProcess() result as the arguments, then calls TerminateProcess
 * through its IAT slot) and checked is sub_401510.
 */
#include <windows.h>

__declspec(noinline) void fastfail_watson(void)
{
    if (!IsDebuggerPresent())
        OutputDebugStringA("watson");
    TerminateProcess(GetCurrentProcess(), 0xc000000d);
    OutputDebugStringA("after");
}

__declspec(noinline) int checked(int x)
{
    if (x < 0)
        fastfail_watson();
    return x * 3;
}

int main(int argc, char **argv)
{
    (void)argv;
    return checked(argc - 2);
}
