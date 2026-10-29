__int64 __fastcall sub_7A8340(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 result; // rax
  unsigned int *v4; // rbp
  unsigned int *v5; // rbx
  unsigned int *j; // r14
  __int64 v7; // rbx
  __int64 k; // r12
  __int64 v9; // rbp
  unsigned int *i; // [rsp+0h] [rbp-48h]

  v1 = 0x2FFFFFFFD0LL;
  v2 = a1[54];
  if ( v2 )
    v1 = 48LL * (unsigned int)(*(_DWORD *)(v2 - 4) - 1);
  result = v2 + v1;
  v4 = *(unsigned int **)result;
  if ( *(_QWORD *)result )
  {
    for ( i = &v4[*(v4 - 1)]; i != v4; ++v4 )
    {
      v5 = *(unsigned int **)(a1[56] + 8LL * *v4);
      if ( v5 )
      {
        for ( j = &v5[*(v5 - 1)]; j != v5; ++v5 )
        {
          if ( *(_DWORD *)(*(_QWORD *)(a1[3] + 3288LL) + 4LL * *v5) != 1 )
          {
            sub_1872CE0("");
            sub_1873130(114, 294);
          }
        }
      }
    }
  }
  v7 = *(_QWORD *)(result + 24);
  if ( v7 )
  {
    for ( k = v7 + 16LL * *(unsigned int *)(v7 - 4); k != v7; v7 += 16 )
    {
      v9 = *(_QWORD *)(sub_7E4F00(a1) + 64);
      result = sub_7E4F00(a1);
      if ( *(_QWORD *)(result + 64) != v9 )
      {
        sub_1872CE0("");
        sub_1873130(114, 296);
      }
    }
  }
  return result;
}

