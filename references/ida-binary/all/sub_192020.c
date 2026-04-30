unsigned __int64 __fastcall sub_192020(__int64 a1, __int64 a2)
{
  const char *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 *v7; // rbx
  __int64 v9; // [rsp+8h] [rbp-40h] BYREF
  const char *v10; // [rsp+10h] [rbp-38h] BYREF
  __int64 v11; // [rsp+18h] [rbp-30h]
  unsigned __int64 v12; // [rsp+28h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v9 = -1;
  sub_191EF0((__int64)&v10, a2);
  v2 = &s1;
  if ( v11 )
    v2 = v10;
  netnode_check(&v9, v2, 0, 1);
  if ( v10 )
  {
    v11 = 0;
    qfree(v10, v2, v3, v4, v5);
  }
  v6 = operator new(0x10u);
  *(_QWORD *)v6 = -1;
  v7 = (__int64 *)v6;
  *(_DWORD *)(v6 + 8) = 0;
  navstack_t_register_live(v6);
  *v7 = v9;
  sub_1EA4F0(a1 + 384, v7);
  return v12 - __readfsqword(0x28u);
}
