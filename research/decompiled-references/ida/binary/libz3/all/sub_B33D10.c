__int64 __fastcall sub_B33D10(__int64 **a1, __int64 *a2, __int64 *a3)
{
  __int64 *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rcx
  bool v7; // zf
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // [rsp+0h] [rbp-28h] BYREF
  __int64 v12; // [rsp+8h] [rbp-20h] BYREF
  __int64 v13; // [rsp+10h] [rbp-18h] BYREF
  __int64 v14; // [rsp+18h] [rbp-10h] BYREF

  v3 = *a1;
  v4 = *a2;
  v5 = *a3;
  v6 = *v3;
  v13 = v4;
  v7 = v6 == 0;
  v8 = v6 + 56;
  v9 = *(_QWORD *)(v6 + 64);
  v14 = v5;
  if ( v7 )
    v8 = 0;
  v7 = v3[3] == 0;
  v11 = v9;
  v12 = v8;
  if ( v7 )
    std::__throw_bad_function_call();
  return ((__int64 (__fastcall *)(__int64 *, __int64 *, __int64 *, __int64 *, __int64 *))v3[4])(
           v3 + 1,
           &v11,
           &v12,
           &v13,
           &v14);
}

