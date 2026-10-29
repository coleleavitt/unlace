/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81E80
// Address: 0x0000000000081E80

//----- (0000000000081E80) ----------------------------------------------------
void __fastcall sub_81E80(__int64 a1)
{
  char **v2; // rdi
  __int64 v3; // r15
  __int64 v4; // r15
  __int64 v5; // rbx

  v2 = *(char ***)a1;
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( v3 )
    {
      sub_38490(v2);
      if ( v3 != 1 )
      {
        v4 = v3 - 1;
        v5 = 56;
        do
        {
          sub_38490((char **)(v5 + *(_QWORD *)a1));
          v5 += 56;
          --v4;
        }
        while ( v4 );
      }
      v2 = *(char ***)a1;
    }
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v2);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
}
