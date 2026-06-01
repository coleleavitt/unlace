__int64 __fastcall sub_2661C0(__int64 *a1, __int64 a2, int a3)
{
  const char *v3; // r12
  __int64 *v4; // rbx
  double v5; // xmm0_8
  bool v6; // zf
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // [rsp+0h] [rbp-68h] BYREF
  __int64 v13; // [rsp+8h] [rbp-60h] BYREF
  const char *v14; // [rsp+10h] [rbp-58h] BYREF
  __int64 v15; // [rsp+18h] [rbp-50h]
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF
  __int128 v17; // [rsp+38h] [rbp-30h]
  unsigned __int64 v18; // [rsp+48h] [rbp-20h]

  v3 = &s1;
  v4 = a1;
  v18 = __readfsqword(0x28u);
  sub_265E80(&v14, a2, a3);
  if ( v15 )
    v3 = v14;
  v5 = 0.0;
  v16 = 0;
  if ( !a1 )
    v4 = &v16;
  v6 = *(_BYTE *)(a2 + 24) == 0;
  v17 = 0;
  if ( v6 )
  {
    a2 = (__int64)v3;
    LODWORD(v4) = reg_str_get(v4, v3, "Desktops");
  }
  else if ( (unsigned __int8)netnode_inited(0.0)
         && (netnode_check(&v12, "$ desktops", 0, 0),
             a2 = (__int64)v3,
             (v11 = netnode_hashval_long(v12, v3, 72, v8, v9, v10, v12, v13, v14)) != 0)
         && (v13 = v11, (unsigned __int8)netnode_exist(&v13)) )
  {
    a2 = (__int64)v4;
    LOBYTE(v4) = netnode_qgetblob(v13, v4, 1, 0, 1107) > 0;
  }
  else
  {
    LODWORD(v4) = 0;
  }
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    v5 = qfree(v16, (const char *)a2);
  }
  if ( v14 )
  {
    v15 = 0;
    qfree(v14, (const char *)a2, v5);
  }
  return (unsigned int)v4;
}
