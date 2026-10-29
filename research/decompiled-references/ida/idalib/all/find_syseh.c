__int64 __fastcall find_syseh(unsigned __int64 a1)
{
  _QWORD *v1; // rbp
  _QWORD *v2; // rbx
  unsigned __int64 *v3; // rax
  unsigned __int64 v4; // r11
  unsigned __int64 v5; // rcx

  v1 = *(_QWORD **)(qword_2CCB598 + 1672);
  v2 = *(_QWORD **)(*v1 + 1840LL);
  v3 = sub_69C0D0(v2, a1);
  if ( v3 == (unsigned __int64 *)(v2[2] + 16LL * v2[3]) )
    return -1;
  v5 = *v3;
  if ( v4 != -1 )
  {
    if ( (*(_BYTE *)(v1[2] + 12LL) & 8) != 0 )
      v4 &= ~1uLL;
    if ( v4 < v5 )
      return -1;
  }
  if ( v5 >= v3[1] )
    return -1;
  else
    return *v3;
}
