char __fastcall Z3_rcf_get_numerator_denominator(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  char v6; // bp
  _QWORD *v7; // r14
  _QWORD *v8; // r15
  int v9; // eax
  int v10; // r8d
  int v11; // r9d
  char result; // al
  __int64 v13; // [rsp+18h] [rbp-50h] BYREF
  __int64 v14; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+28h] [rbp-40h] BYREF

  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v6 )
  {
    sub_29F880(a1, a2);
    v7 = a4;
    v8 = a3;
  }
  else
  {
    v7 = nullptr;
    v8 = nullptr;
  }
  *(_DWORD *)(a1 + 1520) = 0;
  v13 = 0;
  v14 = 0;
  v9 = sub_24F090(a1);
  v15 = a2;
  sub_16FE410(v9, (unsigned int)&v15, (unsigned int)&v13, (unsigned int)&v14, v10, v11);
  *a3 = v13;
  result = v14;
  *a4 = v14;
  if ( v6 )
  {
    if ( v8 )
      v8 = (_QWORD *)*v8;
    sub_2BB6A0(v8, 2);
    if ( v7 )
      v7 = (_QWORD *)*v7;
    sub_2BB6A0(v7, 3);
    result = byte_1C7EBA0;
    byte_1C7EBA0 = 1;
  }
  return result;
}

