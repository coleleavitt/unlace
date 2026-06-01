/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47A400
// Address: 0x000000000047A400

//----- (000000000047A400) ----------------------------------------------------
__int64 __fastcall sub_47A400(__int64 a1)
{
  _WORD *v1; // rdx
  int v2; // esi
  _WORD *v3; // rdi
  __int64 result; // rax
  int v5; // ecx
  unsigned int v6; // r8d

  v1 = (_WORD *)(a1 + 4);
  v2 = 0;
  v3 = (_WORD *)(a1 + 22);
  do
  {
    result = *v1 >> 1;
    v6 = *v1 >> 1;
    v5 = v2 | *v1 & 1;
    LOWORD(v6) = v6 | 0x8000;
    if ( (v2 & 2) != 0 )
      result = v6;
    ++v1;
    v2 = 2 * v5;
    *(v1 - 1) = result;
  }
  while ( v3 != v1 );
  return result;
}
