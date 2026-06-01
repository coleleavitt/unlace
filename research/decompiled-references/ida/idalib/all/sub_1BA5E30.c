__int64 __fastcall sub_1BA5E30(__int64 *a1, unsigned __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rsi
  unsigned __int64 *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rbx
  char v13; // [rsp+Fh] [rbp-59h] BYREF
  __int64 v14; // [rsp+10h] [rbp-58h] BYREF
  char v15; // [rsp+18h] [rbp-50h]
  void *ptr; // [rsp+20h] [rbp-48h] BYREF
  __int64 v17; // [rsp+28h] [rbp-40h]
  _BYTE v18[56]; // [rsp+30h] [rbp-38h] BYREF

  v4 = a2;
  v5 = *(_QWORD *)(a2 + 48);
  if ( (v5 & 4) != 0 )
  {
    v6 = v5 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v6 )
      v4 = v6;
  }
  v7 = *a1;
  v13 = 0;
  sub_14EE070((__int64)&v14, v7, 0, 1);
  v8 = *(unsigned __int64 **)(v4 + 16);
  v9 = *(_QWORD *)(v4 + 24) - (_QWORD)v8;
  ptr = v18;
  v17 = 0x400000000LL;
  if ( (unsigned __int8)sub_1BA5320(a1, v8, v9 >> 3, 0, (__int64)&ptr, &v13, a3, a4) )
    v11 = 1;
  else
    v11 = sub_1909BB0(
            *a1,
            *(_DWORD *)(v4 + 40),
            (__int64)ptr,
            (unsigned int)v17,
            *(unsigned int *)(v4 + 44),
            v10,
            (__m128i)a3,
            a4);
  if ( ptr != v18 )
    free(ptr);
  if ( v15 )
    sub_190D5E0(v14, a3);
  return v11;
}
