/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47ACE0
// Address: 0x000000000047ACE0

//----- (000000000047ACE0) ----------------------------------------------------
__int16 *__fastcall sub_47ACE0(_WORD *a1, __int64 a2)
{
  __int16 v2; // ax
  __int64 v3; // rdx
  __int16 *result; // rax
  __int16 *v5; // rdi
  __int16 v6; // cx

  v2 = a1[1];
  v3 = a2 + 12;
  if ( *a1 )
    v2 |= 0x8000u;
  *(_WORD *)(a2 + 14) = v2;
  result = a1 + 3;
  v5 = a1 + 10;
  do
  {
    v6 = *result++;
    v3 -= 2;
    *(_WORD *)(v3 + 2) = v6;
  }
  while ( result != v5 );
  return result;
}
