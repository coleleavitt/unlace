/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4744DB
// Address: 0x004744DB

//----- (004744DB) --------------------------------------------------------
bool __usercall sub_4744DB@<al>(int a1@<ebx>, int a2@<edi>, int a3)
{
  int v3; // edi
  int v4; // esi
  bool result; // al
  DWORD Mode; // [esp+8h] [ebp-4h] BYREF

  result = sub_47C24A(a1, a2, a3)
        && (v3 = a3 >> 6, v4 = 56 * (a3 & 0x3F), *((char *)&(*(&dword_4B7B38 + (a3 >> 6)))[1].LockSemaphore + v4) < 0)
        && (*(_DWORD *)(*(_DWORD *)(sub_4782C6() + 76) + 168)
         || *((_BYTE *)&(*(&dword_4B7B38 + v3))[1].LockSemaphore + v4 + 1))
        && GetConsoleMode(*(HANDLE *)((char *)&(*(&dword_4B7B38 + v3))[1].DebugInfo + v4), &Mode);
  return result;
}
