/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400373E0
// Address: 0x00000001400373E0

//----- (00000001400373E0) ----------------------------------------------------
void __fastcall sub_1400373E0(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  __int64 v4; // rbx

  if ( *(_QWORD *)a1 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    if ( v2 )
    {
      v3 = 0;
      do
      {
        v4 = v3 + *(_QWORD *)a1;
        if ( *(_QWORD *)v4 )
        {
          sub_14001A6C0((_QWORD *)(v3 + *(_QWORD *)a1), 0);
          j_free(*(void **)v4);
          *(_QWORD *)v4 = 0;
          *(_QWORD *)(v4 + 16) = 0;
        }
        v3 += 56;
        --v2;
      }
      while ( v2 );
    }
    *(_QWORD *)(a1 + 8) = 0;
    j_free(*(void **)a1);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
}
