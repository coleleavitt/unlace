unsigned __int64 __fastcall sub_1B61E10(
        __int64 *a1,
        _QWORD *a2,
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
  __int64 v21; // rax
  unsigned int v22; // eax
  __int64 v23; // r15
  unsigned int v24; // r13d
  __int32 v25; // eax
  __int64 v26; // rdx
  int v27; // eax
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned int *v35; // r12
  __int64 v36; // r13
  __int64 v37; // r14
  __int64 v38; // rax
  unsigned __int64 v39; // r12
  void **v40; // r13
  void **v41; // rbp
  unsigned int v43; // edx
  __int64 v44; // [rsp+10h] [rbp-718h]
  __int64 v45; // [rsp+18h] [rbp-710h]
  char *v46; // [rsp+28h] [rbp-700h]
  __int64 *v47; // [rsp+30h] [rbp-6F8h]
  char **v48; // [rsp+38h] [rbp-6F0h]
  __int128 v49; // [rsp+40h] [rbp-6E8h]
  __m128i si128; // [rsp+60h] [rbp-6C8h] BYREF
  __int64 v51; // [rsp+70h] [rbp-6B8h]
  int v52; // [rsp+78h] [rbp-6B0h]
  __int128 v53; // [rsp+80h] [rbp-6A8h] BYREF
  __int64 v54; // [rsp+90h] [rbp-698h]
  int v55; // [rsp+98h] [rbp-690h]
  _QWORD v56[2]; // [rsp+A0h] [rbp-688h] BYREF
  void *v57; // [rsp+B0h] [rbp-678h]
  __int64 v58; // [rsp+B8h] [rbp-670h]
  _BYTE v59[128]; // [rsp+C0h] [rbp-668h] BYREF
  void **v60; // [rsp+140h] [rbp-5E8h] BYREF
  __int64 v61; // [rsp+148h] [rbp-5E0h]
  _BYTE v62[1152]; // [rsp+150h] [rbp-5D8h] BYREF
  void *v63; // [rsp+5D0h] [rbp-158h] BYREF
  __int64 v64; // [rsp+5D8h] [rbp-150h]
  _BYTE v65[128]; // [rsp+5E0h] [rbp-148h] BYREF
  void *ptr; // [rsp+660h] [rbp-C8h]
  __int64 v67; // [rsp+668h] [rbp-C0h]
  _BYTE v68[184]; // [rsp+670h] [rbp-B8h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A9030);
  v52 = 6;
  v53 = 0;
  v51 = 0x600000006LL;
  v54 = 0;
  v55 = 0;
  if ( a2 )
  {
    v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v21 + 16) != 13 || ((*(_WORD *)(v21 + 18) >> 3) & 0x1FF) != 0x1FC )
    {
      v22 = sub_C00A40((unsigned __int64)a2, (__int64)a2, a3, a4, a5);
      sub_168B9F0((__int64)v56, a1, v22, 0x11C5u, 0);
      sub_15F7200(v56);
    }
  }
  v23 = 0;
  v24 = 0;
  do
  {
    while ( 1 )
    {
      v25 = *(_DWORD *)(a3 + v23);
      if ( v25 != 6
        && (v25 == si128.m128i_i32[0]
         || v25 == si128.m128i_i32[1]
         || v25 == si128.m128i_i32[2]
         || v25 == si128.m128i_i32[3]
         || v25 == (_DWORD)v51
         || v25 == HIDWORD(v51)
         || v25 == v52) )
      {
        break;
      }
      v26 = v24++;
      si128.m128i_i32[v26] = v25;
      v27 = *(_DWORD *)(a5 + v23);
      v23 += 4;
      *((_DWORD *)&v53 + v26) = v27;
      if ( v23 == 28 )
        goto LABEL_15;
    }
    v43 = *(_DWORD *)(a5 + v23);
    v23 += 4;
    sub_168B9F0((__int64)v56, a1, v43, 0x1180u, 0);
    sub_15F7200(v56);
  }
  while ( v23 != 28 );
LABEL_15:
  v60 = (void **)v62;
  v56[0] = a15;
  v57 = v59;
  v56[1] = a16;
  v58 = 0x1000000000LL;
  v61 = 0x800000000LL;
  v63 = v65;
  v64 = 0x1000000000LL;
  ptr = v68;
  v67 = 0x1000000000LL;
  if ( a16 > 8 )
  {
    sub_1B5B6F0((__int64)&v60, a16);
    if ( HIDWORD(v64) < a16 )
      sub_2237220(&v63, v65, a16, 8);
  }
  sub_1B5D560(
    (__m128 *)*a1,
    a1[1],
    0x37u,
    (__int64)v56,
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
  v28 = (_QWORD *)sub_168B6C0((__int64)a1);
  v33 = sub_15AB9E0(a10, v28, v29, v30, v31, v32);
  v45 = v34;
  v35 = (unsigned int *)(unsigned int)v58;
  v36 = (__int64)v60;
  *(_QWORD *)&v49 = ptr;
  v37 = (unsigned int)v61;
  *((_QWORD *)&v49 + 1) = (unsigned int)v67;
  v48 = (char **)v63;
  v46 = (char *)(unsigned int)v64;
  v47 = (__int64 *)v57;
  v44 = v33;
  v38 = sub_168B6C0((__int64)a1);
  v39 = sub_EC2530(
          v38,
          a17,
          v47,
          v35,
          v48,
          v46,
          v36,
          v37,
          v49,
          a2,
          &si128,
          (__m128i *)&byte_7,
          (__int64)&v53,
          (__int64 *)&byte_7,
          v44,
          v45,
          *(_OWORD *)a11,
          *(_QWORD *)(a11 + 16),
          a12,
          a13,
          a14);
  if ( ptr != v68 )
    free(ptr);
  if ( v63 != v65 )
    free(v63);
  v40 = v60;
  v41 = &v60[18 * (unsigned int)v61];
  if ( v60 != v41 )
  {
    do
    {
      while ( 1 )
      {
        v41 -= 18;
        if ( *v41 == v41 + 2 )
          break;
        free(*v41);
        if ( v40 == v41 )
          goto LABEL_23;
      }
    }
    while ( v40 != v41 );
LABEL_23:
    v41 = v60;
  }
  if ( v41 != (void **)v62 )
    free(v41);
  if ( v57 != v59 )
    free(v57);
  return v39;
}
