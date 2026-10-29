/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000C380
// Address: 0x000000014000C380

//----- (000000014000C380) ----------------------------------------------------
__int64 __fastcall sub_14000C380(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 **v7; // rdx
  __int64 i; // rcx
  __int64 *j; // rdx
  _QWORD *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 *v13; // r8
  __int64 *v14; // r8
  __int64 k; // rcx
  __int64 m; // rcx
  __int64 n; // rcx
  __int64 *v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // rsi
  void *v21; // rcx

  v3 = *a2;
  v4 = a2[1];
  v5 = *a2;
  v6 = 0;
  while ( v5 != v4 )
  {
    ++v6;
    v7 = *(__int64 ***)(v5 + 16);
    if ( *((_BYTE *)v7 + 25) )
    {
      for ( i = *(_QWORD *)(v5 + 8); !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 8) )
      {
        if ( v5 != *(_QWORD *)(i + 16) )
          break;
        v5 = i;
      }
      v5 = i;
    }
    else
    {
      v5 = *(_QWORD *)(v5 + 16);
      for ( j = *v7; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v5 = (__int64)j;
    }
  }
  v10 = (_QWORD *)*a1;
  if ( v3 == *(_QWORD *)*a1 && *(_BYTE *)(v4 + 25) )
  {
    sub_140009770((__int64)a1, (__int64)a1, v10[1]);
    v10[1] = v10;
    *v10 = v10;
    v10[2] = v10;
    a1[1] = 0;
  }
  else
  {
    while ( v3 != v4 )
    {
      v11 = v3;
      v12 = v3;
      v13 = *(__int64 **)(v3 + 16);
      if ( *((_BYTE *)v13 + 25) )
      {
        v14 = (__int64 *)(v3 + 8);
        for ( k = *(_QWORD *)(v3 + 8); !*(_BYTE *)(k + 25); k = *(_QWORD *)(k + 8) )
        {
          if ( v3 != *(_QWORD *)(k + 16) )
            break;
          v3 = k;
        }
        v3 = k;
        for ( m = *v14; !*(_BYTE *)(m + 25); m = *(_QWORD *)(m + 8) )
        {
          if ( v12 != *(_QWORD *)(m + 16) )
            break;
          v12 = m;
        }
      }
      else
      {
        v3 = *(_QWORD *)(v3 + 16);
        for ( n = *v13; !*(_BYTE *)(n + 25); n = *(_QWORD *)n )
          v3 = n;
        v18 = (__int64 *)*v13;
        if ( !*(_BYTE *)(*v13 + 25) )
        {
          do
            v18 = (__int64 *)*v18;
          while ( !*((_BYTE *)v18 + 25) );
        }
      }
      v19 = sub_14000C8A0(a1, v11);
      v20 = (_QWORD *)v19;
      v21 = *(void **)(v19 + 104);
      if ( v21 )
      {
        *(_QWORD *)(v19 + 112) = 0;
        j_free(v21);
        v20[13] = 0;
        v20[15] = 0;
      }
      j_j_free(v20);
    }
  }
  return v6;
}
