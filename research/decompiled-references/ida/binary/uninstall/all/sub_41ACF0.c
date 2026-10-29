__int64 __fastcall sub_41ACF0(__int64 a1, int *a2, int a3, __int64 a4)
{
  __int64 v6; // rdi
  __int64 v7; // rdi
  char *v8; // rdx
  int v9; // eax
  char *v10; // rbp
  const char *v11; // r14
  int v12; // r15d
  const char *v13; // rbx
  __int64 v14; // r13
  __int16 v15; // dx
  bool v16; // zf
  int v17; // eax
  char v18; // al
  __int64 v19; // r12
  void *v20; // rax
  __int64 v21; // r12
  int v22; // ebx
  void *v23; // rax
  char *v24; // rax
  char *v25; // rdi
  size_t v26; // rsi
  __int64 v27; // rax
  void *v28; // rax
  int v29; // r15d
  __int64 v30; // rbx
  __int64 v31; // r12
  __int64 v32; // r13
  signed __int8 v33; // al
  __int64 *v34; // rax
  __int64 *v35; // rax
  void *v36; // rax
  __int64 *v37; // rax
  char *src; // [rsp+0h] [rbp-D8h]
  __int64 v39; // [rsp+8h] [rbp-D0h]
  char *v40; // [rsp+10h] [rbp-C8h]
  const char *v41; // [rsp+18h] [rbp-C0h]
  int *v42; // [rsp+20h] [rbp-B8h]
  __int16 v43; // [rsp+2Eh] [rbp-AAh] BYREF
  int v44; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int16 v45; // [rsp+36h] [rbp-A2h] BYREF
  int v46; // [rsp+38h] [rbp-A0h] BYREF
  int v47; // [rsp+3Ch] [rbp-9Ch] BYREF
  _BYTE v48[72]; // [rsp+40h] [rbp-98h] BYREF
  __int64 (__fastcall *v49)(_BYTE *, _QWORD, int *); // [rsp+88h] [rbp-50h]

  v42 = a2;
  if ( a3 == 2 )
  {
    v7 = *(_QWORD *)(a4 + 8);
    v47 = 4;
    v41 = " \n\t\r";
    v8 = *(char **)(v7 + 8);
    if ( v8 )
    {
LABEL_7:
      v9 = *(_DWORD *)(v7 + 16);
      v10 = v8;
      v46 = v9;
      goto LABEL_8;
    }
  }
  else
  {
    if ( a3 != 3 )
    {
      sub_458930(a2, 1, a4, "string ?splitChars?");
      return 1;
    }
    v6 = *(_QWORD *)(a4 + 16);
    if ( *(_QWORD *)(v6 + 8) )
    {
      v41 = *(const char **)(v6 + 8);
      v47 = *(_DWORD *)(v6 + 16);
    }
    else
    {
      a2 = &v47;
      v41 = (const char *)sub_47ACD0(v6, &v47);
    }
    v7 = *(_QWORD *)(a4 + 8);
    v8 = *(char **)(v7 + 8);
    if ( v8 )
      goto LABEL_7;
  }
  a2 = &v46;
  v10 = (char *)sub_47ACD0(v7, &v46);
  v9 = v46;
LABEL_8:
  v40 = &v10[v9];
  v39 = sub_47B0B0(v7, a2, v8);
  if ( !v46 )
    goto LABEL_29;
  if ( !v47 )
  {
    sub_457B90(v48, 1);
    while ( 1 )
    {
      if ( v10 >= v40 )
      {
        sub_457CE0(v48);
        goto LABEL_29;
      }
      v33 = *v10;
      if ( (unsigned __int8)*v10 <= 0xBFu )
      {
        v45 = v33;
        v29 = 1;
        v30 = v49(v48, (unsigned __int16)v33, &v44);
        if ( !v44 )
          goto LABEL_42;
      }
      else
      {
        v29 = sub_49BBC0(v10, &v45);
        v30 = v49(v48, v45, &v44);
        if ( !v44 )
        {
LABEL_42:
          v31 = *(_QWORD *)(v30 + 24);
          v32 = v29;
          goto LABEL_43;
        }
      }
      v31 = sub_496740();
      *(_DWORD *)v31 = 0;
      if ( v29 )
      {
        v32 = v29;
        v36 = (void *)sub_40FB00(v29 + 1);
        *(_QWORD *)(v31 + 8) = v36;
        memcpy(v36, v10, (unsigned int)v29);
        *(_BYTE *)(*(_QWORD *)(v31 + 8) + v29) = 0;
        *(_DWORD *)(v31 + 16) = v29;
      }
      else
      {
        v34 = off_656088;
        *(_DWORD *)(v31 + 16) = 0;
        v32 = 0;
        *(_QWORD *)(v31 + 8) = v34;
      }
      *(_QWORD *)(v31 + 24) = 0;
      *(_QWORD *)(v30 + 24) = v31;
LABEL_43:
      v10 += v32;
      sub_46FBF0(0, v39, v31);
    }
  }
  if ( v47 != 1 )
  {
    src = v10;
    v11 = &v41[v47];
    if ( v10 >= v40 )
      goto LABEL_25;
    while ( 1 )
    {
      if ( (unsigned __int8)*v10 > 0xBFu )
      {
        v12 = sub_49BBC0(v10, &v45);
      }
      else
      {
        v12 = 1;
        v45 = *v10;
      }
      v13 = v41;
      v14 = v12;
      if ( v41 >= v11 )
        goto LABEL_23;
      while ( 1 )
      {
        v18 = *v13;
        if ( *v13 > 0xBFu )
          break;
        v15 = v18;
        v16 = v45 == (unsigned __int16)v18;
        v17 = 1;
        v43 = v15;
        if ( v16 )
          goto LABEL_20;
LABEL_17:
        v13 += v17;
        if ( v13 >= v11 )
        {
          v10 += v12;
          goto LABEL_24;
        }
      }
      v17 = sub_49BBC0(v13, &v43);
      if ( v45 != v43 )
        goto LABEL_17;
LABEL_20:
      v19 = sub_496740();
      *(_DWORD *)v19 = 0;
      if ( v10 == src )
      {
        v37 = off_656088;
        *(_DWORD *)(v19 + 16) = 0;
        *(_QWORD *)(v19 + 8) = v37;
      }
      else
      {
        v20 = (void *)sub_40FB00((int)v10 - (int)src + 1);
        *(_QWORD *)(v19 + 8) = v20;
        memcpy(v20, src, (unsigned int)((_DWORD)v10 - (_DWORD)src));
        *(_BYTE *)(*(_QWORD *)(v19 + 8) + v10 - src) = 0;
        *(_DWORD *)(v19 + 16) = (_DWORD)v10 - (_DWORD)src;
      }
      *(_QWORD *)(v19 + 24) = 0;
      v14 = v12;
      sub_46FBF0(0, v39, v19);
      src = &v10[v12];
LABEL_23:
      v10 += v14;
LABEL_24:
      if ( v10 >= v40 )
      {
LABEL_25:
        v21 = sub_496740();
        *(_DWORD *)v21 = 0;
        if ( v10 != src )
        {
          v22 = (_DWORD)v10 - (_DWORD)src;
          v23 = (void *)sub_40FB00((int)v10 - (int)src + 1);
          *(_QWORD *)(v21 + 8) = v23;
          memcpy(v23, src, (unsigned int)((_DWORD)v10 - (_DWORD)src));
          *(_BYTE *)(*(_QWORD *)(v21 + 8) + v10 - src) = 0;
          goto LABEL_27;
        }
LABEL_51:
        v35 = off_656088;
        *(_DWORD *)(v21 + 16) = 0;
        *(_QWORD *)(v21 + 8) = v35;
        goto LABEL_28;
      }
    }
  }
  while ( *v10 )
  {
    v24 = strchr(v10, *v41);
    if ( !v24 )
      break;
    v25 = v10;
    v26 = (unsigned int)((_DWORD)v24 - (_DWORD)v10);
    v10 = v24 + 1;
    v27 = sub_48DF10(v25, v26);
    sub_46FBF0(0, v39, v27);
  }
  v21 = sub_496740();
  *(_DWORD *)v21 = 0;
  if ( v40 == v10 )
    goto LABEL_51;
  v22 = (_DWORD)v40 - (_DWORD)v10;
  v28 = (void *)sub_40FB00((int)v40 - (int)v10 + 1);
  *(_QWORD *)(v21 + 8) = v28;
  memcpy(v28, v10, (unsigned int)((_DWORD)v40 - (_DWORD)v10));
  *(_BYTE *)(*(_QWORD *)(v21 + 8) + v40 - v10) = 0;
LABEL_27:
  *(_DWORD *)(v21 + 16) = v22;
LABEL_28:
  *(_QWORD *)(v21 + 24) = 0;
  sub_46FBF0(0, v39, v21);
LABEL_29:
  sub_48AFD0(v42, v39);
  return 0;
}

