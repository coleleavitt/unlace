/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400689D0
// Address: 0x00000001400689D0

//----- (00000001400689D0) ----------------------------------------------------
__int64 __fastcall sub_1400689D0(__int64 a1, int a2, const void **a3, __int64 a4)
{
  const void *v4; // rbx
  const void **v5; // r12
  int v6; // r15d
  size_t v8; // rax
  char *v9; // rsi
  char v10; // r14
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rdi
  void (*v13)(const char *, ...); // rbx
  const char *v14; // rcx
  unsigned __int64 v15; // rax
  _BYTE *v16; // rsi
  int v17; // eax

  v4 = *a3;
  v5 = a3;
  v6 = a2;
  if ( *a3 && (v8 = strlen((const char *)v4)) != 0 )
    sub_140001810(a1 + 24, v4, v8);
  else
    *(_QWORD *)(a1 + 32) = 0;
  while ( 1 )
  {
    if ( v6 <= 1 )
      return (unsigned int)(a2 - v6);
    v9 = (char *)v5[1];
    if ( ((*v9 - 45) & 0xFD) != 0 )
      return (unsigned int)(a2 - v6);
    v10 = v9[1];
    v11 = *(_QWORD *)(a1 + 8);
    if ( v10 == 45 )
    {
      v12 = 0;
      if ( !v11 )
        goto LABEL_18;
      v13 = *(void (**)(const char *, ...))a1;
      while ( 1 )
      {
        v14 = *((const char **)v13 + 1);
        if ( v14 )
        {
          if ( !strcmp(v14, v9 + 2) )
            break;
        }
        ++v12;
        v13 = (void (*)(const char *, ...))((char *)v13 + 40);
        if ( v12 >= v11 )
          goto LABEL_18;
      }
    }
    else
    {
      v15 = 0;
      if ( !v11 )
      {
LABEL_18:
        v13 = nullptr;
        goto LABEL_19;
      }
      v13 = *(void (**)(const char *, ...))a1;
      while ( *(_BYTE *)v13 != v10 )
      {
        ++v15;
        v13 = (void (*)(const char *, ...))((char *)v13 + 40);
        if ( v15 >= v11 )
          goto LABEL_18;
      }
    }
LABEL_19:
    if ( !v13 )
      break;
    v16 = v9 + 2;
    if ( v10 == 45 )
      v16 += strlen(*((const char **)v13 + 1));
    v17 = *((_DWORD *)v13 + 8);
    ++v5;
    --v6;
    if ( v17 == -1 )
    {
      (*((void (__fastcall **)(_QWORD, const void **, __int64))v13 + 3))((unsigned int)v6, v5, a4);
      return (unsigned int)(a2 - v6);
    }
    if ( v17 )
    {
      if ( v17 == 1 )
      {
        if ( !*v16 )
        {
          if ( v6 <= 1 )
            goto LABEL_34;
          v16 = v5[1];
          ++v5;
          --v6;
        }
        (*((void (__fastcall **)(_BYTE *, __int64))v13 + 3))(v16, a4);
      }
    }
    else
    {
      (*((void (__fastcall **)(_QWORD, __int64))v13 + 3))(0, a4);
    }
  }
  if ( *(_BYTE *)(a1 + 80) )
LABEL_34:
    sub_140068910((void (**)(const char *, ...))a1, 1u);
  return 0;
}
