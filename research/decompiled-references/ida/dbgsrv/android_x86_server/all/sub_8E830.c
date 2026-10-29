/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8E830
// Address: 0x0008E830

//----- (0008E830) --------------------------------------------------------
void ***__userpurge sub_8E830@<eax>(void ***a1, int a2, _DWORD *ptr)
{
  void **v3; // edx
  void **v4; // ecx
  void ****v5; // edx
  void ***v6; // edx
  bool v7; // zf
  void *v8; // eax
  void *v9; // eax

  *a1 = (void **)ptr;
  v3 = (void **)ptr[1];
  if ( v3 )
  {
    do
    {
      v4 = v3;
      v3 = (void **)*v3;
    }
    while ( v3 );
  }
  else
  {
    v4 = (void **)ptr[2];
    if ( *v4 != ptr )
    {
      v5 = (void ****)(ptr + 2);
      do
      {
        v6 = *v5;
        v4 = v6[2];
        v7 = *v4 == v6;
        v5 = (void ****)(v6 + 2);
      }
      while ( !v7 );
    }
  }
  *a1 = v4;
  if ( *(_DWORD **)a2 == ptr )
    *(_DWORD *)a2 = v4;
  --*(_DWORD *)(a2 + 8);
  sub_2F420(*(int ***)(a2 + 4), (int **)ptr);
  v8 = (void *)ptr[10];
  if ( v8 )
  {
    ptr[11] = 0;
    qfree(v8);
    ptr[10] = 0;
    ptr[12] = 0;
  }
  v9 = (void *)ptr[6];
  if ( v9 )
  {
    ptr[7] = 0;
    qfree(v9);
  }
  operator delete(ptr);
  return a1;
}
