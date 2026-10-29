void __fastcall sub_B65740(_QWORD *a1, _QWORD *a2, unsigned int *a3, char a4, char a5)
{
  char **exception; // rbx
  __int64 v6; // rdx
  __int64 v9; // rbx
  _DWORD *v10; // rcx
  _QWORD *v11; // rbp
  __int64 v12; // r14
  unsigned int v13; // edx
  unsigned int v14; // r15d
  size_t v15; // rsi
  unsigned int *v16; // rax
  char *v17; // rdi
  char *v18; // rdx
  __int64 v19; // rax
  __int64 v20[11]; // [rsp+0h] [rbp-58h] BYREF

  v9 = *a3;
  if ( !a4 )
    a1 = a2;
  v10 = (_DWORD *)*a1;
  v11 = a1;
  if ( !*a1 )
  {
    LODWORD(v9) = v9 + 1;
    if ( !(_DWORD)v9 )
    {
      v9 = 0xFFFFFFFFLL;
      goto LABEL_13;
    }
    LODWORD(v12) = 0;
    v19 = sub_186B270(0xAu);
    v13 = 2;
    v10 = (_DWORD *)(v19 + 8);
    *(_QWORD *)v19 = 2;
    *a1 = v19 + 8;
    if ( (unsigned int)v9 > 2 )
      goto LABEL_7;
    *(_DWORD *)(v19 + 4) = v9;
    v17 = (char *)(v19 + 8);
    v18 = (char *)v10 + (unsigned int)v9;
    goto LABEL_11;
  }
  v12 = (unsigned int)*(v10 - 1);
  if ( (unsigned int)v9 >= (unsigned int)v12 )
  {
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v12 >= (unsigned int)v9 )
    {
      *(v10 - 1) = v9;
      v9 = *a3;
      goto LABEL_13;
    }
    v13 = *(v10 - 2);
    if ( v13 < (unsigned int)v9 )
    {
      do
      {
LABEL_7:
        v14 = (3 * v13 + 1) >> 1;
        v15 = v14 + 8;
        if ( v13 + 8 >= (unsigned int)v15 || v13 >= v14 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_14E142(v20, "Overflow encountered when expanding vector", v6);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v20);
          sub_233E40((__int64)v20);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v16 = (unsigned int *)sub_186B300(v10 - 2, v15);
        v13 = v14;
        v10 = v16 + 2;
        *v16 = v14;
        *a1 = v16 + 2;
      }
      while ( v14 < (unsigned int)v9 );
      v16[1] = v9;
      v17 = (char *)v10 + (unsigned int)v12;
      v18 = (char *)v10 + (unsigned int)v9;
      if ( (_DWORD)v9 == (_DWORD)v12 )
        goto LABEL_12;
      goto LABEL_11;
    }
    *(v10 - 1) = v9;
    v17 = (char *)v10 + v12;
    v18 = (char *)v10 + v9;
LABEL_11:
    memset(v17, 0, v18 - v17);
    v10 = (_DWORD *)*v11;
LABEL_12:
    v9 = *a3;
  }
LABEL_13:
  *((_BYTE *)v10 + v9) = a5;
}

