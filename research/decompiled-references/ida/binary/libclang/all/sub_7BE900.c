unsigned __int64 __fastcall sub_7BE900(__int64 a1, __int64 *a2, char a3)
{
  char v3; // r12
  __int64 *v4; // rbp
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  unsigned __int64 result; // rax
  __int64 v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rax

  while ( 1 )
  {
    v3 = a3;
    v4 = a2;
    v5 = a1;
    v6 = *(_QWORD *)(a1 + 120);
    if ( !v6 )
      break;
    if ( v6 <= 7 )
      return 0;
LABEL_3:
    v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v7 + 72) & 1) != 0 )
    {
      sub_7B7DB0(a1);
      v14 = *(_QWORD *)(a1 + 120);
      if ( !v14 )
      {
        sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
        v14 = *(_QWORD *)(a1 + 120);
      }
      if ( v14 <= 7 || (v16 = v14 & 0xFFFFFFFFFFFFFFF8LL, (v8 = *(_QWORD *)v16) == 0) )
      {
LABEL_17:
        v13 = *a2;
        if ( v3 )
          goto LABEL_11;
        goto LABEL_18;
      }
      if ( (*(_BYTE *)(v16 + 72) & 1) != 0 )
        sub_7B7DB0(a1);
    }
    else
    {
      v8 = *(_QWORD *)v7;
      if ( !*(_QWORD *)v7 )
        goto LABEL_17;
    }
    v9 = sub_798D40(a1);
    v10 = sub_6C1B40(v9, v8);
    if ( !v10 )
      goto LABEL_17;
    v11 = *a2;
    if ( v3 )
    {
      result = sub_7BD3E0(v10, v11, 1);
      if ( result )
        return result;
      v13 = *v4;
LABEL_11:
      result = sub_7BD5C0(v5, v13);
LABEL_12:
      if ( result )
        return result;
      goto LABEL_20;
    }
    result = sub_7BD3E0(v10, v11, 0);
    if ( result )
      return result;
    v13 = *v4;
LABEL_18:
    result = sub_7BD4E0(v5, v13);
    if ( result )
      return result;
    if ( !sub_7BACE0(v5) )
    {
      result = sub_7BE5A0(v5, *v4, 1, 0, 1, 0);
      if ( result )
        return result;
      result = sub_7BE900(v5, v4, 1);
      goto LABEL_12;
    }
LABEL_20:
    if ( !sub_7BACE0(v5) )
      return 0;
    v15 = sub_7BACE0(v5);
    a3 = v3;
    a2 = v4;
    a1 = v15;
  }
  sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
  v6 = *(_QWORD *)(a1 + 120);
  if ( v6 > 7 )
    goto LABEL_3;
  return 0;
}

