__int64 __fastcall sub_266310(__int64 a1, __int64 *a2, int a3, double a4)
{
  const char *v4; // r12
  __int64 v6; // rsi
  const char *v7; // rdx
  unsigned int v8; // ebx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // [rsp+0h] [rbp-58h] BYREF
  __int64 v16; // [rsp+8h] [rbp-50h] BYREF
  __int64 v17; // [rsp+10h] [rbp-48h] BYREF
  __int64 v18; // [rsp+18h] [rbp-40h] BYREF
  const char *v19; // [rsp+20h] [rbp-38h] BYREF
  __int64 v20; // [rsp+28h] [rbp-30h]
  unsigned __int64 v21; // [rsp+38h] [rbp-20h]

  v4 = &s1;
  v21 = __readfsqword(0x28u);
  v6 = a1;
  sub_265E80(&v19, a1, a3);
  if ( v20 )
    v4 = v19;
  if ( *(_BYTE *)(a1 + 24) )
  {
    v8 = netnode_inited(a4);
    if ( (_BYTE)v8 )
    {
      netnode_check(&v15, "$ desktops", 0, 1);
      v6 = (__int64)v4;
      v13 = netnode_hashval_long(v15, v4, 72, v10, v11, v12, v15, v16, v17);
      if ( a2 )
      {
        if ( !v13 )
          v13 = -1;
        v16 = v13;
        if ( (unsigned __int8)netnode_exist(&v16) || (v6 = 0, v8 = netnode_check(&v16, 0, 0, 1), (_BYTE)v8) )
        {
          v17 = qtime64();
          v6 = (__int64)v4;
          v18 = v16;
          if ( !(unsigned __int8)netnode_hashset(v15, v4, &v18, 8, 72) )
            goto LABEL_22;
          v14 = a2[1];
          v6 = (__int64)&s1;
          if ( v14 )
          {
            v6 = *a2;
            --v14;
          }
          if ( (unsigned __int8)netnode_setblob(v16, v6, v14, 0, 83) )
          {
            v6 = -1;
            v8 = netnode_supset(v16, -1, &v17, 8, 83);
          }
          else
          {
LABEL_22:
            v8 = 0;
          }
        }
      }
      else if ( v13 )
      {
        v18 = v13;
        netnode_kill(&v18);
        v6 = (__int64)v4;
        netnode_hashdel(v15, v4, 72);
      }
    }
  }
  else if ( a2 )
  {
    v7 = &s1;
    if ( a2[1] )
      v7 = (const char *)*a2;
    v6 = (__int64)"Desktops";
    reg_str_set(v4, "Desktops", v7);
    v8 = 1;
  }
  else
  {
    v6 = (__int64)"Desktops";
    v8 = reg_delete(v4, "Desktops");
  }
  if ( v19 )
  {
    v20 = 0;
    qfree(v19, (const char *)v6);
  }
  return v8;
}
