__int64 __fastcall sub_B34F00(__int64 a1)
{
  __int64 v1; // rax
  int v2; // ebp
  __int64 v3; // rax
  int v4; // r12d
  bool v5; // zf
  __int64 v6; // rax
  int v7; // edx
  __int64 result; // rax
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // [rsp+0h] [rbp-48h] BYREF
  __int64 v13; // [rsp+8h] [rbp-40h] BYREF

  if ( !*(_QWORD *)(a1 + 184) )
    return 0;
  sub_B34CD0(a1);
  v1 = *(_QWORD *)(a1 + 384);
  if ( v1 )
    v2 = *(_DWORD *)(v1 - 4);
  else
    v2 = 0;
  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 )
    v4 = *(_DWORD *)(v3 - 4);
  else
    v4 = 0;
  v5 = *(_QWORD *)(a1 + 184) == 0;
  v12 = *(_QWORD *)(a1 + 64);
  v13 = a1 + 56;
  if ( v5 )
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, __int64 *, __int64 *))(a1 + 192))(a1 + 168, &v12, &v13);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 184LL))(a1);
  v6 = *(_QWORD *)(a1 + 384);
  if ( v6 )
    v7 = *(_DWORD *)(v6 - 4);
  else
    v7 = 0;
  result = 1;
  if ( v2 == v7 )
  {
    v9 = *(_QWORD *)(a1 + 32);
    if ( v9 )
      v10 = *(_DWORD *)(v9 - 4);
    else
      v10 = 0;
    result = 1;
    if ( v4 == v10 )
    {
      v11 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)(v11 + 8984) == qword_1C7ED40 )
        return *(unsigned __int8 *)(v11 + 2416);
    }
  }
  return result;
}

