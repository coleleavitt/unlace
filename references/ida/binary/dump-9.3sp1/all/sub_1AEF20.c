unsigned __int64 __fastcall sub_1AEF20(unsigned __int8 *a1, __int64 *a2, int a3)
{
  int v5; // eax
  char *v6; // rax
  char *v7; // rdx
  char *v8; // rax
  const char *v9; // rax
  char v10; // cl
  size_t v11; // rax
  __int64 v12; // r12
  size_t v13; // r13
  size_t v14; // r14
  __int64 v15; // rsi
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  char v21[31]; // [rsp+0h] [rbp-68h] BYREF
  char v22; // [rsp+1Fh] [rbp-49h] BYREF
  char v23; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]

  v5 = a1[33];
  v24 = __readfsqword(0x28u);
  if ( (a3 & v5) == 0 && ((unsigned __int8)a3 & a1[49]) == 0 && ((unsigned __int8)a3 & a1[65]) == 0 )
    return v24 - __readfsqword(0x28u);
  v6 = (char *)qstpncpy();
  if ( v6 >= &v23 )
    goto LABEL_37;
  v7 = v6 + 1;
  *v6 = 40;
  if ( v6 + 1 >= &v23 )
  {
    v17 = a1[33];
    v22 = 0;
    v7 = &v22;
    if ( (a3 & v17) != 0 )
    {
LABEL_23:
      v18 = a1[49];
      v22 = 0;
      v7 = &v22;
      if ( (a3 & v18) != 0 )
      {
LABEL_24:
        v19 = a1[65];
        v22 = 0;
        if ( (a3 & v19) != 0 )
          goto LABEL_25;
        v7 = &v22;
        goto LABEL_34;
      }
      goto LABEL_8;
    }
  }
  else if ( ((unsigned __int8)a3 & a1[33]) != 0 )
  {
    v7 = v6 + 2;
    v6[1] = 108;
    if ( v6 + 2 < &v23 )
    {
      if ( ((unsigned __int8)a3 & a1[49]) == 0 )
        goto LABEL_8;
      goto LABEL_30;
    }
    goto LABEL_23;
  }
  if ( ((unsigned __int8)a3 & a1[49]) != 0 )
  {
    if ( v7 >= &v23 )
    {
      if ( !under_debugger )
LABEL_38:
        sub_383060(518);
LABEL_40:
      BUG();
    }
LABEL_30:
    v8 = v7 + 1;
    *v7 = 114;
    if ( v7 + 1 < &v23 )
    {
      if ( ((unsigned __int8)a3 & a1[65]) == 0 )
      {
LABEL_11:
        v7 = v8;
        goto LABEL_12;
      }
      ++v7;
LABEL_10:
      v8 = v7 + 1;
      *v7 = 100;
      if ( v7 + 1 >= &v23 )
        goto LABEL_25;
      goto LABEL_11;
    }
    goto LABEL_24;
  }
LABEL_8:
  if ( ((unsigned __int8)a3 & a1[65]) != 0 )
  {
    if ( v7 < &v23 )
      goto LABEL_10;
LABEL_37:
    if ( !under_debugger )
      goto LABEL_38;
    goto LABEL_40;
  }
LABEL_34:
  if ( v7 >= &v23 )
  {
    if ( !under_debugger )
      sub_383060(520);
    goto LABEL_40;
  }
LABEL_12:
  if ( v7 != &v22 )
  {
    v9 = ") ";
    do
    {
      v10 = *v9++;
      *v7 = v10;
      if ( !v10 )
        goto LABEL_16;
    }
    while ( ++v7 != &v22 );
  }
LABEL_25:
  v22 = 0;
LABEL_16:
  v11 = strlen(v21);
  v12 = a2[1];
  v13 = v11;
  v14 = v11;
  if ( v12 )
  {
    --v12;
    v14 = v11 + v12;
  }
  v15 = *a2;
  if ( a2[2] < v14 + 1 )
  {
    v20 = qvector_reserve((__int64)a2, v15, v14 + 1, 1);
    *a2 = v20;
    v15 = v20;
  }
  a2[1] = v14 + 1;
  *(_BYTE *)(v15 + v14) = 0;
  memmove((void *)(v12 + *a2), v21, v13);
  return v24 - __readfsqword(0x28u);
}
