void __fastcall sub_22872C0(__int64 a1)
{
  _QWORD *v1; // rbx
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi

  if ( *(_DWORD *)a1 == 62053 )
  {
    v1 = *(_QWORD **)(a1 + 24);
    if ( v1 )
    {
      if ( *(_DWORD *)v1 == 53829 )
      {
        *(_DWORD *)a1 = 0;
        v2 = (void *)v1[1];
        *(_DWORD *)v1 = 0;
        if ( v2 )
          free(v2);
        v3 = (void *)v1[3];
        if ( v3 )
          free(v3);
        v4 = (void *)v1[4];
        if ( v4 )
          free(v4);
        v5 = (void *)v1[12];
        if ( v5 )
          free(v5);
        free(v1);
      }
    }
  }
}
