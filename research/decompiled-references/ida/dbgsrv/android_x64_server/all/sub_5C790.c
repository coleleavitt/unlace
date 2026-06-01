/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5C790
// Address: 0x000000000005C790

//----- (000000000005C790) ----------------------------------------------------
void __fastcall sub_5C790(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r15
  __int64 v4; // rbx
  unsigned __int64 v5; // r13
  __int64 v6; // rbp
  void *v7; // rdi
  void *v8; // rdi

  v3 = a1[1];
  if ( v3 > a2 )
  {
    v4 = 56 * a2;
    v5 = a2;
    do
    {
      v6 = *a1;
      v7 = *(void **)(*a1 + v4 + 24);
      if ( v7 )
      {
        *(_QWORD *)(v6 + v4 + 32) = 0;
        qfree(v7);
        *(_QWORD *)(v6 + v4 + 24) = 0;
        *(_QWORD *)(v6 + v4 + 40) = 0;
      }
      v8 = *(void **)(v6 + v4);
      if ( v8 )
      {
        *(_QWORD *)(v6 + v4 + 8) = 0;
        qfree(v8);
        *(_QWORD *)(v6 + v4) = 0;
        *(_QWORD *)(v6 + v4 + 16) = 0;
      }
      ++v5;
      v4 += 56;
    }
    while ( v5 < v3 );
  }
  a1[1] = a2;
}
