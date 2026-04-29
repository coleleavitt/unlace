unsigned __int64 __fastcall sub_1AA220(unsigned __int8 *a1, __int64 *a2, int a3, __int64 a4)
{
  int v6; // eax
  char *v7; // rax
  char *v8; // rdx
  char *v9; // rax
  const char *v10; // rax
  char v11; // cl
  size_t v12; // rax
  __int64 v13; // r12
  size_t v14; // r13
  size_t v15; // r14
  __int64 v16; // rsi
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rax
  char v22[31]; // [rsp+0h] [rbp-68h] BYREF
  char v23; // [rsp+1Fh] [rbp-49h] BYREF
  char v24; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-40h]

  v6 = a1[33];
  v25 = __readfsqword(0x28u);
  if ( (a3 & v6) == 0 && ((unsigned __int8)a3 & a1[49]) == 0 && ((unsigned __int8)a3 & a1[65]) == 0 )
    return v25 - __readfsqword(0x28u);
  v7 = (char *)qstpncpy(v22, a4, 32);
  if ( v7 >= &v24 )
    goto LABEL_37;
  v8 = v7 + 1;
  *v7 = 40;
  if ( v7 + 1 >= &v24 )
  {
    v18 = a1[33];
    v23 = 0;
    v8 = &v23;
    if ( (a3 & v18) != 0 )
    {
LABEL_23:
      v19 = a1[49];
      v23 = 0;
      v8 = &v23;
      if ( (a3 & v19) != 0 )
      {
LABEL_24:
        v20 = a1[65];
        v23 = 0;
        if ( (a3 & v20) != 0 )
          goto LABEL_25;
        v8 = &v23;
        goto LABEL_34;
      }
      goto LABEL_8;
    }
  }
  else if ( ((unsigned __int8)a3 & a1[33]) != 0 )
  {
    v8 = v7 + 2;
    v7[1] = 108;
    if ( v7 + 2 < &v24 )
    {
      if ( ((unsigned __int8)a3 & a1[49]) == 0 )
        goto LABEL_8;
      goto LABEL_30;
    }
    goto LABEL_23;
  }
  if ( ((unsigned __int8)a3 & a1[49]) != 0 )
  {
    if ( v8 >= &v24 )
    {
      if ( !under_debugger )
LABEL_38:
        sub_37CFE0(518);
LABEL_40:
      BUG();
    }
LABEL_30:
    v9 = v8 + 1;
    *v8 = 114;
    if ( v8 + 1 < &v24 )
    {
      if ( ((unsigned __int8)a3 & a1[65]) == 0 )
      {
LABEL_11:
        v8 = v9;
        goto LABEL_12;
      }
      ++v8;
LABEL_10:
      v9 = v8 + 1;
      *v8 = 100;
      if ( v8 + 1 >= &v24 )
        goto LABEL_25;
      goto LABEL_11;
    }
    goto LABEL_24;
  }
LABEL_8:
  if ( ((unsigned __int8)a3 & a1[65]) != 0 )
  {
    if ( v8 < &v24 )
      goto LABEL_10;
LABEL_37:
    if ( !under_debugger )
      goto LABEL_38;
    goto LABEL_40;
  }
LABEL_34:
  if ( v8 >= &v24 )
  {
    if ( !under_debugger )
      sub_37CFE0(520);
    goto LABEL_40;
  }
LABEL_12:
  if ( v8 != &v23 )
  {
    v10 = ") ";
    do
    {
      v11 = *v10++;
      *v8 = v11;
      if ( !v11 )
        goto LABEL_16;
    }
    while ( ++v8 != &v23 );
  }
LABEL_25:
  v23 = 0;
LABEL_16:
  v12 = strlen(v22);
  v13 = a2[1];
  v14 = v12;
  v15 = v12;
  if ( v13 )
  {
    --v13;
    v15 = v12 + v13;
  }
  v16 = *a2;
  if ( a2[2] < v15 + 1 )
  {
    v21 = qvector_reserve(a2, v16, v15 + 1, 1);
    *a2 = v21;
    v16 = v21;
  }
  a2[1] = v15 + 1;
  *(_BYTE *)(v16 + v15) = 0;
  memmove((void *)(v13 + *a2), v22, v14);
  return v25 - __readfsqword(0x28u);
}
