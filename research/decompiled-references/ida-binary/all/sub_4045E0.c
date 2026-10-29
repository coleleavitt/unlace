unsigned __int64 __fastcall sub_4045E0(void ***a1, __int64 a2, void ***a3)
{
  __int64 v3; // rsi
  void **v5; // rcx
  void **v6; // rax
  unsigned __int64 v8; // r8
  void **v9; // rbp
  void **v10; // rdx
  void *v11; // rsi
  void *v12; // rsi
  void *v13; // rsi
  int v14; // eax
  void *v15; // rcx
  void *v16; // rsi
  void *v17; // rcx
  void *v18; // rsi
  void *v19; // rcx
  unsigned __int64 v21; // [rsp+18h] [rbp-20h]

  v3 = 32 * a2;
  v5 = *a3;
  v6 = *a1;
  v21 = __readfsqword(0x28u);
  v8 = (unsigned __int64)&(*a3)[v3 / 0xFFFFFFFFFFFFFFF8LL];
  if ( v8 < (unsigned __int64)v6 )
  {
    v9 = &v5[v3 / 0xFFFFFFFFFFFFFFF8LL];
    v10 = v6;
    if ( v6 == v5 )
    {
      do
      {
LABEL_5:
        v15 = *(v10 - 4);
        *(v10 - 4) = *(v6 - 4);
        v16 = *(v6 - 3);
        *(v6 - 4) = v15;
        v17 = *(v10 - 3);
        *(v10 - 3) = v16;
        v18 = *(v6 - 2);
        *(v6 - 3) = v17;
        v19 = *(v10 - 2);
        *(v10 - 2) = v18;
        *(v6 - 2) = v19;
        *((_BYTE *)v10 - 8) = *((_BYTE *)v6 - 8);
        *((_BYTE *)v10 - 7) = *((_BYTE *)v6 - 7);
        *((_DWORD *)v10 - 1) = *((_DWORD *)v6 - 1);
        *a3 -= 4;
        v6 = *a1 - 4;
        *a1 = v6;
        v10 = *a3;
      }
      while ( (void **)v8 != *a3 );
      goto LABEL_6;
    }
  }
  else
  {
    v9 = v6;
    v10 = &v5[v3 / 0xFFFFFFFFFFFFFFF8LL];
    if ( v5 == (void **)v8 )
      goto LABEL_6;
  }
  do
  {
    v11 = *(v6 - 4);
    *(v6 - 4) = nullptr;
    *(v5 - 4) = v11;
    v12 = *(v6 - 3);
    *(v6 - 3) = nullptr;
    *(v5 - 3) = v12;
    v13 = *(v6 - 2);
    *(v6 - 2) = nullptr;
    *(v5 - 2) = v13;
    LOWORD(v13) = *((_WORD *)v6 - 4);
    v14 = *((_DWORD *)v6 - 1);
    *((_WORD *)v5 - 4) = (_WORD)v13;
    *((_DWORD *)v5 - 1) = v14;
    *a3 -= 4;
    v6 = *a1 - 4;
    *a1 = v6;
    v5 = *a3;
  }
  while ( *a3 != v10 );
  if ( (void **)v8 != v10 )
    goto LABEL_5;
LABEL_6:
  if ( v6 != v9 )
  {
    do
    {
      *a1 = v6 + 4;
      if ( *v6 && !_InterlockedSub((volatile signed __int32 *)*v6, 1u) )
        free(*v6);
      v6 = *a1;
    }
    while ( *a1 != v9 );
  }
  return v21 - __readfsqword(0x28u);
}
