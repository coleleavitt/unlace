__int64 __fastcall sub_201E10(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v4; // rsi
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rbx
  __int64 v9; // rdi
  char v11; // al
  __int64 i; // rbx
  __int64 v13; // rdi
  char v14; // al
  __int64 v15[2]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+18h] [rbp-A0h]
  _QWORD v18[2]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD *v19; // [rsp+40h] [rbp-78h]
  __int64 v20; // [rsp+48h] [rbp-70h]
  __int64 v21; // [rsp+50h] [rbp-68h]
  __int64 v22[2]; // [rsp+58h] [rbp-60h] BYREF
  __int64 v23; // [rsp+68h] [rbp-50h] BYREF
  __int128 v24; // [rsp+70h] [rbp-48h]
  char v25; // [rsp+80h] [rbp-38h]
  unsigned __int64 v26; // [rsp+88h] [rbp-30h]

  v4 = a1[8];
  v26 = __readfsqword(0x28u);
  v19 = a1;
  v18[0] = &off_4DEDE0;
  v18[1] = 0;
  v20 = 0;
  v21 = 0;
  v22[0] = 0;
  v22[1] = 0;
  v23 = 0;
  v25 = a3;
  v24 = 0;
  sub_103D60(a2, v4, (__int64)v22);
  if ( a3 )
  {
    v8 = a1[7];
    if ( v8 )
    {
      while ( 1 )
      {
        v21 = v8;
        if ( v25 )
        {
          if ( *(char *)(v8 + 4) < 0 )
            goto LABEL_15;
          sub_127A20((__int64)v15, (__int64)v19, v8, 257, v6, v7);
        }
        else
        {
          sub_124680((__int64)v15, (__int64)v19, v8, 0);
        }
        if ( (unsigned __int8)sub_64780(v22, v15) )
        {
          v9 = v16;
          if ( !v16 )
            goto LABEL_8;
          goto LABEL_7;
        }
        v11 = sub_318470(&v23, &v16);
        v9 = v16;
        if ( v11 )
        {
          if ( !v16 )
          {
LABEL_8:
            qfree(v15[0]);
            goto LABEL_9;
          }
LABEL_7:
          v17 = 0;
          qfree(v9);
          goto LABEL_8;
        }
        if ( v16 )
        {
          v17 = 0;
          qfree(v16);
        }
        qfree(v15[0]);
LABEL_15:
        v8 = *(_QWORD *)(v8 + 16);
        if ( !v8 )
          goto LABEL_16;
      }
    }
    goto LABEL_16;
  }
  if ( (*(_BYTE *)(a2 + 48) & 1) == 0 )
    goto LABEL_16;
  for ( i = a1[6]; i; i = *(_QWORD *)(i + 8) )
  {
    v21 = i;
    if ( v25 )
    {
      if ( *(char *)(i + 4) < 0 )
        continue;
      sub_127A20((__int64)v15, (__int64)v19, i, 257, v6, v7);
    }
    else
    {
      sub_124680((__int64)v15, (__int64)v19, i, 0);
    }
    if ( (unsigned __int8)sub_64780(v22, v15) )
    {
      v13 = v16;
      if ( !v16 )
        goto LABEL_29;
      goto LABEL_28;
    }
    v14 = sub_318470(&v23, &v16);
    v13 = v16;
    if ( v14 )
    {
      if ( !v16 )
      {
LABEL_29:
        qfree(v15[0]);
        goto LABEL_30;
      }
LABEL_28:
      v17 = 0;
      qfree(v13);
      goto LABEL_29;
    }
    if ( v16 )
    {
      v17 = 0;
      qfree(v16);
    }
    qfree(v15[0]);
  }
  i = 0;
LABEL_30:
  if ( !(unsigned int)sub_11F760((_BYTE *)i, v18) )
  {
LABEL_16:
    v8 = 0;
    goto LABEL_9;
  }
  v8 = v21;
LABEL_9:
  v18[0] = &off_4DEDE0;
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23);
  }
  qfree(v22[0]);
  return v8;
}
