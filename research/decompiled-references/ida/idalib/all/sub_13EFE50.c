unsigned int *__fastcall sub_13EFE50(__int64 a1, const void *a2, unsigned __int64 a3, char a4, __int64 a5)
{
  unsigned int *v8; // rbx
  unsigned int *v9; // rdx
  unsigned int v10; // esi
  unsigned int *v11; // r8
  unsigned __int64 v12; // rcx
  unsigned int v13; // eax
  unsigned int v15; // r15d

  v8 = *(unsigned int **)(a5 + 2264);
  if ( v8 )
  {
    v9 = (unsigned int *)(a5 + 2264);
    v10 = -1;
    v11 = nullptr;
    do
    {
      while ( 1 )
      {
        v12 = *v8;
        if ( v12 >= a3 && (unsigned int)v12 < v10 )
          break;
        v9 = v8 + 8;
        v8 = *((unsigned int **)v8 + 4);
        if ( !v8 )
          goto LABEL_8;
      }
      if ( v12 == a3 )
      {
        v11 = v9;
        goto LABEL_10;
      }
      v11 = v9;
      v9 = v8 + 8;
      v8 = *((unsigned int **)v8 + 4);
      v10 = v12;
    }
    while ( v8 );
LABEL_8:
    if ( !v11 )
      goto LABEL_16;
    v8 = *(unsigned int **)v11;
LABEL_10:
    *(_QWORD *)v11 = *((_QWORD *)v8 + 4);
    *v8 = a3;
    v13 = *(_DWORD *)(a1 + 24);
    *((_BYTE *)v8 + 4) = a4;
    v8[10] = v13;
  }
  else
  {
LABEL_16:
    v15 = *(_DWORD *)(a1 + 24);
    v8 = (unsigned int *)malloc(24 * a3 + 48);
    if ( !v8 && (24 * a3 != -48 || (v8 = (unsigned int *)malloc(1u)) == nullptr) )
      sub_2221CE0("Allocation failed");
    *v8 = a3;
    *((_BYTE *)v8 + 4) = a4;
    *(_OWORD *)(v8 + 2) = 0;
    *(_OWORD *)(v8 + 6) = 0;
    v8[10] = v15;
  }
  if ( a3 && 24 * a3 )
    memmove(v8 + 12, a2, 24 * a3);
  return v8;
}
