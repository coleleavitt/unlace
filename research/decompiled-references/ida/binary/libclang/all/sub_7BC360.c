__int64 __fastcall sub_7BC360(__int64 a1, __int64 *a2, char a3, char a4)
{
  unsigned __int64 v4; // rax
  __int64 v6; // r13
  unsigned __int64 v7; // rax
  __int64 **v8; // rbx
  __int64 *v9; // r14
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 **v15; // rcx
  __int64 **v16; // r13
  __int64 **i; // r15
  __int64 *v18; // r14
  __int64 v19; // rax
  __int64 **v20; // r15
  __int64 v21; // rax
  __int64 *v22; // rbx
  __int64 v23; // rax
  char v24; // [rsp+8h] [rbp-40h]
  char v25; // [rsp+Ch] [rbp-3Ch]

  while ( 1 )
  {
    v4 = *(_QWORD *)(a1 + 120);
    v25 = a3;
    v24 = a4;
    if ( !v4 )
    {
      sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
      v4 = *(_QWORD *)(a1 + 120);
    }
    if ( v4 <= 7 )
      return 0;
    if ( (*(_BYTE *)((v4 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) == 0 )
    {
      v6 = *(_QWORD *)((v4 & 0xFFFFFFFFFFFFFFF8LL) + 16) + 8LL * *(unsigned int *)((v4 & 0xFFFFFFFFFFFFFFF8LL) + 24);
LABEL_7:
      v7 = v4 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)(v7 + 72) & 1) != 0 )
      {
        sub_7B7DB0(a1);
        v7 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
      }
      v8 = *(__int64 ***)(v7 + 16);
      goto LABEL_10;
    }
    sub_7B7DB0(a1);
    v4 = *(_QWORD *)(a1 + 120);
    v6 = *(_QWORD *)((v4 & 0xFFFFFFFFFFFFFFF8LL) + 16) + 8LL * *(unsigned int *)((v4 & 0xFFFFFFFFFFFFFFF8LL) + 24);
    if ( !v4 )
    {
      sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
      v4 = *(_QWORD *)(a1 + 120);
    }
    v8 = nullptr;
    if ( v4 > 7 )
      goto LABEL_7;
LABEL_10:
    if ( v8 != (__int64 **)v6 )
      break;
LABEL_16:
    if ( v25 )
    {
      v11 = *(_QWORD *)(a1 + 120);
      if ( !v11 )
      {
        sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
        v11 = *(_QWORD *)(a1 + 120);
      }
      if ( v11 > 7 )
      {
        v12 = v11 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_BYTE *)(v12 + 72) & 1) != 0 )
        {
          sub_7B7DB0(a1);
          v12 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
        }
        v13 = *(_QWORD *)(v12 + 56);
        if ( v13 )
        {
          while ( *(char *)(v13 + 28) < 0 || (*(_BYTE *)(v13 + 8) & 6) != 0 )
          {
            v13 = *(_QWORD *)(v13 + 128);
            if ( !v13 )
              goto LABEL_26;
          }
LABEL_31:
          v15 = *(__int64 ***)(v13 + 104);
          v16 = &v15[*(unsigned int *)(v13 + 112)];
          for ( i = v15; v16 != i; ++i )
          {
            v18 = *i;
            v19 = sub_798D40(a1);
            if ( (unsigned __int8)sub_6D4F10(v19, a2, v18) )
              return 1;
          }
          while ( 1 )
          {
            v13 = *(_QWORD *)(v13 + 128);
            if ( !v13 )
              break;
            if ( *(char *)(v13 + 28) >= 0 && (*(_BYTE *)(v13 + 8) & 6) == 0 )
              goto LABEL_31;
          }
        }
      }
    }
LABEL_26:
    if ( !sub_7BACE0(a1) )
      return 0;
    v14 = sub_7BACE0(a1);
    a4 = v24;
    a3 = v25;
    a1 = v14;
  }
  if ( v24 )
  {
    v20 = v8;
    while ( 1 )
    {
      v22 = *v20;
      v23 = sub_798D40(a1);
      if ( (unsigned __int8)sub_6D4F10(v23, a2, v22) )
        break;
      v21 = sub_798D40(a1);
      if ( (unsigned __int8)sub_6D4F10(v21, v22, a2) )
        break;
      if ( (__int64 **)v6 == ++v20 )
        goto LABEL_16;
    }
  }
  else
  {
    while ( 1 )
    {
      v9 = *v8;
      v10 = sub_798D40(a1);
      if ( (unsigned __int8)sub_6D4F10(v10, a2, v9) )
        break;
      if ( (__int64 **)v6 == ++v8 )
        goto LABEL_16;
    }
  }
  return 1;
}

