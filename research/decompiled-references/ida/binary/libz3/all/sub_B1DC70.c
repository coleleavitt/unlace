double __fastcall sub_B1DC70(__int64 *a1)
{
  __int64 v1; // rbp
  _QWORD *v2; // rbx
  double v3; // xmm2_8
  _QWORD *i; // r12
  unsigned int *v5; // rdx
  __int64 v6; // rax
  unsigned int *v7; // rsi
  char v8; // r10
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rax
  char v12; // cl

  v1 = *a1;
  v2 = *(_QWORD **)(*a1 + 8888);
  if ( !v2 )
    return 0.0;
  v3 = 0.0;
  for ( i = &v2[*((unsigned int *)v2 - 1)]; i != v2; ++v2 )
  {
    v5 = (unsigned int *)(*v2 + 8LL);
    v6 = *(unsigned int *)*v2;
    v7 = &v5[v6];
    if ( v6 * 4 )
    {
      v8 = 0;
      v9 = 0;
      v10 = 0;
      do
      {
        while ( 1 )
        {
          v11 = *v5;
          v12 = *(_BYTE *)(*(_QWORD *)(v1 + 8848) + v11);
          if ( v12 != -1 )
            break;
          v10 -= ((*(_DWORD *)(*(_QWORD *)(v1 + 8872) + 16LL * ((unsigned int)v11 >> 1) + 8) & 0xFFFFFF) == 0) - 1;
          if ( v7 == ++v5 )
            goto LABEL_10;
        }
        if ( v12 == 1 )
          v8 = 1;
        else
          ++v9;
        ++v5;
      }
      while ( v7 != v5 );
LABEL_10:
      if ( !v8 )
      {
        if ( v10 )
          v3 = v3 + pow(0.5, (double)v9);
      }
    }
  }
  return v3;
}

