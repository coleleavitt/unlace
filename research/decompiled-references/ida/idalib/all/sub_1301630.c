unsigned __int64 __fastcall sub_1301630(__int64 *a1)
{
  __int64 v2; // rbx
  void **v3; // r14
  void **v4; // r13
  void **v5; // rbp
  void **v6; // r14
  void **v7; // r13
  void **v8; // rbp
  void **v9; // r14
  void **v10; // r13
  void **v11; // rbp
  _BYTE *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax

  sub_FEA760(*a1);
  v2 = a1[8];
  v3 = *(void ***)(v2 + 24);
  v4 = *(void ***)(v2 + 32);
  if ( v3 != v4 )
  {
    v5 = *(void ***)(v2 + 24);
    do
    {
      while ( *v5 != v5 + 2 )
      {
        operator delete(*v5);
        v5 += 4;
        if ( v4 == v5 )
          goto LABEL_5;
      }
      v5 += 4;
    }
    while ( v4 != v5 );
LABEL_5:
    *(_QWORD *)(v2 + 32) = v3;
  }
  v6 = *(void ***)(v2 + 48);
  v7 = *(void ***)(v2 + 56);
  if ( v6 != v7 )
  {
    v8 = *(void ***)(v2 + 48);
    do
    {
      while ( *v8 != v8 + 2 )
      {
        operator delete(*v8);
        v8 += 4;
        if ( v7 == v8 )
          goto LABEL_10;
      }
      v8 += 4;
    }
    while ( v7 != v8 );
LABEL_10:
    *(_QWORD *)(v2 + 56) = v6;
  }
  v9 = *(void ***)(v2 + 144);
  v10 = *(void ***)(v2 + 152);
  if ( v9 != v10 )
  {
    v11 = *(void ***)(v2 + 144);
    do
    {
      while ( *v11 != v11 + 2 )
      {
        operator delete(*v11);
        v11 += 4;
        if ( v10 == v11 )
          goto LABEL_15;
      }
      v11 += 4;
    }
    while ( v10 != v11 );
LABEL_15:
    *(_QWORD *)(v2 + 152) = v9;
  }
  v12 = *(_BYTE **)(v2 + 112);
  *(_BYTE *)(v2 + 174) = 0;
  *(_QWORD *)(v2 + 120) = 0;
  *v12 = 0;
  v13 = a1[16];
  *(_WORD *)(v2 + 234) = 256;
  v14 = a1[6];
  *(_DWORD *)(v2 + 224) = 0;
  *(_BYTE *)(v2 + 228) = 0;
  *(_WORD *)(v2 + 312) = 1;
  return sub_FBFC70(v13, *(_QWORD *)(v14 + 248), *(_QWORD *)(v14 + 256));
}
