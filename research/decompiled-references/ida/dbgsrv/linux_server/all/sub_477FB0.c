/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_477FB0
// Address: 0x0000000000477FB0

//----- (0000000000477FB0) ----------------------------------------------------
__int64 __fastcall sub_477FB0(__int64 a1, int a2, const void **a3, __int64 a4)
{
  const void **v4; // r15
  const void *v6; // rbp
  size_t v7; // rax
  size_t v8; // rbx
  int v9; // ebp
  char *v10; // r13
  _BYTE *v11; // rax
  _BYTE *v12; // rbx
  int v13; // eax
  char *v14; // rdi
  unsigned int v15; // r14d
  const void **v16; // r13
  __int64 v18; // rax
  void *v20; // rdi
  unsigned __int64 v21; // r13
  void *v22; // rax

  v4 = a3;
  v6 = *a3;
  if ( *a3 && (v7 = strlen((const char *)v6), (v8 = v7) != 0) )
  {
    v20 = *(void **)(a1 + 24);
    v21 = v7 + 1;
    if ( *(_QWORD *)(a1 + 40) < v7 + 1 )
    {
      v22 = sub_481540(a1 + 24, *(void **)(a1 + 24), v21, 1u);
      *(_QWORD *)(a1 + 24) = v22;
      v20 = v22;
    }
    *(_QWORD *)(a1 + 32) = v21;
    memmove(v20, v6, v8);
    *(_BYTE *)(*(_QWORD *)(a1 + 24) + v8) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 32) = 0;
  }
  v9 = a2;
  if ( a2 > 1 )
  {
    while ( 1 )
    {
      v10 = (char *)v4[1];
      if ( (*v10 & 0xFD) != 0x2D )
        return (unsigned int)(a2 - v9);
      if ( v10[1] == 45 )
      {
        v18 = sub_477BC0((__int64 *)a1, v10 + 2);
        v12 = (_BYTE *)v18;
        if ( !v18 )
        {
LABEL_26:
          if ( *(_BYTE *)(a1 + 80) )
LABEL_29:
            sub_477C20(a1, 1u);
          break;
        }
        v15 = v9 - 1;
        v14 = &v10[strlen(*(const char **)(v18 + 8)) + 2];
        v13 = *((_DWORD *)v12 + 8);
        v16 = v4 + 1;
        if ( !v13 )
        {
LABEL_16:
          (*((void (__fastcall **)(_QWORD, __int64))v12 + 3))(0, a4);
          goto LABEL_11;
        }
      }
      else
      {
        v11 = sub_477B80(a1, v10[1]);
        v12 = v11;
        if ( !v11 )
          goto LABEL_26;
        v13 = *((_DWORD *)v11 + 8);
        v14 = v10 + 2;
        v15 = v9 - 1;
        v16 = v4 + 1;
        if ( !v13 )
          goto LABEL_16;
      }
      if ( v13 == 1 )
      {
        if ( !*v14 )
        {
          if ( v15 == 1 )
            goto LABEL_29;
          v14 = (char *)v4[2];
          v16 = v4 + 2;
          v15 = v9 - 2;
        }
        v4 = v16;
        v9 = v15;
        (*((void (__fastcall **)(char *, __int64))v12 + 3))(v14, a4);
        goto LABEL_12;
      }
      if ( v13 == -1 )
      {
        (*((void (__fastcall **)(_QWORD, const void **, __int64))v12 + 3))(v15, v16, a4);
        return a2 - v15;
      }
LABEL_11:
      v4 = v16;
      v9 = v15;
LABEL_12:
      if ( v15 == 1 )
        return (unsigned int)(a2 - 1);
    }
  }
  return 0;
}
