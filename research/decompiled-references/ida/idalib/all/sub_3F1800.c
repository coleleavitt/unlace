__int64 __fastcall sub_3F1800(__int64 a1)
{
  __int64 i; // rax
  const char *v2; // rcx
  const char *v3; // rdx
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // rax
  const char *v7; // rdx
  __int64 v8; // rsi
  _BYTE v10[8]; // [rsp+18h] [rbp-4A0h] BYREF
  void *v11; // [rsp+20h] [rbp-498h] BYREF
  __int64 v12; // [rsp+28h] [rbp-490h] BYREF
  void *v13; // [rsp+30h] [rbp-488h] BYREF
  __int128 v14; // [rsp+38h] [rbp-480h]
  void *ptr; // [rsp+50h] [rbp-468h] BYREF
  __int128 v16; // [rsp+58h] [rbp-460h]
  _BYTE v17[1032]; // [rsp+70h] [rbp-448h] BYREF
  unsigned __int64 v18; // [rsp+478h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  netnode_check(v10, "$ desktops", 0, 0);
  v13 = nullptr;
  v14 = 0;
  for ( i = sub_7BF580(v10, *(_QWORD *)(a1 + 8), &v13, 72); i > 0; i = sub_7BF600(
                                                                         v10,
                                                                         *(_QWORD *)(a1 + 8),
                                                                         &v13,
                                                                         v2,
                                                                         72) )
  {
    v3 = haystack;
    if ( (_QWORD)v14 )
      v3 = (const char *)v13;
    v4 = sub_7BF490(v10, *(_QWORD *)(a1 + 8), v3, 72);
    v5 = *(_QWORD *)(a1 + 8);
    v11 = (void *)v4;
    v12 = v4;
    ptr = nullptr;
    v16 = 0;
    if ( sub_7BEED0(&v12, v5, &ptr, 1, 0, 83) <= 0 )
    {
      if ( ptr )
      {
        *(_QWORD *)&v16 = 0;
        qfree(ptr);
      }
    }
    else
    {
      sub_7BEF30(&v12, v5, ptr, v16, 0, 83);
      if ( ptr )
      {
        *(_QWORD *)&v16 = 0;
        qfree(ptr);
      }
      v6 = sub_7BE950(&v11, *(_QWORD *)(a1 + 8), -1, v17, 1024, 83);
      if ( v6 > 0 )
        sub_7BE7C0(&v11, *(_QWORD *)(a1 + 8), -1, v17, v6, 83);
      v7 = haystack;
      if ( (_QWORD)v14 )
        v7 = (const char *)v13;
      v8 = *(_QWORD *)(a1 + 8);
      ptr = v11;
      sub_7BF4E0(v10, v8, v7, &ptr, 8, 72);
    }
    v2 = haystack;
    if ( (_QWORD)v14 )
      v2 = (const char *)v13;
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13);
  }
  return 1;
}
