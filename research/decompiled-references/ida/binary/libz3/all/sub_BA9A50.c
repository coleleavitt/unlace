__int64 __fastcall sub_BA9A50(_QWORD *a1, unsigned int a2, _DWORD *a3, __m128 a4, __m128 a5, __m128 a6)
{
  __int64 v6; // rax
  unsigned int v8; // edx
  __int64 v9; // rax
  unsigned int **v10; // r12
  unsigned int *v11; // rax
  unsigned int *v12; // rsi
  __int64 v13; // rdi
  int v14; // edx

  v6 = a1[24];
  if ( !v6 )
    return 0;
  v8 = 0;
  if ( a2 < *(_DWORD *)(v6 - 4) )
  {
    v9 = *(_QWORD *)(v6 + 8LL * a2);
    if ( v9 )
    {
      if ( *(_DWORD *)(v9 - 4) )
      {
        sub_BA8A20(a1, a2, a4, a5, a6);
        v10 = (unsigned int **)(a1[24] + 8LL * a2);
        *a3 = 0;
        v11 = *v10;
        if ( *v10 )
        {
          v12 = &v11[*(v11 - 1)];
          if ( v12 != v11 )
          {
            v13 = *(_QWORD *)(a1[2] + 8848LL);
            v14 = 1;
            do
            {
              if ( *(_BYTE *)(v13 + *v11) == 1 )
                *a3 += v14;
              ++v11;
              v14 *= 2;
            }
            while ( v12 != v11 );
          }
        }
        return 1;
      }
    }
  }
  return v8;
}

