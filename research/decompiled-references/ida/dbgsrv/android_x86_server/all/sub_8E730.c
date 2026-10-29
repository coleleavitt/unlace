/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8E730
// Address: 0x0008E730

//----- (0008E730) --------------------------------------------------------
void ***__userpurge sub_8E730@<eax>(void ***a1, int a2, _DWORD *ptr)
{
  void ***v3; // edi
  _DWORD *v4; // esi
  void **v5; // edx
  void **v6; // ecx
  void ****v7; // edx
  void ***v8; // edx
  bool v9; // zf
  void *v10; // eax
  int v11; // esi
  _DWORD *v12; // ecx
  int v13; // esi
  int v14; // edi

  v3 = a1;
  v4 = ptr;
  *a1 = (void **)ptr;
  v5 = (void **)ptr[1];
  if ( v5 )
  {
    do
    {
      v6 = v5;
      v5 = (void **)*v5;
    }
    while ( v5 );
  }
  else
  {
    v6 = (void **)ptr[2];
    if ( *v6 != ptr )
    {
      v7 = (void ****)(ptr + 2);
      do
      {
        v8 = *v7;
        v6 = v8[2];
        v9 = *v6 == v8;
        v7 = (void ****)(v8 + 2);
      }
      while ( !v9 );
    }
  }
  *a1 = v6;
  if ( *(_DWORD **)a2 == ptr )
    *(_DWORD *)a2 = v6;
  --*(_DWORD *)(a2 + 8);
  sub_2F420(*(int ***)(a2 + 4), (int **)ptr);
  v10 = (void *)ptr[5];
  if ( v10 )
  {
    v11 = ptr[6];
    if ( v11 )
    {
      sub_84B00((int)v10);
      v12 = ptr;
      if ( v11 != 1 )
      {
        v13 = v11 - 1;
        v14 = 24;
        do
        {
          sub_84B00(v14 + v12[5]);
          v12 = ptr;
          v14 += 24;
          --v13;
        }
        while ( v13 );
      }
      v10 = (void *)v12[5];
      v3 = a1;
      v4 = v12;
    }
    else
    {
      v4 = ptr;
    }
    v4[6] = 0;
    qfree(v10);
  }
  operator delete(v4);
  return v3;
}
