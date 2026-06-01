/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AB3A0
// Address: 0x00000000000AB3A0

//----- (00000000000AB3A0) ----------------------------------------------------
int __fastcall sub_AB3A0(__int64 a1, int a2)
{
  __int64 v3; // rdi
  int result; // eax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 != -1 )
  {
    if ( a2 >= 0 )
    {
      shutdown(v3, a2);
      v3 = *(_QWORD *)(a1 + 56);
    }
    result = close(v3);
    *(_QWORD *)(a1 + 56) = -1;
  }
  return result;
}
