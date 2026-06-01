/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A208
// Address: 0x0006A208

//----- (0006A208) --------------------------------------------------------
void sub_6A208()
{
  int v0; // r5
  char *v1; // r6
  pthread_mutex_t *v2; // r0
  int v3; // r5
  char *v4; // r5
  char *v5; // r4
  void (__fastcall ***v6)(_DWORD, int); // t1

  v0 = dword_D3B54;
  sub_7A100((pthread_mutex_t *)dword_D3B54);
  v1 = (char *)dword_D3B58;
  v2 = (pthread_mutex_t *)v0;
  v3 = dword_D3B5C;
  dword_D3B58 = 0;
  dword_D3B5C = 0;
  dword_D3B60 = 0;
  sub_7A128(v2);
  v4 = &v1[4 * v3];
  if ( v1 != v4 )
  {
    v5 = v1;
    do
    {
      v6 = *(void (__fastcall ****)(_DWORD, int))v5;
      v5 += 4;
      (**v6)(v6, -1);
    }
    while ( v4 != v5 );
  }
  if ( v1 )
    sub_77E08(v1);
}
// D3B54: using guessed type int dword_D3B54;
// D3B58: using guessed type int dword_D3B58;
// D3B5C: using guessed type int dword_D3B5C;
// D3B60: using guessed type int dword_D3B60;
