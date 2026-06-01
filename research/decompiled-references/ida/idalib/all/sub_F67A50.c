__int64 __fastcall sub_F67A50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9

  v5 = *(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL;
  v6 = *(_QWORD *)v5;
  v7 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v5 + 16LL) - 35;
  if ( (unsigned int)v7 > 1 )
    v6 = sub_F62E70(v6);
  v8 = sub_9C7D40(v6, a2, v7, a4, a5);
  v9 = v8;
  if ( v8 )
  {
    v10 = sub_B8C330(v8);
    return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_A82070(v10, v9, 0, v11, v12, v13) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                     & 0xFFFFFFFFFFFFFFF0LL);
  }
  return v9;
}
