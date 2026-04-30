__int64 __fastcall sub_3297D0(
        int a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  int v9; // ebx
  unsigned __int8 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  __int64 v17; // rsi
  double v18; // xmm0_8
  const char *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __m128 v24; // xmm4
  __m128 v25; // xmm5
  const char *v26; // rsi
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __m128 v32; // xmm4
  __m128 v33; // xmm5
  unsigned int v34; // r13d
  __int64 v35; // rdi
  __int64 v36; // r12
  __int64 v37; // rbp
  __int64 *v38; // rbx
  __int64 v39; // rdi
  __int64 v40; // rdi
  __int64 v41; // rdi
  __int64 not_tail; // [rsp+0h] [rbp-78h] BYREF
  __int64 v44; // [rsp+8h] [rbp-70h] BYREF
  const char *v45; // [rsp+10h] [rbp-68h] BYREF
  __int128 v46; // [rsp+18h] [rbp-60h]
  __int64 v47; // [rsp+30h] [rbp-48h] BYREF
  __int128 v48; // [rsp+38h] [rbp-40h]
  unsigned __int64 v49; // [rsp+48h] [rbp-30h]

  v49 = __readfsqword(0x28u);
  not_tail = 0;
  v44 = -1;
  if ( !(unsigned __int8)sub_1F09E0(0, &not_tail, &v44) )
  {
    if ( (BYTE2(xmmword_8BCDC0) & 1) == 0 )
    {
      v9 = a1 | BYTE2(xmmword_8BCDC0);
      v44 = xmmword_8CC810;
      v10 = (a1 | BYTE2(xmmword_8BCDC0)) & 1;
      if ( (((unsigned __int8)a1 | BYTE2(xmmword_8BCDC0)) & 2) != 0 )
        goto LABEL_5;
LABEL_32:
      v17 = not_tail;
      if ( !v10 )
        v17 = v44;
      goto LABEL_7;
    }
    not_tail = xmmword_8CC810;
  }
  v9 = a1 | BYTE2(xmmword_8BCDC0);
  v10 = (a1 | BYTE2(xmmword_8BCDC0)) & 1;
  if ( (((unsigned __int8)a1 | BYTE2(xmmword_8BCDC0)) & 2) == 0 )
    goto LABEL_32;
LABEL_5:
  if ( v10 )
  {
    not_tail = next_not_tail(not_tail);
    v17 = not_tail;
    if ( not_tail != -1 )
      goto LABEL_7;
LABEL_30:
    v34 = 0;
    sub_28A960(1072, v17, v11, v12, v13, v14, a2, a3, a4, a5, v15, v16, a8, a9, not_tail);
    return v34;
  }
  v44 = prev_not_tail(v44);
  v17 = v44;
  if ( v44 == -1 )
    goto LABEL_30;
LABEL_7:
  v18 = 0.0;
  v45 = nullptr;
  v19 = &s1;
  v46 = 0;
  v48 = 0;
  v47 = 0;
  if ( (_QWORD)xmmword_8D0AC8 )
    v19 = (const char *)qword_8D0AC0;
  if ( (unsigned __int8)parse_binpat_str(&v47, v17, v19, (unsigned __int16)xmmword_8BCDC0, DWORD2(xmmword_8BCDC0), &v45) )
    goto LABEL_13;
  v26 = &s1;
  if ( (_QWORD)v46 )
    v26 = v45;
  sub_169700((int)"%s\n", (__int64)v26, v20, v21, v22, v23, (__m128)0LL, a3, a4, a5, v24, v25, a8, a9, not_tail);
  if ( (_QWORD)v48 )
  {
LABEL_13:
    sub_3292B0(v9, &v47, 0.0, a3, a4, a5, v24, v25, a8, a9, v20, v21, v22, v23);
    sub_1C76F0((int)"Searching for a binary pattern");
    v26 = (const char *)v44;
    v27 = bin_search(not_tail, v44, &v47, (16 * (v10 ^ 1)) | (v9 >> 2) & 1u, 0);
    sub_1C78D0();
    if ( v27 == -1 )
    {
      sub_28A960(1072, (__int64)v26, v28, v29, v30, v31, (__m128)0LL, a3, a4, a5, v32, v33, a8, a9, not_tail);
      v34 = 0;
    }
    else
    {
      sub_28A960(1071, v27, v28, v29, v30, v31, (__m128)0LL, a3, a4, a5, v32, v33, a8, a9, not_tail);
      v26 = (const char *)v27;
      v34 = (unsigned __int8)sub_192AA0(0, v27, -1, 1u);
    }
    v35 = v47;
    if ( !v47 )
      goto LABEL_26;
    v36 = v48;
    if ( (_QWORD)v48 )
    {
      v37 = 0;
      do
      {
        v38 = (__int64 *)(v35 + 80 * v37);
        v39 = v38[6];
        if ( v39 )
        {
          v38[7] = 0;
          v18 = qfree(v39, v26);
        }
        v40 = v38[3];
        if ( v40 )
        {
          v38[4] = 0;
          v18 = qfree(v40, v26, v18);
        }
        v41 = *v38;
        if ( *v38 )
        {
          v38[1] = 0;
          v18 = qfree(v41, v26, v18);
        }
        ++v37;
        v35 = v47;
      }
      while ( v36 != v37 );
    }
    goto LABEL_25;
  }
  v35 = v47;
  v34 = 0;
  if ( v47 )
  {
LABEL_25:
    *(_QWORD *)&v48 = 0;
    v18 = qfree(v35, v26);
  }
LABEL_26:
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(v45, v26, v18);
  }
  return v34;
}
