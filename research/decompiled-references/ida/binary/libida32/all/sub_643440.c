void __fastcall sub_643440(__int64 *a1, __int64 a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // r14
  int v12; // edx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rbp
  char **v16; // r13
  char *v17; // rdi
  char *v18; // rdi
  char *v19; // r14
  char *i; // r12
  char *v21; // rbp
  void *v22; // rdi
  void *v23; // rdi
  unsigned int v24; // eax
  __int64 v25; // rdi
  char v26; // dl
  char v27; // dl
  __int64 v28; // [rsp-28h] [rbp-28h]

  *a1 = a2;
  a1[1] = 0;
  if ( a3 )
  {
    v28 = v6;
    v12 = *(unsigned __int8 *)(a2 + 88);
    v13 = v12 & 0xF0;
    v14 = v12 & 0xFFFFFFF0;
    if ( (_BYTE)v14 == 0xC0 )
    {
      if ( (unsigned int)(*(_DWORD *)(a2 + 28) - 208) <= 0x2F )
        return;
    }
    else if ( (unsigned int)(v13 - 208) <= 0x2F )
    {
      return;
    }
    v15 = qalloc_or_throw(96, (const char *)a2, v14, a4, a5, a6, v28, v7, v8, v9, v10);
    sub_529AC0(v15, *a1);
    v16 = (char **)a1[1];
    a1[1] = v15;
    if ( v16 )
    {
      v17 = v16[8];
      if ( v17 )
      {
        v16[9] = nullptr;
        qfree(v17);
      }
      cleanup_argloc(v16 + 5);
      clear_tinfo_t(v16 + 4);
      v18 = *v16;
      if ( *v16 )
      {
        v19 = v16[1];
        if ( v19 )
        {
          for ( i = nullptr; i != v19; ++i )
          {
            v21 = &v18[80 * (_QWORD)i];
            clear_tinfo_t(v21 + 64);
            v22 = *((void **)v21 + 5);
            if ( v22 )
            {
              *((_QWORD *)v21 + 6) = 0;
              qfree(v22);
            }
            v23 = *((void **)v21 + 2);
            if ( v23 )
            {
              *((_QWORD *)v21 + 3) = 0;
              qfree(v23);
            }
            cleanup_argloc(v21);
            v18 = *v16;
          }
        }
        v16[1] = nullptr;
        qfree(v18);
      }
      qfree(v16);
      v15 = a1[1];
    }
    LOBYTE(v24) = *(_BYTE *)(*a1 + 88) & 0xF0;
    if ( (_BYTE)v24 == 0xC0 )
    {
      v24 = *(_DWORD *)(*a1 + 28);
      v25 = v15;
      if ( v24 > 0x10 )
      {
LABEL_28:
        v26 = *(_BYTE *)(v15 + 88) & 0xF;
        if ( (v24 & 0xFFFFFF0F) != 0 || v24 == 192 )
        {
          v27 = v26 | 0xC0;
LABEL_24:
          *(_DWORD *)(v15 + 28) = v24;
          *(_BYTE *)(v15 + 88) = v27;
          if ( (unsigned __int8)calc_arglocs(v25) )
            *a1 = a1[1];
          else
            a1[1] = 0;
          return;
        }
LABEL_23:
        v27 = v24 | v26;
        v24 = 0;
        goto LABEL_24;
      }
    }
    else if ( (unsigned __int8)v24 > 0x10u )
    {
      v25 = v15;
      v26 = *(_BYTE *)(v15 + 88) & 0xF;
      goto LABEL_23;
    }
    v24 = getinf(99);
    v25 = a1[1];
    goto LABEL_28;
  }
}

