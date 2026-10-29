unsigned __int64 __fastcall sub_1DDAFF0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int16 *v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 result; // rax
  unsigned __int16 *v16; // rbp
  __m128 *v17; // r14
  __m128 v18; // xmm0
  unsigned __int64 v19; // rax
  _QWORD *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  char v31; // cl
  __int64 v32; // rax
  __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  __m128 *v35; // r12
  __int64 *v36; // rbp
  int v37; // r13d
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  unsigned int v41; // eax
  unsigned __int64 v42; // [rsp+8h] [rbp-E0h]
  __m128 *v43; // [rsp+10h] [rbp-D8h] BYREF
  unsigned __int16 *v44; // [rsp+18h] [rbp-D0h]
  __m128 *v45; // [rsp+20h] [rbp-C8h]
  char v46; // [rsp+2Fh] [rbp-B9h]
  _QWORD *v47; // [rsp+30h] [rbp-B8h]
  __int64 v48; // [rsp+38h] [rbp-B0h]
  __m128 v49; // [rsp+40h] [rbp-A8h] BYREF
  int v50; // [rsp+50h] [rbp-98h] BYREF
  unsigned __int64 v51; // [rsp+58h] [rbp-90h]
  unsigned __int64 v52; // [rsp+60h] [rbp-88h]
  __int64 v53; // [rsp+68h] [rbp-80h] BYREF
  void *ptr; // [rsp+70h] [rbp-78h] BYREF
  __int64 v55; // [rsp+78h] [rbp-70h]
  _BYTE v56[16]; // [rsp+80h] [rbp-68h] BYREF
  __m128 v57; // [rsp+90h] [rbp-58h] BYREF
  unsigned __int64 v58; // [rsp+A8h] [rbp-40h]

  sub_C93B20((__int64)&v50, a2);
  v4 = v51;
  v5 = v52;
  v10 = sub_1DC71F0(a1, v51, v6, v7, v8, v9, a3, a4);
  if ( v10 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v16 = v10;
  v44 = sub_1DC71F0(a1, v5, v11, v12, v13, v14, a3, a4);
  if ( v44 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v17 = &v49;
  v46 = 0;
  ptr = v56;
  v18 = _mm_loadh_ps((const double *)&v53);
  v55 = 0x200000000LL;
  v43 = (__m128 *)&v50;
  v45 = &v57;
  v49 = v18;
  do
  {
    v19 = sub_BFB900(v17->m128_u64[0]);
    if ( (*(_WORD *)v19 & 0x1FF) == 0x5B )
    {
      v20 = (_QWORD *)sub_BFB900(*(_QWORD *)(v19 + 32));
      if ( (*(_WORD *)v20 & 0x1FF) == 0x47 )
      {
        v21 = v20[2];
        if ( (*(_BYTE *)(v21 + 28) & 0x7Fu) - 35 > 3 )
        {
          if ( (*v20 & 0x200000LL) != 0 )
            v21 = v20[2 * ((*v20 & 0x80000LL) != 0) + 4];
          v47 = v20;
          v48 = v21;
          sub_C93B20((__int64)v45, a2);
          v25 = sub_C00A40(v58, a2, v22, v23, v24);
          v29 = sub_1DD8310((__int64)a1, v25, v48, v26, v27, v28, v18, a4);
          if ( !v29 )
          {
            result = 1;
            goto LABEL_24;
          }
          if ( (*v47 & 0x200000LL) != 0 )
            v30 = v47[2 * ((*v47 & 0x80000LL) != 0) + 4];
          else
            v30 = v47[2];
          v31 = v46;
          if ( v29 != v30 )
            v31 = 1;
          v32 = v29 | 3;
          v57.m128_u64[0] = v32;
          v46 = v31;
          v33 = (unsigned int)v55;
          v34 = (unsigned int)v55 + 1LL;
          if ( v34 > HIDWORD(v55) )
          {
            v47 = (_QWORD *)v32;
            sub_2237220(&ptr, v56, v34, 8);
            v33 = (unsigned int)v55;
            v32 = (__int64)v47;
          }
          *((_QWORD *)ptr + v33) = v32;
          LODWORD(v55) = v55 + 1;
        }
      }
    }
    v17 = (__m128 *)((char *)v17 + 8);
  }
  while ( v17 != v43 );
  v35 = (__m128 *)*a1;
  v36 = (__int64 *)((unsigned __int64)v16 & 0xFFFFFFFFFFFFFFFELL);
  if ( *(_DWORD *)(*a1 + 12632) || v46 || (__int64 *)v4 != v36 || v5 != ((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFFELL) )
  {
    v43 = (__m128 *)((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFFELL);
    v37 = v50;
    sub_C93B20((__int64)v45, a2);
    v41 = sub_C00A40(v58, a2, v38, v39, v40);
    result = sub_1C07820(
               v35,
               v41,
               v37,
               (__int64)&ptr,
               v36,
               (unsigned __int64)v44 & 0xFFFFFFFFFFFFFFFELL,
               *(double *)v18.m128_u64,
               a4,
               0,
               1,
               0);
  }
  else
  {
    v43 = (__m128 *)v5;
    v57 = _mm_loadh_ps((const double *)&v43);
    sub_1912220((__int64)v35, a2, 0, v45, 2, v57, a4);
    result = a2;
  }
LABEL_24:
  if ( ptr != v56 )
  {
    v42 = result;
    free(ptr);
    return v42;
  }
  return result;
}
