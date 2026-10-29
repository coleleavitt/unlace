void __fastcall sub_C3C190(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  int v7; // r8d
  int v8; // r9d
  double v9[2]; // [rsp+8h] [rbp-430h] BYREF
  char v10; // [rsp+1Fh] [rbp-419h] BYREF
  __int16 v11; // [rsp+20h] [rbp-418h] BYREF
  __int64 v12; // [rsp+28h] [rbp-410h]
  unsigned int v13; // [rsp+30h] [rbp-408h] BYREF
  char v14; // [rsp+34h] [rbp-404h]
  __m128 v15[57]; // [rsp+70h] [rbp-3C8h] BYREF
  char v16; // [rsp+403h] [rbp-35h]

  *(_QWORD *)&v9[0] = a2;
  v15[0] = _mm_loadh_ps(v9);
  v6 = sub_224AF30("EvaluateForOverflow", 19, sub_C0F850, v15, a5, a6);
  v14 &= ~1u;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  if ( !(unsigned __int8)sub_C1DA70(a1, (__int64)&v11, a2, &v10, v7, v8) )
  {
    sub_C12870(v15, a2, (__int64)&v11, 3);
    v16 = 1;
    sub_C3A500((__int64)v15, a1, &v13);
    sub_C23D80((__int64)v15, a1);
  }
  if ( v13 > 1 )
    sub_A4F8E0((int *)&v13);
  if ( v6 )
    sub_224D6D0(v6);
}
