_DWORD *__fastcall sub_56B950(
        __int64 *a1,
        int a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        unsigned __int16 a8,
        __int64 a9)
{
  _DWORD *result; // rax

  result = sub_56B600(a1, 0xFFFFu, a3, a4, a5, a6, a7, a8, 0, 0, 0, a9);
  *((_BYTE *)result + 44) |= 0x18u;
  result[12] = a2;
  return result;
}
