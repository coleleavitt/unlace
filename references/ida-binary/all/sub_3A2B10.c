__int64 __fastcall sub_3A2B10(__int64 a1, unsigned __int8 a2)
{
  const char *v2; // rdx
  bool v4; // zf
  const char *v6; // rsi
  __int64 v7; // r12
  const char *v9; // rsi
  const char *v10; // rax
  const char *v11; // r12
  const char *v12; // rdi
  const char *v13; // rsi
  __int64 v14; // [rsp+0h] [rbp-98h] BYREF
  __int64 v15; // [rsp+8h] [rbp-90h] BYREF
  const char *v16; // [rsp+10h] [rbp-88h] BYREF
  __int128 v17; // [rsp+18h] [rbp-80h]
  __int64 v18; // [rsp+30h] [rbp-68h] BYREF
  __int128 v19; // [rsp+38h] [rbp-60h]
  const char *v20; // [rsp+50h] [rbp-48h] BYREF
  __int128 v21; // [rsp+58h] [rbp-40h]
  unsigned __int64 v22; // [rsp+68h] [rbp-30h]

  v2 = &s1;
  v4 = *(_QWORD *)(a1 + 16) == 0;
  v22 = __readfsqword(0x28u);
  v17 = 0;
  v16 = nullptr;
  if ( !v4 )
    v2 = *(const char **)(a1 + 8);
  sub_169A50((__int64 *)&v16, (__int64)"$ chooser\\%s", v2);
  v6 = &s1;
  if ( (_QWORD)v17 )
    v6 = v16;
  netnode_check(&v14, v6, 0, 0);
  v7 = v14;
  if ( v14 == -1 )
  {
    v4 = *(_QWORD *)(a1 + 16) == 0;
    v18 = 0;
    v9 = &s1;
    v19 = 0;
    if ( !v4 )
      v9 = *(const char **)(a1 + 8);
    v10 = sub_17DED0(&v18, v9, 1);
    v11 = v10;
    v12 = &s1;
    if ( *(_QWORD *)(a1 + 16) )
      v12 = *(const char **)(a1 + 8);
    if ( strcmp(v12, v10) )
    {
      v21 = 0;
      v20 = nullptr;
      sub_169A50((__int64 *)&v20, (__int64)"$ chooser\\%s", v11);
      v13 = &s1;
      if ( (_QWORD)v21 )
        v13 = v20;
      netnode_check(&v15, v13, 0, 0);
      if ( v15 != -1 )
      {
        v13 = &s1;
        if ( (_QWORD)v17 )
          v13 = v16;
        netnode_rename(v15, v13, 0);
      }
      if ( v20 )
      {
        *(_QWORD *)&v21 = 0;
        qfree(v20, v13);
      }
    }
    v6 = &s1;
    if ( (_QWORD)v17 )
      v6 = v16;
    netnode_check(&v20, v6, 0, a2);
    v7 = (__int64)v20;
    if ( v18 )
    {
      *(_QWORD *)&v19 = 0;
      qfree(v18, v6);
    }
  }
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16, v6);
  }
  return v7;
}
