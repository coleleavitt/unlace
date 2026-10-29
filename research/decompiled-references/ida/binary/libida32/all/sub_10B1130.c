void __fastcall sub_10B1130(__int64 a1)
{
  _QWORD *v2; // r13
  _QWORD *v3; // r14
  _QWORD *v4; // rbx
  void *v5; // rbp
  char *v6; // rdi
  _QWORD *v7; // r13
  __int64 v8; // rdi
  _QWORD *v9; // r14
  _QWORD *v10; // rbx
  _QWORD *v11; // rdi
  _QWORD *v12; // rdi
  __int64 i; // r14
  _QWORD *v14; // rbp
  _QWORD *v15; // r15
  _QWORD *v16; // rbx
  void *v17; // r13
  char *v18; // rdi
  void (__fastcall *v19)(__int64, __int64, __int64); // rax
  void *v20; // rdi
  _QWORD *v21; // rsi
  void *v22; // rdi
  _QWORD *v23; // rbx
  _QWORD *v24; // rbp
  _QWORD *v25; // r14
  _QWORD *v26; // r13
  _QWORD *v27; // rbx
  void (__fastcall *v28)(_QWORD *); // rax
  __int64 v29; // rbp
  __int64 v30; // r15
  void *v31; // rdi
  _QWORD *v32; // rdi
  _QWORD *v33; // rdi
  void **v34; // r15
  void **v35; // rbp
  void *v36; // rdi
  _QWORD *v37; // rdi
  void *v38; // rdi
  __int64 *v39; // rbp
  __int64 *v40; // rbx
  __int64 v41; // rdi
  __int64 v42; // rbx
  __int64 v43; // rbp
  _QWORD *v44; // rdi
  _QWORD *v45; // rbp
  _BYTE **v46; // rbx
  _BYTE **v47; // rbp
  _BYTE *v48; // rsi

  if ( !*(_DWORD *)(*(_QWORD *)a1 + 20LL) && !*(_BYTE *)(a1 + 522) )
  {
    v46 = *(_BYTE ***)(a1 + 248);
    v47 = &v46[*(unsigned int *)(a1 + 256)];
    while ( v47 != v46 )
    {
      v48 = *v46++;
      sub_10B08B0((__int64 **)a1, v48, 0);
    }
  }
  v2 = *(_QWORD **)(a1 + 80);
  if ( v2 )
  {
    v3 = (_QWORD *)v2[23];
    *v2 = off_2BBF988;
    v4 = &v3[*((unsigned int *)v2 + 48)];
    if ( v3 != v4 )
    {
      do
      {
        while ( 1 )
        {
          v5 = (void *)*--v4;
          if ( !*v4 )
            break;
          sub_2191C80(*v4);
          operator delete(v5, 0x58u);
          if ( v3 == v4 )
          {
            v4 = (_QWORD *)v2[23];
            goto LABEL_8;
          }
        }
      }
      while ( v3 != v4 );
      v4 = (_QWORD *)v2[23];
    }
LABEL_8:
    if ( v4 != v2 + 25 )
      free(v4);
    *v2 = &off_2C0BEF8;
    operator delete();
    v6 = (char *)v2[1];
    if ( v6 != (char *)(v2 + 3) )
      free(v6);
    operator delete(v2, 0x148u);
  }
  v7 = *(_QWORD **)(a1 + 72);
  if ( v7 )
  {
    v8 = *(_QWORD *)(a1 + 72);
    v9 = v7 + 40;
    *v7 = off_2BBF960;
    sub_2192A40(v8);
    v10 = (_QWORD *)v7[40];
    if ( v10 != v7 + 40 )
    {
      while ( 1 )
      {
        v44 = (_QWORD *)v10[2];
        v45 = (_QWORD *)*v10;
        if ( v44 == v10 + 4 )
        {
          operator delete(v10);
          if ( v45 == v9 )
            break;
        }
        else
        {
          operator delete(v44);
          operator delete(v10);
          if ( v45 == v9 )
            break;
        }
        v10 = v45;
      }
    }
    v11 = (_QWORD *)v7[22];
    if ( v11 != v7 + 24 )
      free(v11);
    *v7 = &off_2C0BEF8;
    operator delete();
    v12 = (_QWORD *)v7[1];
    if ( v12 != v7 + 3 )
      free(v12);
    operator delete(v7, 0x160u);
  }
  for ( i = *(_QWORD *)(a1 + 224); a1 + 208 != i; i = std::_Rb_tree_increment() )
  {
    v14 = *(_QWORD **)(i + 64);
    if ( *(_QWORD **)(a1 + 80) != v14 && v14 )
    {
      v15 = (_QWORD *)v14[23];
      v16 = &v15[*((unsigned int *)v14 + 48)];
      *v14 = off_2BBF988;
      if ( v15 != v16 )
      {
        do
        {
          while ( 1 )
          {
            v17 = (void *)*--v16;
            if ( !*v16 )
              break;
            sub_2191C80(*v16);
            operator delete(v17, 0x58u);
            if ( v15 == v16 )
              goto LABEL_26;
          }
        }
        while ( v15 != v16 );
LABEL_26:
        v16 = (_QWORD *)v14[23];
      }
      if ( v16 != v14 + 25 )
        free(v16);
      *v14 = &off_2C0BEF8;
      operator delete();
      v18 = (char *)v14[1];
      if ( v18 != (char *)(v14 + 3) )
        free(v18);
      operator delete(v14, 0x148u);
    }
  }
  v19 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 504);
  if ( v19 )
    v19(a1 + 488, a1 + 488, 3);
  v20 = *(void **)(a1 + 464);
  if ( v20 )
    operator delete(v20);
  operator delete();
  operator delete();
  v21 = (_QWORD *)(16LL * *(unsigned int *)(a1 + 408));
  operator delete();
  v22 = *(void **)(a1 + 248);
  if ( v22 != (void *)(a1 + 264) )
    free(v22);
  v23 = *(_QWORD **)(a1 + 216);
  if ( v23 )
  {
    do
    {
      v21 = (_QWORD *)v23[3];
      sub_10B10F0(a1 + 200, v21);
      v24 = (_QWORD *)v23[2];
      operator delete(v23);
      v23 = v24;
    }
    while ( v24 );
  }
  v25 = *(_QWORD **)(a1 + 152);
  v26 = &v25[*(unsigned int *)(a1 + 160)];
  if ( v25 != v26 )
  {
    do
    {
      v27 = (_QWORD *)*--v26;
      if ( *v26 )
      {
        v28 = *(void (__fastcall **)(_QWORD *))(*v27 + 8LL);
        if ( v28 == sub_10B0550 )
        {
          v29 = v27[58];
          v30 = v27[57];
          *v27 = &off_2B7EF90;
          if ( v29 != v30 )
          {
            do
            {
              if ( *(_BYTE *)(v30 + 32) && *(_QWORD *)v30 != v30 + 16 )
                operator delete(*(void **)v30);
              v30 += 40;
            }
            while ( v29 != v30 );
            v30 = v27[57];
          }
          if ( v30 )
            operator delete((void *)v30);
          v31 = (void *)v27[54];
          if ( v31 )
            operator delete(v31);
          v32 = (_QWORD *)v27[50];
          if ( v32 != v27 + 52 )
            operator delete(v32);
          v33 = (_QWORD *)v27[32];
          if ( v33 != v27 + 34 )
            free(v33);
          v34 = (void **)v27[29];
          v35 = (void **)v27[28];
          if ( v34 != v35 )
          {
            do
            {
              while ( *v35 != v35 + 2 )
              {
                operator delete(*v35);
                v35 += 4;
                if ( v34 == v35 )
                  goto LABEL_61;
              }
              v35 += 4;
            }
            while ( v34 != v35 );
LABEL_61:
            v35 = (void **)v27[28];
          }
          if ( v35 )
            operator delete(v35);
          v36 = (void *)v27[25];
          if ( v36 )
            operator delete(v36);
          v37 = (_QWORD *)v27[7];
          if ( v37 != v27 + 9 )
            free(v37);
          v21 = &qword_208;
          operator delete(v27, 0x208u);
        }
        else
        {
          ((void (__fastcall *)(_QWORD, _QWORD *))v28)(*v26, v21);
        }
      }
    }
    while ( v25 != v26 );
    v26 = *(_QWORD **)(a1 + 152);
  }
  if ( v26 != (_QWORD *)(a1 + 168) )
    free(v26);
  v38 = *(void **)(a1 + 112);
  if ( v38 != (void *)(a1 + 128) )
    free(v38);
  v39 = *(__int64 **)(a1 + 96);
  v40 = *(__int64 **)(a1 + 88);
  if ( v39 != v40 )
  {
    do
    {
      while ( 1 )
      {
        v41 = *v40;
        if ( !*v40 )
          break;
        ++v40;
        (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v41 + 8LL))(v41, v21);
        if ( v40 == v39 )
          goto LABEL_78;
      }
      ++v40;
    }
    while ( v39 != v40 );
LABEL_78:
    v40 = *(__int64 **)(a1 + 88);
  }
  if ( v40 )
    operator delete(v40);
  v42 = *(_QWORD *)(a1 + 40);
  if ( v42 )
  {
    do
    {
      sub_10B10B0(a1 + 24, *(_QWORD **)(v42 + 24));
      v43 = *(_QWORD *)(v42 + 16);
      operator delete((void *)v42);
      v42 = v43;
    }
    while ( v43 );
  }
}

