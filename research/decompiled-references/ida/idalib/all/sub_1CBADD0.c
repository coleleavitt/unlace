__m128i *__fastcall sub_1CBADD0(__int64 *a1, __int64 *a2, __m128i *a3, __int64 a4, __int64 a5, __m128 a6, __m128i a7)
{
  unsigned __int64 (__fastcall *v12)(__int64); // rax
  __int32 v13; // eax
  __int64 v14; // rsi
  int v15; // eax
  __m128i v16; // xmm1
  __int64 v17; // r9
  _QWORD *v18; // r8
  void *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  char *v22; // r9
  char *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v29; // rsi
  __int64 v30; // rcx
  char *v31; // rdi
  int v32; // eax
  int v33; // r13d
  char v34; // [rsp+Fh] [rbp-F9h] BYREF
  __m128i v35; // [rsp+10h] [rbp-F8h] BYREF
  __int64 v36; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v37; // [rsp+30h] [rbp-D8h] BYREF
  void *ptr; // [rsp+38h] [rbp-D0h]
  __int64 v39; // [rsp+40h] [rbp-C8h]
  _BYTE v40[64]; // [rsp+48h] [rbp-C0h] BYREF
  void *v41[2]; // [rsp+88h] [rbp-80h]
  __int64 v42; // [rsp+98h] [rbp-70h]
  __int64 *v43; // [rsp+A0h] [rbp-68h]
  __m128i v44; // [rsp+A8h] [rbp-60h]
  __int64 v45; // [rsp+B8h] [rbp-50h]
  __int64 v46; // [rsp+C0h] [rbp-48h]
  __int64 v47; // [rsp+C8h] [rbp-40h]
  bool v48; // [rsp+D0h] [rbp-38h]
  bool v49; // [rsp+D1h] [rbp-37h]
  char v50; // [rsp+D2h] [rbp-36h]
  bool v51; // [rsp+D3h] [rbp-35h]
  bool v52; // [rsp+D4h] [rbp-34h]
  char v53; // [rsp+D5h] [rbp-33h]
  __int16 v54; // [rsp+D6h] [rbp-32h]

  if ( (unsigned __int8)sub_1E534E0(a1, a4, 0) )
  {
    sub_B88650((__int64)a3, 1);
    return nullptr;
  }
  a3[4].m128i_i64[0] = a4;
  LOWORD(v37) = 1;
  sub_1836B60(a1, (__int64)a2, a3, a5, &v37, a6, a7);
  v12 = *(unsigned __int64 (__fastcall **)(__int64))(a3->m128i_i64[0] + 16);
  if ( v12 == sub_BBC170 )
    v13 = *(_DWORD *)(a3[3].m128i_i64[1] + 8);
  else
    v13 = v12((__int64)a3);
  v14 = a3[2].m128i_i64[1];
  v35.m128i_i32[2] = v13;
  v35.m128i_i64[0] = v14;
  sub_B85890(&v36, v14);
  v15 = sub_1A3A250((__int64)a1);
  v16 = _mm_load_si128(&v35);
  ptr = v40;
  v48 = v15 != 0;
  v49 = v15 == 2;
  *(_OWORD *)v41 = 0;
  v51 = v15 == 0;
  v52 = v15 == 0;
  v44 = v16;
  v39 = 0x800000000LL;
  v45 = v36;
  v54 = 0;
  v37 = 0;
  v42 = 0;
  v43 = a1;
  v46 = 0;
  v47 = 0;
  v50 = 1;
  v53 = 0;
  sub_1A395A0((__int64)&v37);
  sub_1A49A10((__int64)a1, (__int64)&v37, a2, 0, 0, v17, 0.0, *(double *)v16.m128i_i64);
  sub_17A32D0((__int64)a1, (int *)&v37, a1[68], a2, 0, 0);
  v19 = ptr;
  v20 = (unsigned int)v39;
  v21 = 8LL * (unsigned int)v39;
  v22 = (char *)ptr + v21;
  if ( ptr != (char *)ptr + v21 )
  {
    v23 = (char *)ptr + 8;
    if ( a3 == (__m128i *)(*(_QWORD *)ptr & 0xFFFFFFFFFFFFFFF8LL) )
    {
      v18 = ptr;
LABEL_25:
      v29 = *(_QWORD *)((char *)ptr + v21 - 8);
      LODWORD(v39) = v39 - 1;
      v30 = (unsigned int)v39;
      if ( v18 != (_QWORD *)((char *)ptr + 8 * (unsigned int)v39) )
      {
        *v18 = v29;
        v30 = (unsigned int)v39;
      }
      if ( (_DWORD)v30 )
      {
        v33 = 0;
        if ( (_DWORD)v37 == 5 )
          v33 = HIDWORD(v37);
        LODWORD(v37) = 2;
        sub_1A43500((__int64)&v37);
        if ( (_DWORD)v37 == 5 )
        {
          HIDWORD(v37) = v33;
          v32 = v39;
LABEL_33:
          v34 = 1;
          if ( v32 )
            sub_1CBABF0((__int64)a1, (__int64)a3, (__int64)&v37, &v34);
          goto LABEL_35;
        }
        v31 = (char *)v41[0];
        if ( !v41[0] )
        {
LABEL_32:
          v32 = v39;
          goto LABEL_33;
        }
      }
      else
      {
        if ( (_DWORD)v37 != 1 )
          LODWORD(v37) = 0;
        v31 = (char *)v41[0];
        if ( !v41[0] )
        {
          v34 = 1;
LABEL_35:
          sub_17A5800(a1, (__int64)a3, (__int64)v19, v30, (__int64)v18, (__int64)v22);
          goto LABEL_13;
        }
      }
      sub_1A39780(v31);
      v41[0] = nullptr;
      goto LABEL_32;
    }
    while ( 1 )
    {
      v18 = v23;
      if ( v22 == v23 )
        break;
      v23 += 8;
      if ( a3 == (__m128i *)(*v18 & 0xFFFFFFFFFFFFFFF8LL) )
        goto LABEL_25;
    }
  }
  v34 = 1;
  if ( (_DWORD)v39 )
    sub_1CBABF0((__int64)a1, (__int64)a3, (__int64)&v37, &v34);
  sub_17A5800(a1, (__int64)a3, (__int64)v19, v20, (__int64)v18, (__int64)v22);
  if ( v34 )
    sub_17B7670((__int64)a1, (__int64)a3, (__int64)a2, 1, v26, v27);
LABEL_13:
  if ( !v51 )
    goto LABEL_18;
  if ( (_DWORD)v37 != 5 )
  {
    if ( !v41[1] || (*(_BYTE *)(v43[29] + 46) & 0x20) == 0 )
      goto LABEL_20;
    sub_1663B80(v43, (__int64)&v37);
LABEL_18:
    if ( !v52 || (_DWORD)v37 != 5 )
      goto LABEL_20;
    goto LABEL_37;
  }
  if ( v52 )
LABEL_37:
    sub_1A445B0((__int64)v43, (__int64)&v37, v24, v25, v26);
LABEL_20:
  if ( v41[0] )
    sub_1A39780((char *)v41[0]);
  if ( ptr != v40 )
    free(ptr);
  return a3;
}
