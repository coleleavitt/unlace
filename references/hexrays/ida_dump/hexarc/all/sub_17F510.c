__int64 *__fastcall sub_17F510(__int128 a1, __int64 a2, char a3)
{
  __int128 v4; // kr00_16
  bool v5; // zf
  __int64 *i; // rbx
  __int64 v7; // rax
  char v9; // al
  __int64 v10; // rdi
  char v11; // al
  __int64 v12; // rax
  int v13; // [rsp+10h] [rbp-128h]
  __int64 v15; // [rsp+18h] [rbp-120h]
  __int64 v16; // [rsp+28h] [rbp-110h]
  _QWORD v17[2]; // [rsp+30h] [rbp-108h] BYREF
  __int64 v18[2]; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v19; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v20; // [rsp+58h] [rbp-E0h]
  __int64 v21[2]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v23; // [rsp+88h] [rbp-B0h]
  __int64 v24[2]; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v25; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v26; // [rsp+B8h] [rbp-80h]
  __int64 v27; // [rsp+D0h] [rbp-68h] BYREF
  int v28; // [rsp+D8h] [rbp-60h]
  __int64 v29; // [rsp+E0h] [rbp-58h] BYREF
  __int64 v30; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v31; // [rsp+F8h] [rbp-40h]

  v4 = a1;
  v31 = __readfsqword(0x28u);
  v5 = *(_BYTE *)a2 == 4;
  v20 = 0;
  v18[0] = 0;
  v18[1] = 0;
  v19 = 0;
  if ( v5 )
  {
    *((_QWORD *)&a1 + 1) = v18;
    sub_11D7E0(a1, *(_QWORD *)(a2 + 8) + 48LL, 0, 0xFFFF0000);
  }
  else
  {
    sub_121920(a1, v18, a2, 0);
  }
  v16 = *(_QWORD *)(a1 + 64);
  v15 = *(_QWORD *)(v16 + 1504);
  v13 = 0;
  for ( i = (__int64 *)sub_11C2E0(*(_QWORD *)(*((_QWORD *)&v4 + 1) + 8LL));
        ;
        i = (__int64 *)sub_11C310(*(_QWORD *)(*((_QWORD *)&v4 + 1) + 16LL)) )
  {
    v21[0] = 0;
    v21[1] = 0;
    v22 = 0;
    v23 = 0;
    if ( i )
      break;
LABEL_24:
    qfree(i);
    if ( v13 == 1 )
    {
      i = nullptr;
      goto LABEL_26;
    }
    v13 = 1;
  }
  while ( 1 )
  {
    v17[1] = 0;
    v17[0] = 0xFFFFFFFF00000000LL;
    sub_121360((__int64)v24, v4, (__int64)i, 1u);
    if ( (unsigned __int8)sub_17DBC0((__int64)v17, v4, (__int64)i, 0, a3) )
      break;
    if ( *(_BYTE *)a2 != 4 )
      goto LABEL_12;
    sub_11DFC0((__int64)&v27, v4, (__int64)i, 1u);
    if ( (unsigned __int8)sub_5E200(&v27, v18) )
    {
      v10 = v29;
      if ( !v29 )
        goto LABEL_35;
      goto LABEL_34;
    }
    v11 = sub_3110F0(&v29, &v19);
    v10 = v29;
    if ( v11 )
    {
      if ( !v29 )
      {
LABEL_35:
        qfree(v27);
LABEL_18:
        if ( v25 )
        {
          v26 = 0;
          qfree(v25);
        }
        qfree(v24[0]);
        sub_1166E0((__int64)v17);
LABEL_21:
        if ( v22 )
        {
          *(_QWORD *)&v23 = 0;
          qfree(v22);
        }
        i = (__int64 *)v21[0];
        goto LABEL_24;
      }
LABEL_34:
      v30 = 0;
      qfree(v10);
      goto LABEL_35;
    }
    if ( v29 )
    {
      v30 = 0;
      qfree(v29);
    }
    qfree(v27);
LABEL_16:
    if ( *(_BYTE *)a2 == 4 )
    {
      if ( (unsigned __int8)sub_5E200(v24, v18) )
        goto LABEL_18;
      v9 = sub_3110F0(&v25, &v19);
LABEL_30:
      if ( v9 )
        goto LABEL_18;
      goto LABEL_13;
    }
LABEL_12:
    sub_5DD00(v21, v24);
    sub_30F930(&v22, &v25);
    if ( (unsigned __int8)sub_5E2A0(v18, v21) )
    {
      v9 = sub_310BC0(&v22, &v19);
      goto LABEL_30;
    }
LABEL_13:
    if ( v13 )
      v7 = sub_11C310(i[2]);
    else
      v7 = sub_11C2E0(i[1]);
    i = (__int64 *)v7;
    if ( v25 )
    {
      v26 = 0;
      qfree(v25);
    }
    qfree(v24[0]);
    sub_1166E0((__int64)v17);
    if ( !i )
      goto LABEL_21;
  }
  if ( (unsigned int)sub_17CD40(v15, a2, (__int64)v17) == -1 )
    goto LABEL_16;
  if ( (unsigned __int8)sub_5E200(v24, v21) )
    goto LABEL_18;
  if ( (unsigned __int8)sub_3110F0(&v25, &v22) )
    goto LABEL_18;
  if ( *(_QWORD *)(*(_QWORD *)(v16 + 1344) + 8LL) )
  {
    v12 = i[3];
    v28 = 0;
    v27 = v12;
    if ( (sub_130FB0(v16, (__int64)&v27) & 7) != 0 )
      goto LABEL_18;
  }
  if ( v25 )
  {
    v26 = 0;
    qfree(v25);
  }
  qfree(v24[0]);
  sub_1166E0((__int64)v17);
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22);
  }
  qfree(v21[0]);
LABEL_26:
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v19);
  }
  qfree(v18[0]);
  return i;
}
