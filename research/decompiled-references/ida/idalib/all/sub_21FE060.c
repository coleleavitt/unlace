__int64 __fastcall sub_21FE060(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v5; // r12d
  int v6; // r13d
  int v7; // eax
  unsigned int v8; // ebx
  __int64 *v9; // rbp
  unsigned int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  unsigned int v13; // r15d
  int v14; // edx
  unsigned int v15; // ecx
  const __m128i *v16; // rdi
  __int64 v17; // rsi
  const __m128i *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rsi
  unsigned int v21; // r13d
  unsigned int v22; // ecx
  unsigned int v23; // r13d
  unsigned int v24; // eax
  bool v25; // cc
  int v26; // ecx
  int v27; // eax
  __int64 v29; // rax
  __int64 v30; // [rsp+8h] [rbp-D0h]
  unsigned int v32; // [rsp+10h] [rbp-C8h]
  int v33; // [rsp+10h] [rbp-C8h]
  unsigned int v35; // [rsp+18h] [rbp-C0h]
  __int64 v36; // [rsp+20h] [rbp-B8h]
  unsigned int v37; // [rsp+28h] [rbp-B0h]
  int v38; // [rsp+2Ch] [rbp-ACh]
  bool v39; // [rsp+3Fh] [rbp-99h] BYREF
  __int64 v40[4]; // [rsp+40h] [rbp-98h] BYREF
  __m128i v41; // [rsp+60h] [rbp-78h] BYREF
  __int64 v42; // [rsp+70h] [rbp-68h]
  __int32 v43; // [rsp+78h] [rbp-60h]
  _BYTE src[88]; // [rsp+80h] [rbp-58h] BYREF

  v5 = *(_DWORD *)(*(_QWORD *)a1 + 8LL);
  v6 = 2 * v5;
  if ( 2 * v5 + 64 > 0x7F )
  {
    v8 = (2 * v5 + 64) >> 6;
    if ( v8 <= 4 )
    {
      v7 = *(_DWORD *)(*(_QWORD *)a1 + 8LL);
      v9 = (__int64 *)src;
    }
    else
    {
      v9 = (__int64 *)operator new[](8LL * v8);
      v7 = *(_DWORD *)(*(_QWORD *)a1 + 8LL);
    }
  }
  else
  {
    v7 = *(_DWORD *)(*(_QWORD *)a1 + 8LL);
    v8 = 1;
    v9 = (__int64 *)src;
  }
  v10 = v7 + 64;
  v37 = 1;
  v30 = a1 + 8;
  if ( v10 > 0x7F )
  {
    v37 = v10 >> 6;
    v30 = *(_QWORD *)(a1 + 8);
  }
  v11 = a2 + 8;
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)a2 + 8LL) + 64) > 0x7F )
    v11 = *(_QWORD *)(a2 + 8);
  sub_2209FD0(v9, v30, v11, v37, v37);
  v12 = sub_2209890(v9, v8);
  v13 = 0;
  v14 = *(_DWORD *)(a1 + 16) + *(_DWORD *)(a2 + 16) + 2;
  v15 = v12 + 1;
  *(_DWORD *)(a1 + 16) = v14;
  if ( !a4 && (*(_BYTE *)(a3 + 20) & 7) != 3 )
  {
    v16 = *(const __m128i **)a1;
    v17 = *(_QWORD *)(a1 + 8);
    v42 = 0;
    LOWORD(v43) = 257;
    v36 = v17;
    v18 = v16;
    BYTE2(v43) = 1;
    if ( v6 != v15 )
    {
      v38 = v12;
      sub_220A060(v9);
      v18 = *(const __m128i **)a1;
      *(_DWORD *)(a1 + 16) += v38 - v6 + 1;
    }
    v41 = _mm_loadu_si128(v18);
    v19 = v18[1].m128i_i64[0];
    v41.m128i_i32[2] = v6 + 1;
    v42 = v19;
    v43 = v18[1].m128i_i32[2];
    v20 = *(_QWORD *)a3;
    if ( v8 == 1 )
    {
      v29 = *v9;
      *(_QWORD *)a1 = &v41;
      *(_QWORD *)(a1 + 8) = v29;
      sub_21F9140(v40, v20);
      sub_21F9190((__int64)v40, a3);
      sub_21FDAB0((__int64)v40, &v41, 0, &v39);
      sub_21F9D00(v40, 1u);
      v13 = sub_21FA1B0(a1, (__int64)v40, 0);
      *v9 = *(_QWORD *)(a1 + 8);
    }
    else
    {
      *(_QWORD *)(a1 + 8) = v9;
      *(_QWORD *)a1 = &v41;
      sub_21F9140(v40, v20);
      sub_21F9190((__int64)v40, a3);
      sub_21FDAB0((__int64)v40, &v41, 0, &v39);
      sub_21F9D00(v40, 1u);
      v13 = sub_21FA1B0(a1, (__int64)v40, 0);
    }
    *(_QWORD *)(a1 + 8) = v36;
    *(_QWORD *)a1 = v16;
    v32 = sub_2209890(v9, v8) + 1;
    sub_21F9170(v40);
    v14 = *(_DWORD *)(a1 + 16);
    v15 = v32;
  }
  *(_DWORD *)(a1 + 16) = ~v5 + v14;
  if ( v15 > v5 )
  {
    v21 = v15;
    v22 = v15 + 63;
    v23 = v21 - v5;
    v24 = v22 >> 6;
    v25 = v22 <= 0x7F;
    v26 = 1;
    if ( !v25 )
      v26 = v24;
    v35 = v26;
    v33 = sub_21F8B90((__int64)v9, v26, v23);
    sub_220A970(v9, v35, v23);
    v27 = v33;
    if ( !v13 )
      goto LABEL_20;
    if ( !v33 )
    {
      v27 = 1;
LABEL_20:
      *(_DWORD *)(a1 + 16) += v23;
      v13 = v27;
      goto LABEL_21;
    }
    if ( v33 == 2 )
      v27 = 3;
    *(_DWORD *)(a1 + 16) += v23;
    v13 = v27;
  }
LABEL_21:
  sub_2209710(v30, v9);
  if ( v8 > 4 )
    operator delete[](v9);
  return v13;
}
