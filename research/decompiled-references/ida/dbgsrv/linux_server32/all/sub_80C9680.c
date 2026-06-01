/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C9680
// Address: 0x080C9680

//----- (080C9680) --------------------------------------------------------
int __cdecl sub_80C9680(_QWORD *a1, const __m128i *a2, char a3)
{
  int result; // eax
  __int64 v4; // [esp+0h] [ebp-1Ch] BYREF
  unsigned int v5; // [esp+Ch] [ebp-10h]

  v5 = __readgsdword(0x14u);
  result = sub_80C9200(&v4, a2, 63, a3);
  if ( result == 1 )
    *a1 = v4;
  if ( v5 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
