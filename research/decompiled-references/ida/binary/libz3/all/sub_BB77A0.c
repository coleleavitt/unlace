void __fastcall sub_BB77A0(_QWORD *a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  char **exception; // rbx
  __int64 v5; // rdx
  __int64 v6; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rdi
  _QWORD *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r15
  _QWORD *v18; // rsi
  __int64 v19; // rbx
  unsigned int **v20; // rax
  unsigned int v21; // r13d
  size_t v22; // rsi
  unsigned int *v23; // rax
  unsigned int v24; // ecx
  _QWORD *v25; // rdi
  _OWORD *v26; // rax
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // r8
  _QWORD *v29; // rax
  __int64 v31[11]; // [rsp+10h] [rbp-58h] BYREF

  if ( a2 != (unsigned int *)a3 )
  {
    v6 = a1[3];
    if ( v6 )
      *(_DWORD *)(v6 - 4) = 0;
    v10 = (_QWORD *)a1[5];
    if ( v10 )
    {
      v11 = &v10[*((unsigned int *)v10 - 1)];
      if ( v10 >= v11 )
        goto LABEL_12;
      do
      {
        while ( 1 )
        {
          v12 = *v10;
          if ( *v10 )
          {
            v13 = a1[4];
            if ( (*(_DWORD *)(v12 + 8))-- == 1 )
              break;
          }
          if ( ++v10 >= v11 )
            goto LABEL_11;
        }
        sub_15D7BC0(v13, v12);
        ++v10;
      }
      while ( v10 < v11 );
LABEL_11:
      v10 = (_QWORD *)a1[5];
      if ( v10 )
LABEL_12:
        *((_DWORD *)v10 - 1) = 0;
    }
    v15 = (_QWORD *)a1[2];
    v16 = *a2;
    if ( v15 )
    {
      v17 = *((unsigned int *)v15 - 1);
      if ( (unsigned int)v16 >= (unsigned int)v17 || (v18 = &v15[3 * (unsigned int)v16], !v18[1]) )
      {
        v19 = (unsigned int)(2 * v16 + 1);
LABEL_19:
        if ( (unsigned int)v17 >= (unsigned int)v19 )
          goto LABEL_20;
        goto LABEL_24;
      }
      sub_BB75F0(a1, 1, (__int64)a2, v18[1], v18[2]);
      v16 = *a2;
      v15 = (_QWORD *)a1[2];
      v19 = (unsigned int)(2 * v16 + 1);
      if ( v15 )
      {
        v17 = *((unsigned int *)v15 - 1);
        goto LABEL_19;
      }
    }
    else
    {
      v19 = (unsigned int)(2 * v16 + 1);
    }
    v17 = 0;
    v29 = (_QWORD *)sub_186B270(0x38u);
    v15 = v29 + 1;
    *v29 = 2;
    a1[2] = v29 + 1;
LABEL_24:
    while ( 1 )
    {
      v24 = *((_DWORD *)v15 - 2);
      if ( v24 >= (unsigned int)v19 )
        break;
      v21 = (3 * v24 + 1) >> 1;
      v22 = 8 * (v21 + ((3 * v24 + 1) & 0xFFFFFFFE)) + 8;
      if ( 24 * v24 + 8 >= (unsigned int)v22 || v24 >= v21 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_154526(v31, "Overflow encountered when expanding vector", v5);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v31);
        sub_233E40((__int64)v31);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v23 = (unsigned int *)sub_186B300(v15 - 1, v22);
      v15 = v23 + 2;
      *v23 = v21;
      a1[2] = v23 + 2;
    }
    *((_DWORD *)v15 - 1) = v19;
    v16 = *a2;
    v25 = &v15[3 * v17];
    if ( 24 * v17 == 24 * v19 )
      goto LABEL_20;
    v26 = &v15[3 * v17];
    v27 = (0xAAAAAAAAAAAAAABLL * ((unsigned __int64)(24 * v19 - 24 - 24 * v17) >> 3)) & 0x1FFFFFFFFFFFFFFFLL;
    v28 = v27 + 1;
    if ( v27 )
    {
      do
      {
        *v26 = 0;
        v26 += 3;
        *(v26 - 2) = 0;
        *(v26 - 1) = 0;
      }
      while ( &v25[6 * (v28 >> 1)] != (_QWORD *)v26 );
      if ( (v28 & 1) == 0 )
        goto LABEL_20;
      v25 += 3 * (v28 & 0xFFFFFFFFFFFFFFFELL);
    }
    v25[2] = 0;
    *(_OWORD *)v25 = 0;
LABEL_20:
    v20 = (unsigned int **)&v15[3 * v16];
    *v20 = a2;
    v20[2] = (unsigned int *)a4;
    v20[1] = (unsigned int *)a3;
    sub_BB75F0(a1, 0, (__int64)a2, a3, a4);
  }
}

