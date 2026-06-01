bool __fastcall sub_7E9330(_QWORD *a1, char **a2, __int64 a3)
{
  bool result; // al
  __int64 v4; // rax
  char *v5; // r14
  __int64 v6; // rax
  char *v7; // rdx
  char *v8; // [rsp+8h] [rbp-60h]
  char *v9; // [rsp+8h] [rbp-60h]
  char *v10; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v11[9]; // [rsp+20h] [rbp-48h] BYREF

  v11[1] = __readfsqword(0x28u);
  v10 = *a2;
  if ( __CFADD__(a3, v10) )
    return 0;
  if ( !sub_7E63E0((__int64)a1, &v10, a3) )
    return 0;
  v11[0] = v10;
  v8 = v10;
  v4 = unpack_dq(v11);
  v5 = (char *)v11[0];
  a1[15] = v4;
  v10 = v5;
  if ( v8 >= v5 )
    return 0;
  v6 = unpack_dq(v11);
  v7 = (char *)v11[0];
  a1[16] = v6;
  v10 = v7;
  v9 = v7;
  if ( v5 >= v7 )
    return 0;
  a1[17] = unpack_dq(v11);
  v10 = (char *)v11[0];
  if ( (unsigned __int64)v9 >= v11[0] )
    return 0;
  if ( !sub_7E3F30(a1 + 18, (unsigned __int64 *)&v10) )
    return 0;
  result = sub_7E3F30(a1 + 19, (unsigned __int64 *)&v10);
  if ( !result )
    return 0;
  *a2 = v10;
  return result;
}
