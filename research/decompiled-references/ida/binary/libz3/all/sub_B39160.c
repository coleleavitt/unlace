__int64 __fastcall sub_B39160(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // rax
  bool v5; // zf
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  __int64 v10; // [rsp+8h] [rbp-30h] BYREF
  __int64 v11; // [rsp+10h] [rbp-28h] BYREF
  _QWORD v12[4]; // [rsp+18h] [rbp-20h] BYREF

  if ( *(_QWORD *)(a1 + 248) )
  {
    sub_B34CD0(a1);
    v4 = *(_QWORD *)(a1 + 448);
    v5 = *(_QWORD *)(a1 + 248) == 0;
    v6 = *(_QWORD *)(v4 + 8LL * a3);
    v7 = *(_QWORD *)(v4 + 8LL * a2);
    v9 = *(_QWORD *)(a1 + 64);
    v10 = a1 + 56;
    v11 = v7;
    v12[0] = v6;
    if ( v5 )
      std::__throw_bad_function_call();
    return (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *, __int64 *, _QWORD *))(a1 + 256))(
             a1 + 232,
             &v9,
             &v10,
             &v11,
             v12);
  }
  return result;
}

