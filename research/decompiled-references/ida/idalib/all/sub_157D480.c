__int64 __fastcall sub_157D480(
        const __m128i *a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int a4,
        __int64 a5,
        __m128i a6,
        __m128 a7)
{
  __int8 v9; // bp
  __int64 v10; // r12
  _BYTE v13[4]; // [rsp+10h] [rbp-D8h] BYREF
  unsigned int v14; // [rsp+14h] [rbp-D4h]
  int v15; // [rsp+18h] [rbp-D0h]
  int v16; // [rsp+1Ch] [rbp-CCh]
  int v17; // [rsp+20h] [rbp-C8h]
  int v18; // [rsp+24h] [rbp-C4h]
  void *v19; // [rsp+30h] [rbp-B8h]
  __int64 v20; // [rsp+40h] [rbp-A8h] BYREF
  void *ptr; // [rsp+70h] [rbp-78h]
  unsigned int v22; // [rsp+78h] [rbp-70h]
  __int64 v23; // [rsp+80h] [rbp-68h] BYREF

  v9 = a1[134].m128i_i8[8];
  a1[134].m128i_i8[8] = 1;
  sub_157A440(v13, (__int64)a1, *(double *)a6.m128i_i64, a7);
  if ( (unsigned __int8)sub_1AA8D90(*(_QWORD *)(a1[6].m128i_i64[0] + 744), v13[0], v14, ptr, v22) )
  {
    v10 = 0;
  }
  else if ( v13[0] == 19 )
  {
    v10 = sub_1572B20(a1, a2, a3, a4, a5, (__int64)v13, a6, a7);
  }
  else
  {
    v10 = sub_1AA2DC0(*(_QWORD *)(a1[6].m128i_i64[0] + 744), v13[0], v14, v15, v16, v17, v18, (__int64)ptr, v22);
  }
  if ( ptr != &v23 )
    free(ptr);
  if ( v19 != &v20 )
    free(v19);
  a1[134].m128i_i8[8] = v9;
  return v10;
}
