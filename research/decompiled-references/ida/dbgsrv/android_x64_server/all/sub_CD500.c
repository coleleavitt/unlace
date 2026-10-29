/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CD500
// Address: 0x00000000000CD500

//----- (00000000000CD500) ----------------------------------------------------
unsigned __int64 __fastcall sub_CD500(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 i; // rbx
  int v4; // edi

  result = *(_QWORD *)(a1 + 8);
  if ( result )
  {
    for ( i = 0; i < result; ++i )
    {
      v4 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4 * i);
      if ( v4 != -1 )
      {
        close(v4);
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4 * i) = -1;
        result = *(_QWORD *)(a1 + 8);
      }
    }
  }
  return result;
}
