/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005EB30
// Address: 0x000000010005EB30

//----- (000000010005EB30) ----------------------------------------------------
void __fastcall sub_10005EB30(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r15
  bool v4; // cc
  unsigned __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // r13
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi

  v3 = a1[1];
  v4 = v3 <= a2;
  v5 = v3 - a2;
  if ( !v4 )
  {
    v6 = 80 * a2;
    do
    {
      v7 = *a1;
      v8 = *(void **)(*a1 + v6 + 48);
      if ( v8 )
      {
        *(_QWORD *)(v7 + v6 + 56) = 0;
        qfree(v8);
        *(_QWORD *)(v7 + v6 + 48) = 0;
        *(_QWORD *)(v7 + v6 + 64) = 0;
      }
      v9 = *(void **)(v7 + v6 + 24);
      if ( v9 )
      {
        *(_QWORD *)(v7 + v6 + 32) = 0;
        qfree(v9);
        *(_QWORD *)(v7 + v6 + 24) = 0;
        *(_QWORD *)(v7 + v6 + 40) = 0;
      }
      v10 = *(void **)(v7 + v6);
      if ( v10 )
      {
        *(_QWORD *)(v7 + v6 + 8) = 0;
        qfree(v10);
        *(_QWORD *)(v7 + v6) = 0;
        *(_QWORD *)(v7 + v6 + 16) = 0;
      }
      v6 += 80;
      --v5;
    }
    while ( v5 );
  }
  a1[1] = a2;
}
