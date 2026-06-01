/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000C530
// Address: 0x000000014000C530

//----- (000000014000C530) ----------------------------------------------------
__int64 __fastcall sub_14000C530(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 **v7; // rdx
  __int64 i; // rcx
  __int64 *j; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 *v12; // r8
  __int64 *v13; // r8
  __int64 k; // rcx
  __int64 m; // rcx
  __int64 n; // rcx
  __int64 *v17; // rcx
  void *v18; // rax

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
  if ( v3 == *(_QWORD *)*a1 && *(_BYTE *)(v4 + 25) )
  {
    sub_14000E640(a1);
  }
  else
  {
    while ( v3 != v4 )
    {
      v10 = v3;
      v11 = v3;
      v12 = *(__int64 **)(v3 + 16);
      if ( *((_BYTE *)v12 + 25) )
      {
        v13 = (__int64 *)(v3 + 8);
        for ( k = *(_QWORD *)(v3 + 8); !*(_BYTE *)(k + 25); k = *(_QWORD *)(k + 8) )
        {
          if ( v3 != *(_QWORD *)(k + 16) )
            break;
          v3 = k;
        }
        v3 = k;
        for ( m = *v13; !*(_BYTE *)(m + 25); m = *(_QWORD *)(m + 8) )
        {
          if ( v11 != *(_QWORD *)(m + 16) )
            break;
          v11 = m;
        }
      }
      else
      {
        v3 = *(_QWORD *)(v3 + 16);
        for ( n = *v12; !*(_BYTE *)(n + 25); n = *(_QWORD *)n )
          v3 = n;
        v17 = (__int64 *)*v12;
        if ( !*(_BYTE *)(*v12 + 25) )
        {
          do
            v17 = (__int64 *)*v17;
          while ( !*((_BYTE *)v17 + 25) );
        }
      }
      v18 = (void *)sub_14000C8A0(a1, v10);
      j_j_free(v18);
    }
  }
  return v6;
}
