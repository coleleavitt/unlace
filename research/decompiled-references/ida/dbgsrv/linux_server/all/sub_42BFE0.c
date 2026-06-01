/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42BFE0
// Address: 0x000000000042BFE0

//----- (000000000042BFE0) ----------------------------------------------------
__int64 __fastcall sub_42BFE0(_QWORD *a1, __int64 a2)
{
  const char *v3; // rsi
  const char *v4; // rax

  v3 = s1;
  if ( a1[6] )
    v3 = (const char *)a1[5];
  v4 = s1;
  if ( a1[2] )
    v4 = (const char *)a1[1];
  *(_QWORD *)(a2 + 8) = (int)sub_480DE0(v4, v3);
  return 0;
}
