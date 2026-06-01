/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_58CB0
// Address: 0x0000000000058CB0

//----- (0000000000058CB0) ----------------------------------------------------
__int64 __fastcall sub_58CB0(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // r14
  __int64 v3; // rbx
  void *v4; // rdi
  void *v5; // rdi

  result = a1[1];
  if ( result )
  {
    v2 = *a1;
    a1[1] = --result;
    v3 = 56 * result;
    v4 = *(void **)(v2 + 56 * result + 24);
    if ( v4 )
    {
      *(_QWORD *)(v2 + v3 + 32) = 0;
      qfree(v4);
      result = v2 + v3 + 24;
      *(_QWORD *)result = 0;
      *(_QWORD *)(v2 + v3 + 40) = 0;
    }
    v5 = *(void **)(v2 + v3);
    if ( v5 )
    {
      *(_QWORD *)(v2 + v3 + 8) = 0;
      qfree(v5);
      *(_QWORD *)(v2 + v3) = 0;
      *(_QWORD *)(v2 + v3 + 16) = 0;
      return v2 + v3;
    }
  }
  return result;
}
