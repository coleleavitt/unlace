/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_90720
// Address: 0x00090720

//----- (00090720) --------------------------------------------------------
int __cdecl sub_90720(int a1, int a2)
{
  unsigned __int8 *v2; // edi
  unsigned __int8 *v3; // eax
  size_t v5; // eax
  unsigned int v6; // edx
  _DWORD *v7; // ecx
  void *v8; // eax
  _DWORD *v9; // edi
  int result; // eax
  unsigned __int8 *v11; // [esp-Ch] [ebp-28h]
  size_t v12; // [esp+4h] [ebp-18h]
  unsigned int v13; // [esp+8h] [ebp-14h]

  v2 = *(unsigned __int8 **)a2;
  v3 = *(unsigned __int8 **)a2;
  do
  {
    if ( (unsigned int)v3 >= *(_DWORD *)(a2 + 4) )
      goto LABEL_8;
  }
  while ( *v3++ != 0 );
  *(_DWORD *)a2 = v3;
  if ( !v2 || (v5 = strlen((const char *)v2)) == 0 )
  {
LABEL_8:
    v9 = (_DWORD *)a1;
    *(_DWORD *)(a1 + 4) = 0;
    goto LABEL_9;
  }
  v12 = v5;
  v6 = v5 + 1;
  v7 = (_DWORD *)a1;
  if ( *(_DWORD *)(a1 + 8) >= v5 + 1 )
  {
    v8 = *(void **)a1;
  }
  else
  {
    v13 = v5 + 1;
    v8 = qvector_reserve(a1, *(void **)a1, v6, 1u);
    v6 = v13;
    v7 = (_DWORD *)a1;
    *(_DWORD *)a1 = v8;
  }
  v7[1] = v6;
  v11 = v2;
  v9 = v7;
  memmove(v8, v11, v12);
  *(_BYTE *)(*v9 + v12) = 0;
LABEL_9:
  v9[3] = unpack_dq((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4)) - 1;
  v9[4] = unpack_dq((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4)) - 1;
  result = unpack_dq((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4)) - 1;
  v9[5] = result;
  return result;
}
