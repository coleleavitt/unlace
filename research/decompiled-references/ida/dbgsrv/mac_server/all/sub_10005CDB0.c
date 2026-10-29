/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005CDB0
// Address: 0x000000010005CDB0

//----- (000000010005CDB0) ----------------------------------------------------
void __fastcall sub_10005CDB0(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r12
  void *v9; // rdi

  *a1 = off_1000A97A0;
  v2 = (void *)a1[138];
  if ( v2 )
  {
    a1[139] = 0;
    qfree(v2);
    a1[138] = 0;
    a1[140] = 0;
  }
  v3 = (void *)a1[135];
  if ( v3 )
  {
    a1[136] = 0;
    qfree(v3);
    a1[135] = 0;
    a1[137] = 0;
  }
  v4 = (void *)a1[132];
  if ( v4 )
  {
    a1[133] = 0;
    qfree(v4);
    a1[132] = 0;
    a1[134] = 0;
  }
  v5 = (void *)a1[129];
  if ( v5 )
  {
    v6 = a1[130];
    if ( v6 )
    {
      v7 = 0;
      do
      {
        v8 = a1[129];
        v9 = *(void **)(v8 + v7);
        if ( v9 )
        {
          *(_QWORD *)(v8 + v7 + 8) = 0;
          qfree(v9);
          *(_QWORD *)(v8 + v7) = 0;
          *(_QWORD *)(v8 + v7 + 16) = 0;
        }
        v7 += 24;
        --v6;
      }
      while ( v6 );
      v5 = (void *)a1[129];
    }
    a1[130] = 0;
    qfree(v5);
    a1[129] = 0;
    a1[131] = 0;
  }
}
// 1000A97A0: using guessed type __int64 (__fastcall *off_1000A97A0[2])();
