__int64 __fastcall sub_22731D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 *v6; // r12
  unsigned int v8; // edx
  unsigned __int64 *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // ebp
  __m128i v13; // xmm2
  unsigned int v14; // ebx
  int v16; // eax
  int v17; // esi
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rbp
  int v22; // eax
  __m128i v23; // xmm1
  __int64 v24; // rax
  _BYTE *v25; // rdi
  unsigned __int64 *v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  _BYTE *v29; // rdi
  int v30; // [rsp+0h] [rbp-68h] BYREF
  __m128i v31; // [rsp+8h] [rbp-60h] BYREF
  void *v32; // [rsp+18h] [rbp-50h]
  __int64 v33; // [rsp+20h] [rbp-48h]
  _BYTE v34[64]; // [rsp+28h] [rbp-40h] BYREF

  v6 = (unsigned __int64 *)(a1 + 176);
  v8 = *(_DWORD *)(a1 + 232);
  if ( v8 )
  {
    v9 = *(unsigned __int64 **)(a1 + 184);
    v10 = *(_QWORD *)(a1 + 224) + 24LL * v8 - 24;
    v11 = *(_QWORD *)v10;
    v12 = *(_DWORD *)(v10 + 8);
    v34[0] = 0;
    v33 = 0;
    v13 = _mm_loadu_si128((const __m128i *)(v11 + 24));
    *(_DWORD *)(a1 + 232) = v8 - 1;
    v32 = v34;
    v30 = 16;
    v31 = v13;
    if ( v9 != v6 )
    {
      if ( v9 == (unsigned __int64 *)v11 )
      {
LABEL_17:
        v18 = a1 + 80;
        v26 = (unsigned __int64 *)sub_2270C60((__int64 *)(a1 + 80), v9, &v30, v10, a5, a6);
        sub_22719B0(a1, v12, 10, v26, v27, v28);
        v29 = v32;
        *(_BYTE *)(a1 + 73) = 0;
        if ( v29 != v34 )
          operator delete(v29);
        v17 = *(_DWORD *)(a1 + 60);
        goto LABEL_12;
      }
      while ( 1 )
      {
        v9 = (unsigned __int64 *)v9[1];
        if ( v9 == v6 )
          break;
        if ( (unsigned __int64 *)v11 == v9 )
          goto LABEL_17;
      }
    }
    *(_BYTE *)(a1 + 75) = 1;
    return 0;
  }
  v16 = *(_DWORD *)(a1 + 68);
  v17 = *(_DWORD *)(a1 + 60);
  if ( !v16 )
  {
    sub_22719B0(a1, v17, 10, (unsigned __int64 *)(a1 + 176), a5, a6);
    v16 = *(_DWORD *)(a1 + 68);
    v17 = *(_DWORD *)(a1 + 60);
  }
  v18 = a1 + 80;
  *(_BYTE *)(a1 + 73) = v16 == 0;
LABEL_12:
  *(_BYTE *)(a1 + 74) = 0;
  v32 = v34;
  v19 = *(_QWORD *)(a1 + 40);
  v33 = 0;
  v31.m128i_i64[0] = v19;
  *(_QWORD *)(a1 + 40) = v19 + 1;
  v20 = *(_QWORD *)(a1 + 80);
  v34[0] = 0;
  v30 = 17;
  v21 = (v20 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  *(_DWORD *)(a1 + 60) = v17 + 1;
  v31.m128i_i64[1] = 1;
  *(_QWORD *)(a1 + 160) += 72LL;
  if ( *(_QWORD *)(a1 + 88) >= v21 + 72 && v20 )
  {
    *(_QWORD *)(a1 + 80) = v21 + 72;
    v22 = 17;
  }
  else
  {
    v21 = sub_986170(v18, 72, 72, 4, a5, a6);
    v22 = v30;
  }
  *(_DWORD *)(v21 + 16) = v22;
  v23 = _mm_loadu_si128(&v31);
  *(_OWORD *)v21 = 0;
  *(_QWORD *)(v21 + 40) = v21 + 56;
  *(__m128i *)(v21 + 24) = v23;
  sub_226E090((_QWORD *)(v21 + 40), v32, (__int64)v32 + v33);
  v24 = *(_QWORD *)(a1 + 176);
  *(_QWORD *)(v21 + 8) = v6;
  *(_QWORD *)v21 = v24;
  *(_QWORD *)(v24 + 8) = v21;
  v25 = v32;
  *(_QWORD *)(a1 + 176) = v21;
  v14 = 1;
  if ( v25 == v34 )
    return v14;
  operator delete(v25);
  return 1;
}
