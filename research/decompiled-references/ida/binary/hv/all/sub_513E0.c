bool __fastcall sub_513E0(__int64 a1, char **a2, __int64 a3)
{
  bool result; // al
  char *v4; // rbx
  __int64 v5; // rax
  char *v6; // r14
  char *v7; // rdx
  char *v8; // [rsp+8h] [rbp-60h]
  char *v9; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v10[9]; // [rsp+20h] [rbp-48h] BYREF

  v10[1] = __readfsqword(0x28u);
  v9 = *a2;
  if ( __CFADD__(a3, v9) )
    return 0;
  v4 = &v9[a3];
  if ( !(unsigned __int8)sub_480B0((__int64 *)a1, (const void **)&v9, (unsigned __int64)&v9[a3]) )
    return 0;
  if ( !(unsigned __int8)sub_480B0((__int64 *)(a1 + 24), (const void **)&v9, (unsigned __int64)v4) )
    return 0;
  if ( !(unsigned __int8)sub_480B0((__int64 *)(a1 + 48), (const void **)&v9, (unsigned __int64)v4) )
    return 0;
  v10[0] = v9;
  v8 = v9;
  v5 = sub_93CE0(v10, v4);
  v6 = (char *)v10[0];
  *(_QWORD *)(a1 + 72) = v5;
  v9 = v6;
  if ( v8 >= v6 )
    return 0;
  *(_QWORD *)(a1 + 80) = sub_93CE0(v10, v4);
  v9 = (char *)v10[0];
  if ( (unsigned __int64)v6 >= v10[0] )
    return 0;
  if ( !sub_4A460(v10, (unsigned __int64 *)&v9, (__int64)v4) )
    return 0;
  *(_BYTE *)(a1 + 88) = LODWORD(v10[0]) != 0;
  result = sub_4A460(v10, (unsigned __int64 *)&v9, (__int64)v4);
  if ( !result )
    return 0;
  v7 = v9;
  *(_BYTE *)(a1 + 89) = LODWORD(v10[0]) != 0;
  *a2 = v7;
  return result;
}

