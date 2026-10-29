__int64 __fastcall sub_1A86440(_QWORD *a1, unsigned int a2, double a3, double a4)
{
  _QWORD *v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  _QWORD *v12; // rax

  v4 = (_QWORD *)sub_168B6C0((__int64)a1);
  v5 = sub_A8A2C0(v4);
  v10 = *(_QWORD *)(v5 + 48);
  if ( v10 )
    v11 = v10 & 0xFFFFFFFFFFFFFFF0LL;
  else
    v11 = sub_A7AA70((__int64)v4, v5, v6, v7, v8, v9);
  v12 = sub_A81910(v4, v11, a2);
  return sub_1E61050(*a1, v11, v12, a3, a4);
}
