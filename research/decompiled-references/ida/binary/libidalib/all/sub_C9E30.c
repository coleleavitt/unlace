void __fastcall sub_C9E30(__int64 a1)
{
  unsigned int v2; // eax
  _QWORD *v3; // rbp
  int *v4; // rbp
  void *v5; // rdi

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 != 1118 )
  {
    if ( v2 <= 0x45E )
    {
      if ( v2 <= 0x3EE )
      {
        if ( v2 > 0x3EC )
        {
          qfree();
          qfree();
          qfree();
        }
        goto LABEL_6;
      }
      if ( v2 - 1093 > 1 )
        goto LABEL_6;
      qfree();
      v4 = *(int **)(a1 + 32);
      if ( !v4 )
        goto LABEL_6;
      if ( *v4 >= -1 && *((_QWORD *)v4 + 1) )
      {
        *((_QWORD *)v4 + 2) = 0;
        qfree();
      }
      operator delete(v4, 0x20u);
      *(_DWORD *)(a1 + 8) = 0;
      return;
    }
    if ( v2 != 1120 )
    {
      if ( v2 != 1145 )
        goto LABEL_6;
      v3 = *(_QWORD **)(a1 + 32);
      if ( !v3 )
        goto LABEL_6;
      if ( v3[1] )
      {
        v3[2] = 0;
        qfree();
      }
      operator delete(v3, 0x60u);
      *(_DWORD *)(a1 + 8) = 0;
      return;
    }
  }
  v5 = *(void **)(a1 + 24);
  if ( !v5 )
  {
LABEL_6:
    *(_DWORD *)(a1 + 8) = 0;
    return;
  }
  operator delete(v5, 0x10u);
  *(_DWORD *)(a1 + 8) = 0;
}

