/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D3DA0
// Address: 0x080D3DA0

//----- (080D3DA0) --------------------------------------------------------
bool __cdecl sub_80D3DA0(_DWORD *a1, int a2, bool a3)
{
  unsigned __int16 *v3; // eax
  int v4; // ebx
  bool result; // al
  int v6; // ecx
  _DWORD *v7; // edx

  v3 = (unsigned __int16 *)a1[3];
  if ( !v3 )
    return 0;
  v4 = *v3;
  result = 0;
  if ( v4 == a2 )
  {
    result = a3;
    if ( !a3 )
    {
      v6 = a1[2];
      if ( (~(_BYTE)v6 & 0x41) == 0 && (v6 & 8) == 0 )
      {
        v7 = (_DWORD *)a1[6];
        result = 1;
        if ( v7 )
        {
          result = 0;
          if ( *v7 )
            return v7[1] != 0;
        }
      }
    }
  }
  return result;
}
