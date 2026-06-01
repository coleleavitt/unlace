/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52910
// Address: 0x00052910

//----- (00052910) --------------------------------------------------------
_DWORD *__cdecl sub_52910(int *a1, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // ecx
  int v4; // edx
  __int128 v5; // [esp+10h] [ebp-2Ch]

  if ( *a1 > (unsigned int)a2 || 16 * a1[2] + *a1 <= (unsigned int)a2 )
  {
    sub_56A80(a1, a1[1] + 1);
    v3 = *a1;
    result = a1 + 1;
    v4 = 16 * a1[1];
    *(_DWORD *)(v3 + v4) = *a2;
    *(_DWORD *)(v3 + v4 + 4) = a2[1];
    a2[1] = 0;
    *(_DWORD *)(v3 + v4 + 8) = a2[2];
    a2[2] = 0;
    *(_DWORD *)(v3 + v4 + 12) = a2[3];
    a2[3] = 0;
  }
  else
  {
    v5 = *(_OWORD *)a2;
    a2[1] = 0;
    a2[2] = 0;
    a2[3] = 0;
    sub_56A80(a1, a1[1] + 1);
    result = a1 + 1;
    *(__int128 *)(*a1 + 16 * a1[1]) = v5;
  }
  ++*result;
  return result;
}
