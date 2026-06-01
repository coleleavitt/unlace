/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140024EA0
// Address: 0x0000000140024EA0

//----- (0000000140024EA0) ----------------------------------------------------
__int64 __fastcall sub_140024EA0(__int64 *a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 *v3; // r15
  __int64 v4; // rsi
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // r15
  const char *v9; // rdx
  __int64 v10; // rbp
  const char *v11; // rcx
  const char *v12; // rdx
  const char *v13; // rcx
  __int64 v14; // rdi
  const char *v15; // rdx
  const char *v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 i; // rcx
  __int64 j; // r9

  v2 = *a1;
  v3 = a1;
  v4 = *a1;
  v6 = *(_QWORD *)(*a1 + 8);
  v7 = v6;
  if ( !*(_BYTE *)(v6 + 25) )
  {
    v8 = *(_QWORD *)(a2 + 8);
    do
    {
      v9 = Str1;
      if ( v8 )
        v9 = *(const char **)a2;
      v10 = *(_QWORD *)(v7 + 40);
      v11 = Str1;
      if ( v10 )
        v11 = *(const char **)(v7 + 32);
      if ( strcmp(v11, v9) >= 0 )
      {
        if ( *(_BYTE *)(v4 + 25) )
        {
          v12 = Str1;
          if ( v10 )
            v12 = *(const char **)(v7 + 32);
          v13 = Str1;
          if ( v8 )
            v13 = *(const char **)a2;
          if ( strcmp(v13, v12) < 0 )
            v4 = v7;
        }
        v2 = v7;
      }
      else
      {
        v7 += 16;
      }
      v7 = *(_QWORD *)v7;
    }
    while ( !*(_BYTE *)(v7 + 25) );
    v3 = a1;
  }
  if ( !*(_BYTE *)(v4 + 25) )
    v6 = *(_QWORD *)v4;
  if ( !*(_BYTE *)(v6 + 25) )
  {
    v14 = *(_QWORD *)(a2 + 8);
    do
    {
      v15 = Str1;
      if ( *(_QWORD *)(v6 + 40) )
        v15 = *(const char **)(v6 + 32);
      v16 = Str1;
      if ( v14 )
        v16 = *(const char **)a2;
      if ( strcmp(v16, v15) >= 0 )
      {
        v6 = *(_QWORD *)(v6 + 16);
      }
      else
      {
        v4 = v6;
        v6 = *(_QWORD *)v6;
      }
    }
    while ( !*(_BYTE *)(v6 + 25) );
  }
  v17 = 0;
  v18 = v2;
  while ( v18 != v4 )
  {
    v19 = *(_QWORD *)(v18 + 16);
    ++v17;
    if ( *(_BYTE *)(v19 + 25) )
    {
      for ( i = *(_QWORD *)(v18 + 8); !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 8) )
      {
        if ( v18 != *(_QWORD *)(i + 16) )
          break;
        v18 = i;
      }
      v18 = i;
    }
    else
    {
      v18 = *(_QWORD *)(v18 + 16);
      for ( j = *(_QWORD *)v19; !*(_BYTE *)(j + 25); j = *(_QWORD *)j )
        v18 = j;
    }
  }
  sub_1400219A0(v3, v2, v4);
  return v17;
}
