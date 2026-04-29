__int64 __fastcall sub_1FAA90(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v4; // rsi
  __int64 v6; // rbx
  __int64 v7; // rdi
  char v9; // al
  __int64 i; // rbx
  __int64 v11; // rdi
  char v12; // al
  _QWORD v13[2]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+18h] [rbp-A0h]
  _QWORD v16[2]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD *v17; // [rsp+40h] [rbp-78h]
  __int64 v18; // [rsp+48h] [rbp-70h]
  __int64 v19; // [rsp+50h] [rbp-68h]
  _QWORD v20[2]; // [rsp+58h] [rbp-60h] BYREF
  __int64 v21; // [rsp+68h] [rbp-50h] BYREF
  __int128 v22; // [rsp+70h] [rbp-48h]
  char v23; // [rsp+80h] [rbp-38h]
  unsigned __int64 v24; // [rsp+88h] [rbp-30h]

  v4 = a1[8];
  v24 = __readfsqword(0x28u);
  v17 = a1;
  v16[0] = &off_4AB5E0;
  v16[1] = 0;
  v18 = 0;
  v19 = 0;
  v20[0] = 0;
  v20[1] = 0;
  v21 = 0;
  v23 = a3;
  v22 = 0;
  sub_FD6A0(a2, v4, (__int64)v20);
  if ( a3 )
  {
    v6 = a1[7];
    if ( v6 )
    {
      while ( 1 )
      {
        v19 = v6;
        if ( v23 )
        {
          if ( *(char *)(v6 + 4) < 0 )
            goto LABEL_15;
          sub_121360((__int64)v13, (__int64)v17, v6, 0x101u);
        }
        else
        {
          sub_11DFC0((__int64)v13, (__int64)v17, v6, 0);
        }
        if ( (unsigned __int8)sub_5E200(v20, v13) )
        {
          v7 = v14;
          if ( !v14 )
            goto LABEL_8;
          goto LABEL_7;
        }
        v9 = sub_3110F0(&v21, &v14);
        v7 = v14;
        if ( v9 )
        {
          if ( !v14 )
          {
LABEL_8:
            qfree(v13[0]);
            goto LABEL_9;
          }
LABEL_7:
          v15 = 0;
          qfree(v7);
          goto LABEL_8;
        }
        if ( v14 )
        {
          v15 = 0;
          qfree(v14);
        }
        qfree(v13[0]);
LABEL_15:
        v6 = *(_QWORD *)(v6 + 16);
        if ( !v6 )
          goto LABEL_16;
      }
    }
    goto LABEL_16;
  }
  if ( (*(_BYTE *)(a2 + 48) & 1) == 0 )
    goto LABEL_16;
  for ( i = a1[6]; i; i = *(_QWORD *)(i + 8) )
  {
    v19 = i;
    if ( v23 )
    {
      if ( *(char *)(i + 4) < 0 )
        continue;
      sub_121360((__int64)v13, (__int64)v17, i, 0x101u);
    }
    else
    {
      sub_11DFC0((__int64)v13, (__int64)v17, i, 0);
    }
    if ( (unsigned __int8)sub_5E200(v20, v13) )
    {
      v11 = v14;
      if ( !v14 )
        goto LABEL_29;
      goto LABEL_28;
    }
    v12 = sub_3110F0(&v21, &v14);
    v11 = v14;
    if ( v12 )
    {
      if ( !v14 )
      {
LABEL_29:
        qfree(v13[0]);
        goto LABEL_30;
      }
LABEL_28:
      v15 = 0;
      qfree(v11);
      goto LABEL_29;
    }
    if ( v14 )
    {
      v15 = 0;
      qfree(v14);
    }
    qfree(v13[0]);
  }
  i = 0;
LABEL_30:
  if ( !(unsigned int)sub_1190A0((_BYTE *)i, v16) )
  {
LABEL_16:
    v6 = 0;
    goto LABEL_9;
  }
  v6 = v19;
LABEL_9:
  v16[0] = &off_4AB5E0;
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21);
  }
  qfree(v20[0]);
  return v6;
}
