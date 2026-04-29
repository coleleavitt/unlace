unsigned __int64 __fastcall sub_370760(__int64 a1, double a2)
{
  __int64 i; // rbx
  __int64 v3; // rax
  unsigned __int8 *v4; // r12
  __int64 v5; // rbp
  __int64 v6; // r13
  unsigned __int8 *v7; // rax
  unsigned int v8; // r14d
  __int64 v10; // [rsp+10h] [rbp-498h]
  __int64 v11; // [rsp+30h] [rbp-478h] BYREF
  unsigned __int8 *v12; // [rsp+38h] [rbp-470h] BYREF
  __int64 v13; // [rsp+40h] [rbp-468h] BYREF
  __int64 v14; // [rsp+48h] [rbp-460h] BYREF
  __int64 v15; // [rsp+50h] [rbp-458h] BYREF
  __int64 v16; // [rsp+58h] [rbp-450h] BYREF
  _BYTE v17[1032]; // [rsp+60h] [rbp-448h] BYREF
  unsigned __int64 v18; // [rsp+468h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 16) )
  {
    if ( !under_debugger )
      sub_37E160(52585);
    BUG();
  }
  netnode_check(&v11, "$ vd types", 0, 0);
  if ( v11 != -1 )
  {
    for ( i = netnode_supfirst(v11, 83); i != -1; i = netnode_supnext(v11, i, 83) )
    {
      v10 = node2ea(i);
      v3 = netnode_supval(v11, i, v17, 1024, 83);
      v12 = v17;
      v13 = 0;
      v4 = &v17[v3];
      v5 = unpack_ds(&v12, &v17[v3], 1);
      v6 = unpack_ds(&v12, v4, 1);
      v7 = v12;
      v8 = 0;
      if ( v12 < v4 )
      {
        v8 = *v12;
        v7 = v12 + 1;
      }
      v12 = v7;
      v14 = v5;
      v15 = v6;
      if ( v5 && (unsigned __int8)deserialize_tinfo(&v13, 0, &v14, &v15, 0, 0) )
      {
        v16 = 0;
        if ( v8 == 3 || v8 != 1 && (unsigned int)sub_3338C0(v10, (__int64)&v16) != 2 )
          sub_36FF50(a1, v10, &v13, v8);
        clear_tinfo_t(&v16);
      }
      else
      {
        sub_68EA0((__int64)"%a: incorrect type has been skipped!\n", a2);
      }
      qfree(v5);
      qfree(v6);
      clear_tinfo_t(&v13);
    }
    netnode_kill(&v11);
  }
  return v18 - __readfsqword(0x28u);
}
