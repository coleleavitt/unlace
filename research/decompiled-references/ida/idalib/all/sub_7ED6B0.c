bool __fastcall sub_7ED6B0(__int64 a1, char **a2, __int64 a3)
{
  char *v3; // r14
  char *v4; // rbx
  bool result; // al
  unsigned int v6; // eax
  unsigned int v7; // r15d
  __int64 v8; // r14
  char *v9; // rdx
  __int64 v10; // r14
  char *v11; // rdx
  char *v12; // [rsp+0h] [rbp-68h]
  __int64 v13; // [rsp+0h] [rbp-68h]
  char *v14; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v15[9]; // [rsp+20h] [rbp-48h] BYREF

  v15[1] = __readfsqword(0x28u);
  v3 = *a2;
  v14 = v3;
  v4 = &v3[a3];
  if ( __CFADD__(v3, a3) )
    return 0;
  v15[0] = v3;
  v6 = unpack_dd(v15);
  v7 = v6;
  v14 = (char *)v15[0];
  v12 = (char *)v15[0];
  if ( (unsigned __int64)v3 >= v15[0] )
    return 0;
  v8 = v6;
  sub_7ED0A0((__int64 *)(a1 + 16), v6);
  v9 = v12;
  if ( v7 )
  {
    v13 = 160 * v8;
    v10 = 0;
    while ( sub_7E8410((__int64 *)(v10 + *(_QWORD *)(a1 + 16)), &v14, v4 - v9) )
    {
      v10 += 160;
      if ( v13 == v10 )
        goto LABEL_10;
      v9 = v14;
    }
    return 0;
  }
LABEL_10:
  result = sub_7E30F0(v15, (unsigned __int64 *)&v14);
  if ( !result )
    return 0;
  v11 = v14;
  *(_BYTE *)(a1 + 40) = LODWORD(v15[0]) != 0;
  *a2 = v11;
  return result;
}
