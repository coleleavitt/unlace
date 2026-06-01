__int64 *__fastcall sub_21A3560(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbp
  _QWORD v10[4]; // [rsp+0h] [rbp-78h] BYREF
  __int16 v11; // [rsp+20h] [rbp-58h]
  _QWORD v12[4]; // [rsp+30h] [rbp-48h] BYREF
  __int16 v13; // [rsp+50h] [rbp-28h]

  v5 = (__int64 *)(*(_QWORD *)(a2 + 560) + 144LL * *(unsigned int *)(a3 + 4));
  v6 = *v5;
  v7 = v5[1];
  v10[2] = ": ";
  v10[0] = a4;
  v13 = 1282;
  v11 = 773;
  v10[1] = a5;
  v12[0] = v10;
  v12[2] = v6;
  v12[3] = v7;
  v8 = operator new(0x38u);
  sub_2195A00(v8, (__int64)v12, 3);
  *a1 = v8;
  return a1;
}
