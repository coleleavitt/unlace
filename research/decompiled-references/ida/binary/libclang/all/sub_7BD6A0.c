__int64 __fastcall sub_7BD6A0(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // r14
  unsigned __int64 v8; // rdx
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  _QWORD *v22; // r14
  unsigned __int64 v23; // rdx
  __int64 v24; // r14
  unsigned __int64 v25; // rdx
  __int64 v26[8]; // [rsp+8h] [rbp-40h] BYREF

  v4 = *(_QWORD *)(a1 + 120);
  if ( v4 )
  {
    if ( v4 > 7 )
    {
LABEL_3:
      v5 = v4 & 0xFFFFFFFFFFFFFFF8LL;
      v6 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
      if ( a1 == v6 )
        goto LABEL_12;
      v7 = *(_QWORD *)(a1 + 96);
      v8 = *(_QWORD *)(v7 + 120);
      if ( v8 )
      {
        if ( v8 <= 7 )
          return 0;
        v10 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
        goto LABEL_8;
      }
      sub_7B9840((unsigned __int64 *)(*(_QWORD *)(v7 + 96) + 88LL), *(_QWORD *)(v7 + 96));
      if ( *(_QWORD *)(v7 + 120) <= 7u )
        return 0;
      goto LABEL_41;
    }
  }
  else
  {
    sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
    v4 = *(_QWORD *)(a1 + 120);
    if ( v4 > 7 )
      goto LABEL_3;
  }
  v22 = *(_QWORD **)(a1 + 96);
  v23 = v22[15];
  if ( v23 )
  {
    if ( v23 <= 7 )
      return 0;
    v6 = 0;
    v10 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v4 )
    {
      if ( v10 )
        return 0;
      goto LABEL_11;
    }
    goto LABEL_36;
  }
  sub_7B9840((unsigned __int64 *)(v22[12] + 88LL), v22[12]);
  if ( v22[15] <= 7u )
    return 0;
  v6 = 0;
LABEL_41:
  v24 = *(_QWORD *)(a1 + 96);
  v25 = *(_QWORD *)(v24 + 120);
  if ( v25 )
  {
    v4 = *(_QWORD *)(a1 + 120);
  }
  else
  {
    sub_7B9840((unsigned __int64 *)(*(_QWORD *)(v24 + 96) + 88LL), *(_QWORD *)(v24 + 96));
    v4 = *(_QWORD *)(a1 + 120);
    v25 = *(_QWORD *)(v24 + 120);
  }
  if ( v25 > 7 )
  {
    v10 = *(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v4 )
    {
LABEL_37:
      v11 = 0;
      if ( v4 <= 7 )
        goto LABEL_9;
      goto LABEL_8;
    }
    v22 = *(_QWORD **)(a1 + 96);
LABEL_36:
    sub_7B9840(v22 + 11, (__int64)v22);
    v4 = *(_QWORD *)(a1 + 120);
    goto LABEL_37;
  }
  if ( v4 )
  {
    v10 = 0;
    if ( v4 <= 7 )
    {
      v5 = 0;
      goto LABEL_12;
    }
LABEL_8:
    v11 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
LABEL_9:
    if ( v11 != v10 && a1 != v6 )
      return 0;
LABEL_11:
    v5 = v4 & 0xFFFFFFFFFFFFFFF8LL;
    goto LABEL_12;
  }
  v10 = 0;
  sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
  v4 = *(_QWORD *)(a1 + 120);
  if ( v4 > 7 )
    goto LABEL_8;
  v5 = 0;
LABEL_12:
  if ( (*(_BYTE *)(v5 + 72) & 1) != 0 )
    sub_7B7DB0(a1);
  v12 = sub_7BCA30(a1);
  v13 = v12;
  if ( !v12 )
    return 0;
  v14 = sub_7BD3E0(v12, a2, 1);
  v15 = v14;
  if ( !v14 || !sub_7B73C0(v14) )
  {
    v16 = *(_QWORD *)(v13 + 120);
    if ( !v16 )
    {
      sub_7B9840((unsigned __int64 *)(*(_QWORD *)(v13 + 96) + 88LL), *(_QWORD *)(v13 + 96));
      v16 = *(_QWORD *)(v13 + 120);
    }
    if ( v16 <= 7 )
    {
      v18 = 0;
    }
    else
    {
      v17 = v16 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)(v17 + 72) & 1) != 0 )
      {
        sub_7B7DB0(v13);
        v17 = *(_QWORD *)(v13 + 120) & 0xFFFFFFFFFFFFFFF8LL;
      }
      v18 = *(_QWORD *)(v17 + 56);
    }
    v26[0] = v18;
    sub_7BC620(v26);
    v19 = v26[0];
    if ( !v26[0] )
      return 0;
LABEL_24:
    v20 = sub_7BD3E0(v19, a2, 1);
    v15 = v20;
    if ( !v20 || !sub_7B73C0(v20) )
    {
      while ( 1 )
      {
        v19 = *(_QWORD *)(v19 + 128);
        if ( !v19 )
          return 0;
        if ( *(char *)(v19 + 28) >= 0 )
        {
          v21 = *(_QWORD *)(v19 + 40);
          if ( ((v21 & 7) != 0 || v21 <= 7) && (*(_BYTE *)(v19 + 8) & 6) == 0 )
            goto LABEL_24;
        }
      }
    }
  }
  if ( a3 )
    *a3 = v15;
  return 1;
}

