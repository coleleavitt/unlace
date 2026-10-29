void __fastcall sub_10D4E70(__int64 a1, char *a2)
{
  _QWORD *v3; // r13
  _QWORD *v4; // r14
  _QWORD *v5; // rbx
  void *v6; // rbp
  __int64 v7; // rdi
  char *v8; // rdi
  char *v9; // r13
  __int64 v10; // rdi
  char *v11; // r14
  char *v12; // rbx
  char *v13; // rdi
  __int64 v14; // rdi
  char *v15; // rdi
  __int64 i; // r14
  _QWORD *v17; // rbp
  _QWORD *v18; // r15
  _QWORD *v19; // rbx
  void *v20; // r13
  __int64 v21; // rdi
  char *v22; // rdi
  void (__fastcall *v23)(__int64, __int64, __int64); // rax
  void *v24; // rdi
  void *v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // rbp
  _QWORD *v28; // r14
  _QWORD *v29; // r13
  _QWORD *v30; // rbx
  void (__fastcall *v31)(_QWORD *); // rax
  __int64 v32; // rbp
  __int64 v33; // r15
  void *v34; // rdi
  _QWORD *v35; // rdi
  _QWORD *v36; // rdi
  void **v37; // r15
  void **v38; // rbp
  void *v39; // rdi
  _QWORD *v40; // rdi
  void *v41; // rdi
  __int64 *v42; // rbp
  __int64 *v43; // rbx
  __int64 v44; // rdi
  __int64 v45; // rbx
  __int64 v46; // rbp
  char *v47; // rdi
  char *v48; // rbp
  char **v49; // rbx
  char **v50; // rbp

  if ( !*(_DWORD *)(*(_QWORD *)a1 + 20LL) && !*(_BYTE *)(a1 + 522) )
  {
    v49 = *(char ***)(a1 + 248);
    v50 = &v49[*(unsigned int *)(a1 + 256)];
    while ( v50 != v49 )
    {
      a2 = *v49++;
      sub_10D45F0((__int64 **)a1, a2, 0);
    }
  }
  v3 = *(_QWORD **)(a1 + 80);
  if ( v3 )
  {
    v4 = (_QWORD *)v3[23];
    *v3 = off_2BE9928;
    v5 = &v4[*((unsigned int *)v3 + 48)];
    if ( v4 != v5 )
    {
      do
      {
        while ( 1 )
        {
          v6 = (void *)*--v5;
          if ( !*v5 )
            break;
          sub_21B59C0(*v5);
          operator delete(v6, 0x58u);
          if ( v4 == v5 )
          {
            v5 = (_QWORD *)v3[23];
            goto LABEL_8;
          }
        }
      }
      while ( v4 != v5 );
      v5 = (_QWORD *)v3[23];
    }
LABEL_8:
    if ( v5 != v3 + 25 )
      free(v5);
    v7 = v3[19];
    *v3 = &off_2C35EF8;
    operator delete(v7, 12LL * *((unsigned int *)v3 + 42), 4);
    v8 = (char *)v3[1];
    if ( v8 != (char *)(v3 + 3) )
      free(v8);
    a2 = (char *)&qword_148;
    operator delete(v3, 0x148u);
  }
  v9 = *(char **)(a1 + 72);
  if ( v9 )
  {
    v10 = *(_QWORD *)(a1 + 72);
    v11 = v9 + 320;
    *(_QWORD *)v9 = off_2BE9900;
    sub_21B6780(v10);
    v12 = *((char **)v9 + 40);
    if ( v12 != v9 + 320 )
    {
      while ( 1 )
      {
        v47 = *((char **)v12 + 2);
        v48 = *(char **)v12;
        if ( v47 == v12 + 32 )
        {
          operator delete(v12);
          if ( v48 == v11 )
            break;
        }
        else
        {
          operator delete(v47);
          operator delete(v12);
          if ( v48 == v11 )
            break;
        }
        v12 = v48;
      }
    }
    v13 = *((char **)v9 + 22);
    if ( v13 != v9 + 192 )
      free(v13);
    v14 = *((_QWORD *)v9 + 19);
    *(_QWORD *)v9 = &off_2C35EF8;
    operator delete(v14, 12LL * *((unsigned int *)v9 + 42), 4);
    v15 = *((char **)v9 + 1);
    if ( v15 != v9 + 24 )
      free(v15);
    a2 = (char *)&qword_160;
    operator delete(v9, 0x160u);
  }
  for ( i = *(_QWORD *)(a1 + 224); a1 + 208 != i; i = std::_Rb_tree_increment(i, a2) )
  {
    v17 = *(_QWORD **)(i + 64);
    if ( *(_QWORD **)(a1 + 80) != v17 && v17 )
    {
      v18 = (_QWORD *)v17[23];
      v19 = &v18[*((unsigned int *)v17 + 48)];
      *v17 = off_2BE9928;
      if ( v18 != v19 )
      {
        do
        {
          while ( 1 )
          {
            v20 = (void *)*--v19;
            if ( !*v19 )
              break;
            sub_21B59C0(*v19);
            operator delete(v20, 0x58u);
            if ( v18 == v19 )
              goto LABEL_26;
          }
        }
        while ( v18 != v19 );
LABEL_26:
        v19 = (_QWORD *)v17[23];
      }
      if ( v19 != v17 + 25 )
        free(v19);
      v21 = v17[19];
      *v17 = &off_2C35EF8;
      operator delete(v21, 12LL * *((unsigned int *)v17 + 42), 4);
      v22 = (char *)v17[1];
      if ( v22 != (char *)(v17 + 3) )
        free(v22);
      a2 = (char *)&qword_148;
      operator delete(v17, 0x148u);
    }
  }
  v23 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 504);
  if ( v23 )
    v23(a1 + 488, a1 + 488, 3);
  v24 = *(void **)(a1 + 464);
  if ( v24 )
    operator delete(v24);
  operator delete(*(_QWORD *)(a1 + 440), 16LL * *(unsigned int *)(a1 + 456), 8);
  operator delete(*(_QWORD *)(a1 + 416), 16LL * *(unsigned int *)(a1 + 432), 8);
  operator delete(*(_QWORD *)(a1 + 392), 16LL * *(unsigned int *)(a1 + 408), 8);
  v25 = *(void **)(a1 + 248);
  if ( v25 != (void *)(a1 + 264) )
    free(v25);
  v26 = *(_QWORD *)(a1 + 216);
  if ( v26 )
  {
    do
    {
      sub_10D4E30(a1 + 200, *(_QWORD **)(v26 + 24));
      v27 = *(_QWORD *)(v26 + 16);
      operator delete((void *)v26);
      v26 = v27;
    }
    while ( v27 );
  }
  v28 = *(_QWORD **)(a1 + 152);
  v29 = &v28[*(unsigned int *)(a1 + 160)];
  if ( v28 != v29 )
  {
    do
    {
      v30 = (_QWORD *)*--v29;
      if ( *v29 )
      {
        v31 = *(void (__fastcall **)(_QWORD *))(*v30 + 8LL);
        if ( v31 == sub_10D4290 )
        {
          v32 = v30[58];
          v33 = v30[57];
          *v30 = &off_2BA8F30;
          if ( v32 != v33 )
          {
            do
            {
              if ( *(_BYTE *)(v33 + 32) && *(_QWORD *)v33 != v33 + 16 )
                operator delete(*(void **)v33);
              v33 += 40;
            }
            while ( v32 != v33 );
            v33 = v30[57];
          }
          if ( v33 )
            operator delete((void *)v33);
          v34 = (void *)v30[54];
          if ( v34 )
            operator delete(v34);
          v35 = (_QWORD *)v30[50];
          if ( v35 != v30 + 52 )
            operator delete(v35);
          v36 = (_QWORD *)v30[32];
          if ( v36 != v30 + 34 )
            free(v36);
          v37 = (void **)v30[29];
          v38 = (void **)v30[28];
          if ( v37 != v38 )
          {
            do
            {
              while ( *v38 != v38 + 2 )
              {
                operator delete(*v38);
                v38 += 4;
                if ( v37 == v38 )
                  goto LABEL_61;
              }
              v38 += 4;
            }
            while ( v37 != v38 );
LABEL_61:
            v38 = (void **)v30[28];
          }
          if ( v38 )
            operator delete(v38);
          v39 = (void *)v30[25];
          if ( v39 )
            operator delete(v39);
          v40 = (_QWORD *)v30[7];
          if ( v40 != v30 + 9 )
            free(v40);
          operator delete(v30, 0x208u);
        }
        else
        {
          v31((_QWORD *)*v29);
        }
      }
    }
    while ( v28 != v29 );
    v29 = *(_QWORD **)(a1 + 152);
  }
  if ( v29 != (_QWORD *)(a1 + 168) )
    free(v29);
  v41 = *(void **)(a1 + 112);
  if ( v41 != (void *)(a1 + 128) )
    free(v41);
  v42 = *(__int64 **)(a1 + 96);
  v43 = *(__int64 **)(a1 + 88);
  if ( v42 != v43 )
  {
    do
    {
      while ( 1 )
      {
        v44 = *v43;
        if ( !*v43 )
          break;
        ++v43;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 8LL))(v44);
        if ( v43 == v42 )
          goto LABEL_78;
      }
      ++v43;
    }
    while ( v42 != v43 );
LABEL_78:
    v43 = *(__int64 **)(a1 + 88);
  }
  if ( v43 )
    operator delete(v43);
  v45 = *(_QWORD *)(a1 + 40);
  if ( v45 )
  {
    do
    {
      sub_10D4DF0(a1 + 24, *(_QWORD **)(v45 + 24));
      v46 = *(_QWORD *)(v45 + 16);
      operator delete((void *)v45);
      v45 = v46;
    }
    while ( v46 );
  }
}
