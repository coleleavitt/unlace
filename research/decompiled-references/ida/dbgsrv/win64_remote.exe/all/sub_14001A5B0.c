/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001A5B0
// Address: 0x000000014001A5B0

//----- (000000014001A5B0) ----------------------------------------------------
void __fastcall sub_14001A5B0(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  void *v8; // rcx

  v4 = a1[1];
  if ( a2 >= v4 )
  {
    a1[1] = a2;
  }
  else
  {
    v5 = 32 * a2;
    v6 = v4 - a2;
    do
    {
      v7 = *a1;
      if ( *(int *)(v5 + *a1) >= -1 )
      {
        v8 = *(void **)(v5 + v7 + 8);
        if ( v8 )
        {
          *(_QWORD *)(v5 + v7 + 16) = 0;
          j_free(v8);
          *(_QWORD *)(v5 + v7 + 8) = 0;
          *(_QWORD *)(v5 + v7 + 24) = 0;
        }
        *(_DWORD *)(v5 + v7) = -2;
      }
      v5 += 32;
      --v6;
    }
    while ( v6 );
    a1[1] = a2;
  }
}
