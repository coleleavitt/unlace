void __fastcall sub_238680(__int64 a1, const char *a2)
{
  unsigned int v3; // eax
  double v4; // xmm0_8
  double v5; // xmm0_8
  _QWORD *v6; // rbp
  __int64 v7; // rdi
  double v8; // xmm0_8
  int *v9; // rbp
  __int64 v10; // rdi
  void *v11; // rdi

  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 != 1118 )
  {
    if ( v3 <= 0x45E )
    {
      if ( v3 <= 0x3EE )
      {
        if ( v3 > 0x3EC )
        {
          v4 = qfree(*(_QWORD *)(a1 + 24), a2);
          v5 = qfree(*(_QWORD *)(a1 + 32), a2, v4);
          qfree(*(_QWORD *)(a1 + 48), a2, v5);
        }
        goto LABEL_6;
      }
      if ( v3 - 1093 > 1 )
        goto LABEL_6;
      v8 = qfree(*(_QWORD *)(a1 + 24), a2);
      v9 = *(int **)(a1 + 32);
      if ( !v9 )
        goto LABEL_6;
      if ( *v9 >= -1 )
      {
        v10 = *((_QWORD *)v9 + 1);
        if ( v10 )
        {
          *((_QWORD *)v9 + 2) = 0;
          qfree(v10, a2, v8);
        }
      }
      operator delete(v9, 0x20u);
      *(_DWORD *)(a1 + 8) = 0;
      return;
    }
    if ( v3 != 1120 )
    {
      if ( v3 != 1145 )
        goto LABEL_6;
      v6 = *(_QWORD **)(a1 + 32);
      if ( !v6 )
        goto LABEL_6;
      v7 = v6[1];
      if ( v7 )
      {
        v6[2] = 0;
        qfree(v7, a2);
      }
      operator delete(v6, 0x60u);
      *(_DWORD *)(a1 + 8) = 0;
      return;
    }
  }
  v11 = *(void **)(a1 + 24);
  if ( !v11 )
  {
LABEL_6:
    *(_DWORD *)(a1 + 8) = 0;
    return;
  }
  operator delete(v11, 0x10u);
  *(_DWORD *)(a1 + 8) = 0;
}
