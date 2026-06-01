/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CD580
// Address: 0x080CD580

//----- (080CD580) --------------------------------------------------------
_DWORD *__cdecl sub_80CD580(int *a1)
{
  _DWORD *v1; // eax
  _DWORD *v2; // ebx

  if ( a1 )
  {
    if ( a1[2] >= 0 && a1[3] >= 0 )
    {
      v1 = (_DWORD *)operator new(0x24u);
      v1[1] = a1;
      v2 = v1;
      *v1 = 4;
      sub_80CD100((int)v1);
      return v2;
    }
    (*(void (__cdecl **)(int *))(*a1 + 8))(a1);
  }
  return nullptr;
}
