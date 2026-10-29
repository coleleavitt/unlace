/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36230
// Address: 0x00036230

//----- (00036230) --------------------------------------------------------
_QWORD *__cdecl sub_36230(int a1, _QWORD *a2)
{
  int v2; // ecx
  int v3; // edx
  _QWORD *result; // eax
  int v5; // ecx

  v2 = *(_DWORD *)(a1 + 460);
  v3 = v2 + 1;
  if ( *(_DWORD *)(a1 + 464) >= (unsigned int)(v2 + 1) )
  {
    result = *(_QWORD **)(a1 + 456);
  }
  else
  {
    result = qvector_reserve(a1 + 456, *(void **)(a1 + 456), v2 + 1, 0x18u);
    *(_DWORD *)(a1 + 456) = result;
    v2 = *(_DWORD *)(a1 + 460);
    v3 = v2 + 1;
  }
  *(_DWORD *)(a1 + 460) = v3;
  v5 = 3 * v2;
  result[v5] = a2[1];
  result[v5 + 1] = a2[4];
  result[v5 + 2] = a2[2];
  return result;
}
