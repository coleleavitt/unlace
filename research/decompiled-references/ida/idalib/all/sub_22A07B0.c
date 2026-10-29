__int64 __fastcall sub_22A07B0(int a1, __int64 a2)
{
  char **v2; // r13
  char *v3; // r14
  char *v4; // r12
  int v5; // ebx
  const char *v6; // r8
  size_t v7; // rax
  const char *v8; // rax
  char *v9; // rax
  const char *v10; // rdx
  char *v11; // rax
  char *v12; // rdx
  _QWORD *v13; // rax
  const char *v15; // [rsp+0h] [rbp-68h]
  _UNKNOWN **v16; // [rsp+8h] [rbp-60h]
  char *v17; // [rsp+20h] [rbp-48h] BYREF
  __int64 v18; // [rsp+28h] [rbp-40h]

  if ( a1 > 23 || !a1 )
    return 0;
  v2 = off_2BEC260;
  v3 = *(char **)(a2 + 16);
  v4 = *(char **)(a2 + 8);
  v16 = &off_2BED000 + 4 * a1;
  v5 = *((_DWORD *)v16 + 5);
  do
  {
    while ( 1 )
    {
      if ( v5 >= *((_DWORD *)v2 + 4) && *((_DWORD *)v16 + 7) <= *((_DWORD *)v2 + 5) )
      {
        v6 = *v2;
        v7 = 0;
        v17 = (char *)v6;
        if ( !v6 )
          goto LABEL_7;
        goto LABEL_6;
      }
      v6 = v2[1];
      v7 = 0;
      v17 = (char *)v6;
      if ( !v6 )
        break;
LABEL_6:
      v15 = v6;
      v7 = strlen(v6);
      v6 = v15;
LABEL_7:
      v18 = v7;
      if ( v3 == v4 )
        goto LABEL_12;
LABEL_8:
      *(_QWORD *)v4 = v6;
      v2 += 3;
      v4 += 16;
      *((_QWORD *)v4 - 1) = v7;
      *(_QWORD *)(a2 + 8) = v4;
      if ( v2 == (char **)&unk_2BEC410 )
        goto LABEL_13;
    }
    v18 = 0;
    if ( v3 != v4 )
      goto LABEL_8;
LABEL_12:
    v2 += 3;
    sub_1075D80(a2, v3, &v17);
    v4 = *(char **)(a2 + 8);
    v3 = *(char **)(a2 + 16);
  }
  while ( v2 != (char **)&unk_2BEC410 );
LABEL_13:
  if ( *((int *)&off_2BED000 + 8 * a1 + 6) > 0 )
  {
    v18 = 5;
    v8 = "+neon";
    v17 = "+neon";
    if ( v4 == v3 )
      goto LABEL_24;
LABEL_15:
    *(_QWORD *)v4 = v8;
    *((_QWORD *)v4 + 1) = 5;
    v9 = v4 + 16;
    *(_QWORD *)(a2 + 8) = v4 + 16;
  }
  else
  {
    v18 = 5;
    v8 = "-neon";
    v17 = "-neon";
    if ( v4 != v3 )
      goto LABEL_15;
LABEL_24:
    sub_1075D80(a2, v3, &v17);
    v3 = *(char **)(a2 + 16);
    v9 = *(char **)(a2 + 8);
  }
  if ( *((int *)&off_2BED000 + 8 * a1 + 6) > 1 )
  {
    v18 = 5;
    v10 = "+sha2";
    v17 = "+sha2";
    if ( v9 == v3 )
      goto LABEL_29;
LABEL_18:
    *(_QWORD *)v9 = v10;
    v11 = v9 + 16;
    *((_QWORD *)v11 - 1) = 5;
    *(_QWORD *)(a2 + 8) = v11;
  }
  else
  {
    v18 = 5;
    v10 = "-sha2";
    v17 = "-sha2";
    if ( v9 != v3 )
      goto LABEL_18;
LABEL_29:
    sub_1075D80(a2, v3, &v17);
    v3 = *(char **)(a2 + 16);
    v11 = *(char **)(a2 + 8);
  }
  if ( *((int *)&off_2BED000 + 8 * a1 + 6) <= 1 )
  {
    v18 = 4;
    v12 = "-aes";
    v17 = "-aes";
    if ( v11 == v3 )
      goto LABEL_27;
LABEL_21:
    *(_QWORD *)v11 = v12;
    v13 = v11 + 16;
    *(v13 - 1) = 4;
    *(_QWORD *)(a2 + 8) = v13;
  }
  else
  {
    v18 = 4;
    v12 = "+aes";
    v17 = "+aes";
    if ( v11 != v3 )
      goto LABEL_21;
LABEL_27:
    sub_1075D80(a2, v3, &v17);
  }
  return 1;
}
