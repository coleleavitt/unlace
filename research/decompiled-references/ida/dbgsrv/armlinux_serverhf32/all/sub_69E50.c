/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_69E50
// Address: 0x00069E50

//----- (00069E50) --------------------------------------------------------
void __fastcall __noreturn sub_69E50(int a1)
{
  int v2; // r5
  char *v3; // r7
  pthread_mutex_t *v4; // r0
  int v5; // r5
  char *v6; // r5
  char *v7; // r4
  void (__fastcall ***v8)(_DWORD, int); // t1
  int v9; // r0

  v2 = dword_D3B54;
  sub_7A100((pthread_mutex_t *)dword_D3B54);
  v3 = (char *)dword_D3B58;
  v4 = (pthread_mutex_t *)v2;
  v5 = dword_D3B5C;
  dword_D3B58 = 0;
  dword_D3B5C = 0;
  dword_D3B60 = 0;
  sub_7A128(v4);
  v6 = &v3[4 * v5];
  if ( v3 != v6 )
  {
    v7 = v3;
    do
    {
      v8 = *(void (__fastcall ****)(_DWORD, int))v7;
      v7 += 4;
      (**v8)(v8, a1);
    }
    while ( v6 != v7 );
  }
  if ( v3 )
    sub_77E08(v3);
  if ( a1 == 15 )
    v9 = 0;
  else
    v9 = -1;
  exit(v9);
}
// D3B54: using guessed type int dword_D3B54;
// D3B58: using guessed type int dword_D3B58;
// D3B5C: using guessed type int dword_D3B5C;
// D3B60: using guessed type int dword_D3B60;
