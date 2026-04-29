__int64 __fastcall sub_384900(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rbp
  unsigned __int64 v3; // rax

  if ( !*(_QWORD *)(a1 + 32) )
    return 0;
  v2 = *(_QWORD **)(a1 + 24);
  if ( (*(_BYTE *)a1 & 2) == 0 )
  {
    if ( v2[1] )
    {
      v2[1] = get_func(v2[5]);
      v2 = *(_QWORD **)(a1 + 24);
    }
  }
  v3 = sub_32BBA0(v2, a2);
  return sub_32D560(v2 + 1, v3);
}
