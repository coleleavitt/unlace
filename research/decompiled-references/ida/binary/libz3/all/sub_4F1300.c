__int64 __fastcall sub_4F1300(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned int a4, unsigned int *a5, unsigned int *a6)
{
  char **exception; // r14
  char **v7; // r14
  __int64 v11; // r12
  void *v12; // rax
  unsigned int *v13; // rbx
  unsigned int *v14; // rsi
  unsigned int *v15; // rbx
  __int64 v16; // rax
  unsigned int v17; // ebx
  __int64 v18; // rax
  int v19; // eax
  _QWORD *v20; // rax
  unsigned int *v21; // rax
  __int64 v22; // rdx
  int v23; // r8d
  __int64 v24; // rax
  unsigned int v25; // edi
  unsigned int v27; // r9d
  size_t v28; // rsi
  unsigned int *v29; // rax
  int v30; // edi
  __int64 v31; // rax
  int v32; // eax
  bool v33; // dl
  __int64 v34; // rax
  int v35; // eax
  _QWORD *v36; // rax
  _DWORD *v37; // rbx
  unsigned int v38; // edx
  size_t v39; // rsi
  unsigned int *v40; // rax
  unsigned int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  _BYTE *v44; // rax
  bool v45; // zf
  bool v46; // al
  __int64 v47; // [rsp+0h] [rbp-90h]
  _QWORD *v48; // [rsp+8h] [rbp-88h]
  __int64 v49; // [rsp+18h] [rbp-78h]
  unsigned int *v50; // [rsp+18h] [rbp-78h]
  int v51; // [rsp+18h] [rbp-78h]
  unsigned int v52; // [rsp+18h] [rbp-78h]
  _QWORD *v53; // [rsp+20h] [rbp-70h]
  __int64 v55[10]; // [rsp+40h] [rbp-50h] BYREF

  if ( a1 != a2[1] || a1 != a3[1] )
    return 0;
  v11 = sub_186B270(0x68u);
  v48 = sub_4EC5D0(a3);
  v12 = sub_4EC5D0(a2);
  *(_QWORD *)(v11 + 8) = 0;
  v47 = (__int64)v12;
  *(_QWORD *)v11 = &off_1C4FF80;
  if ( a4 )
  {
    v13 = a5;
    v49 = a4;
    do
    {
      v14 = v13++;
      sub_4EE3A0((_QWORD *)(v11 + 8), v14);
    }
    while ( &a5[v49] != v13 );
    v15 = a6;
    *(_QWORD *)(v11 + 16) = 0;
    v53 = (_QWORD *)(v11 + 16);
    v50 = &a6[v49];
    do
      sub_4EE3A0(v53, v15++);
    while ( v15 != v50 );
  }
  else
  {
    *(_QWORD *)(v11 + 16) = 0;
    v53 = (_QWORD *)(v11 + 16);
  }
  *(_QWORD *)(v11 + 24) = 0;
  v16 = *(_QWORD *)(v47 + 16);
  if ( v16 )
    v17 = *(_DWORD *)(v16 - 4);
  else
    v17 = 0;
  v18 = v48[2];
  if ( v18 && (v19 = *(_DWORD *)(v18 - 4)) != 0 )
  {
    v51 = v17 + v19;
    v20 = (_QWORD *)sub_186B270(0x10u);
    *v20 = 2;
    v21 = (unsigned int *)(v20 + 1);
    *(_QWORD *)(v11 + 24) = v21;
    v22 = (__int64)v21;
    while ( 1 )
    {
      *v21 = v17;
      v23 = *(_DWORD *)(v22 - 4);
      ++v17;
      v24 = (unsigned int)(v23 + 1);
      *(_DWORD *)(v22 - 4) = v24;
      if ( v51 == v17 )
        break;
      v25 = *(_DWORD *)(v22 - 8);
      if ( v25 == (_DWORD)v24 )
      {
        v27 = (3 * v25 + 1) >> 1;
        v28 = 4 * v27 + 8;
        if ( 4 * v23 + 12 >= (unsigned int)v28 || v25 >= v27 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v55, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v55);
          sub_233E40((__int64)v55);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v29 = (unsigned int *)sub_186B300((void *)(v22 - 8), v28);
        v22 = (__int64)(v29 + 2);
        *(_QWORD *)(v11 + 24) = v29 + 2;
        *v29 = (3 * v25 + 1) >> 1;
        v21 = &v29[v29[1] + 2];
      }
      else
      {
        v21 = (unsigned int *)(v22 + 4 * v24);
      }
    }
    v30 = v11 + 40;
  }
  else
  {
    v22 = 0;
    LODWORD(v24) = 0;
    v30 = v11 + 40;
  }
  sub_4F9B80(v30, v47, (_DWORD)v48, a4, (_DWORD)a5, (_DWORD)a6, v24, v22);
  v31 = *(_QWORD *)(v47 + 16);
  if ( v31 )
    v32 = *(_DWORD *)(v31 - 4);
  else
    v32 = 0;
  v33 = a4 == v32;
  v34 = v48[2];
  if ( v34 )
    v35 = *(_DWORD *)(v34 - 4);
  else
    v35 = 0;
  *(_BYTE *)(v11 + 96) = v33 && a4 == v35;
  if ( a4 )
  {
    v36 = (_QWORD *)sub_186B270(0xAu);
    *v36 = 2;
    v37 = v36 + 1;
    while ( 1 )
    {
      v41 = *(v37 - 2);
      if ( v41 >= a4 )
        break;
      v38 = (3 * v41 + 1) >> 1;
      v39 = v38 + 8;
      if ( v41 + 8 >= (unsigned int)v39 || v41 >= v38 )
      {
        v7 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v55, "Overflow encountered when expanding vector");
        *v7 = (char *)off_1C63128;
        sub_2333C0(v7 + 1, v55);
        sub_233E40((__int64)v55);
        __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v52 = (3 * v41 + 1) >> 1;
      v40 = (unsigned int *)sub_186B300(v37 - 2, v39);
      v37 = v40 + 2;
      *v40 = v52;
    }
    *(v37 - 1) = a4;
    memset(v37, 0, a4);
    if ( *(_BYTE *)(v11 + 96) )
    {
      v42 = 0;
      while ( 1 )
      {
        v43 = a5[v42];
        v44 = (char *)v37 + v43;
        if ( *((_BYTE *)v37 + v43) )
          break;
        v45 = a6[v42] == (_DWORD)v43;
        *v44 = 1;
        *(_BYTE *)(v11 + 96) = v45;
        v46 = (int)v42++ + 1 < a4;
        if ( !v45 || !v46 )
          goto LABEL_36;
      }
      *(_BYTE *)(v11 + 96) = 0;
      *v44 = 1;
    }
  }
  else
  {
    v37 = nullptr;
  }
LABEL_36:
  sub_4EDDC0(v47, (_QWORD *)(v11 + 8), 0);
  sub_4EDDC0((__int64)v48, v53, 0);
  if ( v37 )
    sub_186B220(v37 - 2);
  return v11;
}

