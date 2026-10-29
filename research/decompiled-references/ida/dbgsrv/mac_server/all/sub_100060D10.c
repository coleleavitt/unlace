/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100060D10
// Address: 0x0000000100060D10

//----- (0000000100060D10) ----------------------------------------------------
bool __fastcall sub_100060D10(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // r15
  unsigned __int64 v4; // r12
  bool result; // al

  v2 = *(_QWORD *)(a1 + 384);
  if ( v2 != a2[1] )
    return 0;
  if ( !v2 )
    return 1;
  v3 = 0;
  v4 = 0;
  do
  {
    result = sub_100064620(v3 + *(_QWORD *)(a1 + 376), v3 + *a2);
    if ( !result )
      break;
    ++v4;
    v3 += 80;
  }
  while ( v4 < *(_QWORD *)(a1 + 384) );
  return result;
}
