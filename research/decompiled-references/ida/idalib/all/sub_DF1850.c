__int64 __fastcall sub_DF1850(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rsi
  void *v8; // r14
  unsigned __int64 v9; // r13
  __int64 v10; // r12
  unsigned int v11; // r12d
  void *v12; // r15
  __int64 v13; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  __m128i v17; // [rsp+0h] [rbp-78h] BYREF
  __m128i v18; // [rsp+10h] [rbp-68h] BYREF
  void *v19; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v20; // [rsp+28h] [rbp-50h]
  char v21; // [rsp+2Ch] [rbp-4Ch]
  void *src; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-40h]

  v7 = ((unsigned __int64)a2 + 63) >> 6;
  if ( v7 == 1 )
  {
    v8 = nullptr;
    v9 = 0;
  }
  else
  {
    v15 = a1[71];
    v16 = 8 * v7;
    a1[81] += v16;
    v9 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( a1[72] >= v16 + v9 && v15 )
    {
      a1[71] = v16 + v9;
      v8 = (void *)((v15 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
    else
    {
      v8 = (void *)sub_986170((__int64)(a1 + 71), v16, v16, 3, a5, a6);
      v9 = (unsigned __int64)v8;
    }
  }
  v10 = a1[22];
  v17 = _mm_loadu_si128((const __m128i *)sub_E21760(v10, 16));
  sub_E21790(v10, 16);
  v18 = _mm_load_si128(&v17);
  sub_D4B780((__int64)&v19, (__int64)&v18, 0);
  if ( v21 )
    sub_2206D90(&src, &v19, a2);
  else
    sub_2206DE0(&src, &v19, a2);
  v11 = v23;
  v12 = src;
  if ( v20 > 0x40 && v19 )
    operator delete[](v19);
  if ( v11 > 0x40 )
  {
    memcpy(v8, v12, 8 * (((unsigned __int64)v11 + 63) >> 6));
    operator delete[](v12);
  }
  else
  {
    v9 = 0;
    if ( v11 )
      v9 = (__int64)((_QWORD)v12 << (64 - (unsigned __int8)v11)) >> (64 - (unsigned __int8)v11);
  }
  v13 = sub_E216C0(a1[22], 16);
  *(_QWORD *)v13 = v9;
  *(_DWORD *)(v13 + 8) = a2;
  return 1;
}
