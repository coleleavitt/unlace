/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140020320
// Address: 0x0000000140020320

//----- (0000000140020320) ----------------------------------------------------
__int64 __fastcall sub_140020320(_QWORD *a1, __int64 a2)
{
  const CHAR *v2; // rax
  const CHAR *v4; // rdx
  __int64 v5; // rcx

  v2 = Str1;
  v4 = Str1;
  if ( a1[6] )
    v4 = (const CHAR *)a1[5];
  if ( a1[2] )
    v2 = (const CHAR *)a1[1];
  v5 = (int)sub_140064660(v2, v4);
  *(_QWORD *)(a2 + 8) = v5;
  return 0;
}
