__int64 __fastcall sub_2157700(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // r12
  __int64 v5; // r13
  void (__fastcall *v6)(__int64 *, __int64, __int64); // r15
  __int64 v7; // rax
  __int64 v8; // rax
  char v9; // dl
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  char vars8; // [rsp+8h] [rbp+8h]
  __int64 vars10[2]; // [rsp+10h] [rbp+10h] BYREF
  char vars20; // [rsp+20h] [rbp+20h]

  (*(void (__fastcall **)(__int64 *))(**(_QWORD **)(a2 + 8) + 72LL))(&vars0);
  if ( (vars8 & 1) != 0 )
  {
    v2 = vars0;
    *(_BYTE *)(a1 + 16) |= 1u;
    vars0 = 0;
    *(_QWORD *)a1 = v2;
  }
  else
  {
    v4 = *(_QWORD *)(a2 + 8);
    v5 = vars0;
    v6 = *(void (__fastcall **)(__int64 *, __int64, __int64))(*(_QWORD *)v4 + 64LL);
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 104LL))(v4);
    v6(vars10, v4, v7 + v5);
    v8 = vars10[0];
    v9 = vars20 & 1;
    if ( (vars20 & 1) != 0 )
    {
      vars10[0] = 0;
      *(_QWORD *)a1 = v8;
    }
    else
    {
      *(_QWORD *)a1 = vars10[0];
      *(_QWORD *)(a1 + 8) = vars10[1];
    }
    *(_BYTE *)(a1 + 16) = v9 | *(_BYTE *)(a1 + 16) & 0xFE;
    sub_111DFC0(vars10);
  }
  sub_A0AE70(&vars0);
  return a1;
}
