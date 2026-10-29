__int64 __fastcall sub_2129C30(__int64 a1, int a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 *v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  _QWORD v13[2]; // [rsp+18h] [rbp-78h] BYREF
  _QWORD v14[4]; // [rsp+28h] [rbp-68h] BYREF
  __int16 v15; // [rsp+48h] [rbp-48h]

  *(_BYTE *)(a1 + 240) = 1;
  v6 = *(_QWORD *)(a1 + 32);
  v14[0] = a4;
  v14[1] = a5;
  sub_223BFB0(v6, a2, 0, a3, (unsigned int)v14, 1, 0, 0, 1);
  v7 = *(_QWORD *)(a1 + 360);
  v8 = *(_QWORD *)(a1 + 368);
  while ( v7 != v8 )
  {
    v9 = *(__int64 **)(v8 - 8);
    v10 = *(_QWORD *)(a1 + 32);
    v14[0] = "while in macro instantiation";
    v11 = *v9;
    v8 -= 8;
    v15 = 259;
    v13[0] = 0;
    v13[1] = 0;
    sub_223BFB0(v10, v11, 3, (unsigned int)v14, (unsigned int)v13, 1, 0, 0, 1);
  }
  return 1;
}
