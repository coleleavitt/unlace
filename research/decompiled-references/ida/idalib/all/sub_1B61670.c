__int64 __fastcall sub_1B61670(
        __int64 *a1,
        int *a2,
        __m128 a3,
        __m128 a4,
        __m128i a5,
        __int64 a6,
        int *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        unsigned __int64 a12,
        int *a13,
        __int64 a14,
        _DWORD *a15)
{
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // r13
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r13
  char *v28; // r15
  __int64 v29; // r14
  __int64 v30; // rax
  void **v31; // r12
  void **v32; // rbp
  __int128 v34; // [rsp+0h] [rbp-6F8h]
  __int64 *v35; // [rsp+10h] [rbp-6E8h]
  __int64 v36; // [rsp+18h] [rbp-6E0h]
  unsigned __int64 v37; // [rsp+28h] [rbp-6D0h]
  unsigned int *v38; // [rsp+30h] [rbp-6C8h]
  char **v39; // [rsp+38h] [rbp-6C0h]
  int v40; // [rsp+60h] [rbp-698h] BYREF
  int v41; // [rsp+64h] [rbp-694h]
  __int64 v42; // [rsp+68h] [rbp-690h] BYREF
  _QWORD v43[2]; // [rsp+70h] [rbp-688h] BYREF
  void *v44; // [rsp+80h] [rbp-678h]
  __int64 v45; // [rsp+88h] [rbp-670h]
  _BYTE v46[128]; // [rsp+90h] [rbp-668h] BYREF
  void **v47; // [rsp+110h] [rbp-5E8h] BYREF
  __int64 v48; // [rsp+118h] [rbp-5E0h]
  _BYTE v49[1152]; // [rsp+120h] [rbp-5D8h] BYREF
  void *v50; // [rsp+5A0h] [rbp-158h] BYREF
  __int64 v51; // [rsp+5A8h] [rbp-150h]
  _BYTE v52[128]; // [rsp+5B0h] [rbp-148h] BYREF
  void *ptr; // [rsp+630h] [rbp-C8h]
  __int64 v54; // [rsp+638h] [rbp-C0h]
  _BYTE v55[184]; // [rsp+640h] [rbp-B8h] BYREF

  v16 = *a2;
  v42 = 0;
  v40 = v16;
  v17 = *a7;
  v41 = 2;
  LODWORD(v42) = v17;
  v18 = a2[1];
  if ( v18 != 2 && v18 == v40 )
  {
    sub_168B9F0((__int64)v43, a1, a7[1], 0x1181u, 0);
    sub_15F7200(v43);
  }
  else
  {
    v41 = a2[1];
    HIDWORD(v42) = a7[1];
  }
  v43[0] = a11;
  v44 = v46;
  v47 = (void **)v49;
  v43[1] = a12;
  v45 = 0x1000000000LL;
  v48 = 0x800000000LL;
  v50 = v52;
  v51 = 0x1000000000LL;
  ptr = v55;
  v54 = 0x1000000000LL;
  if ( a12 > 8 )
  {
    sub_1B5B6F0((__int64)&v47, a12);
    if ( HIDWORD(v51) < a12 )
      sub_2237220(&v50, v52, a12, 8);
  }
  v19 = 0;
  sub_1B5D560(
    (__m128 *)*a1,
    a1[1],
    0x66u,
    (__int64)v43,
    (unsigned int)*a13,
    a9,
    a3,
    a4,
    a5,
    *(_QWORD *)a10,
    *(_QWORD *)(a10 + 8),
    *(_QWORD *)(a10 + 16),
    a14,
    a15,
    6,
    0,
    0);
  if ( (_DWORD)v45 )
  {
    v20 = (_QWORD *)sub_168B6C0((__int64)a1);
    v25 = sub_15AB9E0(a9, v20, v21, v22, v23, v24);
    v36 = v26;
    *((_QWORD *)&v34 + 1) = (unsigned int)v54;
    *(_QWORD *)&v34 = ptr;
    v27 = (__int64)v47;
    v28 = (char *)(unsigned int)v51;
    v35 = (__int64 *)v25;
    v29 = (unsigned int)v48;
    v39 = (char **)v50;
    v38 = (unsigned int *)v44;
    v37 = (unsigned int)v45;
    v30 = sub_168B6C0((__int64)a1);
    v19 = sub_EC2BB0(
            v30,
            a13,
            v38,
            (void *)v37,
            v39,
            v28,
            v27,
            v29,
            v34,
            &v40,
            (__int64 *)((char *)&dword_0 + 2),
            (__int64)&v42,
            2,
            v35,
            v36,
            *(_OWORD *)a10,
            *(_QWORD *)(a10 + 16));
  }
  if ( ptr != v55 )
    free(ptr);
  if ( v50 != v52 )
    free(v50);
  v31 = v47;
  v32 = &v47[18 * (unsigned int)v48];
  if ( v47 != v32 )
  {
    do
    {
      while ( 1 )
      {
        v32 -= 18;
        if ( *v32 == v32 + 2 )
          break;
        free(*v32);
        if ( v31 == v32 )
          goto LABEL_14;
      }
    }
    while ( v31 != v32 );
LABEL_14:
    v32 = v47;
  }
  if ( v32 != (void **)v49 )
    free(v32);
  if ( v44 != v46 )
    free(v44);
  return v19;
}
