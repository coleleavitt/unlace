__int64 __fastcall sub_7A2060(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  __int64 v4; // rbp
  _QWORD *v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx

  v1 = sub_798D40(a1);
  v2 = sub_7A0650(a1 + 64, (v1 + 18104) | 6);
  v3 = *(_QWORD *)(a1 + 8) & 7LL;
  if ( *(char *)(a1 + 29) < 0 )
  {
    v4 = 0;
    if ( v3 )
      v4 = sub_794640(a1);
  }
  else if ( v3 )
  {
    v4 = *(_QWORD *)(a1 - 8);
  }
  else
  {
    v4 = 0;
  }
  v5 = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v2 & 4) != 0 && v5 )
    v5 = (_QWORD *)*v5;
  v6 = (__int64)v5;
  while ( 1 )
  {
    v8 = *(_QWORD *)(v6 + 8) & 7LL;
    if ( *(char *)(v6 + 29) < 0 )
      break;
    if ( v8 )
      v7 = *(_QWORD *)(v6 - 8);
    else
      v7 = 0;
LABEL_10:
    if ( v4 == v7 )
      return v6;
LABEL_11:
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 40LL))(v6);
    if ( v5 == (_QWORD *)v6 )
      v6 = 0;
  }
  v7 = 0;
  if ( !v8 )
    goto LABEL_10;
  if ( v4 != sub_794640(v6) )
    goto LABEL_11;
  return v6;
}

