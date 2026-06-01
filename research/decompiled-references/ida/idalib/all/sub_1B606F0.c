__int64 __fastcall sub_1B606F0(
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
        int a11,
        __int64 a12,
        unsigned __int64 a13,
        int *a14,
        __int64 a15,
        _DWORD *a16)
{
  int *v16; // r14
  unsigned int v18; // r15d
  __int64 v19; // r12
  __int64 v20; // rdx
  int v21; // eax
  unsigned int v22; // edx
  __int64 v23; // r13
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r13
  unsigned __int64 v32; // r12
  char *v33; // r15
  __int64 v34; // r14
  __int64 v35; // rax
  void **v36; // r12
  void **v37; // rbp
  __int128 v39; // [rsp+0h] [rbp-6E8h]
  __int64 *v41; // [rsp+10h] [rbp-6D8h]
  __int64 v42; // [rsp+18h] [rbp-6D0h]
  unsigned int *v43; // [rsp+20h] [rbp-6C8h]
  char **v44; // [rsp+28h] [rbp-6C0h]
  __int64 v45; // [rsp+50h] [rbp-698h] BYREF
  __int64 v46; // [rsp+58h] [rbp-690h] BYREF
  _QWORD v47[2]; // [rsp+60h] [rbp-688h] BYREF
  void *v48; // [rsp+70h] [rbp-678h]
  __int64 v49; // [rsp+78h] [rbp-670h]
  _BYTE v50[128]; // [rsp+80h] [rbp-668h] BYREF
  void **v51; // [rsp+100h] [rbp-5E8h] BYREF
  __int64 v52; // [rsp+108h] [rbp-5E0h]
  _BYTE v53[1152]; // [rsp+110h] [rbp-5D8h] BYREF
  void *v54; // [rsp+590h] [rbp-158h] BYREF
  __int64 v55; // [rsp+598h] [rbp-150h]
  _BYTE v56[128]; // [rsp+5A0h] [rbp-148h] BYREF
  void *ptr; // [rsp+620h] [rbp-C8h]
  __int64 v58; // [rsp+628h] [rbp-C0h]
  _BYTE v59[184]; // [rsp+630h] [rbp-B8h] BYREF

  v46 = 0;
  v45 = 0x200000002LL;
  if ( a3 )
  {
    v16 = a2;
    v18 = 0;
    v19 = (__int64)&a2[a3 - 1 + 1];
    do
    {
      while ( 1 )
      {
        v21 = *v16;
        if ( *v16 != 2 && (v21 == (_DWORD)v45 || v21 == HIDWORD(v45)) )
          break;
        v20 = v18;
        ++v16;
        ++v18;
        ++a4;
        *((_DWORD *)&v45 + v20) = v21;
        *((_DWORD *)&v47[-1] + v20) = *(a4 - 1);
        if ( (int *)v19 == v16 )
          goto LABEL_8;
      }
      v22 = *a4;
      ++v16;
      ++a4;
      sub_168B9F0((__int64)v47, a1, v22, 0x1181u, 0);
      sub_15F7200(v47);
    }
    while ( (int *)v19 != v16 );
  }
LABEL_8:
  v51 = (void **)v53;
  v47[0] = a12;
  v48 = v50;
  v47[1] = a13;
  v49 = 0x1000000000LL;
  v52 = 0x800000000LL;
  v54 = v56;
  v55 = 0x1000000000LL;
  ptr = v59;
  v58 = 0x1000000000LL;
  if ( a13 > 8 )
  {
    sub_1B5B6F0((__int64)&v51, a13);
    if ( HIDWORD(v55) < a13 )
      sub_2237220(&v54, v56, a13, 8);
  }
  v23 = 0;
  sub_1B5D560(
    (__m128 *)*a1,
    a1[1],
    0x66u,
    (__int64)v47,
    (unsigned int)*a14,
    a9,
    a5,
    a6,
    a7,
    *(_QWORD *)a10,
    *(_QWORD *)(a10 + 8),
    *(_QWORD *)(a10 + 16),
    a15,
    a16,
    6,
    0,
    0);
  if ( (_DWORD)v49 )
  {
    v24 = (_QWORD *)sub_168B6C0((__int64)a1);
    v29 = sub_15AB9E0(a9, v24, v25, v26, v27, v28);
    *(_QWORD *)&v39 = ptr;
    v42 = v30;
    v31 = (__int64)v51;
    v32 = (unsigned int)v49;
    v41 = (__int64 *)v29;
    v33 = (char *)(unsigned int)v55;
    v34 = (unsigned int)v52;
    *((_QWORD *)&v39 + 1) = (unsigned int)v58;
    v44 = (char **)v54;
    v43 = (unsigned int *)v48;
    v35 = sub_168B6C0((__int64)a1);
    v23 = sub_EC2BB0(
            v35,
            a14,
            v43,
            (void *)v32,
            v44,
            v33,
            v31,
            v34,
            v39,
            &v45,
            (__int64 *)((char *)&dword_0 + 2),
            (__int64)&v46,
            2,
            v41,
            v42,
            *(_OWORD *)a10,
            *(_QWORD *)(a10 + 16));
  }
  if ( ptr != v59 )
    free(ptr);
  if ( v54 != v56 )
    free(v54);
  v36 = v51;
  v37 = &v51[18 * (unsigned int)v52];
  if ( v51 != v37 )
  {
    do
    {
      while ( 1 )
      {
        v37 -= 18;
        if ( *v37 == v37 + 2 )
          break;
        free(*v37);
        if ( v36 == v37 )
          goto LABEL_18;
      }
    }
    while ( v36 != v37 );
LABEL_18:
    v37 = v51;
  }
  if ( v37 != (void **)v53 )
    free(v37);
  if ( v48 != v50 )
    free(v48);
  return v23;
}
