unsigned __int64 __fastcall sub_7BDB60(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // r13
  char v7; // al
  __int64 v8; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rbx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdi
  unsigned __int64 v16; // rsi
  __int64 v17; // rax
  char v18; // dl

  v2 = *(_QWORD *)(a1 + 16);
  v3 = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v2 & 4) != 0 )
    v3 = (_QWORD *)*v3;
  v4 = sub_79A2E0((__int64)v3);
  v5 = *(_QWORD *)(a1 + 40);
  v6 = v4;
  v7 = *(_BYTE *)(v4 + 28) & 0x7F;
  if ( v7 == 19 )
  {
    v8 = *(_QWORD *)(v6 + 88);
    if ( !v8 )
      goto LABEL_26;
    result = sub_7BD3E0(*(_QWORD *)(v6 + 88), *(_QWORD *)(a1 + 40), (*(_BYTE *)(a1 + 58) & 2) != 0);
    if ( result )
      return result;
    v10 = *(_QWORD *)(v8 + 120);
    if ( !v10 )
    {
      sub_7B9840((unsigned __int64 *)(*(_QWORD *)(v8 + 96) + 88LL), *(_QWORD *)(v8 + 96));
      v10 = *(_QWORD *)(v8 + 120);
    }
    if ( v10 <= 7 )
      goto LABEL_26;
    v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v11 + 72) & 1) != 0 )
    {
      sub_7B7DB0(v8);
      v11 = *(_QWORD *)(v8 + 120) & 0xFFFFFFFFFFFFFFF8LL;
    }
    v12 = *(_QWORD *)(v11 + 56);
    if ( !v12 )
      goto LABEL_26;
    while ( 1 )
    {
      if ( *(char *)(v12 + 28) >= 0 )
      {
        v13 = *(_QWORD *)(v12 + 40);
        if ( (v13 & 7) != 0 || v13 <= 7 )
          break;
      }
      v12 = *(_QWORD *)(v12 + 128);
      if ( !v12 )
        goto LABEL_26;
    }
LABEL_15:
    result = sub_7BD3E0(v12, v5, (*(_BYTE *)(a1 + 58) & 2) != 0);
    if ( !result )
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)(v12 + 128);
        if ( !v12 )
          goto LABEL_26;
        if ( *(char *)(v12 + 28) >= 0 )
        {
          v14 = *(_QWORD *)(v12 + 40);
          if ( (v14 & 7) != 0 || v14 <= 7 )
            goto LABEL_15;
        }
      }
    }
  }
  else
  {
    if ( v7 != 20 )
      goto LABEL_26;
    v15 = *(_QWORD *)(v6 + 88);
    if ( !v15 )
      goto LABEL_26;
    v16 = *(_QWORD *)(v6 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v6 + 40) & 7) != 0 )
      v16 = 0;
    v17 = sub_7BB510(v15, v16);
    if ( !v17 || (result = sub_7BD3E0(v17, v5, (*(_BYTE *)(a1 + 58) & 2) != 0)) == 0 )
    {
LABEL_26:
      v18 = *(_BYTE *)(a1 + 58);
      if ( (v18 & 0x40) == 0 )
        return a1;
      result = sub_7BDA60(v6, v5, (v18 & 2) != 0, 1);
      if ( !result )
        return a1;
    }
  }
  return result;
}

