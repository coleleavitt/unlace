__int64 __fastcall sub_4E77A0(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rdi
  bool v8; // zf
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // [rsp+8h] [rbp-38h] BYREF
  __int64 v15; // [rsp+10h] [rbp-30h] BYREF
  __int64 v16; // [rsp+18h] [rbp-28h]

  v1 = a1;
  v2 = a1[4];
  v3 = a1[5];
  v15 = 0;
  v14 = v2;
  v4 = a1[10];
  v16 = v3;
  v5 = v4;
  if ( !v4 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1[1] + 40LL) + 16LL))(*(_QWORD *)(a1[1] + 40LL));
    v11 = sub_15D2D60(v3, v10, 2, 0, 0, 1, (__int64)&v14, 0);
    v5 = v11;
    if ( v11 )
      ++*(_DWORD *)(v11 + 8);
    v12 = a1[10];
    if ( v12 )
    {
      v13 = a1[11];
      v8 = (*(_DWORD *)(v12 + 8))-- == 1;
      if ( v8 )
        sub_15D7BC0(v13, v12);
    }
    v1[10] = v5;
  }
  (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *, __int64 *))(**(_QWORD **)(v1[1] + 40LL) + 24LL))(
    *(_QWORD *)(v1[1] + 40LL),
    v5,
    1,
    &v14,
    &v15);
  v6 = v15;
  LOBYTE(v1) = *(_QWORD *)(v3 + 856) == v15;
  if ( !v15 )
    return (unsigned int)v1;
  v7 = v16;
  v8 = (*(_DWORD *)(v15 + 8))-- == 1;
  if ( !v8 )
    return (unsigned int)v1;
  sub_15D7BC0(v7, v6);
  return (unsigned int)v1;
}

