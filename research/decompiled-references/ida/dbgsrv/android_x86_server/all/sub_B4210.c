/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B4210
// Address: 0x000B4210

//----- (000B4210) --------------------------------------------------------
_DWORD *__userpurge sub_B4210@<eax>(_DWORD *a1, _DWORD *a2, int a3, char a4)
{
  _DWORD *result; // eax
  _DWORD *v5; // edx

  result = a1;
  v5 = (_DWORD *)*a2;
  *a1 = *a2;
  if ( a2 == v5 )
  {
LABEL_7:
    *a1 = a2;
  }
  else
  {
    while ( a3 != -1 && v5[2] != a3 || (a4 & 8) == 0 && v5[3] == 0xFFFF )
    {
      v5 = (_DWORD *)*v5;
      *a1 = v5;
      if ( a2 == v5 )
        goto LABEL_7;
    }
  }
  return result;
}
