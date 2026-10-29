unsigned __int64 __fastcall sub_A2D530(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        const void *a5,
        __int64 a6,
        char a7,
        char a8)
{
  char v11; // al
  int v12; // edx
  unsigned __int64 result; // rax
  void *v14; // rdi
  __int64 v15; // rax
  _OWORD *v16; // rdx
  __int64 v17; // rcx
  void *v18; // rdi

  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 8) = a2;
  v11 = (2 * (a7 & 1)) | *(_BYTE *)(a1 + 36) & 0xFD;
  *(_BYTE *)(a1 + 36) = v11;
  *(_QWORD *)(a1 + 24) = *a4;
  v12 = *(_DWORD *)(a1 + 32);
  *(_BYTE *)(a1 + 36) = a8 & 1 | v11 & 0xFE;
  result = (unsigned int)(v12 - 3);
  if ( (_DWORD)a6 != v12 )
  {
    if ( (unsigned int)result <= 0xFFFFFFFB )
    {
      v18 = *(void **)(a1 + 40);
      if ( v18 )
        operator delete[](v18);
    }
    result = (unsigned int)(a6 - 3);
    *(_DWORD *)(a1 + 32) = a6;
    if ( (unsigned int)result > 0xFFFFFFFB )
    {
LABEL_4:
      v14 = (void *)(a1 + 40);
      if ( !a6 )
        return result;
      return (unsigned __int64)memcpy(v14, a5, 8 * a6);
    }
    v15 = operator new[](8LL * (unsigned int)a6);
    if ( (_DWORD)a6 )
    {
      v16 = (_OWORD *)v15;
      if ( (unsigned int)a6 == 1 )
        goto LABEL_10;
      do
        *v16++ = 0;
      while ( (_OWORD *)(v15 + 16 * ((unsigned __int64)(unsigned int)a6 >> 1)) != v16 );
      v17 = (unsigned int)a6 & 0xFFFFFFFE;
      v16 = (_OWORD *)(v15 + 8 * v17);
      if ( (unsigned int)a6 != v17 )
LABEL_10:
        *(_QWORD *)v16 = 0;
    }
    *(_QWORD *)(a1 + 40) = v15;
    result = (unsigned int)(*(_DWORD *)(a1 + 32) - 3);
  }
  if ( (unsigned int)result > 0xFFFFFFFB )
    goto LABEL_4;
  v14 = *(void **)(a1 + 40);
  if ( a6 )
    return (unsigned __int64)memcpy(v14, a5, 8 * a6);
  return result;
}

