__int64 __fastcall sub_D420B0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rsi
  _QWORD *v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // rax
  char *v13; // rcx
  __m128i v14; // [rsp+0h] [rbp-68h] BYREF
  __m128i v15; // [rsp+10h] [rbp-58h]
  _BYTE v16[72]; // [rsp+20h] [rbp-48h] BYREF

  sub_E23170(v16, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 224LL) + 8LL * a2));
  v2 = *(_QWORD *)(a1 + 176);
  v14 = _mm_loadu_si128((const __m128i *)sub_E21760(v2, 16));
  sub_E21790(v2, 16);
  v3 = sub_D0E230((__int64)v16);
  v15 = _mm_load_si128(&v14);
  *(_QWORD *)v3 = v15.m128i_i64[0];
  *(_DWORD *)(v3 + 8) = v15.m128i_i32[2];
  v4 = sub_D0E230((__int64)v16);
  v7 = ((unsigned __int64)*(unsigned int *)(v4 + 8) + 63) >> 6;
  if ( v7 != 1 )
  {
    v9 = *(_QWORD **)(a1 + 168);
    v10 = v4;
    v11 = 8 * v7;
    v12 = v9[16];
    v9[26] += v11;
    v13 = (char *)((v12 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v9[17] >= (unsigned __int64)&v13[v11] && v12 )
      v9[16] = &v13[v11];
    else
      v13 = (char *)sub_986170((__int64)(v9 + 16), v11, v11, 3, v5, v6);
    *(_QWORD *)v10 = memcpy(v13, *(const void **)v10, 8 * (((unsigned __int64)*(unsigned int *)(v10 + 8) + 63) >> 6));
  }
  sub_E24D00(v16);
  sub_E232A0(v16);
  return 1;
}
