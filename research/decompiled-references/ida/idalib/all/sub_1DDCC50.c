__int64 __fastcall sub_1DDCC50(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 *v8; // rcx
  __int64 v9; // rax
  unsigned __int16 **v10; // rbx
  __int64 v11; // rsi
  unsigned __int16 *v12; // rbp
  __int64 result; // rax
  __int64 v14; // [rsp+0h] [rbp-58h] BYREF
  __int64 v15; // [rsp+8h] [rbp-50h]
  __int64 v16; // [rsp+10h] [rbp-48h]
  unsigned int v17; // [rsp+18h] [rbp-40h]
  __int64 v18; // [rsp+20h] [rbp-38h]
  int v19; // [rsp+28h] [rbp-30h]
  __int64 v20; // [rsp+30h] [rbp-28h]
  __int16 v21; // [rsp+38h] [rbp-20h]
  char v22; // [rsp+3Ah] [rbp-1Eh]

  v8 = *(__int64 **)(a1 + 8);
  v9 = *(_QWORD *)(a1 + 16);
  v10 = *(unsigned __int16 ***)a1;
  v11 = *v8;
  v14 = *(_QWORD *)(a1 + 24);
  v18 = v9;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 1;
  v22 = 0;
  v12 = sub_1DDC230(&v14, v11, 0, a2, a3, (__int64)v8, a7, a8);
  result = operator delete(v15, 16LL * v17, 8);
  *v10 = v12;
  return result;
}
