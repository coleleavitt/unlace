/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_69A70
// Address: 0x0000000000069A70

//----- (0000000000069A70) ----------------------------------------------------
__int64 __fastcall sub_69A70(__int64 a1, char *s2)
{
  __int64 v4; // x22
  pthread_mutex_t *v5; // x19
  const char *align; // x0
  int *p_kind; // x20
  __int64 v8; // x21
  size_t v9; // x0
  void *v10; // x1
  unsigned __int64 v11; // x23
  size_t v12; // x22
  _QWORD *v13; // x0
  __int64 v14; // x8

  if ( s2 )
  {
    v4 = *(_QWORD *)(a1 + 8) - 1LL;
    while ( (v4 & 0x8000000000000000LL) == 0 )
    {
      v5 = *(pthread_mutex_t **)(*(_QWORD *)a1 + 8 * v4);
      if ( *(&v5->__align + 1) )
        align = (const char *)v5->__align;
      else
        align = &byte_F154B;
      --v4;
      if ( !strcmp(align, s2) )
      {
        p_kind = &v5[3].__kind;
        if ( v5[3].__kind )
          return -1;
        v8 = v4 + 1;
        sub_69BE8((__int64)v5);
        goto LABEL_20;
      }
    }
  }
  v5 = (pthread_mutex_t *)operator new(0x90u);
  *(&v5->__align + 1) = 0;
  *(&v5->__align + 2) = 0;
  v5->__align = 0;
  v5[1].__align = 0;
  *(&v5[1].__align + 1) = 0;
  v5->__list.__next = nullptr;
  v5[3].__align = 0;
  *(&v5[3].__align + 1) = 0;
  v5[2].__list.__prev = nullptr;
  v5[2].__list.__next = nullptr;
  *(&v5[2].__align + 1) = 0;
  *(&v5[2].__align + 2) = 0;
  v5[1].__list.__next = nullptr;
  v5[2].__align = 0;
  v5[1].__list.__prev = nullptr;
  if ( s2 && (v9 = strlen(s2)) != 0 )
  {
    v10 = (void *)v5->__align;
    v11 = v9 + 1;
    v12 = v9;
    if ( *(&v5->__align + 2) < v9 + 1 )
    {
      v10 = qvector_reserve(v5, v10, v11, 1u);
      v5->__align = (__int64)v10;
    }
    *(&v5->__align + 1) = v11;
    memmove(v10, s2, v12);
    *(_BYTE *)(v5->__align + v12) = 0;
  }
  else
  {
    *(&v5->__align + 1) = 0;
  }
  v8 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v8 + 1) )
  {
    v13 = *(_QWORD **)a1;
    v14 = *(_QWORD *)(a1 + 8);
  }
  else
  {
    v13 = qvector_reserve((pthread_mutex_t *)a1, *(void **)a1, v8 + 1, 8u);
    v14 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)a1 = v13;
  }
  v13[v14] = v5;
  ++*(_QWORD *)(a1 + 8);
  p_kind = &v5[3].__kind;
LABEL_20:
  *p_kind = -1;
  *((_DWORD *)&v5->__align + 6) = 0;
  return v8;
}
// F154B: using guessed type char byte_F154B;
