unsigned __int64 __fastcall sub_1B64980(
        __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        double a6,
        __m128 a7,
        __m128i a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        unsigned int a12,
        unsigned __int8 a13,
        int a14,
        __int64 a15,
        unsigned __int64 a16,
        int *a17,
        __int64 a18,
        _DWORD *a19)
{
  __int32 *v19; // r11
  unsigned int *v20; // r15
  int v21; // r13d
  _QWORD *v22; // r12
  unsigned __int64 v23; // r14
  __int64 v24; // rax
  unsigned int v25; // eax
  __int64 v26; // rdx
  unsigned int v27; // r12d
  __int32 *v28; // r13
  __int64 v29; // r14
  __int32 v30; // eax
  __int64 v31; // rdx
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r14
  __int64 v40; // r13
  __int64 v41; // rax
  unsigned __int64 v42; // r12
  void **v43; // r13
  void **v44; // rbp
  unsigned int v46; // edx
  __int64 v47; // [rsp+10h] [rbp-718h]
  __int64 v48; // [rsp+18h] [rbp-710h]
  char *v50; // [rsp+20h] [rbp-708h]
  unsigned int *v51; // [rsp+28h] [rbp-700h]
  __int64 *v52; // [rsp+30h] [rbp-6F8h]
  char **v53; // [rsp+38h] [rbp-6F0h]
  __int128 v54; // [rsp+40h] [rbp-6E8h]
  __m128i si128; // [rsp+60h] [rbp-6C8h] BYREF
  __int64 v56; // [rsp+70h] [rbp-6B8h]
  int v57; // [rsp+78h] [rbp-6B0h]
  __int128 v58; // [rsp+80h] [rbp-6A8h] BYREF
  __int64 v59; // [rsp+90h] [rbp-698h]
  int v60; // [rsp+98h] [rbp-690h]
  _QWORD v61[2]; // [rsp+A0h] [rbp-688h] BYREF
  void *v62; // [rsp+B0h] [rbp-678h]
  __int64 v63; // [rsp+B8h] [rbp-670h]
  _BYTE v64[128]; // [rsp+C0h] [rbp-668h] BYREF
  void **v65; // [rsp+140h] [rbp-5E8h] BYREF
  __int64 v66; // [rsp+148h] [rbp-5E0h]
  _BYTE v67[1152]; // [rsp+150h] [rbp-5D8h] BYREF
  void *v68; // [rsp+5D0h] [rbp-158h] BYREF
  __int64 v69; // [rsp+5D8h] [rbp-150h]
  _BYTE v70[128]; // [rsp+5E0h] [rbp-148h] BYREF
  void *ptr; // [rsp+660h] [rbp-C8h]
  __int64 v72; // [rsp+668h] [rbp-C0h]
  _BYTE v73[184]; // [rsp+670h] [rbp-B8h] BYREF

  v19 = (__int32 *)a3;
  v20 = (unsigned int *)a5;
  v21 = a4;
  v22 = (_QWORD *)a2;
  v23 = a16;
  v57 = 6;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A9030);
  v58 = 0;
  v56 = 0x600000006LL;
  v59 = 0;
  v60 = 0;
  if ( a2 )
  {
    v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v24 + 16) != 13 || ((*(_WORD *)(v24 + 18) >> 3) & 0x1FF) != 0x1FC )
    {
      v25 = sub_C00A40(a2, a2, a3, a4, a5);
      sub_168B9F0((__int64)v61, a1, v25, 0x11C5u, 0);
      sub_15F7200(v61);
      v19 = (__int32 *)a3;
    }
  }
  if ( v21 )
  {
    v26 = (unsigned int)(v21 - 1);
    v27 = 0;
    v28 = v19;
    v29 = (__int64)&v19[v26 + 1];
    do
    {
      while ( 1 )
      {
        v30 = *v28;
        if ( *v28 != 6
          && (v30 == si128.m128i_i32[0]
           || v30 == si128.m128i_i32[1]
           || v30 == si128.m128i_i32[2]
           || v30 == si128.m128i_i32[3]
           || v30 == (_DWORD)v56
           || v30 == HIDWORD(v56)
           || v30 == v57) )
        {
          break;
        }
        v31 = v27;
        ++v28;
        ++v27;
        ++v20;
        si128.m128i_i32[v31] = v30;
        *((_DWORD *)&v58 + v31) = *(v20 - 1);
        if ( (__int32 *)v29 == v28 )
          goto LABEL_16;
      }
      v46 = *v20;
      ++v28;
      ++v20;
      sub_168B9F0((__int64)v61, a1, v46, 0x1180u, 0);
      sub_15F7200(v61);
    }
    while ( (__int32 *)v29 != v28 );
LABEL_16:
    v22 = (_QWORD *)a2;
    v23 = a16;
  }
  v65 = (void **)v67;
  v61[0] = a15;
  v62 = v64;
  v61[1] = v23;
  v63 = 0x1000000000LL;
  v66 = 0x800000000LL;
  v68 = v70;
  v69 = 0x1000000000LL;
  ptr = v73;
  v72 = 0x1000000000LL;
  if ( v23 > 8 )
  {
    sub_1B5B6F0((__int64)&v65, v23);
    if ( HIDWORD(v69) < v23 )
      sub_2237220(&v68, v70, v23, 8);
  }
  sub_1B5D560(
    (__m128 *)*a1,
    a1[1],
    0x37u,
    (__int64)v61,
    (unsigned int)*a17,
    a10,
    (__m128)0LL,
    a7,
    a8,
    *(_QWORD *)a11,
    *(_QWORD *)(a11 + 8),
    *(_QWORD *)(a11 + 16),
    a18,
    a19,
    a12,
    (unsigned __int8)&si128,
    7);
  v32 = (_QWORD *)sub_168B6C0((__int64)a1);
  v37 = sub_15AB9E0(a10, v32, v33, v34, v35, v36);
  v48 = v38;
  v51 = (unsigned int *)(unsigned int)v63;
  v39 = (unsigned int)v66;
  v40 = (__int64)v65;
  *(_QWORD *)&v54 = ptr;
  *((_QWORD *)&v54 + 1) = (unsigned int)v72;
  v53 = (char **)v68;
  v50 = (char *)(unsigned int)v69;
  v52 = (__int64 *)v62;
  v47 = v37;
  v41 = sub_168B6C0((__int64)a1);
  v42 = sub_EC2530(
          v41,
          a17,
          v52,
          v51,
          v53,
          v50,
          v40,
          v39,
          v54,
          v22,
          &si128,
          (__m128i *)&byte_7,
          (__int64)&v58,
          (__int64 *)&byte_7,
          v47,
          v48,
          *(_OWORD *)a11,
          *(_QWORD *)(a11 + 16),
          a12,
          a13,
          a14);
  if ( ptr != v73 )
    free(ptr);
  if ( v68 != v70 )
    free(v68);
  v43 = v65;
  v44 = &v65[18 * (unsigned int)v66];
  if ( v65 != v44 )
  {
    do
    {
      while ( 1 )
      {
        v44 -= 18;
        if ( *v44 == v44 + 2 )
          break;
        free(*v44);
        if ( v43 == v44 )
          goto LABEL_25;
      }
    }
    while ( v43 != v44 );
LABEL_25:
    v44 = v65;
  }
  if ( v44 != (void **)v67 )
    free(v44);
  if ( v62 != v64 )
    free(v62);
  return v42;
}
