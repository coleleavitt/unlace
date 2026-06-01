/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75FF0
// Address: 0x00075FF0

//----- (00075FF0) --------------------------------------------------------
void __cdecl sub_75FF0(_DWORD *a1, unsigned int a2)
{
  void *v2; // eax
  void *v3; // ecx
  unsigned int v4; // edx
  int i; // eax
  int v6; // eax
  _DWORD *v7; // ebx
  _DWORD *v8; // esi
  unsigned int v9; // ecx
  void *v10; // eax
  _DWORD *v11; // ecx
  int *v12; // esi
  unsigned int v13; // eax
  unsigned int v14; // edi
  int v15; // eax
  unsigned __int8 v16; // bl
  _DWORD *v17; // edi
  unsigned int v18; // eax
  char *v19; // eax
  int v20; // ecx
  std::logic_error *exception; // esi
  size_t v22; // [esp+14h] [ebp-38h]
  _DWORD *v23; // [esp+1Ch] [ebp-30h]
  int v24; // [esp+20h] [ebp-2Ch]
  unsigned int v25; // [esp+24h] [ebp-28h]
  unsigned __int8 v26; // [esp+2Ch] [ebp-20h]
  unsigned int v27; // [esp+30h] [ebp-1Ch]
  _DWORD *v28; // [esp+34h] [ebp-18h]

  if ( !a2 )
  {
    v10 = (void *)*a1;
    *a1 = 0;
    if ( v10 )
      operator delete(v10);
    a1[1] = 0;
    return;
  }
  if ( a2 >= 0x40000000 )
  {
    exception = (std::logic_error *)_cxa_allocate_exception(8u);
    std::logic_error::logic_error(exception, "allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
    *(_DWORD *)exception = (char *)&qword_13ACD8 - 4468;
    _cxa_throw(exception, (struct type_info *)(&qword_13ACD8 - 557), (void (*)(void *))(&qword_13ACD8 - 62525));
  }
  v2 = operator new(4 * a2);
  v3 = (void *)*a1;
  *a1 = v2;
  if ( v3 )
    operator delete(v3);
  v4 = a2;
  a1[1] = a2;
  for ( i = 0; i != a2; ++i )
    *(_DWORD *)(*a1 + 4 * i) = 0;
  v6 = a1[2];
  if ( !v6 )
    return;
  v7 = a1;
  v8 = (_DWORD *)a1[2];
  v9 = *(_DWORD *)(v6 + 4);
  if ( (a2 & (a2 - 1)) != 0 )
  {
    if ( v9 >= a2 )
    {
      v9 %= a2;
      v4 = a2;
    }
  }
  else
  {
    v9 &= a2 - 1;
  }
  v25 = v9;
  *(_DWORD *)(*a1 + 4 * v9) = a1 + 2;
  v11 = v8;
  v12 = (int *)*v8;
  v13 = a2 - 1;
  if ( !v12 )
    return;
  do
  {
    v14 = v12[1];
    if ( (v4 & v13) != 0 )
    {
      if ( v14 >= v4 )
      {
        v13 = a2 - 1;
        v14 %= a2;
        v4 = a2;
      }
      if ( v14 == v25 )
      {
LABEL_20:
        v11 = v12;
        goto LABEL_46;
      }
    }
    else
    {
      v14 &= v13;
      if ( v14 == v25 )
        goto LABEL_20;
    }
    if ( !*(_DWORD *)(*v7 + 4 * v14) )
    {
      *(_DWORD *)(*v7 + 4 * v14) = v11;
      v11 = v12;
      v25 = v14;
      goto LABEL_45;
    }
    v27 = v14;
    v28 = v11;
    v15 = *v12;
    v23 = v12;
    if ( !*v12 )
      goto LABEL_43;
    v16 = *((_BYTE *)v12 + 8);
    v24 = v16 >> 1;
    v22 = v24;
    if ( (v16 & 1) != 0 )
      v22 = v12[3];
    v17 = v12;
    v26 = *((_BYTE *)v12 + 8);
    while ( 1 )
    {
      v23 = v17;
      v17 = (_DWORD *)v15;
      v18 = *(unsigned __int8 *)(v15 + 8);
      if ( (v18 & 1) != 0 )
      {
        if ( v22 != v17[3] )
          goto LABEL_43;
      }
      else if ( v22 != v18 >> 1 )
      {
        goto LABEL_43;
      }
      v19 = (v18 & 1) != 0 ? (char *)v17[4] : (char *)v17 + 9;
      if ( (v16 & 1) == 0 )
        break;
      if ( v22 )
      {
        v16 = v26;
        if ( memcmp((const void *)v12[4], v19, v22) )
          goto LABEL_43;
      }
LABEL_42:
      v15 = *v17;
      v23 = v17;
      if ( !*v17 )
        goto LABEL_43;
    }
    if ( !v22 )
      goto LABEL_42;
    v20 = 0;
    while ( *((_BYTE *)v12 + v20 + 9) == v19[v20] )
    {
      if ( v24 == ++v20 )
        goto LABEL_42;
    }
LABEL_43:
    v11 = v28;
    *v28 = *v23;
    *v23 = **(_DWORD **)(*a1 + 4 * v27);
    v7 = a1;
    **(_DWORD **)(*a1 + 4 * v27) = v12;
    v4 = a2;
LABEL_45:
    v13 = a2 - 1;
LABEL_46:
    v12 = (int *)*v11;
  }
  while ( *v11 );
}
// 13ACD8: using guessed type __int64 qword_13ACD8;
