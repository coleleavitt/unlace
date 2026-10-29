/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_493CB0
// Address: 0x0000000000493CB0

//----- (0000000000493CB0) ----------------------------------------------------
__int64 __fastcall sub_493CB0(const char *a1, unsigned int a2)
{
  char *v4; // x0
  __int64 v5; // x19
  int v6; // w0
  void *v8; // x0
  void *v9; // x0
  __mode_t v11; // w22
  sem_t *v12; // x21
  size_t v13; // x0
  size_t v14; // x21
  unsigned __int64 v15; // x22
  void *v16; // x0

  v4 = (char *)sub_49E050(0x38u);
  *(_QWORD *)v4 = 0;
  *((_QWORD *)v4 + 1) = 0;
  v5 = (__int64)v4;
  *((_QWORD *)v4 + 2) = 0;
  if ( !a1 || !*a1 )
  {
    v6 = sem_init((sem_t *)(v4 + 24), 0, a2);
    if ( v5 != -24 && v6 != -1 )
      return v5;
LABEL_8:
    if ( v5 )
    {
      v8 = *(void **)v5;
      if ( *(_QWORD *)v5 )
      {
        *(_QWORD *)(v5 + 8) = 0;
        j__free(v8);
      }
      v9 = (void *)v5;
      v5 = 0;
      j_j__free_0(v9);
    }
    return v5;
  }
  v11 = umask(0);
  v12 = sem_open(a1, 64, 438, a2);
  umask(v11);
  if ( !v12 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 24) = v12;
  v13 = strlen(a1);
  v14 = v13;
  if ( v13 )
  {
    v15 = v13 + 1;
    v16 = *(void **)v5;
    if ( v15 > *(_QWORD *)(v5 + 16) )
    {
      v16 = sub_491288(v5, *(void **)v5, v15, 1u);
      *(_QWORD *)v5 = v16;
    }
    *(_QWORD *)(v5 + 8) = v15;
    memmove(v16, a1, v14);
    *(_BYTE *)(*(_QWORD *)v5 + v14) = 0;
    return v5;
  }
  *(_QWORD *)(v5 + 8) = 0;
  return v5;
}
