__int64 *__fastcall sub_3E58E0(__int64 *a1, _QWORD *a2, __int64 a3, int a4, __int64 *a5)
{
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rcx
  _DWORD *v13; // rdx
  __int64 *v14; // rbp
  __int64 v15; // rsi
  int v16; // eax
  __int64 *v17; // rdi
  __int64 v18; // rax
  _DWORD *v19; // rax
  unsigned int v20; // eax
  unsigned int v21; // edx
  size_t v22; // rsi
  unsigned int v23; // r13d
  unsigned int *v24; // rax
  __int64 v25; // rdx
  _DWORD *v26; // rcx
  __int64 v27; // rsi
  _QWORD *v28; // rdi
  __int64 v29; // rax
  unsigned int v31; // ecx
  size_t v32; // rsi
  unsigned int v33; // r13d
  unsigned int *v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rax
  char **v37; // rbp
  char **exception; // rbp
  __int64 v40[11]; // [rsp+10h] [rbp-58h] BYREF

  v9 = a2[1];
  *a1 = 0;
  a1[1] = v9;
  sub_1584740(a2);
  v10 = a2[20];
  if ( v10 )
    *(_DWORD *)(v10 - 4) = 0;
  v11 = a2[66];
  if ( v11 )
    *(_DWORD *)(v11 - 4) = 0;
  sub_1584740(a2 + 21);
  sub_1584740(a2 + 41);
  v12 = (_QWORD *)a2[20];
  if ( v12 )
    *((_DWORD *)v12 - 1) = 0;
  v13 = (_DWORD *)a2[66];
  if ( v13 )
    *(v13 - 1) = 0;
  if ( a4 )
  {
    v14 = &a5[a4];
    while ( v12 )
    {
      v20 = *((_DWORD *)v12 - 1);
      if ( v20 != *((_DWORD *)v12 - 2) )
      {
        v15 = v20;
        v16 = v20 + 1;
        v17 = &v12[v15];
        goto LABEL_12;
      }
      v21 = (3 * v20 + 1) >> 1;
      v22 = 8 * v21 + 8;
      v23 = v21;
      if ( 8 * v20 + 8 >= (unsigned int)v22 || v20 >= v21 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_3D2D40(v40, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v40);
        sub_233E40((__int64)v40);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v24 = (unsigned int *)sub_186B300(v12 - 1, v22);
      v25 = v24[1];
      v26 = v24 + 2;
      v27 = *a5;
      *v24 = v23;
      a2[20] = v24 + 2;
      LODWORD(v24) = v25;
      v28 = &v26[2 * v25];
      v13 = (_DWORD *)a2[66];
      *v28 = v27;
      *(v26 - 1) = (_DWORD)v24 + 1;
      if ( !v13 )
      {
LABEL_22:
        v29 = sub_186B270(0x10u);
        v13 = (_DWORD *)(v29 + 8);
        *(_QWORD *)v29 = 2;
        ++a5;
        a2[66] = v29 + 8;
        *(_DWORD *)(v29 + 8) = a4;
        ++*(_DWORD *)(v29 + 4);
        if ( v14 == a5 )
          goto LABEL_23;
        goto LABEL_16;
      }
LABEL_13:
      v18 = (unsigned int)*(v13 - 1);
      if ( (_DWORD)v18 == *(v13 - 2) )
      {
        v31 = (unsigned int)(3 * v18 + 1) >> 1;
        v32 = 4 * v31 + 8;
        v33 = v31;
        if ( 4 * (int)v18 + 8 >= (unsigned int)v32 || (unsigned int)v18 >= v31 )
        {
          v37 = (char **)__cxa_allocate_exception(0x28u);
          sub_3D2D40(v40, "Overflow encountered when expanding vector");
          *v37 = (char *)off_1C63128;
          sub_2333C0(v37 + 1, v40);
          sub_233E40((__int64)v40);
          __cxa_throw(v37, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v34 = (unsigned int *)sub_186B300(v13 - 2, v32);
        v13 = v34 + 2;
        *v34 = v33;
        v35 = v34[1];
        a2[66] = v13;
        v19 = &v13[v35];
      }
      else
      {
        v19 = &v13[v18];
      }
      ++a5;
      *v19 = a4;
      ++*(v13 - 1);
      if ( v14 == a5 )
        goto LABEL_23;
LABEL_16:
      v12 = (_QWORD *)a2[20];
    }
    v36 = (_QWORD *)sub_186B270(0x18u);
    v12 = v36 + 1;
    *v36 = 2;
    v13 = (_DWORD *)a2[66];
    v16 = 1;
    a2[20] = v12;
    v17 = v12;
LABEL_12:
    *v17 = *a5;
    *((_DWORD *)v12 - 1) = v16;
    if ( !v13 )
      goto LABEL_22;
    goto LABEL_13;
  }
LABEL_23:
  sub_3E5740((__int64)a2, a3, a1, a2 + 62);
  return a1;
}

