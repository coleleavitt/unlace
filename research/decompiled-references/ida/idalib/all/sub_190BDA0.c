__int64 __fastcall sub_190BDA0(__int64 a1, __int64 a2, __int64 a3, char a4, int a5, __int64 a6, double a7, __m128 a8)
{
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  int vars8; // [rsp+8h] [rbp+8h]
  __int64 vars10; // [rsp+10h] [rbp+10h] BYREF

  v12 = *(_QWORD *)(a2 + 40);
  vars8 = a5;
  vars0 = v12;
  sub_B85890(&vars10, v12);
  if ( a6 )
  {
    v17 = sub_15AB9E0(a6, *(_QWORD **)(a1 + 248), v13, v14, v15, v16);
  }
  else
  {
    v17 = 0;
    v18 = 0;
  }
  return sub_19075A0(a1, a2, a3, a4, (__int64)&vars0, 0, a7, a8, v17, v18, 0, 0);
}
