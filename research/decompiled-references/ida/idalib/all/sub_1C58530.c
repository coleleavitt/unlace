unsigned __int64 __fastcall sub_1C58530(
        __m128 *a1,
        __int64 a2,
        const void *a3,
        size_t a4,
        unsigned int a5,
        double a6,
        __m128 a7)
{
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned __int64 v24; // rdi
  unsigned __int8 v25; // al
  int v26; // edx
  __int64 v27; // rdx
  __int64 *v28; // rbp
  unsigned __int64 v30; // rax
  __m128i v31; // [rsp+0h] [rbp-108h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-F8h]
  __int128 v33; // [rsp+20h] [rbp-E8h]
  __int128 v34; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v35; // [rsp+40h] [rbp-C8h]
  _BYTE v36[64]; // [rsp+48h] [rbp-C0h] BYREF
  void *v37[2]; // [rsp+88h] [rbp-80h]
  __int64 v38; // [rsp+98h] [rbp-70h]
  unsigned __int64 *v39; // [rsp+A0h] [rbp-68h]
  __int64 v40; // [rsp+A8h] [rbp-60h]
  unsigned int v41; // [rsp+B0h] [rbp-58h]
  __int64 v42; // [rsp+B8h] [rbp-50h] BYREF
  __m128i si128; // [rsp+C0h] [rbp-48h]
  __int64 v44; // [rsp+D0h] [rbp-38h]

  v10 = *(_QWORD *)(a2 + 8);
  v11 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v11 + 17) & 4) != 0 )
  {
    v30 = a1[15].m128_u64[1];
    DWORD2(v34) = a5;
    v35 = 0;
    *(_QWORD *)&v34 = sub_6F3470(*(_QWORD *)(v30 + 17504), a3, a4);
    return sub_C99C70((_QWORD *)a1[15].m128_u64[1], a2, v10, 0, a5, 0, 0, 0, 0, v34, 0, 0);
  }
  v12 = *(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v13 = *(_QWORD *)v12;
  if ( *(_BYTE *)(*(_QWORD *)v12 + 16LL) != 48 )
    return 0;
  v14 = sub_6F3470(*(_QWORD *)(a1[15].m128_u64[1] + 17504), a3, a4);
  v35 = 0x800000000LL;
  v15 = v14;
  *((_QWORD *)&v34 + 1) = v36;
  *(_OWORD *)v37 = 0;
  v40 = v14;
  *(_QWORD *)&v34 = 0;
  v38 = 0;
  v39 = (unsigned __int64 *)a1;
  v41 = a5;
  sub_B85890(&v42, v14);
  v44 = 0x101010000LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA5C0);
  sub_1A395A0((__int64)&v34);
  v20 = sub_F60F10(v13, v15, v16, v17, v18, v19);
  if ( v20 )
    v20 += 8;
  if ( !(unsigned __int8)sub_1A48440((__int64)a1, (__int64)&v34, (__int64)v20, 0) )
    goto LABEL_15;
  v24 = **((_QWORD **)&v34 + 1) & 0xFFFFFFFFFFFFFFF8LL;
  v25 = *(_BYTE *)(v24 + 28) & 0x7F;
  v26 = v25;
  if ( ((v25 + 52) & 0x7Fu) <= 1 || (v22 = (unsigned int)v25 - 53, (unsigned int)v22 <= 1) )
  {
    v25 = *(_BYTE *)(sub_B72ED0(v24) + 28) & 0x7F;
    v26 = v25;
  }
  v21 = (unsigned int)(v26 - 49);
  if ( (unsigned int)v21 <= 2 || v25 == 32 )
  {
    v27 = *(_QWORD *)(a2 + 8);
    v31 = 0;
    *(_OWORD *)ptr = 0;
    v33 = 0;
    v28 = sub_19CB370(a1, (_DWORD *)a2, v27, a5, 0, &v31, (__m128)0LL, a7, 0, 0, (__int64)&v34, 0, 0, 0, nullptr);
    if ( HIDWORD(ptr[1]) )
      free(ptr[0]);
  }
  else
  {
LABEL_15:
    v28 = nullptr;
  }
  if ( BYTE3(v44) )
  {
    if ( (_DWORD)v34 == 5 )
    {
      if ( !BYTE4(v44) )
        goto LABEL_20;
      goto LABEL_27;
    }
    if ( !v37[1] || (*(_BYTE *)(v39[29] + 46) & 0x20) == 0 )
      goto LABEL_20;
    sub_1663B80(v39, (__int64)&v34);
  }
  if ( !BYTE4(v44) || (_DWORD)v34 != 5 )
    goto LABEL_20;
LABEL_27:
  sub_1A445B0((__int64)v39, (__int64)&v34, v21, v22, v23);
LABEL_20:
  if ( v37[0] )
    sub_1A39780((char *)v37[0]);
  if ( *((_BYTE **)&v34 + 1) != v36 )
    free(*((void **)&v34 + 1));
  return (unsigned __int64)v28;
}
