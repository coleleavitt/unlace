/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140042240
// Address: 0x0000000140042240

//----- (0000000140042240) ----------------------------------------------------
__int64 __fastcall sub_140042240(_QWORD *a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 i; // rdi
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // r15
  __int64 v11; // rbp
  __int64 v12; // rsi
  char *v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rdx
  char *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  char *v21; // rbx
  void *v22; // rcx
  __int64 v23; // rax
  __int64 **v24; // r8
  __int64 j; // rcx
  __int64 *k; // r8
  void *v27; // rbx

  v4 = a1[37];
  v5 = *(_QWORD *)(v4 + 8);
  for ( i = v4; !*(_BYTE *)(v5 + 25); v5 = *(_QWORD *)v5 )
  {
    if ( *(_DWORD *)(v5 + 32) >= (signed int)a2 )
      i = v5;
    else
      v5 += 16;
  }
  if ( *(_BYTE *)(i + 25) )
    return 0xFFFFFFFFLL;
  if ( (signed int)a2 < *(_DWORD *)(i + 32) )
    return 0xFFFFFFFFLL;
  if ( i == v4 )
    return 0xFFFFFFFFLL;
  v7 = *(_QWORD *)(i + 48);
  if ( !v7 )
    return 0xFFFFFFFFLL;
  v8 = *(_QWORD *)(i + 40) + 48 * v7;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 472LL))(a1, a2, v8 - 48) )
    return 0xFFFFFFFFLL;
  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD, _QWORD, _DWORD))(*a1 + 312LL))(
    a1,
    4,
    *(_QWORD *)(v8 - 16),
    a1[48],
    *((_DWORD *)a1 + 98));
  if ( *(_BYTE *)(v8 - 8)
    && !(*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD, _QWORD, _QWORD, _QWORD))(*a1 + 432LL))(
          a1,
          a2,
          0,
          *(unsigned int *)(v8 - 40),
          *(_QWORD *)(v8 - 48)) )
  {
    sub_140012410(
      (__int64)a1,
      (struct __crt_locale_pointers *)"Failed to restore %zu registers!\n",
      *(_QWORD *)(v8 - 40));
    return 0xFFFFFFFFLL;
  }
  v10 = *(_QWORD *)(i + 40) + 48LL * *(_QWORD *)(i + 48);
  v11 = *(_QWORD *)(v10 - 40);
  v12 = 0;
  if ( v11 )
  {
    v13 = (char *)sub_14005AAA0(32 * v11);
    v14 = 0;
    v15 = v11;
    do
    {
      v16 = v14 + *(_QWORD *)(v10 - 48);
      v17 = &v13[v14];
      *(_DWORD *)v17 = -2;
      *(_OWORD *)(v17 + 8) = 0;
      *((_QWORD *)v17 + 3) = 0;
      sub_140040CA0((__int64)&v13[v14], v16);
      v14 += 32;
      --v15;
    }
    while ( v15 );
    v12 = v11;
  }
  else
  {
    v13 = nullptr;
  }
  v18 = *(_QWORD *)(i + 48);
  if ( v18 )
  {
    v19 = v18 - 1;
    *(_QWORD *)(i + 48) = v19;
    v20 = *(_QWORD *)(i + 40) + 48 * v19;
    if ( *(_QWORD *)v20 )
    {
      sub_14001A5B0((__int64 *)(*(_QWORD *)(i + 40) + 48 * v19), 0);
      j_free(*(void **)v20);
      *(_QWORD *)v20 = 0;
      *(_QWORD *)(v20 + 16) = 0;
    }
  }
  if ( v13 )
  {
    if ( v12 )
    {
      v21 = v13 + 8;
      do
      {
        if ( *((int *)v21 - 2) >= -1 )
        {
          v22 = *(void **)v21;
          if ( *(_QWORD *)v21 )
          {
            *((_QWORD *)v21 + 1) = 0;
            j_free(v22);
            *(_QWORD *)v21 = 0;
            *((_QWORD *)v21 + 2) = 0;
          }
          *((_DWORD *)v21 - 2) = -2;
        }
        v21 += 32;
        --v12;
      }
      while ( v12 );
    }
    j_free(v13);
  }
  if ( !*(_QWORD *)(i + 48) )
  {
    v23 = i;
    v24 = *(__int64 ***)(i + 16);
    if ( *((_BYTE *)v24 + 25) )
    {
      for ( j = *(_QWORD *)(i + 8); !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 8) )
      {
        if ( v23 != *(_QWORD *)(j + 16) )
          break;
        v23 = j;
      }
    }
    else
    {
      for ( k = *v24; !*((_BYTE *)k + 25); k = (__int64 *)*k )
        ;
    }
    v27 = (void *)sub_14000C8A0(a1 + 37, i);
    sub_14000AB80((__int64)v27 + 40);
    j_j_free(v27);
  }
  result = 3;
  if ( !a1[19] )
    return 1;
  return result;
}
