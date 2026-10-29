/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43CF50
// Address: 0x0043CF50

//----- (0043CF50) --------------------------------------------------------
_DWORD *__thiscall sub_43CF50(_DWORD *this, _DWORD *a2, unsigned int a3, int a4)
{
  int v5; // eax
  _DWORD *v6; // esi
  _DWORD *v7; // ecx
  unsigned int v8; // eax
  int *v9; // edx
  int v11; // eax
  _DWORD *i; // eax
  int j; // eax
  int v14; // edx
  unsigned int v15; // edi

  v5 = (*(int (__thiscall **)(_DWORD *))(*this + 244))(this);
  v6 = (_DWORD *)*(this + 62);
  v7 = v6;
  v8 = a3 & -v5;
  v9 = (int *)v6[1];
  while ( !*((_BYTE *)v9 + 13) )
  {
    if ( v9[4] >= v8 )
    {
      v7 = v9;
      v9 = (int *)*v9;
    }
    else
    {
      v9 = (int *)v9[2];
    }
  }
  if ( v7 == v6 || v7[4] >= a4 + a3 )
  {
    if ( v7 == (_DWORD *)*v6 )
    {
      *a2 = v6;
      return a2;
    }
    if ( *((_BYTE *)v7 + 13) )
    {
      v7 = (_DWORD *)v7[2];
    }
    else
    {
      v11 = *v7;
      if ( *(_BYTE *)(*v7 + 13) )
      {
        for ( i = (_DWORD *)v7[1]; !*((_BYTE *)i + 13); i = (_DWORD *)i[1] )
        {
          if ( v7 != (_DWORD *)*i )
            break;
          v7 = i;
        }
        if ( *((_BYTE *)v7 + 13) )
          i = v7;
        v7 = i;
      }
      else
      {
        v7 = (_DWORD *)*v7;
        for ( j = *(_DWORD *)(v11 + 8); !*(_BYTE *)(j + 13); j = *(_DWORD *)(j + 8) )
          v7 = (_DWORD *)j;
      }
    }
  }
  if ( !a4 || (v14 = v7[8]) == 0 || (v15 = v7[4], v15 > a4 + a3 - 1) || a3 > v14 + v15 - 1 )
    v7 = v6;
  *a2 = v7;
  return a2;
}
