unsigned __int64 __fastcall sub_172E1A0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char **a4,
        __int64 a5,
        __int64 *a6,
        double a7,
        double a8)
{
  bool v8; // zf
  _QWORD *v9; // r15
  __int64 v11; // rdx
  __int64 *v12; // r12
  unsigned __int8 v13; // r13
  __m128 v14; // xmm0
  unsigned __int64 v15; // rax
  unsigned __int64 *v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  int v19; // eax
  unsigned __int64 v20; // r13
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  char v27; // dl
  __int64 v28; // rdx
  __int64 v29; // rax
  _QWORD *v30; // rsi
  __int64 v31; // rax
  unsigned __int64 v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  const char *v39; // r12
  size_t v40; // rdx
  __int64 v41; // [rsp+8h] [rbp-F0h] BYREF
  __m128i v42; // [rsp+10h] [rbp-E8h] BYREF
  __m128 v43; // [rsp+20h] [rbp-D8h] BYREF
  int v44; // [rsp+30h] [rbp-C8h]
  int v45; // [rsp+34h] [rbp-C4h]
  __int64 v46; // [rsp+38h] [rbp-C0h]
  __int64 v47; // [rsp+40h] [rbp-B8h]
  __int64 v48; // [rsp+48h] [rbp-B0h]
  void *v49; // [rsp+50h] [rbp-A8h]
  __int64 v50; // [rsp+58h] [rbp-A0h]
  _BYTE v51[64]; // [rsp+60h] [rbp-98h] BYREF
  void *ptr; // [rsp+A0h] [rbp-58h]
  __int64 v53; // [rsp+A8h] [rbp-50h]
  _BYTE v54[72]; // [rsp+B0h] [rbp-48h] BYREF

  v8 = *(_DWORD *)(a1 + 24) == 2;
  v9 = *(_QWORD **)(a2 + 240);
  v41 = a5;
  if ( v8 )
    return sub_1721C20(a1, v9, a4, a5, a5, (__int64)a6);
  v11 = *(unsigned int *)(a1 + 16);
  v12 = *(__int64 **)(a2 + 248);
  v13 = (unsigned __int8)a6;
  v45 = *(_DWORD *)(a1 + 32);
  v49 = v51;
  v14 = _mm_loadh_ps((const double *)&v41);
  v50 = 0x400000000LL;
  ptr = v54;
  v43 = v14;
  v44 = v11;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v53 = 0x200000000LL;
  v15 = sub_16043A0(v12, v9, v11, (__int64)a4, a5, a6);
  v42.m128i_i64[1] = v18;
  v42.m128i_i64[0] = v15 & 0xFFFFEFFFFFF3E7FFLL | 0x100000081800LL;
  v19 = *(_DWORD *)(a1 + 24);
  if ( v19 == 3 )
  {
    v20 = *(_QWORD *)(a1 + 8);
    v27 = *(_BYTE *)(a1 + 32);
    *(_WORD *)(v20 + 4) = *(_DWORD *)(a1 + 16);
    v28 = v27 & 3;
    *(_BYTE *)(v20 + 6) = v28 | *(_BYTE *)(v20 + 6) & 0xFC;
    if ( *(_QWORD *)a1 )
    {
      v29 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
      v30 = (_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v29 & 4) != 0 )
        v30 = (_QWORD *)*v30;
      sub_15A5C40((__int64)&v43, (unsigned __int64)v30, v28, 0x100000081800LL, v16, v17);
      v31 = *(_QWORD *)(a1 + 8);
      v32 = *(_QWORD *)a1;
      v33 = v46;
      *(_QWORD *)(v31 + 16) = v47;
      *(_QWORD *)(v31 + 8) = v33;
      v34 = sub_1704B80((__int64)v12, v32);
      if ( v34 )
      {
        if ( (*(_BYTE *)(v34 + 32) & 2) != 0 )
          v39 = *(const char **)(v34 + 24);
        else
          v39 = (const char *)sub_ED2880(v34, v12, v35, v36, v37, v38);
        v40 = 0;
        if ( v39 )
          v40 = j__strlen(v39);
        sub_15A5E30((__int64)&v43, v39, v40, v36, v37, v38);
        v20 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(v20 + 24) = v48;
      }
      else
      {
        v20 = *(_QWORD *)(a1 + 8);
      }
    }
  }
  else if ( v19 == 1 )
  {
    v22 = *(_QWORD *)(a1 + 8);
    sub_15A2F70((__int64)&v43, v22);
    v20 = sub_15A5CA0((__int64)&v43, v22, v23, v24, v25, v26);
  }
  else
  {
    v20 = sub_1724430(a1, v9, v12, (__int64)&v43, (unsigned __int64 *)v13, a3, *(double *)v14.m128_u64, a8, &v42);
  }
  if ( ptr != v54 )
    free(ptr);
  if ( v49 != v51 )
    free(v49);
  return v20;
}
