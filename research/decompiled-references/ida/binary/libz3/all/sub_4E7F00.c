__int64 __fastcall sub_4E7F00(__int64 *a1)
{
  __int64 v1; // r13
  int v2; // eax
  int v3; // esi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r12
  bool v7; // zf
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v11; // [rsp+8h] [rbp-38h] BYREF
  __int64 v12; // [rsp+10h] [rbp-30h] BYREF
  __int64 v13; // [rsp+18h] [rbp-28h]

  v1 = a1[5];
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1[1] + 40) + 16LL))(*(_QWORD *)(a1[1] + 40));
  v12 = 0;
  v3 = v2;
  v4 = a1[4];
  v13 = v1;
  v11 = v4;
  v5 = sub_15D2D60(v1, v3, 10, 0, 0, 1, (__int64)&v11, 0);
  if ( v5 )
    ++*(_DWORD *)(v5 + 8);
  (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64 *, __int64 *))(**(_QWORD **)(a1[1] + 40) + 24LL))(
    *(_QWORD *)(a1[1] + 40),
    v5,
    1,
    &v11,
    &v12);
  v6 = sub_186B270(0x60u);
  sub_4E7C60(v6, a1[1], a1 + 2, v12);
  if ( v5 )
  {
    v7 = (*(_DWORD *)(v5 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v1, v5);
  }
  v8 = v12;
  if ( !v12 )
    return v6;
  v9 = v13;
  v7 = (*(_DWORD *)(v12 + 8))-- == 1;
  if ( !v7 )
    return v6;
  sub_15D7BC0(v9, v8);
  return v6;
}

