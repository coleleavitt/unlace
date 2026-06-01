__int64 __fastcall sub_11D8180(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdx
  _QWORD *v3; // rbx
  _QWORD *v4; // rbp
  char v5; // r13
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rbx
  _QWORD *v9; // rbp
  __int64 result; // rax
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rax
  _DWORD v15[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v15[0] = 10;
  v1 = sub_21B6DA0(a1, v15, 1);
  v2 = *(_QWORD *)(a1 + 8);
  v3 = (_QWORD *)(v2 + 8LL * (unsigned int)v1);
  v4 = (_QWORD *)(v2 + 8 * HIDWORD(v1));
  if ( v3 == v4 )
    goto LABEL_5;
  while ( !*v3 || !(unsigned __int8)sub_21B9810(*v3, 10) )
  {
    if ( v4 == ++v3 )
      goto LABEL_5;
  }
  if ( v4 == v3 )
    goto LABEL_5;
  do
  {
    v11 = *v3;
    v12 = *(_QWORD *)(*v3 + 16LL);
    if ( !v12 )
      v12 = *v3;
    ++v3;
    *(_BYTE *)(v12 + 44) |= 1u;
    if ( v3 == v4 )
      break;
    while ( !*v3 || !(unsigned __int8)sub_21B9810(*v3, 10) )
    {
      if ( v4 == ++v3 )
        goto LABEL_19;
    }
  }
  while ( v4 != v3 );
LABEL_19:
  if ( (unsigned __int8)sub_21B9810(v11, 3060) )
LABEL_5:
    v5 = 1;
  else
    v5 = sub_21B7850(a1, 241, 2999, 0);
  v15[0] = 36;
  v6 = sub_21B6DA0(a1, v15, 1);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = (_QWORD *)(v7 + 8LL * (unsigned int)v6);
  v9 = (_QWORD *)(v7 + 8 * HIDWORD(v6));
  if ( v8 == v9 )
    return (unsigned __int8)sub_10DBA30(a1);
  while ( !*v8 || !(unsigned __int8)sub_21B9810(*v8, 36) )
  {
    if ( v9 == ++v8 )
      return (unsigned __int8)sub_10DBA30(a1);
  }
  if ( v9 == v8 )
    return (unsigned __int8)sub_10DBA30(a1);
  do
  {
    v13 = *v8;
    v14 = *(_QWORD *)(*v8 + 16LL);
    if ( !v14 )
      v14 = *v8;
    ++v8;
    *(_BYTE *)(v14 + 44) |= 1u;
    if ( v8 == v9 )
      break;
    while ( !*v8 || !(unsigned __int8)sub_21B9810(*v8, 36) )
    {
      if ( v9 == ++v8 )
        goto LABEL_30;
    }
  }
  while ( v9 != v8 );
LABEL_30:
  if ( (unsigned __int8)sub_21B9810(v13, 34) )
  {
    if ( (unsigned __int8)sub_21B9810(v13, 1982) || (unsigned __int8)sub_21B9810(v13, 2016) )
      return 0;
    if ( (unsigned __int8)sub_21B9810(v13, 2028) )
      return 1;
  }
  result = 2;
  if ( !v5 )
    return 1;
  return result;
}
