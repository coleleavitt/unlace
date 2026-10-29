__int64 __fastcall sub_DF23E0(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rsi
  void *v9; // r15
  unsigned __int64 v10; // r14
  __int64 v11; // r12
  unsigned int v12; // r12d
  void *v13; // r13
  void *v14; // rdi
  __int64 v15; // rax
  __int64 v17; // rax
  __int64 v18; // rsi
  __m128i v19; // [rsp+0h] [rbp-78h] BYREF
  __m128i v20; // [rsp+10h] [rbp-68h] BYREF
  void *v21; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v22; // [rsp+28h] [rbp-50h]
  char v23; // [rsp+2Ch] [rbp-4Ch]
  void *src; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v25; // [rsp+38h] [rbp-40h]

  v7 = ((unsigned __int64)a2 + 63) >> 6;
  if ( v7 == 1 )
  {
    v9 = nullptr;
    v10 = 0;
  }
  else
  {
    v17 = a1[71];
    v18 = 8 * v7;
    a1[81] += v18;
    v10 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( a1[72] >= v18 + v10 && v17 )
    {
      a1[71] = v18 + v10;
      v9 = (void *)((v17 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
    else
    {
      v9 = (void *)sub_986170((__int64)(a1 + 71), v18, v18, 3, a5, a6);
      v10 = (unsigned __int64)v9;
    }
  }
  v11 = a1[22];
  v19 = _mm_loadu_si128((const __m128i *)sub_E21760(v11, 16));
  sub_E21790(v11, 16);
  v20 = _mm_load_si128(&v19);
  sub_D47D10((__int64)&v21, (__int64)&v20, 0);
  if ( v23 )
    sub_2206D90(&src, &v21, a2);
  else
    sub_2206DE0(&src, &v21, a2);
  v12 = v25;
  v13 = src;
  if ( v22 > 0x40 && v21 )
    operator delete[](v21);
  if ( v12 > 0x40 )
  {
    memcpy(v9, v13, 8 * (((unsigned __int64)v12 + 63) >> 6));
    v14 = v13;
    v13 = (void *)v10;
    operator delete[](v14);
  }
  v15 = sub_E216C0(a1[22], 16);
  *(_QWORD *)v15 = v13;
  *(_DWORD *)(v15 + 8) = a2;
  return 1;
}
