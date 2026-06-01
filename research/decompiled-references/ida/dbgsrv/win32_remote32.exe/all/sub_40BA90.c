/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40BA90
// Address: 0x0040BA90

//----- (0040BA90) --------------------------------------------------------
int __thiscall sub_40BA90(int ***this, int a2)
{
  int v2; // ebx
  int v4; // edi
  int v5; // edx
  int v6; // esi
  int **v7; // eax
  int *v8; // ecx
  int **v9; // edx
  int *v10; // eax
  int *i; // ecx
  int *v12; // eax
  char v13; // cl
  int v14; // ebx
  _BYTE *v15; // ecx
  int *v16; // ecx
  int *v17; // edx
  int **v18; // eax
  _BYTE *v19; // ecx
  int v20; // eax
  _DWORD *v21; // eax
  int v22; // ebx
  bool v23; // zf
  int v24; // ecx
  int result; // eax
  _DWORD *v26; // [esp+10h] [ebp-Ch]
  int v27; // [esp+10h] [ebp-Ch]
  int v28; // [esp+14h] [ebp-8h]

  v2 = a2;
  v28 = a2;
  sub_40B5E0(&a2);
  v4 = *(_DWORD *)(v2 + 8);
  if ( !*(_BYTE *)(*(_DWORD *)v2 + 13) )
  {
    if ( *(_BYTE *)(v4 + 13) )
    {
      v4 = *(_DWORD *)v2;
    }
    else
    {
      v5 = a2;
      v4 = *(_DWORD *)(a2 + 8);
      if ( a2 != v2 )
      {
        *(_DWORD *)(*(_DWORD *)v2 + 4) = a2;
        *(_DWORD *)v5 = *(_DWORD *)v2;
        v26 = (_DWORD *)(v5 + 4);
        if ( v5 == *(_DWORD *)(v2 + 8) )
        {
          v6 = v5;
        }
        else
        {
          v6 = *(_DWORD *)(v5 + 4);
          if ( !*(_BYTE *)(v4 + 13) )
            *(_DWORD *)(v4 + 4) = v6;
          *(_DWORD *)v6 = v4;
          *(_DWORD *)(v5 + 8) = *(_DWORD *)(v2 + 8);
          v26 = (_DWORD *)(v5 + 4);
          *(_DWORD *)(*(_DWORD *)(v2 + 8) + 4) = v5;
        }
        if ( (*this)[1] == (int *)v2 )
        {
          (*this)[1] = (int *)v5;
        }
        else
        {
          v12 = *(int **)(v2 + 4);
          if ( *v12 == v2 )
            *v12 = v5;
          else
            v12[2] = v5;
        }
        *v26 = *(_DWORD *)(v2 + 4);
        v13 = *(_BYTE *)(v5 + 12);
        *(_BYTE *)(v5 + 12) = *(_BYTE *)(v2 + 12);
        *(_BYTE *)(v2 + 12) = v13;
        goto LABEL_34;
      }
    }
  }
  v6 = *(_DWORD *)(v2 + 4);
  if ( !*(_BYTE *)(v4 + 13) )
    *(_DWORD *)(v4 + 4) = v6;
  if ( (*this)[1] == (int *)v2 )
  {
    (*this)[1] = (int *)v4;
  }
  else if ( *(_DWORD *)v6 == v2 )
  {
    *(_DWORD *)v6 = v4;
  }
  else
  {
    *(_DWORD *)(v6 + 8) = v4;
  }
  v7 = *this;
  if ( **this == (int *)v2 )
  {
    if ( *(_BYTE *)(v4 + 13) )
    {
      v8 = (int *)v6;
    }
    else
    {
      v8 = sub_40C0E0((int *)v4);
      v7 = *this;
    }
    *v7 = v8;
  }
  v9 = *this;
  if ( (*this)[2] == (int *)v2 )
  {
    if ( *(_BYTE *)(v4 + 13) )
    {
      v9[2] = (int *)v6;
    }
    else
    {
      v10 = *(int **)(v4 + 8);
      for ( i = (int *)v4; !*((_BYTE *)v10 + 13); v10 = (int *)v10[2] )
        i = v10;
      v9[2] = i;
    }
  }
LABEL_34:
  if ( *(_BYTE *)(v2 + 12) != 1 )
    goto LABEL_78;
  if ( (int *)v4 == (*this)[1] )
    goto LABEL_77;
  v27 = v6;
  if ( *(_BYTE *)(v4 + 12) != 1 )
    goto LABEL_77;
  v14 = v6;
  while ( 1 )
  {
    v15 = *(_BYTE **)v6;
    if ( v4 != *(_DWORD *)v6 )
      break;
    v15 = *(_BYTE **)(v6 + 8);
    if ( v15[12] )
    {
      v17 = (int *)(v6 + 4);
    }
    else
    {
      v15[12] = 1;
      v16 = *(int **)(v6 + 8);
      *(_BYTE *)(v6 + 12) = 0;
      *(_DWORD *)(v6 + 8) = *v16;
      if ( !*(_BYTE *)(*v16 + 13) )
        *(_DWORD *)(*v16 + 4) = v6;
      v17 = (int *)(v6 + 4);
      v16[1] = *(_DWORD *)(v6 + 4);
      if ( (int *)v6 == (*this)[1] )
      {
        (*this)[1] = v16;
        *v16 = v6;
        *v17 = (int)v16;
        v15 = *(_BYTE **)(v6 + 8);
      }
      else
      {
        v18 = (int **)*v17;
        if ( v6 == *(_DWORD *)*v17 )
          *v18 = v16;
        else
          v18[2] = v16;
        *v16 = v6;
        *v17 = (int)v16;
        v15 = *(_BYTE **)(v6 + 8);
      }
    }
    if ( v15[13] )
      goto LABEL_69;
    if ( *(_BYTE *)(*(_DWORD *)v15 + 12) != 1 || *(_BYTE *)(*((_DWORD *)v15 + 2) + 12) != 1 )
    {
      if ( *(_BYTE *)(*((_DWORD *)v15 + 2) + 12) == 1 )
      {
        *(_BYTE *)(*(_DWORD *)v15 + 12) = 1;
        v15[12] = 0;
        sub_40C100(this, v15);
        v15 = *(_BYTE **)(v6 + 8);
      }
      v15[12] = *(_BYTE *)(v6 + 12);
      *(_BYTE *)(v6 + 12) = 1;
      *(_BYTE *)(*((_DWORD *)v15 + 2) + 12) = 1;
      sub_40C090(this, v6);
      goto LABEL_76;
    }
LABEL_68:
    v15[12] = 0;
LABEL_69:
    v14 = v27;
LABEL_70:
    v4 = v14;
    v6 = *v17;
    if ( (int *)v14 != (*this)[1] )
    {
      v23 = *(_BYTE *)(v14 + 12) == 1;
      v14 = *v17;
      v27 = *v17;
      if ( v23 )
        continue;
    }
    goto LABEL_76;
  }
  if ( v15[12] )
  {
    v17 = (int *)(v6 + 4);
  }
  else
  {
    v15[12] = 1;
    v19 = *(_BYTE **)v6;
    *(_BYTE *)(v6 + 12) = 0;
    *(_DWORD *)v6 = *((_DWORD *)v19 + 2);
    v20 = *((_DWORD *)v19 + 2);
    if ( !*(_BYTE *)(v20 + 13) )
      *(_DWORD *)(v20 + 4) = v6;
    v17 = (int *)(v6 + 4);
    *((_DWORD *)v19 + 1) = *(_DWORD *)(v6 + 4);
    if ( (int *)v6 == (*this)[1] )
    {
      (*this)[1] = (int *)v19;
      *((_DWORD *)v19 + 2) = v6;
      *v17 = (int)v19;
      v15 = *(_BYTE **)v6;
    }
    else
    {
      v21 = (_DWORD *)*v17;
      if ( v6 == *(_DWORD *)(*v17 + 8) )
        v21[2] = v19;
      else
        *v21 = v19;
      *((_DWORD *)v19 + 2) = v6;
      *v17 = (int)v19;
      v15 = *(_BYTE **)v6;
    }
  }
  if ( v15[13] )
    goto LABEL_70;
  v22 = *((_DWORD *)v15 + 2);
  if ( *(_BYTE *)(v22 + 12) == 1 && *(_BYTE *)(*(_DWORD *)v15 + 12) == 1 )
    goto LABEL_68;
  if ( *(_BYTE *)(*(_DWORD *)v15 + 12) == 1 )
  {
    *(_BYTE *)(v22 + 12) = 1;
    v15[12] = 0;
    sub_40C090(this, (int)v15);
    v15 = *(_BYTE **)v6;
  }
  v15[12] = *(_BYTE *)(v6 + 12);
  *(_BYTE *)(v6 + 12) = 1;
  *(_BYTE *)(*(_DWORD *)v15 + 12) = 1;
  sub_40C100(this, (_DWORD *)v6);
LABEL_76:
  v2 = v28;
LABEL_77:
  *(_BYTE *)(v4 + 12) = 1;
LABEL_78:
  v24 = (int)*(this + 1);
  result = v2;
  if ( v24 )
    *(this + 1) = (int **)(v24 - 1);
  return result;
}
