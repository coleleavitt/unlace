unsigned __int64 __fastcall sub_497A40(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5)
{
  __int64 i; // r14
  __int64 v7; // r15
  __int64 *v8; // r13
  __int64 v9; // r14
  __int64 v10; // r14
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // r13
  __int64 v15; // r15
  __int64 v16; // [rsp+8h] [rbp-230h]
  __int64 v19[52]; // [rsp+20h] [rbp-218h] BYREF
  __int64 v20; // [rsp+1C0h] [rbp-78h]
  _BYTE v21[16]; // [rsp+1D0h] [rbp-68h] BYREF
  __int64 v22; // [rsp+1E0h] [rbp-58h]
  int (__fastcall *v23)(_BYTE *, __int64, __int64 *); // [rsp+1E8h] [rbp-50h]
  unsigned __int64 v24; // [rsp+1F8h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v16 = (a3 - 1) / 2;
  if ( a2 >= v16 )
  {
    v7 = a2;
  }
  else
  {
    for ( i = a2; ; i = v7 )
    {
      v7 = 2 * i + 2;
      v8 = (__int64 *)(a1 + 424 * v7);
      if ( !*(_QWORD *)(a5 + 16) )
        std::__throw_bad_function_call();
      if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a5 + 24))(a5, a1 + 424 * v7, a1 + 424 * v7 - 424) < 0 )
      {
        v7 = 2 * i + 1;
        v8 = (__int64 *)(a1 + 424 * v7);
      }
      v9 = a1 + 424 * i;
      sub_480260(v9, v8);
      *(_QWORD *)(v9 + 416) = v8[52];
      if ( v7 >= v16 )
        break;
    }
  }
  if ( (a3 & 1) == 0 && (a3 - 2) / 2 == v7 )
  {
    v12 = 424 * v7;
    v13 = 2 * v7 + 2;
    v7 = 2 * v7 + 1;
    v14 = a1 + v12;
    sub_480260(a1 + v12, (__int64 *)(a1 + 424 * v13 - 424));
    *(_QWORD *)(v14 + 416) = *(_QWORD *)(a1 + 424 * v13 - 424 + 416);
  }
  sub_48B040((__int64)v21, (const __m128i *)a5);
  sub_486910((__int64)v19, a4);
  v20 = a4[52];
  v10 = (v7 - 1) / 2;
  if ( v7 > a2 )
  {
    while ( 1 )
    {
      if ( !v22 )
        std::__throw_bad_function_call();
      v15 = a1 + 424 * v7;
      if ( v23(v21, a1 + 424 * v10, v19) >= 0 )
        break;
      sub_480260(v15, (__int64 *)(a1 + 424 * v10));
      *(_QWORD *)(v15 + 416) = *(_QWORD *)(a1 + 424 * v10 + 416);
      v7 = v10;
      if ( a2 >= v10 )
      {
        v15 = a1 + 424 * v10;
        break;
      }
      v10 = (v10 - 1) / 2;
    }
  }
  else
  {
    v15 = a1 + 424 * v7;
  }
  sub_480260(v15, v19);
  *(_QWORD *)(v15 + 416) = v20;
  sub_481890((__int64)v19);
  sub_374250((__int64)v21);
  return v24 - __readfsqword(0x28u);
}

