/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CD4D0
// Address: 0x080CD4D0

//----- (080CD4D0) --------------------------------------------------------
_DWORD *__cdecl sub_80CD4D0(int a1, char a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // eax
  _DWORD *result; // eax
  FILE *v6; // esi
  _DWORD *v7; // [esp+1Ch] [ebp-10h]

  if ( a2 )
  {
    v2 = (_DWORD *)sub_80C3660();
    v3 = v2;
    if ( v2 )
    {
      if ( v2[3] != -1 )
      {
        v4 = (_DWORD *)operator new(0x24u);
        v4[1] = v3;
        *v4 = 2;
        v7 = v4;
        sub_80CD100((int)v4);
        return v7;
      }
      (*(void (__cdecl **)(_DWORD *))(*v2 + 8))(v2);
    }
  }
  else
  {
    v6 = sub_80CDAB0(a1);
    if ( v6 )
    {
      result = (_DWORD *)operator new(0x24u);
      *result = 1;
      result[1] = v6;
      return result;
    }
  }
  return nullptr;
}
