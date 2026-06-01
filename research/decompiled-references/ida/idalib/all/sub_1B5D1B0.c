unsigned __int64 __fastcall sub_1B5D1B0(
        _QWORD *a1,
        __int32 *a2,
        __int64 a3,
        int *a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        int a8,
        int a9,
        __int64 a10,
        unsigned __int64 a11,
        int *a12,
        char a13,
        __int64 a14,
        __int64 a15)
{
  __int32 v16; // eax
  int v17; // eax
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r14
  char *v26; // r15
  __int64 v27; // r13
  __int64 v28; // rax
  unsigned __int64 v29; // r12
  void **v30; // r13
  void **v31; // rbp
  __int128 v33; // [rsp+0h] [rbp-728h]
  __int64 v34; // [rsp+10h] [rbp-718h]
  __int64 v35; // [rsp+18h] [rbp-710h]
  unsigned int *v36; // [rsp+28h] [rbp-700h]
  __int64 *v37; // [rsp+30h] [rbp-6F8h]
  char **v38; // [rsp+38h] [rbp-6F0h]
  __m128i si128; // [rsp+60h] [rbp-6C8h] BYREF
  __int64 v40; // [rsp+70h] [rbp-6B8h]
  int v41; // [rsp+78h] [rbp-6B0h]
  int v42; // [rsp+80h] [rbp-6A8h] BYREF
  __int128 v43; // [rsp+84h] [rbp-6A4h]
  __int64 v44; // [rsp+94h] [rbp-694h]
  _QWORD v45[2]; // [rsp+A0h] [rbp-688h] BYREF
  void *v46; // [rsp+B0h] [rbp-678h]
  __int64 v47; // [rsp+B8h] [rbp-670h]
  _BYTE v48[128]; // [rsp+C0h] [rbp-668h] BYREF
  void **v49; // [rsp+140h] [rbp-5E8h] BYREF
  __int64 v50; // [rsp+148h] [rbp-5E0h]
  _BYTE v51[1152]; // [rsp+150h] [rbp-5D8h] BYREF
  void *v52; // [rsp+5D0h] [rbp-158h] BYREF
  __int64 v53; // [rsp+5D8h] [rbp-150h]
  _BYTE v54[128]; // [rsp+5E0h] [rbp-148h] BYREF
  void *ptr; // [rsp+660h] [rbp-C8h]
  __int64 v56; // [rsp+668h] [rbp-C0h]
  _BYTE v57[184]; // [rsp+670h] [rbp-B8h] BYREF

  v40 = 0x600000006LL;
  v16 = *a2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A9030);
  si128.m128i_i32[0] = v16;
  v17 = *a4;
  v49 = (void **)v51;
  v42 = v17;
  v41 = 6;
  v45[0] = a10;
  v46 = v48;
  v43 = 0;
  v44 = 0;
  v45[1] = a11;
  v47 = 0x1000000000LL;
  v50 = 0x800000000LL;
  v52 = v54;
  v53 = 0x1000000000LL;
  ptr = v57;
  v56 = 0x1000000000LL;
  if ( a11 > 8 )
  {
    sub_1B5B6F0((__int64)&v49, a11);
    if ( a11 > HIDWORD(v53) )
      sub_2237220(&v52, v54, a11, 8);
  }
  sub_1B5D560(*a1, a1[1], 55, (unsigned int)v45, *a12, a6, *a7, a7[1], a7[2], a14, a15, a8, (__int64)&si128, 7, 1, a13);
  v18 = (_QWORD *)sub_168B6C0((__int64)a1);
  v23 = sub_15AB9E0(a6, v18, v19, v20, v21, v22);
  v35 = v24;
  *(_QWORD *)&v33 = ptr;
  v25 = (unsigned int)v50;
  *((_QWORD *)&v33 + 1) = (unsigned int)v56;
  v26 = (char *)(unsigned int)v53;
  v27 = (__int64)v49;
  v38 = (char **)v52;
  v37 = (__int64 *)v46;
  v36 = (unsigned int *)(unsigned int)v47;
  v34 = v23;
  v28 = sub_168B6C0((__int64)a1);
  v29 = sub_EC2530(
          v28,
          a12,
          v37,
          v36,
          v38,
          v26,
          v27,
          v25,
          v33,
          nullptr,
          &si128,
          (__m128i *)&byte_7,
          (__int64)&v42,
          (__int64 *)&byte_7,
          v34,
          v35,
          *(_OWORD *)a7,
          a7[2],
          a8,
          1,
          a9);
  if ( ptr != v57 )
    free(ptr);
  if ( v52 != v54 )
    free(v52);
  v30 = v49;
  v31 = &v49[18 * (unsigned int)v50];
  if ( v49 != v31 )
  {
    do
    {
      while ( 1 )
      {
        v31 -= 18;
        if ( *v31 == v31 + 2 )
          break;
        free(*v31);
        if ( v30 == v31 )
          goto LABEL_9;
      }
    }
    while ( v30 != v31 );
LABEL_9:
    v31 = v49;
  }
  if ( v31 != (void **)v51 )
    free(v31);
  if ( v46 != v48 )
    free(v46);
  return v29;
}
