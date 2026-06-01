__int64 __fastcall reanalyze_noret_flag(unsigned int a1)
{
  _QWORD *v1; // rbp
  unsigned int *v2; // rax
  unsigned int *v3; // rbx
  __int64 v4; // rax
  unsigned int *v5; // rax
  __int64 v7; // rax

  v1 = *(_QWORD **)(qword_2CA1698 + 1480);
  v2 = sub_4EE820((__int64)(v1 + 203), a1);
  if ( !v2 )
    return 0;
  v3 = v2;
  v4 = *((_QWORD *)v2 + 1);
  if ( (v4 & 0x8000) != 0 )
  {
    v5 = sub_4EE820((__int64)(v1 + 203), v3[4]);
    v3 = v5;
    if ( !v5 )
      return 0;
    v4 = *((_QWORD *)v5 + 1);
  }
  if ( (v4 & 0x200) != 0 || (unsigned __int8)is_spec_ea(*v3) )
    return 0;
  v7 = *((_QWORD *)v3 + 1);
  BYTE1(v7) = BYTE1(v7) & 0xF9 | 2;
  *((_QWORD *)v3 + 1) = v7;
  sub_5ACD60((__int64)v1, v3, 0);
  sub_5B1E60(v1, (__int64)v3);
  return 1;
}

