/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8054C20
// Address: 0x08054C20

//----- (08054C20) --------------------------------------------------------
_BOOL4 __cdecl sub_8054C20(int a1, int a2)
{
  char v2; // dl
  _BOOL4 result; // eax
  int *v4; // edi
  int v5; // ebp

  v2 = sub_80CED40(a1 + 4);
  result = 0;
  if ( v2 )
  {
    result = 1;
    if ( a2 == 1 )
    {
      v4 = sub_80CD4D0(a1 + 4, 0);
      v5 = sub_80C45E0(v4);
      sub_80CD620(v4);
      return *(_DWORD *)(a1 + 1076) == v5;
    }
  }
  return result;
}
