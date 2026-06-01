__int64 __fastcall sub_18FEE30(_QWORD *a1, unsigned __int8 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  unsigned int v6; // ebp
  unsigned int v8; // eax
  void *v9; // rsi
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // [rsp+8h] [rbp-40h]
  void *v13; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+18h] [rbp-30h]

  v5 = (unsigned int)a3;
  v6 = a4;
  v8 = sub_AAC1F0(*(_QWORD *)(*a1 + 248LL), *(_QWORD *)(*(_QWORD *)(*a1 + 248LL) + 18720LL), a3, a4, a5);
  v14 = v8;
  if ( v8 > 0x40 )
  {
    sub_2205470(&v13, v5, 1);
  }
  else
  {
    v9 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v8) & v5);
    if ( !v8 )
      v9 = nullptr;
    v13 = v9;
  }
  v10 = sub_C0C5D0(*(_QWORD **)(*a1 + 248LL), (__int64)&v13, *(_QWORD *)(*(_QWORD *)(*a1 + 248LL) + 18720LL), v6);
  result = sub_1E6EEC0(*a1, a2, v10, v6);
  if ( v14 > 0x40 )
  {
    if ( v13 )
    {
      v12 = result;
      operator delete[](v13);
      return v12;
    }
  }
  return result;
}
