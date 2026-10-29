__int64 __fastcall sub_1F9DF20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __m128 v6; // xmm0
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rax
  char *v12; // rcx
  void **v13; // rdx
  __int64 v14; // rbx
  char *v15; // r8
  _QWORD *v16; // rsi
  double v18[2]; // [rsp+0h] [rbp-328h] BYREF
  __m128 v19; // [rsp+10h] [rbp-318h] BYREF
  void **v20; // [rsp+20h] [rbp-308h]
  void *v21; // [rsp+28h] [rbp-300h]
  __int64 v22; // [rsp+30h] [rbp-2F8h]
  _BYTE v23[128]; // [rsp+38h] [rbp-2F0h] BYREF
  void *ptr; // [rsp+B8h] [rbp-270h]
  __int64 v25; // [rsp+C0h] [rbp-268h]
  _BYTE v26[40]; // [rsp+C8h] [rbp-260h] BYREF
  void *v27[2]; // [rsp+F0h] [rbp-238h] BYREF
  _BYTE v28[552]; // [rsp+100h] [rbp-228h] BYREF

  *(_QWORD *)&v18[0] = a2;
  *(_QWORD *)&v18[1] = a1;
  v27[0] = v28;
  v27[1] = (void *)0x4000000000LL;
  v6 = _mm_loadh_ps(v18);
  v21 = v23;
  v22 = 0x1000000000LL;
  ptr = v26;
  v25 = 0x800000000LL;
  v19 = v6;
  v20 = v27;
  sub_9B9C90((__int64)v27, a4);
  v7 = a3 + 24 * a4;
  while ( v7 != a3 )
  {
    v8 = a3;
    a3 += 24;
    sub_1F9DE70((__int64 *)&v19, v8);
  }
  v9 = *(_QWORD *)(v19.m128_u64[1] + 16);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 24) + 8LL);
  v11 = sub_A1F730(v9);
  v12 = (char *)ptr;
  v13 = v20;
  v14 = *(unsigned int *)(v9 + 48) + 8 * (v11 + v10);
  v15 = (char *)ptr + 4 * (unsigned int)v25;
  if ( ptr == v15 )
  {
    v13 = v20;
  }
  else
  {
    do
    {
      v16 = (char *)*v13 + 8 * *(unsigned int *)v12;
      if ( *v16 )
      {
        *v16 = v14 - *v16;
        v13 = v20;
      }
      v12 += 4;
    }
    while ( v15 != v12 );
  }
  LODWORD(v25) = 0;
  sub_1F6E900(*(_QWORD *)(v19.m128_u64[1] + 16), 0x7Au, (__int64)v13);
  sub_1FCF3C0(&v19);
  if ( ptr != v26 )
    free(ptr);
  if ( v21 != v23 )
    free(v21);
  if ( v27[0] != v28 )
    free(v27[0]);
  return v14;
}
