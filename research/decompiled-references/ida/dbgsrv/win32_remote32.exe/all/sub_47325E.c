/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47325E
// Address: 0x0047325E

//----- (0047325E) --------------------------------------------------------
int __usercall sub_47325E@<eax>(int a1@<ebx>, int a2)
{
  DWORD LastError; // esi
  int v3; // esi
  void *v4; // eax

  if ( sub_4736C4(a1, a2, a2) == -1
    || (a2 == 1 && (dword_4B7B38[6].RecursionCount & 1) != 0 || a2 == 2 && ((int)dword_4B7B38[4].DebugInfo & 1) != 0)
    && (v3 = sub_4736C4(a1, a2, 2), sub_4736C4(a1, a2, 1) == v3)
    || (v4 = (void *)sub_4736C4(a1, a2, a2), CloseHandle(v4)) )
  {
    LastError = 0;
  }
  else
  {
    LastError = GetLastError();
  }
  sub_473633(a2);
  *((_BYTE *)&(*(&dword_4B7B38 + (a2 >> 6)))[1].LockSemaphore + 56 * (a2 & 0x3F)) = 0;
  if ( !LastError )
    return 0;
  sub_46B94E(LastError);
  return -1;
}
