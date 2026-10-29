/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4DA78
// Address: 0x0004DA78

//----- (0004DA78) --------------------------------------------------------
void __fastcall sub_4DA78(int a1, unsigned int a2, int a3, int a4)
{
  int v4; // r10
  _DWORD *v7; // r10
  _DWORD *v8; // r9
  _DWORD *v9; // r4
  int v10; // r7
  int v11; // r1
  _DWORD *v12; // r3
  _DWORD *v13; // r2

  if ( a2 == 1 )
  {
    a4 = 0;
    v4 = a1;
  }
  if ( a2 == 1 )
  {
    *(_DWORD *)(v4 + 24) = a4;
    v7 = (_DWORD *)(v4 + 24);
    v8 = v7;
  }
  else
  {
    v7 = sub_4B374(a2);
    v8 = (_DWORD *)(a1 + 24);
  }
  v9 = *(_DWORD **)(a1 + 8);
  v10 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( v9 )
  {
    do
    {
      while ( 1 )
      {
        v11 = v9[6] % a2;
        v12 = (_DWORD *)v7[v11];
        v13 = (_DWORD *)*v9;
        if ( !v12 )
          break;
        *v9 = *v12;
        *(_DWORD *)v7[v11] = v9;
LABEL_9:
        v9 = v13;
        if ( !v13 )
          goto LABEL_13;
      }
      *v9 = *(_DWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 8) = v9;
      v7[v11] = a1 + 8;
      if ( !*v9 )
      {
        v10 = v11;
        goto LABEL_9;
      }
      v7[v10] = v9;
      v10 = v11;
      v9 = v13;
    }
    while ( v13 );
  }
LABEL_13:
  if ( *(_DWORD **)a1 != v8 )
    sub_80648(*(void **)a1);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = a2;
}
// 4DA8A: variable 'v4' is possibly undefined
