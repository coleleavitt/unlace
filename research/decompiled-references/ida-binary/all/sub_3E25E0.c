unsigned __int64 sub_3E25E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, ...)
{
  __m128 v6; // xmm1
  __m128 v7; // xmm2
  __m128 v8; // xmm3
  __m128 v9; // xmm6
  __m128 v10; // xmm7
  _DWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // r15d
  __int64 v17; // rbp
  __int64 v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rbx
  int v21; // eax
  const char *v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __m128 v27; // xmm4
  __m128 v28; // xmm5
  char v29; // [rsp+0h] [rbp-138h]
  _DWORD *v30; // [rsp+10h] [rbp-128h] BYREF
  __int128 v31; // [rsp+18h] [rbp-120h]
  gcc_va_list va; // [rsp+30h] [rbp-108h] BYREF
  unsigned __int64 v33; // [rsp+48h] [rbp-F0h]
  __int64 v34; // [rsp+58h] [rbp-E0h]
  __int64 v35; // [rsp+60h] [rbp-D8h]
  __int64 v36; // [rsp+68h] [rbp-D0h]
  __int64 v37; // [rsp+70h] [rbp-C8h]
  __int64 v38; // [rsp+78h] [rbp-C0h]
  __int128 v39; // [rsp+80h] [rbp-B8h]
  __int128 v40; // [rsp+90h] [rbp-A8h]
  __int128 v41; // [rsp+A0h] [rbp-98h]
  __int128 v42; // [rsp+B0h] [rbp-88h]
  __int128 v43; // [rsp+C0h] [rbp-78h]
  __int128 v44; // [rsp+D0h] [rbp-68h]
  __int128 v45; // [rsp+E0h] [rbp-58h]
  double v46[9]; // [rsp+F0h] [rbp-48h]

  va_start(va, a6);
  *(double *)&v39 = va_arg(va, double);
  *(double *)&v40 = va_arg(va, double);
  v6.m128_u64[0] = v40;
  *(double *)&v41 = va_arg(va, double);
  v7.m128_u64[0] = v41;
  *(double *)&v42 = va_arg(va, double);
  v8.m128_u64[0] = v42;
  *(double *)&v43 = va_arg(va, double);
  *(double *)&v44 = va_arg(va, double);
  *(double *)&v45 = va_arg(va, double);
  v9.m128_u64[0] = v45;
  v46[0] = va_arg(va, double);
  *(double *)v10.m128_u64 = v46[0];
  va_end(va);
  v34 = a2;
  v35 = a3;
  v36 = a4;
  v37 = a5;
  v38 = a6;
  v33 = __readfsqword(0x28u);
  if ( (debug & 0x40000) == 0 )
    return v33 - __readfsqword(0x28u);
  va_start(va, a6);
  v30 = nullptr;
  v31 = 0;
  v12 = (_DWORD *)qvector_reserve(&v30, 0, 8, 1);
  v30 = v12;
  v16 = 0;
  *(_QWORD *)&v31 = 8;
  *v12 = 1162434135;
  *(_DWORD *)((char *)v12 + 3) = 540694341;
  *((_BYTE *)v30 + 7) = 0;
  if ( dword_8D1258 - 1 > 0 )
  {
    do
    {
      v20 = v31;
      if ( (_QWORD)v31 )
      {
        v17 = v31 + 1;
        v18 = v31 + 2;
        v19 = (__int64)v30;
        v20 = v31 - 1;
        if ( *((_QWORD *)&v31 + 1) < (unsigned __int64)(v31 + 2) )
          goto LABEL_11;
      }
      else
      {
        v19 = (__int64)v30;
        v18 = 3;
        v17 = 2;
        if ( *((_QWORD *)&v31 + 1) < 3u )
        {
LABEL_11:
          v30 = (_DWORD *)qvector_reserve(&v30, v19, v18, 1);
          v19 = (__int64)v30;
        }
      }
      *(_QWORD *)&v31 = v18;
      ++v16;
      *(_BYTE *)(v19 + v17) = 0;
      *(_WORD *)((char *)v30 + v20) = 8224;
      v21 = dword_8D1258 - 1;
      if ( dword_8D1258 - 1 < 0 )
        v21 = 0;
    }
    while ( v21 > v16 );
  }
  v22 = (const char *)a1;
  sub_16F9E0((__int64 *)&v30, a1, (const __m128i *)va, v13, v14, v15);
  if ( (debug & 0x40000) != 0 )
  {
    v22 = (const char *)v30;
    sub_16B860((int)"%s", (__int64)v30, v23, v24, v25, v26, (__m128)0LL, v6, v7, v8, v27, v28, v9, v10, v29);
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v30, v22);
  }
  return v33 - __readfsqword(0x28u);
}
