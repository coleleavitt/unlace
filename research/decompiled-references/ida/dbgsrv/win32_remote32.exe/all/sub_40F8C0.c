/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40F8C0
// Address: 0x0040F8C0

//----- (0040F8C0) --------------------------------------------------------
int __userpurge sub_40F8C0@<eax>(__m128i a1@<xmm0>, _DWORD *a2, int *a3, int a4, DWORD dwSelector, int a6)
{
  void *v6; // eax
  struct _LDT_ENTRY SelectorEntry; // [esp+4h] [ebp-8h] BYREF

  if ( !a2[50] && (a2[84] & 0x80000) != 0 && sub_455100() )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(30191);
  }
  v6 = (void *)(*(int (__thiscall **)(_DWORD *, int))(*a2 + 312))(a2, a4);
  if ( v6 == (void *)-1 )
    return -1;
  if ( !GetThreadSelectorEntry(v6, dwSelector, &SelectorEntry) )
  {
    if ( GetLastError() == 50 )
    {
      *a3 = 0;
      return 1;
    }
    sub_43C950(a1, (int)a2, (int)"GetThreadSelectorEntry");
    return -1;
  }
  *a3 = SelectorEntry.BaseLow
      | ((SelectorEntry.HighWord.Bytes.BaseMid | (SelectorEntry.HighWord.Bytes.BaseHi << 8)) << 16);
  return 1;
}
// 4B70F0: using guessed type char byte_4B70F0;
