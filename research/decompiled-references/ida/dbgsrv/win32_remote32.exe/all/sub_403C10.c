/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_403C10
// Address: 0x00403C10

//----- (00403C10) --------------------------------------------------------
int __thiscall sub_403C10(_DWORD *this, _DWORD *a2, int a3, int a4)
{
  _DWORD *v5; // ebp
  _DWORD *v7; // eax
  int v8; // edx
  int *v9; // esi
  int v10; // ecx
  _DWORD *v11; // esi
  _DWORD *v12; // ecx
  _DWORD *v13; // edx
  _DWORD *v14; // esi
  int v15; // ecx
  _DWORD *v16; // ecx
  _DWORD *v17; // esi
  int v18; // ecx
  _DWORD *v19; // ecx
  _DWORD *v20; // ecx

  ++*(this + 1);
  v5 = (_DWORD *)*this;
  *(_DWORD *)(a4 + 4) = a2;
  if ( a2 == v5 )
  {
    *v5 = a4;
    v5[1] = a4;
    v5[2] = a4;
    *(_BYTE *)(a4 + 12) = 1;
    return a4;
  }
  if ( a3 )
  {
    *a2 = a4;
    if ( a2 == (_DWORD *)*v5 )
      *v5 = a4;
  }
  else
  {
    a2[2] = a4;
    if ( a2 == (_DWORD *)v5[2] )
      v5[2] = a4;
  }
  v7 = (_DWORD *)a4;
  while ( !*(_BYTE *)(v7[1] + 12) )
  {
    v8 = v7[1];
    v9 = *(int **)(v8 + 4);
    v10 = *v9;
    if ( v8 == *v9 )
    {
      v10 = v9[2];
      if ( *(_BYTE *)(v10 + 12) )
      {
        v11 = *(_DWORD **)(v8 + 8);
        if ( v7 == v11 )
        {
          v7 = (_DWORD *)v7[1];
          *(_DWORD *)(v8 + 8) = *v11;
          if ( !*(_BYTE *)(*v11 + 13) )
            *(_DWORD *)(*v11 + 4) = v8;
          v11[1] = *(_DWORD *)(v8 + 4);
          if ( v8 == *(_DWORD *)(*this + 4) )
          {
            *(_DWORD *)(*this + 4) = v11;
          }
          else
          {
            v12 = *(_DWORD **)(v8 + 4);
            if ( v8 == *v12 )
              *v12 = v11;
            else
              v12[2] = v11;
          }
          *v11 = v8;
          *(_DWORD *)(v8 + 4) = v11;
        }
        *(_BYTE *)(v7[1] + 12) = 1;
        *(_BYTE *)(*(_DWORD *)(v7[1] + 4) + 12) = 0;
        v13 = *(_DWORD **)(v7[1] + 4);
        v14 = (_DWORD *)*v13;
        *v13 = *(_DWORD *)(*v13 + 8);
        v15 = v14[2];
        if ( !*(_BYTE *)(v15 + 13) )
          *(_DWORD *)(v15 + 4) = v13;
        v14[1] = v13[1];
        if ( v13 == *(_DWORD **)(*this + 4) )
        {
          *(_DWORD *)(*this + 4) = v14;
          v14[2] = v13;
        }
        else
        {
          v16 = (_DWORD *)v13[1];
          if ( v13 == (_DWORD *)v16[2] )
            v16[2] = v14;
          else
            *v16 = v14;
          v14[2] = v13;
        }
LABEL_47:
        v13[1] = v14;
        continue;
      }
    }
    else if ( *(_BYTE *)(v10 + 12) )
    {
      v17 = *(_DWORD **)v8;
      if ( v7 == *(_DWORD **)v8 )
      {
        v7 = (_DWORD *)v7[1];
        *(_DWORD *)v8 = v17[2];
        v18 = v17[2];
        if ( !*(_BYTE *)(v18 + 13) )
          *(_DWORD *)(v18 + 4) = v8;
        v17[1] = *(_DWORD *)(v8 + 4);
        if ( v8 == *(_DWORD *)(*this + 4) )
        {
          *(_DWORD *)(*this + 4) = v17;
        }
        else
        {
          v19 = *(_DWORD **)(v8 + 4);
          if ( v8 == v19[2] )
            v19[2] = v17;
          else
            *v19 = v17;
        }
        v17[2] = v8;
        *(_DWORD *)(v8 + 4) = v17;
      }
      *(_BYTE *)(v7[1] + 12) = 1;
      *(_BYTE *)(*(_DWORD *)(v7[1] + 4) + 12) = 0;
      v13 = *(_DWORD **)(v7[1] + 4);
      v14 = (_DWORD *)v13[2];
      v13[2] = *v14;
      if ( !*(_BYTE *)(*v14 + 13) )
        *(_DWORD *)(*v14 + 4) = v13;
      v14[1] = v13[1];
      if ( v13 == *(_DWORD **)(*this + 4) )
      {
        *(_DWORD *)(*this + 4) = v14;
      }
      else
      {
        v20 = (_DWORD *)v13[1];
        if ( v13 == (_DWORD *)*v20 )
          *v20 = v14;
        else
          v20[2] = v14;
      }
      *v14 = v13;
      goto LABEL_47;
    }
    *(_BYTE *)(v8 + 12) = 1;
    *(_BYTE *)(v10 + 12) = 1;
    *(_BYTE *)(*(_DWORD *)(v7[1] + 4) + 12) = 0;
    v7 = *(_DWORD **)(v7[1] + 4);
  }
  *(_BYTE *)(v5[1] + 12) = 1;
  return a4;
}
