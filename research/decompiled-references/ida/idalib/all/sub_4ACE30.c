unsigned __int64 __fastcall sub_4ACE30(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5)
{
  __int64 i; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 *v9; // r13
  __int64 v10; // r14
  __int64 v11; // r13
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // r13
  __int64 v16; // r15
  __int64 v17; // [rsp+8h] [rbp-230h]
  __int64 *v18; // [rsp+8h] [rbp-230h]
  __int64 v21[53]; // [rsp+20h] [rbp-218h] BYREF
  __int64 v22; // [rsp+1C8h] [rbp-70h]
  _BYTE v23[16]; // [rsp+1D0h] [rbp-68h] BYREF
  void (__fastcall *v24)(_BYTE *, _BYTE *, __int64); // [rsp+1E0h] [rbp-58h]
  int (__fastcall *v25)(_BYTE *, __int64, __int64 *); // [rsp+1E8h] [rbp-50h]
  unsigned __int64 v26; // [rsp+1F8h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v17 = (a3 - 1) / 2;
  if ( a2 >= v17 )
  {
    v7 = a2;
  }
  else
  {
    for ( i = a2; ; i = v7 )
    {
      v7 = 2 * (i + 1);
      v8 = 864 * (i + 1);
      v9 = (__int64 *)(a1 + v8);
      if ( !*(_QWORD *)(a5 + 16) )
        std::__throw_bad_function_call();
      if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a5 + 24))(a5, a1 + v8, a1 + v8 - 432) < 0 )
      {
        --v7;
        v9 = (__int64 *)(a1 + 432 * v7);
      }
      v10 = a1 + 432 * i;
      sub_494DC0(v10, v9);
      *(_QWORD *)(v10 + 424) = v9[53];
      if ( v7 >= v17 )
        break;
    }
  }
  if ( (a3 & 1) == 0 && (a3 - 2) / 2 == v7 )
  {
    v13 = 6 * (v7 + 1);
    v14 = 432 * v7;
    v7 = 2 * (v7 + 1) - 1;
    v15 = a1 + v14;
    v18 = (__int64 *)(a1 + 144 * v13 - 432);
    sub_494DC0(v15, v18);
    *(_QWORD *)(v15 + 424) = v18[53];
  }
  sub_49FE20((__int64)v23, (const __m128i *)a5);
  sub_49B590((__int64)v21, a4);
  v22 = a4[53];
  v11 = (v7 - 1) / 2;
  if ( v7 > a2 )
  {
    while ( 1 )
    {
      if ( !v24 )
        std::__throw_bad_function_call();
      v16 = a1 + 432 * v7;
      if ( v25(v23, a1 + 432 * v11, v21) >= 0 )
        break;
      sub_494DC0(v16, (__int64 *)(a1 + 432 * v11));
      *(_QWORD *)(v16 + 424) = *(_QWORD *)(a1 + 432 * v11 + 424);
      v7 = v11;
      if ( a2 >= v11 )
      {
        v16 = a1 + 432 * v11;
        break;
      }
      v11 = (v11 - 1) / 2;
    }
  }
  else
  {
    v16 = a1 + 432 * v7;
  }
  sub_494DC0(v16, v21);
  *(_QWORD *)(v16 + 424) = v22;
  sub_496580((__int64)v21);
  if ( v24 )
    v24(v23, v23, 3);
  return v26 - __readfsqword(0x28u);
}
