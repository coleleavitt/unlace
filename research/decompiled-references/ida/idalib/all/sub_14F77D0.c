bool __fastcall sub_14F77D0(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdx
  __int64 v4; // rax
  __int16 v5; // ax
  __int64 v6; // rax
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int16 v13; // ax
  __int16 v14; // ax
  int v15; // eax

  v1 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(*(_QWORD *)(v1 + 56) + 2LL) & 4) == 0 )
    return 0;
  v2 = *(_QWORD *)(v1 + 2944);
  if ( *(unsigned int *)(v1 + 2912) <= v2 )
    v4 = sub_14180A0(v1, 1u);
  else
    v4 = *(_QWORD *)(v1 + 2904) + 24 * v2;
  if ( *(_WORD *)(v4 + 16) != 5 || *(_BYTE *)(a1 + 2064) )
    return 0;
  v5 = *(_WORD *)(a1 + 32);
  if ( v5 == 417 )
  {
    v8 = *(_QWORD *)(a1 + 24);
    if ( v8 )
    {
      v9 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                          & 0xFFFFFFFFFFFFFFF0LL)
                              + 16LL);
      if ( (_BYTE)v9 == 36 || (unsigned int)(v9 - 35) <= 1 )
        goto LABEL_15;
    }
    return 0;
  }
  if ( v5 != 5 )
    return 0;
  v6 = sub_18013B0(*(_QWORD *)(a1 + 96), 0, 0, 0, 0, 1, 0, 0);
  if ( !v6 )
    return 0;
  v15 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                           + 16LL);
  if ( (_BYTE)v15 != 36 && (unsigned int)(v15 - 35) > 1 )
    return 0;
  if ( *(_WORD *)(a1 + 32) == 1 )
    return 0;
LABEL_15:
  v10 = *(_QWORD *)(a1 + 8);
  v11 = *(_QWORD *)(v10 + 2944) + 1LL;
  if ( v11 >= *(unsigned int *)(v10 + 2912) )
    v12 = sub_14180A0(v10, 2u);
  else
    v12 = *(_QWORD *)(v10 + 2904) + 24 * v11;
  v13 = *(_WORD *)(v12 + 16);
  if ( v13 != 62 && v13 != 21 )
    return 0;
  v14 = *(_WORD *)(a1 + 32);
  if ( v14 == 5 )
  {
    sub_1565E90(a1, 0);
    v14 = *(_WORD *)(a1 + 32);
  }
  return v14 == 417;
}
