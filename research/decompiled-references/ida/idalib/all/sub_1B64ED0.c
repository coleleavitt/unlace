unsigned __int64 __fastcall sub_1B64ED0(
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
        int a15,
        __int64 a16,
        unsigned __int64 a17,
        int *a18,
        int a19,
        __int64 a20,
        _DWORD *a21)
{
  __int32 *v21; // r11
  unsigned int *v22; // r15
  int v23; // r14d
  _QWORD *v24; // r12
  unsigned __int64 v25; // r13
  __int64 v26; // rax
  unsigned int v27; // eax
  unsigned int v28; // r12d
  __int64 v29; // r13
  __int32 *v30; // r14
  __int32 v31; // eax
  __int64 v32; // rdx
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r14
  __int64 v41; // r13
  __int64 v42; // rax
  unsigned __int64 v43; // r12
  void **v44; // r13
  void **v45; // rbp
  unsigned int v47; // edx
  __int64 v48; // [rsp+10h] [rbp-718h]
  __int64 v49; // [rsp+18h] [rbp-710h]
  char *v50; // [rsp+20h] [rbp-708h]
  unsigned int *v52; // [rsp+28h] [rbp-700h]
  __int64 *v53; // [rsp+30h] [rbp-6F8h]
  char **v54; // [rsp+38h] [rbp-6F0h]
  __int128 v55; // [rsp+40h] [rbp-6E8h]
  __m128i si128; // [rsp+60h] [rbp-6C8h] BYREF
  __int64 v57; // [rsp+70h] [rbp-6B8h]
  int v58; // [rsp+78h] [rbp-6B0h]
  __int128 v59; // [rsp+80h] [rbp-6A8h] BYREF
  __int64 v60; // [rsp+90h] [rbp-698h]
  int v61; // [rsp+98h] [rbp-690h]
  _QWORD v62[2]; // [rsp+A0h] [rbp-688h] BYREF
  void *v63; // [rsp+B0h] [rbp-678h]
  __int64 v64; // [rsp+B8h] [rbp-670h]
  _BYTE v65[128]; // [rsp+C0h] [rbp-668h] BYREF
  void **v66; // [rsp+140h] [rbp-5E8h] BYREF
  __int64 v67; // [rsp+148h] [rbp-5E0h]
  _BYTE v68[1152]; // [rsp+150h] [rbp-5D8h] BYREF
  void *v69; // [rsp+5D0h] [rbp-158h] BYREF
  __int64 v70; // [rsp+5D8h] [rbp-150h]
  _BYTE v71[128]; // [rsp+5E0h] [rbp-148h] BYREF
  void *ptr; // [rsp+660h] [rbp-C8h]
  __int64 v73; // [rsp+668h] [rbp-C0h]
  _BYTE v74[184]; // [rsp+670h] [rbp-B8h] BYREF

  v21 = (__int32 *)a3;
  v22 = (unsigned int *)a5;
  v23 = a4;
  v24 = (_QWORD *)a2;
  v25 = a17;
  v58 = 6;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A9030);
  v59 = 0;
  v60 = 0;
  v57 = 0x600000006LL;
  v61 = 0;
  if ( a2 )
  {
    v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v26 + 16) != 13 || ((*(_WORD *)(v26 + 18) >> 3) & 0x1FF) != 0x1FC )
    {
      v27 = sub_C00A40(a2, a2, a3, a4, a5);
      sub_168B9F0((__int64)v62, a1, v27, 0x11C5u, 0);
      sub_15F7200(v62);
      v21 = (__int32 *)a3;
    }
  }
  if ( v23 )
  {
    v28 = 0;
    v29 = (__int64)&v21[v23 - 1 + 1];
    v30 = v21;
    do
    {
      while ( 1 )
      {
        v31 = *v30;
        if ( *v30 != 6
          && (v31 == si128.m128i_i32[0]
           || v31 == si128.m128i_i32[1]
           || v31 == si128.m128i_i32[2]
           || v31 == si128.m128i_i32[3]
           || v31 == (_DWORD)v57
           || v31 == HIDWORD(v57)
           || v31 == v58) )
        {
          break;
        }
        v32 = v28;
        ++v30;
        ++v28;
        ++v22;
        si128.m128i_i32[v32] = v31;
        *((_DWORD *)&v59 + v32) = *(v22 - 1);
        if ( (__int32 *)v29 == v30 )
          goto LABEL_16;
      }
      v47 = *v22;
      ++v30;
      ++v22;
      sub_168B9F0((__int64)v62, a1, v47, 0x1180u, 0);
      sub_15F7200(v62);
    }
    while ( (__int32 *)v29 != v30 );
LABEL_16:
    v24 = (_QWORD *)a2;
    v25 = a17;
  }
  v66 = (void **)v68;
  v62[0] = a16;
  v63 = v65;
  v62[1] = v25;
  v64 = 0x1000000000LL;
  v67 = 0x800000000LL;
  v69 = v71;
  v70 = 0x1000000000LL;
  ptr = v74;
  v73 = 0x1000000000LL;
  if ( v25 > 8 )
  {
    sub_1B5B6F0((__int64)&v66, v25);
    if ( v25 > HIDWORD(v70) )
      sub_2237220(&v69, v71, v25, 8);
  }
  sub_1B5D560(
    (__m128 *)*a1,
    a1[1],
    0x37u,
    (__int64)v62,
    (unsigned int)*a18,
    a10,
    (__m128)0LL,
    a7,
    a8,
    *(_QWORD *)a11,
    *(_QWORD *)(a11 + 8),
    *(_QWORD *)(a11 + 16),
    a20,
    a21,
    a12,
    (unsigned __int8)&si128,
    7);
  v33 = (_QWORD *)sub_168B6C0((__int64)a1);
  v38 = sub_15AB9E0(a10, v33, v34, v35, v36, v37);
  v49 = v39;
  v52 = (unsigned int *)(unsigned int)v64;
  v40 = (unsigned int)v67;
  v41 = (__int64)v66;
  *(_QWORD *)&v55 = ptr;
  *((_QWORD *)&v55 + 1) = (unsigned int)v73;
  v54 = (char **)v69;
  v50 = (char *)(unsigned int)v70;
  v53 = (__int64 *)v63;
  v48 = v38;
  v42 = sub_168B6C0((__int64)a1);
  v43 = sub_EC2530(
          v42,
          a18,
          v53,
          v52,
          v54,
          v50,
          v41,
          v40,
          v55,
          v24,
          &si128,
          (__m128i *)&byte_7,
          (__int64)&v59,
          (__int64 *)&byte_7,
          v48,
          v49,
          *(_OWORD *)a11,
          *(_QWORD *)(a11 + 16),
          a12,
          a13,
          a14);
  if ( ptr != v74 )
    free(ptr);
  if ( v69 != v71 )
    free(v69);
  v44 = v66;
  v45 = &v66[18 * (unsigned int)v67];
  if ( v66 != v45 )
  {
    do
    {
      while ( 1 )
      {
        v45 -= 18;
        if ( *v45 == v45 + 2 )
          break;
        free(*v45);
        if ( v44 == v45 )
          goto LABEL_25;
      }
    }
    while ( v44 != v45 );
LABEL_25:
    v45 = v66;
  }
  if ( v45 != (void **)v68 )
    free(v45);
  if ( v63 != v65 )
    free(v63);
  return v43;
}
