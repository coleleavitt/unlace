/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8CB40
// Address: 0x0008CB40

//----- (0008CB40) --------------------------------------------------------
_DWORD *__userpurge sub_8CB40@<eax>(_DWORD *a1, _DWORD *a2, unsigned int a3, int a4)
{
  int v4; // eax
  _DWORD *v5; // ecx
  _DWORD *v6; // ebx
  unsigned int v7; // eax
  _DWORD *v8; // edx
  unsigned int v9; // ebx
  _DWORD *result; // eax
  _DWORD *v11; // ecx
  _DWORD *v12; // ecx
  unsigned int v13; // esi
  int v14; // ebx
  unsigned int v15; // edi

  v4 = (*(int (__cdecl **)(_DWORD *))(*a2 + 248))(a2);
  v5 = a2 + 66;
  v6 = (_DWORD *)a2[66];
  if ( !v6 )
  {
    v8 = a2 + 66;
    result = a1;
    v9 = a3;
    goto LABEL_11;
  }
  v7 = a3 & -v4;
  v8 = a2 + 66;
  do
  {
    if ( v6[4] >= v7 )
      v8 = v6;
    v6 = (_DWORD *)v6[v6[4] < v7];
  }
  while ( v6 );
  if ( v8 == v5 )
  {
    v8 = a2 + 66;
    result = a1;
    v9 = a3;
    if ( a2 + 66 == (_DWORD *)a2[65] )
    {
LABEL_22:
      v8 = v5;
      goto LABEL_23;
    }
    goto LABEL_14;
  }
  v9 = a3;
  result = a1;
  if ( v8[4] >= a4 + a3 )
  {
LABEL_11:
    if ( v8 == (_DWORD *)a2[65] )
      goto LABEL_22;
LABEL_14:
    v11 = (_DWORD *)*v8;
    if ( *v8 )
    {
      do
      {
        v8 = v11;
        v11 = (_DWORD *)v11[1];
      }
      while ( v11 );
    }
    else
    {
      do
      {
        v12 = v8;
        v8 = (_DWORD *)v8[2];
      }
      while ( (_DWORD *)*v8 == v12 );
    }
    v5 = a2 + 66;
    if ( !a4 )
      goto LABEL_22;
    goto LABEL_19;
  }
  if ( !a4 )
    goto LABEL_22;
LABEL_19:
  v13 = v9;
  v14 = v8[8];
  if ( !v14 )
    goto LABEL_22;
  v15 = v8[4];
  if ( a4 + v13 - 1 < v15 || v15 + v14 - 1 < v13 )
    goto LABEL_22;
LABEL_23:
  *result = v8;
  return result;
}
