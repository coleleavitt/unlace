void __fastcall sub_660D20(__int64 *a1, __int64 a2, char a3)
{
  char v4; // dl
  __int64 v5; // rbp
  char **v6; // r13
  char *v7; // rdi
  char *v8; // rdi
  char *v9; // r14
  char *i; // r12
  char *v11; // rbp
  void *v12; // rdi
  void *v13; // rdi
  unsigned int v14; // eax
  __int64 v15; // rdi
  char v16; // dl
  char v17; // dl

  *a1 = a2;
  a1[1] = 0;
  if ( a3 )
  {
    v4 = *(_BYTE *)(a2 + 88);
    if ( (v4 & 0xF0) == 0xC0 )
    {
      if ( (unsigned int)(*(_DWORD *)(a2 + 28) - 208) <= 0x2F )
        return;
    }
    else if ( (v4 & 0xF0u) - 208 <= 0x2F )
    {
      return;
    }
    v5 = qalloc_or_throw(96);
    sub_5427C0(v5, *a1);
    v6 = (char **)a1[1];
    a1[1] = v5;
    if ( v6 )
    {
      v7 = v6[8];
      if ( v7 )
      {
        v6[9] = nullptr;
        qfree(v7);
      }
      cleanup_argloc(v6 + 5);
      clear_tinfo_t(v6 + 4);
      v8 = *v6;
      if ( *v6 )
      {
        v9 = v6[1];
        if ( v9 )
        {
          for ( i = nullptr; i != v9; ++i )
          {
            v11 = &v8[80 * (_QWORD)i];
            clear_tinfo_t(v11 + 64);
            v12 = *((void **)v11 + 5);
            if ( v12 )
            {
              *((_QWORD *)v11 + 6) = 0;
              qfree(v12);
            }
            v13 = *((void **)v11 + 2);
            if ( v13 )
            {
              *((_QWORD *)v11 + 3) = 0;
              qfree(v13);
            }
            cleanup_argloc(v11);
            v8 = *v6;
          }
        }
        v6[1] = nullptr;
        qfree(v8);
      }
      qfree(v6);
      v5 = a1[1];
    }
    LOBYTE(v14) = *(_BYTE *)(*a1 + 88) & 0xF0;
    if ( (_BYTE)v14 == 0xC0 )
    {
      v14 = *(_DWORD *)(*a1 + 28);
      v15 = v5;
      if ( v14 > 0x10 )
      {
LABEL_28:
        v16 = *(_BYTE *)(v5 + 88) & 0xF;
        if ( (v14 & 0xFFFFFF0F) != 0 || v14 == 192 )
        {
          v17 = v16 | 0xC0;
LABEL_24:
          *(_DWORD *)(v5 + 28) = v14;
          *(_BYTE *)(v5 + 88) = v17;
          if ( (unsigned __int8)calc_arglocs(v15) )
            *a1 = a1[1];
          else
            a1[1] = 0;
          return;
        }
LABEL_23:
        v17 = v14 | v16;
        v14 = 0;
        goto LABEL_24;
      }
    }
    else if ( (unsigned __int8)v14 > 0x10u )
    {
      v15 = v5;
      v16 = *(_BYTE *)(v5 + 88) & 0xF;
      goto LABEL_23;
    }
    v14 = getinf(99);
    v15 = a1[1];
    goto LABEL_28;
  }
}
