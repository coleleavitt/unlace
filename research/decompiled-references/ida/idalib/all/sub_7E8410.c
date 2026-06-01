bool __fastcall sub_7E8410(__int64 *a1, char **a2, __int64 a3)
{
  char *v3; // rbx
  bool v4; // cf
  char *v5; // rdx
  bool result; // al
  unsigned __int64 v7; // rbp
  __int64 v8; // rax
  char *v9; // r15
  char *v10; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v11[9]; // [rsp+20h] [rbp-48h] BYREF

  v11[1] = __readfsqword(0x28u);
  v3 = *a2;
  v10 = v3;
  v4 = __CFADD__(v3, a3);
  v5 = &v3[a3];
  if ( v4 )
    return 0;
  v11[0] = v3;
  v7 = (unsigned __int64)v5;
  v8 = unpack_dq(v11);
  v9 = (char *)v11[0];
  *a1 = v8;
  v10 = v9;
  if ( v3 >= v9 )
    return 0;
  a1[1] = unpack_dq(v11);
  v10 = (char *)v11[0];
  if ( (unsigned __int64)v9 >= v11[0] )
    return 0;
  if ( !(unsigned __int8)sub_7E1CF0(a1 + 2, (const void **)&v10, v7) )
    return 0;
  result = sub_7E63E0((__int64)(a1 + 5), &v10, v7 - (_QWORD)v10);
  if ( !result )
    return 0;
  *a2 = v10;
  return result;
}
