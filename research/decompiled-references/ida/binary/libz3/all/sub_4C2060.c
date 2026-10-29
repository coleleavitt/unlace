__int64 *__fastcall sub_4C2060(__int64 *a1, _QWORD *a2, __int64 a3, int a4, __int64 *a5)
{
  __int64 v9; // rax
  _QWORD *v10; // rcx
  _DWORD *v11; // rdx
  __int64 *v12; // rbp
  __int64 v13; // rsi
  int v14; // eax
  __int64 *v15; // rdi
  __int64 v16; // rax
  _DWORD *v17; // rax
  unsigned int v18; // eax
  unsigned int v19; // edx
  size_t v20; // rsi
  unsigned int v21; // r13d
  unsigned int *v22; // rax
  __int64 v23; // rdx
  _DWORD *v24; // rcx
  __int64 v25; // rsi
  _QWORD *v26; // rdi
  __int64 v27; // rax
  unsigned int v29; // ecx
  size_t v30; // rsi
  unsigned int v31; // r13d
  unsigned int *v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rax
  char **v35; // rbp
  char **exception; // rbp
  __int64 v38[11]; // [rsp+10h] [rbp-58h] BYREF

  v9 = a2[1];
  *a1 = 0;
  a1[1] = v9;
  sub_4B6140(a2);
  v10 = (_QWORD *)a2[20];
  if ( v10 )
    *((_DWORD *)v10 - 1) = 0;
  v11 = (_DWORD *)a2[66];
  if ( v11 )
    *(v11 - 1) = 0;
  if ( a4 )
  {
    v12 = &a5[a4];
    while ( v10 )
    {
      v18 = *((_DWORD *)v10 - 1);
      if ( v18 != *((_DWORD *)v10 - 2) )
      {
        v13 = v18;
        v14 = v18 + 1;
        v15 = &v10[v13];
        goto LABEL_8;
      }
      v19 = (3 * v18 + 1) >> 1;
      v20 = 8 * v19 + 8;
      v21 = v19;
      if ( 8 * v18 + 8 >= (unsigned int)v20 || v18 >= v19 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_4B1880(v38, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v38);
        sub_233E40((__int64)v38);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v22 = (unsigned int *)sub_186B300(v10 - 1, v20);
      v23 = v22[1];
      v24 = v22 + 2;
      v25 = *a5;
      *v22 = v21;
      a2[20] = v22 + 2;
      LODWORD(v22) = v23;
      v26 = &v24[2 * v23];
      v11 = (_DWORD *)a2[66];
      *v26 = v25;
      *(v24 - 1) = (_DWORD)v22 + 1;
      if ( !v11 )
      {
LABEL_18:
        v27 = sub_186B270(0x10u);
        v11 = (_DWORD *)(v27 + 8);
        *(_QWORD *)v27 = 2;
        ++a5;
        a2[66] = v27 + 8;
        *(_DWORD *)(v27 + 8) = a4;
        ++*(_DWORD *)(v27 + 4);
        if ( v12 == a5 )
          goto LABEL_19;
        goto LABEL_12;
      }
LABEL_9:
      v16 = (unsigned int)*(v11 - 1);
      if ( (_DWORD)v16 == *(v11 - 2) )
      {
        v29 = (unsigned int)(3 * v16 + 1) >> 1;
        v30 = 4 * v29 + 8;
        v31 = v29;
        if ( 4 * (int)v16 + 8 >= (unsigned int)v30 || (unsigned int)v16 >= v29 )
        {
          v35 = (char **)__cxa_allocate_exception(0x28u);
          sub_4B1880(v38, "Overflow encountered when expanding vector");
          *v35 = (char *)off_1C63128;
          sub_2333C0(v35 + 1, v38);
          sub_233E40((__int64)v38);
          __cxa_throw(v35, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v32 = (unsigned int *)sub_186B300(v11 - 2, v30);
        v11 = v32 + 2;
        *v32 = v31;
        v33 = v32[1];
        a2[66] = v11;
        v17 = &v11[v33];
      }
      else
      {
        v17 = &v11[v16];
      }
      ++a5;
      *v17 = a4;
      ++*(v11 - 1);
      if ( v12 == a5 )
        goto LABEL_19;
LABEL_12:
      v10 = (_QWORD *)a2[20];
    }
    v34 = (_QWORD *)sub_186B270(0x18u);
    v10 = v34 + 1;
    *v34 = 2;
    v11 = (_DWORD *)a2[66];
    v14 = 1;
    a2[20] = v10;
    v15 = v10;
LABEL_8:
    *v15 = *a5;
    *((_DWORD *)v10 - 1) = v14;
    if ( !v11 )
      goto LABEL_18;
    goto LABEL_9;
  }
LABEL_19:
  sub_4C1EC0((__int64)a2, a3, a1, a2 + 62);
  return a1;
}

