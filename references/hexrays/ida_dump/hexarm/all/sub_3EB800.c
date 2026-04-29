__int64 __fastcall sub_3EB800(__int64 a1, __int64 a2, int *a3, _QWORD *a4)
{
  __int64 v6; // rsi
  int tinfo_size; // eax
  int v9; // r14d
  int v10; // eax
  int v11; // r12d
  char tinfo_property; // al
  int v14; // edx
  int v15; // eax
  __int64 v16; // [rsp+0h] [rbp-48h] BYREF
  __int64 v17; // [rsp+8h] [rbp-40h]
  unsigned __int64 v18; // [rsp+18h] [rbp-30h]

  v6 = *a4;
  v18 = __readfsqword(0x28u);
  tinfo_size = get_tinfo_size(0, v6, 0);
  *a3 = tinfo_size;
  if ( tinfo_size == -1 )
  {
    *(_DWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    return a1;
  }
  v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 112LL) + 80LL);
  if ( *(_DWORD *)(a2 + 80) == 8 )
  {
    tinfo_property = get_tinfo_property(*a4, 2);
    v14 = *a3;
    if ( (tinfo_property & 0xF) == 9 )
    {
      if ( ((v14 - 16) & 0xFFFFFFEF) != 0 && v14 > 8 )
        goto LABEL_19;
      v11 = *(_DWORD *)(a2 + 488);
      goto LABEL_6;
    }
    if ( v14 <= v9 )
      goto LABEL_5;
    if ( v14 != 16 )
    {
      if ( v14 != 32 )
        goto LABEL_19;
      goto LABEL_14;
    }
LABEL_23:
    if ( !*(_BYTE *)(*(_QWORD *)(a2 + 96) + 145LL) )
      goto LABEL_5;
    v11 = *(_DWORD *)(a2 + 360);
    goto LABEL_6;
  }
  if ( !(unsigned __int8)getinf_flag(67, 32) || (get_tinfo_property(*a4, 2) & 0xF) != 9 )
  {
    v10 = *a3;
    if ( *a3 <= v9 )
    {
LABEL_5:
      v11 = *(_DWORD *)(a2 + 356);
      goto LABEL_6;
    }
    if ( v10 != 8 )
    {
      if ( v10 != 16 )
        goto LABEL_19;
LABEL_14:
      if ( !*(_BYTE *)(*(_QWORD *)(a2 + 96) + 145LL) )
        goto LABEL_5;
      v11 = *(_DWORD *)(a2 + 368);
LABEL_6:
      v16 = 0;
      v17 = 0;
      if ( v11 != -1 )
      {
        cleanup_argloc(&v16);
        LODWORD(v16) = 3;
        LODWORD(v17) = v11;
      }
      goto LABEL_8;
    }
    goto LABEL_23;
  }
  v15 = *a3;
  if ( *a3 <= 16 )
  {
    v11 = *(_DWORD *)(a2 + 488);
    if ( *(_BYTE *)(*(_QWORD *)(a2 + 96) + 145LL) )
      v11 -= (v15 + 3) & 0xFFFFFFFC;
    goto LABEL_6;
  }
LABEL_19:
  v16 = 0;
  v17 = 0;
LABEL_8:
  *(_DWORD *)a1 = 0;
  copy_argloc(a1, &v16);
  cleanup_argloc(&v16);
  return a1;
}
