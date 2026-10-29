/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_362C0
// Address: 0x000362C0

//----- (000362C0) --------------------------------------------------------
__int64 __cdecl sub_362C0(int a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // esi
  unsigned int v3; // ebx
  __int64 v5; // rax
  unsigned int v6; // [esp+8h] [ebp-10h]

  v6 = *(_DWORD *)(a1 + 460);
  if ( !v6 )
    return -1;
  v2 = (unsigned __int64 *)(*(_DWORD *)(a1 + 456) + 16);
  v3 = 0;
  while ( a2 < *v2 || a2 >= *(v2 - 1) + *v2 )
  {
    ++v3;
    v2 += 3;
    if ( v3 >= v6 )
      return -1;
  }
  HIDWORD(v5) = *((_DWORD *)v2 - 3);
  LODWORD(v5) = a2 - *(_DWORD *)v2;
  return *((unsigned int *)v2 - 4) + v5;
}
