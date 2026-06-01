unsigned __int64 __fastcall sub_685AC0(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // al
  char v8; // r13
  __int64 v9; // rax
  __int64 *v10; // r15
  char *v11; // rsi
  char *v12; // rdx
  char *v13; // rcx
  char v14; // di
  __int64 v15; // rax
  char *v16; // rax
  __int64 v17; // [rsp+8h] [rbp-60h]
  void *dest; // [rsp+10h] [rbp-58h] BYREF
  __int128 v19; // [rsp+18h] [rbp-50h]
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v6 = sub_6855D0(a1, a2, a3);
  if ( !v6 )
    return v20 - __readfsqword(0x28u);
  v8 = v6;
  v19 = 0;
  dest = nullptr;
  if ( sub_685800(a1, (__int64 *)&dest, a2) > 0 )
  {
    v9 = ea2node(a2);
    netnode_supdel(v9, 17, 83);
    sub_685680(a1, a3, (__int64 *)&dest);
  }
  v17 = a1 + 1624;
  v10 = (__int64 *)sub_506150(a1 + 1624);
  if ( !v10 )
    goto LABEL_17;
  do
  {
    if ( sub_685800(a1, (__int64 *)&dest, *v10) <= 0 )
      goto LABEL_16;
    v11 = (char *)dest;
    v12 = (char *)dest + 8 * v19;
    v13 = (char *)dest;
    if ( dest == v12 )
      goto LABEL_16;
    v14 = 0;
    do
    {
      while ( *(_QWORD *)v13 != a2 )
      {
        v15 = v19;
        v13 += 8;
LABEL_10:
        v12 = &v11[8 * v15];
        if ( v13 == v12 )
          goto LABEL_14;
      }
      if ( a3 == -1 )
      {
        v16 = (char *)memmove(v13, v13 + 8, v12 - v13 - 8);
        v11 = (char *)dest;
        v14 = v8;
        v13 = v16;
        v15 = v19 - 1;
        *(_QWORD *)&v19 = v19 - 1;
        goto LABEL_10;
      }
      *(_QWORD *)v13 = a3;
      v14 = v8;
      v11 = (char *)dest;
      v12 = (char *)dest + 8 * v19;
    }
    while ( v13 != v12 );
LABEL_14:
    if ( v14 )
      sub_685680(a1, *v10, (__int64 *)&dest);
LABEL_16:
    v10 = (__int64 *)sub_505EB0(v17, *v10);
  }
  while ( v10 );
LABEL_17:
  if ( dest )
  {
    *(_QWORD *)&v19 = 0;
    qfree(dest);
  }
  return v20 - __readfsqword(0x28u);
}
