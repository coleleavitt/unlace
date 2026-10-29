/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6D8F0
// Address: 0x0006D8F0

//----- (0006D8F0) --------------------------------------------------------
int __cdecl sub_6D8F0(int a1, int a2)
{
  int i; // eax
  unsigned __int8 *v3; // edx
  int result; // eax
  bool v5; // zf
  _DWORD *v6; // edx
  void *v7; // eax
  int v8; // ecx
  int v9; // edi
  unsigned __int8 v10; // [esp+Bh] [ebp-11h]

  *(_DWORD *)(a2 + 4) = 0;
  if ( *(_DWORD *)(a2 + 8) <= 0x3FFu )
    *(_DWORD *)a2 = qvector_reserve(a2, *(void **)a2, 0x400u, 1u);
  for ( i = -1; ; i = 1 )
  {
    v3 = (unsigned __int8 *)(*(_DWORD *)(a1 + 4) + i);
    *(_DWORD *)(a1 + 4) = v3;
    result = *v3;
    v10 = *v3;
    if ( (result & 0x80u) != 0 || (v5 = isalnum(v10) == 0, result = v10, v5) )
    {
      if ( (_BYTE)result != 95 && (_BYTE)result != 36 )
        break;
    }
    v6 = (_DWORD *)a2;
    v7 = *(void **)a2;
    v8 = *(_DWORD *)(a2 + 4);
    v9 = v8 - 1;
    if ( !v8 )
      v9 = 0;
    if ( *(_DWORD *)(a2 + 8) < (unsigned int)(v9 + 2) )
    {
      v7 = qvector_reserve(a2, v7, v9 + 2, 1u);
      v6 = (_DWORD *)a2;
      *(_DWORD *)a2 = v7;
    }
    v6[1] = v9 + 2;
    *((_BYTE *)v7 + v9) = v10;
    *(_BYTE *)(*v6 + v9 + 1) = 0;
  }
  return result;
}
