/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C9630
// Address: 0x080C9630

//----- (080C9630) --------------------------------------------------------
int __cdecl sub_80C9630(_DWORD *a1, const __m128i *a2, char a3)
{
  int result; // eax
  _DWORD v4[3]; // [esp+0h] [ebp-1Ch] BYREF
  unsigned int v5; // [esp+Ch] [ebp-10h]

  v5 = __readgsdword(0x14u);
  result = sub_80C9200(v4, a2, 31, a3);
  if ( result == 1 )
    *a1 = v4[0];
  if ( v5 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
