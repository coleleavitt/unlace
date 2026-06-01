char __fastcall sub_147EEF0(__int64 a1)
{
  __int64 v1; // rax
  char v4; // al
  __int64 v5; // rdx
  __int16 v6; // ax
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  __int16 v9; // ax
  __int64 v10; // rdi
  unsigned __int64 v11; // rax

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
  if ( (*(_WORD *)v1 & 0x808) != 0 || (*(_BYTE *)(v1 + 12) & 1) != 0 || *(_WORD *)(a1 + 32) != 5 )
    return 0;
  if ( (*(_BYTE *)(v1 + 13) & 6) != 0 )
  {
    v4 = sub_141A630(5u);
    v5 = 0;
    if ( !v4 )
      v5 = *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 376) == v5 && (unsigned __int8)sub_147E8E0(a1) )
      return 0;
  }
  if ( (unsigned __int8)sub_1565E90(a1, 0) )
  {
    v6 = *(_WORD *)(a1 + 32);
  }
  else
  {
    v6 = *(_WORD *)(a1 + 32);
    if ( v6 == 417 )
      return 0;
  }
  if ( v6 == 1 )
    return 0;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(_QWORD *)(v7 + 2944);
  if ( v8 >= *(unsigned int *)(v7 + 2912) )
  {
    if ( *(_WORD *)(sub_14180A0(v7, 1u) + 16) != 66 )
    {
      v10 = *(_QWORD *)(a1 + 8);
      v11 = *(_QWORD *)(v10 + 2944);
      if ( v11 < *(unsigned int *)(v10 + 2912) )
        v9 = *(_WORD *)(*(_QWORD *)(v10 + 2904) + 24 * v11 + 16);
      else
        v9 = *(_WORD *)(sub_14180A0(v10, 1u) + 16);
      return v9 == 23;
    }
  }
  else
  {
    v9 = *(_WORD *)(*(_QWORD *)(v7 + 2904) + 24 * v8 + 16);
    if ( v9 != 66 )
      return v9 == 23;
  }
  return 1;
}
