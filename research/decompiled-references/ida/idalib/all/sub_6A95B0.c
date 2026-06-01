__int64 __fastcall sub_6A95B0(_QWORD *a1, __int64 *a2)
{
  char v2; // bl
  char v3; // al
  unsigned int v4; // ebx
  __m128i v5; // xmm0
  int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // r13
  signed __int64 v9; // r14
  signed __int64 v10; // r15
  unsigned int tinfo_size; // ebp
  unsigned int v12; // ecx
  signed __int64 v13; // r14
  int v15; // edx
  char v16; // al
  int v17; // edx
  int v18; // r10d
  char v19; // al
  char v20; // al
  int v21; // [rsp+8h] [rbp-90h]
  int v22; // [rsp+Ch] [rbp-8Ch]
  int v23; // [rsp+10h] [rbp-88h]
  unsigned int v24; // [rsp+10h] [rbp-88h]
  unsigned int v25; // [rsp+10h] [rbp-88h]
  int v26; // [rsp+10h] [rbp-88h]
  unsigned int v27; // [rsp+14h] [rbp-84h]
  int v28; // [rsp+14h] [rbp-84h]
  int v29; // [rsp+18h] [rbp-80h]
  int v30; // [rsp+2Ch] [rbp-6Ch] BYREF
  __int64 v31; // [rsp+30h] [rbp-68h] BYREF
  __m128i v32; // [rsp+38h] [rbp-60h] BYREF
  __int64 v33; // [rsp+48h] [rbp-50h]
  unsigned __int64 v34; // [rsp+58h] [rbp-40h]

  v2 = *((_BYTE *)a2 + 88);
  v34 = __readfsqword(0x28u);
  v3 = v2;
  v4 = v2 & 0xF0;
  if ( (v3 & 0xF0) == 0xC0 )
    v4 = *((_DWORD *)a2 + 7);
  if ( v4 <= 0x10 )
    v4 = getinf(99);
  if ( v4 - 208 > 0x2F )
  {
    if ( (unsigned __int8)calc_arglocs(a2) )
    {
      v6 = *((_DWORD *)a2 + 6);
      goto LABEL_21;
    }
    return 0;
  }
  v21 = sub_565920(a1);
  if ( v21 == -1 )
    return 0;
  v31 = 32;
  v32 = 0;
  v33 = 0;
  get_stkarg_area_info(&v31, v4);
  v5 = _mm_loadu_si128(&v32);
  v6 = *((_DWORD *)a2 + 6);
  v7 = *a2;
  v8 = *a2 + 80 * a2[1];
  v9 = _mm_add_epi64(v5, _mm_srli_si128(v5, 8)).m128i_u64[0];
  v22 = v6 & 0x200;
  v10 = v9;
  if ( v8 == *a2 )
    goto LABEL_18;
  do
  {
    while ( *(_DWORD *)v7 != 1 )
    {
      v7 += 80;
      if ( v8 == v7 )
        goto LABEL_17;
    }
    tinfo_size = get_tinfo_size(&v30, *(_QWORD *)(v7 + 64), 0);
    v12 = tinfo_size;
    if ( tinfo_size == -1 )
      return 0;
    if ( v22 )
    {
      v13 = *(_QWORD *)(v7 + 8);
      goto LABEL_14;
    }
    v15 = v30;
    if ( ((v30 - 1) & v30) != 0 )
    {
      if ( !under_debugger )
        interr(2858);
      BUG();
    }
    if ( v30 > 2 * v21 )
    {
      v29 = v30 - 1;
      v26 = v30;
      v20 = getinf_flag(67, 512);
      v17 = v26;
      v12 = tinfo_size;
      v18 = v29;
      if ( v20 )
        goto LABEL_28;
      v15 = 2 * v21;
    }
    if ( v21 > v15 )
    {
      v25 = v12;
      v28 = v15;
      v19 = getinf_flag(67, 2);
      v12 = v25;
      if ( v19 )
      {
        v17 = v28;
        v18 = v28 - 1;
        goto LABEL_28;
      }
LABEL_27:
      v17 = v21;
      v18 = v21 - 1;
      goto LABEL_28;
    }
    v27 = v12;
    v23 = v15;
    v16 = getinf_flag(67, 4);
    v17 = v23;
    v12 = v27;
    v18 = v23 - 1;
    if ( !v16 )
      goto LABEL_27;
LABEL_28:
    v24 = v12;
    v13 = (v9 + v18) & -v17;
    cleanup_argloc(v7);
    *(_DWORD *)v7 = 1;
    *(_QWORD *)(v7 + 8) = v13;
    sub_3792E0(0x7DBu, v7, v7 + 64, v24);
LABEL_14:
    v9 = (int)tinfo_size + v13;
    if ( v10 < v9 )
      v10 = v9;
    v7 += 80;
  }
  while ( v8 != v7 );
LABEL_17:
  v6 = *((_DWORD *)a2 + 6);
LABEL_18:
  a2[7] = (v10 + v21 - 1) & -v21;
LABEL_21:
  BYTE1(v6) |= 1u;
  *((_DWORD *)a2 + 6) = v6;
  return 1;
}
