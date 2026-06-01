/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_430150
// Address: 0x00430150

//----- (00430150) --------------------------------------------------------
int **__thiscall sub_430150(int **this, int **a2, _DWORD *a3, int a4)
{
  int v4; // edx
  int v5; // eax
  int *v6; // ecx
  int **v7; // eax
  int *v8; // edi
  unsigned int v10; // ebx
  _DWORD *v11; // eax
  _DWORD *v12; // edx
  unsigned int v13; // esi
  bool v14; // cf
  unsigned __int8 v15; // cl
  unsigned __int8 v16; // cl
  unsigned __int8 v17; // cl
  int v18; // eax
  int *v19; // ecx
  int *v20; // [esp+10h] [ebp+Ch]

  v4 = a4 & (unsigned int)*(this + 6);
  v5 = (int)*(this + 3);
  v6 = *(this + 1);
  v7 = (int **)(v5 + 8 * v4);
  v8 = v7[1];
  if ( v8 == v6 )
  {
    *a2 = v6;
    a2[1] = nullptr;
    return a2;
  }
  v20 = *v7;
  v10 = a3[4];
  while ( 1 )
  {
    v11 = v8 + 2;
    if ( (unsigned int)v8[7] > 0xF )
      v11 = (_DWORD *)*v11;
    v12 = a3;
    if ( a3[5] > 0xFu )
      v12 = (_DWORD *)*a3;
    if ( v10 != v8[6] )
      goto LABEL_24;
    if ( !v10 )
      goto LABEL_26;
    v13 = v10 - 4;
    if ( v10 < 4 )
    {
LABEL_13:
      if ( v13 == -4 )
        goto LABEL_22;
    }
    else
    {
      while ( *v12 == *v11 )
      {
        ++v12;
        ++v11;
        v14 = v13 < 4;
        v13 -= 4;
        if ( v14 )
          goto LABEL_13;
      }
    }
    v14 = *(_BYTE *)v12 < *(_BYTE *)v11;
    if ( *(_BYTE *)v12 != *(_BYTE *)v11
      || v13 != -3
      && ((v15 = *((_BYTE *)v12 + 1), v14 = v15 < *((_BYTE *)v11 + 1), v15 != *((_BYTE *)v11 + 1))
       || v13 != -2
       && ((v16 = *((_BYTE *)v12 + 2), v14 = v16 < *((_BYTE *)v11 + 2), v16 != *((_BYTE *)v11 + 2))
        || v13 != -1 && (v17 = *((_BYTE *)v12 + 3), v14 = v17 < *((_BYTE *)v11 + 3), v17 != *((_BYTE *)v11 + 3)))) )
    {
      v18 = v14 ? -1 : 1;
      goto LABEL_23;
    }
LABEL_22:
    v18 = 0;
LABEL_23:
    if ( !v18 )
    {
LABEL_26:
      v19 = (int *)*v8;
      a2[1] = v8;
      *a2 = v19;
      return a2;
    }
LABEL_24:
    if ( v8 == v20 )
      break;
    v8 = (int *)v8[1];
  }
  *a2 = v8;
  a2[1] = nullptr;
  return a2;
}
