__int64 __fastcall sub_1F6B660(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rbp
  __int64 i; // r10
  __int64 v7; // r8
  int *v8; // r9
  int v9; // r11d
  __int64 v10; // rax
  char v11; // r10
  unsigned __int64 v12; // rbp
  __int64 v13; // rdx
  int *v14; // r11
  int j; // r10d
  __int64 v16; // rax
  char v17; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // edx

  result = a3 - 1;
  v5 = (a3 - 1) / 2;
  if ( a2 >= v5 )
  {
    v8 = (int *)(a1 + 8 * a2);
    if ( (a3 & 1) != 0 )
    {
      v12 = HIDWORD(a4);
      goto LABEL_13;
    }
    v7 = a2;
  }
  else
  {
    for ( i = a2; ; i = v7 )
    {
      v7 = 2 * (i + 1);
      v8 = (int *)(a1 + 16 * (i + 1));
      v9 = *v8;
      if ( *v8 < (unsigned int)*(v8 - 2) )
      {
        --v7;
        v8 = (int *)(a1 + 8 * v7);
        v9 = *v8;
      }
      v10 = a1 + 8 * i;
      v11 = *((_BYTE *)v8 + 4);
      *(_DWORD *)v10 = v9;
      *(_BYTE *)(v10 + 4) = v11;
      if ( v7 >= v5 )
        break;
    }
    if ( (a3 & 1) != 0 )
      goto LABEL_8;
  }
  if ( (a3 - 2) / 2 == v7 )
  {
    v18 = v7 + 1;
    v7 = 2 * (v7 + 1) - 1;
    v19 = a1 + 16 * v18 - 8;
    v20 = *(_DWORD *)v19;
    LOBYTE(v19) = *(_BYTE *)(v19 + 4);
    *v8 = v20;
    *((_BYTE *)v8 + 4) = v19;
    v8 = (int *)(a1 + 8 * v7);
  }
LABEL_8:
  result = v7 - 1;
  v12 = HIDWORD(a4);
  v13 = (v7 - 1) / 2;
  if ( v7 > a2 )
  {
    v14 = (int *)(a1 + 8 * v13);
    for ( j = *v14; *v14 < (unsigned int)a4; j = *v14 )
    {
      v16 = a1 + 8 * v7;
      v17 = *((_BYTE *)v14 + 4);
      v8 = (int *)(a1 + 8 * v13);
      *(_DWORD *)v16 = j;
      *(_BYTE *)(v16 + 4) = v17;
      result = (v13 - 1) / 2;
      if ( a2 >= v13 )
        break;
      v14 = (int *)(a1 + 8 * result);
      v7 = v13;
      v13 = (v13 - 1) / 2;
    }
  }
LABEL_13:
  *v8 = a4;
  *((_BYTE *)v8 + 4) = v12;
  return result;
}
