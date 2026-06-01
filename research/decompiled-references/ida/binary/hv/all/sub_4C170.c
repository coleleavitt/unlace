bool __fastcall sub_4C170(__int64 a1, const void **a2, __int64 a3)
{
  char *v3; // r13
  unsigned __int64 v4; // rbx
  bool result; // al
  unsigned int v6; // r14d
  __int64 v7; // r15
  _BYTE *v8; // rdx
  _BYTE *v9; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v10[9]; // [rsp+20h] [rbp-48h] BYREF

  v10[1] = __readfsqword(0x28u);
  v3 = (char *)*a2;
  v9 = v3;
  v4 = (unsigned __int64)&v3[a3];
  if ( __CFADD__(v3, a3) )
    return 0;
  v10[0] = v3;
  v6 = sub_93BC0(v10, &v3[a3]);
  v9 = (_BYTE *)v10[0];
  if ( (unsigned __int64)v3 >= v10[0] )
    return 0;
  if ( v6 != *(_QWORD *)(a1 + 24) )
    sub_40760((__int64 *)(a1 + 16), v6);
  if ( v6 )
  {
    v7 = 0;
    while ( (unsigned __int8)sub_480B0((__int64 *)(v7 + *(_QWORD *)(a1 + 16)), (const void **)&v9, v4) )
    {
      v7 += 24;
      if ( 24LL * v6 == v7 )
        goto LABEL_11;
    }
    return 0;
  }
LABEL_11:
  result = sub_4A460(v10, (unsigned __int64 *)&v9, v4);
  if ( !result )
    return 0;
  v8 = v9;
  *(_BYTE *)(a1 + 40) = LODWORD(v10[0]) != 0;
  if ( (unsigned __int64)v8 >= v4 )
  {
    *(_BYTE *)(a1 + 41) = 0;
    return 0;
  }
  *(_BYTE *)(a1 + 41) = *v8;
  *a2 = v8 + 1;
  return result;
}

