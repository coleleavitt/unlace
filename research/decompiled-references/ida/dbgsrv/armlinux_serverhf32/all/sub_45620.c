/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45620
// Address: 0x00045620

//----- (00045620) --------------------------------------------------------
void __fastcall sub_45620(char **a1)
{
  char *v2; // r2
  int v3; // r4
  unsigned int v4; // r5
  char *v5; // r0
  int v6; // r3
  char *v7; // r0
  int v8; // r6
  int v9; // r5
  int v10; // r4
  void *v11; // r0

  v2 = a1[4];
  if ( v2 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      while ( 1 )
      {
        v5 = &a1[3][v3];
        v6 = (unsigned __int8)v5[16];
        if ( v6 == 5 || v6 == 6 && -*((_DWORD *)v5 + 6) >= (unsigned int)dword_D2CC8 )
          break;
        ++v4;
        v3 += 40;
        if ( v4 >= (unsigned int)v2 )
          goto LABEL_8;
      }
      ++v4;
      sub_455C8((unsigned __int8 *)v5 + 16);
      v2 = a1[4];
      v3 += 40;
    }
    while ( v4 < (unsigned int)v2 );
  }
LABEL_8:
  if ( off_D2CDC )
    ((void (*)(void))off_D2CDC)();
  v7 = *a1;
  v8 = (int)(a1[1] - 1);
  if ( v8 >= 0 )
  {
    v9 = 4 * (_DWORD)(a1[1] + 0x3FFFFFFF);
    do
    {
      v10 = *(_DWORD *)&v7[v9];
      if ( v10 )
      {
        v11 = *(void **)(v10 + 32);
        if ( v11 )
        {
          *(_DWORD *)(v10 + 36) = 0;
          sub_77E08(v11);
        }
        sub_42938(v10, *(_DWORD **)(v10 + 8));
        sub_8121C((void *)v10);
        v7 = *a1;
      }
      --v8;
      v9 -= 4;
    }
    while ( v8 != -1 );
  }
  if ( v7 )
  {
    a1[1] = nullptr;
    sub_77E08(v7);
    *a1 = nullptr;
    a1[2] = nullptr;
  }
}
// D2CC8: using guessed type int dword_D2CC8;
// D2CDC: using guessed type _UNKNOWN *off_D2CDC;
