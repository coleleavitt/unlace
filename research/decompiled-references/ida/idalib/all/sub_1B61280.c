__int64 __fastcall sub_1B61280(
        __int64 *a1,
        int *a2,
        int a3,
        unsigned int *a4,
        __m128 a5,
        __m128 a6,
        __m128i a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        unsigned __int64 a12,
        int *a13,
        __int64 a14,
        _DWORD *a15)
{
  int *v15; // r14
  unsigned int v17; // r15d
  __int64 v18; // r12
  __int64 v19; // rdx
  int v20; // eax
  unsigned int v21; // edx
  __int64 v22; // r13
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r13
  unsigned __int64 v31; // r12
  char *v32; // r15
  __int64 v33; // r14
  __int64 v34; // rax
  void **v35; // r12
  void **v36; // rbp
  __int128 v38; // [rsp+0h] [rbp-6E8h]
  __int64 *v40; // [rsp+10h] [rbp-6D8h]
  __int64 v41; // [rsp+18h] [rbp-6D0h]
  unsigned int *v42; // [rsp+20h] [rbp-6C8h]
  char **v43; // [rsp+28h] [rbp-6C0h]
  __int64 v44; // [rsp+50h] [rbp-698h] BYREF
  __int64 v45; // [rsp+58h] [rbp-690h] BYREF
  _QWORD v46[2]; // [rsp+60h] [rbp-688h] BYREF
  void *v47; // [rsp+70h] [rbp-678h]
  __int64 v48; // [rsp+78h] [rbp-670h]
  _BYTE v49[128]; // [rsp+80h] [rbp-668h] BYREF
  void **v50; // [rsp+100h] [rbp-5E8h] BYREF
  __int64 v51; // [rsp+108h] [rbp-5E0h]
  _BYTE v52[1152]; // [rsp+110h] [rbp-5D8h] BYREF
  void *v53; // [rsp+590h] [rbp-158h] BYREF
  __int64 v54; // [rsp+598h] [rbp-150h]
  _BYTE v55[128]; // [rsp+5A0h] [rbp-148h] BYREF
  void *ptr; // [rsp+620h] [rbp-C8h]
  __int64 v57; // [rsp+628h] [rbp-C0h]
  _BYTE v58[184]; // [rsp+630h] [rbp-B8h] BYREF

  v45 = 0;
  v44 = 0x200000002LL;
  if ( a3 )
  {
    v15 = a2;
    v17 = 0;
    v18 = (__int64)&a2[a3 - 1 + 1];
    do
    {
      while ( 1 )
      {
        v20 = *v15;
        if ( *v15 != 2 && (v20 == (_DWORD)v44 || v20 == HIDWORD(v44)) )
          break;
        v19 = v17;
        ++v15;
        ++v17;
        ++a4;
        *((_DWORD *)&v44 + v19) = v20;
        *((_DWORD *)&v46[-1] + v19) = *(a4 - 1);
        if ( (int *)v18 == v15 )
          goto LABEL_8;
      }
      v21 = *a4;
      ++v15;
      ++a4;
      sub_168B9F0((__int64)v46, a1, v21, 0x1181u, 0);
      sub_15F7200(v46);
    }
    while ( (int *)v18 != v15 );
  }
LABEL_8:
  v50 = (void **)v52;
  v46[0] = a11;
  v47 = v49;
  v46[1] = a12;
  v48 = 0x1000000000LL;
  v51 = 0x800000000LL;
  v53 = v55;
  v54 = 0x1000000000LL;
  ptr = v58;
  v57 = 0x1000000000LL;
  if ( a12 > 8 )
  {
    sub_1B5B6F0((__int64)&v50, a12);
    if ( HIDWORD(v54) < a12 )
      sub_2237220(&v53, v55, a12, 8);
  }
  v22 = 0;
  sub_1B5D560(
    (__m128 *)*a1,
    a1[1],
    0x26u,
    (__int64)v46,
    (unsigned int)*a13,
    a9,
    a5,
    a6,
    a7,
    *(_QWORD *)a10,
    *(_QWORD *)(a10 + 8),
    *(_QWORD *)(a10 + 16),
    a14,
    a15,
    6,
    0,
    0);
  if ( (_DWORD)v48 )
  {
    v23 = (_QWORD *)sub_168B6C0((__int64)a1);
    v28 = sub_15AB9E0(a9, v23, v24, v25, v26, v27);
    *(_QWORD *)&v38 = ptr;
    v41 = v29;
    v30 = (__int64)v50;
    v31 = (unsigned int)v48;
    v40 = (__int64 *)v28;
    v32 = (char *)(unsigned int)v54;
    v33 = (unsigned int)v51;
    *((_QWORD *)&v38 + 1) = (unsigned int)v57;
    v43 = (char **)v53;
    v42 = (unsigned int *)v47;
    v34 = sub_168B6C0((__int64)a1);
    v22 = sub_EC31A0(
            v34,
            a13,
            v42,
            (void *)v31,
            v43,
            v32,
            v30,
            v33,
            v38,
            &v44,
            (__int64 *)((char *)&dword_0 + 2),
            (__int64)&v45,
            2,
            v40,
            v41,
            *(_OWORD *)a10,
            *(_QWORD *)(a10 + 16));
  }
  if ( ptr != v58 )
    free(ptr);
  if ( v53 != v55 )
    free(v53);
  v35 = v50;
  v36 = &v50[18 * (unsigned int)v51];
  if ( v50 != v36 )
  {
    do
    {
      while ( 1 )
      {
        v36 -= 18;
        if ( *v36 == v36 + 2 )
          break;
        free(*v36);
        if ( v35 == v36 )
          goto LABEL_18;
      }
    }
    while ( v35 != v36 );
LABEL_18:
    v36 = v50;
  }
  if ( v36 != (void **)v52 )
    free(v36);
  if ( v47 != v49 )
    free(v47);
  return v22;
}
