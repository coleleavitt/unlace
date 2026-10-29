__int64 __fastcall sub_688E20(_QWORD *a1, __int64 *a2)
{
  char v2; // bl
  char v4; // al
  unsigned int v5; // ebx
  int v6; // r13d
  int v7; // eax
  __int64 v8; // rbx
  int v9; // r15d
  int v10; // r14d
  __int64 v11; // r12
  unsigned int tinfo_size; // r8d
  unsigned int v13; // ecx
  int v14; // r15d
  int v16; // edx
  __int64 v17; // rsi
  char v18; // al
  int v19; // edx
  char v20; // al
  int v21; // [rsp+14h] [rbp-84h]
  unsigned int v22; // [rsp+18h] [rbp-80h]
  unsigned int v23; // [rsp+18h] [rbp-80h]
  unsigned int v24; // [rsp+18h] [rbp-80h]
  unsigned int v25; // [rsp+20h] [rbp-78h]
  unsigned int v26; // [rsp+20h] [rbp-78h]
  int v27; // [rsp+28h] [rbp-70h]
  unsigned int v28; // [rsp+28h] [rbp-70h]
  int v29; // [rsp+28h] [rbp-70h]
  int v30; // [rsp+3Ch] [rbp-5Ch] BYREF
  __int64 v31; // [rsp+40h] [rbp-58h] BYREF
  __int64 v32; // [rsp+48h] [rbp-50h]
  int v33; // [rsp+50h] [rbp-48h]
  unsigned __int64 v34; // [rsp+58h] [rbp-40h]

  v2 = *((_BYTE *)a2 + 88);
  v34 = __readfsqword(0x28u);
  v4 = v2;
  v5 = v2 & 0xF0;
  if ( (v4 & 0xF0) == 0xC0 )
    v5 = *((_DWORD *)a2 + 7);
  if ( v5 <= 0x10 )
    v5 = getinf(99);
  if ( v5 - 208 > 0x2F )
  {
    if ( (unsigned __int8)calc_arglocs(a2) )
    {
      v7 = *((_DWORD *)a2 + 6);
      goto LABEL_21;
    }
    return 0;
  }
  v6 = sub_54C1C0(a1);
  if ( v6 == -1 )
    return 0;
  v31 = 24;
  v32 = 0;
  v33 = 0;
  get_stkarg_area_info(&v31, v5);
  v7 = *((_DWORD *)a2 + 6);
  v8 = *a2;
  v9 = v32 + HIDWORD(v32);
  v10 = v32 + HIDWORD(v32);
  v11 = *a2 + 80 * a2[1];
  v21 = v7 & 0x200;
  if ( v11 == *a2 )
    goto LABEL_18;
  do
  {
    while ( *(_DWORD *)v8 != 1 )
    {
      v8 += 80;
      if ( v11 == v8 )
        goto LABEL_17;
    }
    tinfo_size = get_tinfo_size(&v30, *(_QWORD *)(v8 + 64), 0);
    v13 = tinfo_size;
    if ( tinfo_size == -1 )
      return 0;
    if ( v21 )
    {
      v14 = *(_DWORD *)(v8 + 8);
      goto LABEL_14;
    }
    v16 = v30;
    if ( (v30 & (v30 - 1)) != 0 )
    {
      if ( !under_debugger )
        interr(2858);
      BUG();
    }
    if ( v30 <= 2 * v6 )
      goto LABEL_25;
    v26 = tinfo_size;
    v24 = tinfo_size;
    v29 = v30;
    v20 = getinf_flag(67, 512);
    v19 = v29;
    v13 = v24;
    tinfo_size = v26;
    if ( !v20 )
    {
      v16 = 2 * v6;
LABEL_25:
      v25 = tinfo_size;
      v17 = 2;
      v22 = v13;
      v27 = v16;
      if ( v6 <= v16 )
        v17 = 4;
      v18 = getinf_flag(67, v17);
      v19 = v27;
      v13 = v22;
      tinfo_size = v25;
      if ( !v18 )
        v19 = v6;
    }
    v23 = tinfo_size;
    v28 = v13;
    v14 = (v19 + v9 - 1) & -v19;
    cleanup_argloc(v8);
    *(_DWORD *)v8 = 1;
    *(_DWORD *)(v8 + 8) = v14;
    sub_375980(0x7DBu, v8, v8 + 64, v28);
    tinfo_size = v23;
LABEL_14:
    v9 = tinfo_size + v14;
    if ( v10 < v9 )
      v10 = v9;
    v8 += 80;
  }
  while ( v11 != v8 );
LABEL_17:
  v7 = *((_DWORD *)a2 + 6);
LABEL_18:
  *((_DWORD *)a2 + 14) = (v10 + v6 - 1) & -v6;
LABEL_21:
  BYTE1(v7) |= 1u;
  *((_DWORD *)a2 + 6) = v7;
  return 1;
}

