void __fastcall sub_FCA1B0(_QWORD *a1, int a2, unsigned __int8 *a3, int a4, _QWORD *a5)
{
  unsigned __int8 *v5; // r10
  unsigned __int8 *v8; // rdi
  int v9; // r9d
  unsigned __int8 v10; // dl
  unsigned __int8 *v11; // rax
  unsigned __int8 *v12; // rax
  unsigned __int8 *v13; // r10
  unsigned __int8 *v14; // r11
  __int64 v15; // rax
  unsigned __int8 v16; // dl
  __int64 v17; // r8
  unsigned __int8 *v18; // rax

  v5 = a3;
  v8 = &a3[a4];
  if ( !a2 )
    goto LABEL_11;
  do
  {
    while ( v8 == v5 )
    {
LABEL_10:
      v5 = v8 + 1;
      if ( !--a2 )
        goto LABEL_11;
    }
    v9 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = *v5;
        v11 = v5 + 1;
        if ( !v9 )
          break;
        if ( v10 != 125 )
          goto LABEL_5;
        --v9;
        ++v5;
        if ( v8 == v11 )
          goto LABEL_10;
      }
      if ( v10 == 124 )
      {
        ++v5;
        goto LABEL_23;
      }
LABEL_5:
      if ( v10 == 37 )
        break;
LABEL_6:
      v5 = v11;
      if ( v8 == v11 )
        goto LABEL_10;
    }
    if ( v8 == v11 )
    {
      v5 += 2;
      goto LABEL_23;
    }
    if ( (*(_WORD *)&byte_2411740[2 * v5[1]] & 0x388) != 0 )
    {
      v11 = v5 + 2;
      goto LABEL_6;
    }
    v14 = v5 + 2;
    if ( v8 == v5 + 2 )
    {
      v5 += 3;
      goto LABEL_23;
    }
    v15 = v5[2];
    v16 = v5[2];
    if ( (byte_2411740[2 * v15] & 8) != 0 || (_BYTE)v15 == 123 )
    {
      v18 = v5 + 2;
LABEL_26:
      v11 = v18 + 1;
      v9 += v16 == 123;
      goto LABEL_6;
    }
    while ( 1 )
    {
      v18 = v14 + 1;
      if ( v8 == v14 + 1 )
        break;
      v17 = *++v14;
      v16 = v17;
      if ( (byte_2411740[2 * v17] & 8) != 0 || (_BYTE)v17 == 123 )
        goto LABEL_26;
    }
    v5 = v14 + 2;
LABEL_23:
    --a2;
  }
  while ( a2 );
LABEL_11:
  v12 = sub_FC5B00(v5, v8, 124);
  sub_FC80A0(a1, v13, v12, a5);
}
