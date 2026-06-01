__int64 __fastcall sub_817B80(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  size_t v4; // rbp
  __int64 v5; // rax
  unsigned __int8 *v7; // rax
  __int64 result; // rax
  unsigned __int64 v9; // rdx
  size_t *v10; // r14
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  size_t v13; // r15
  __int64 v14; // r13
  unsigned __int64 v15; // rax
  size_t v16; // rax
  size_t v17; // rdx
  const void *v18; // rsi
  __int64 v19; // rax
  void *v20; // rdi
  size_t v21; // rax
  const void *v22; // rsi
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  const char *v28; // rax

  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a2 + 8);
  if ( __CFADD__(v4, v3) || (LOBYTE(v5) = __CFADD__(v4, v3), *(_QWORD *)(a1 + 40) < v4 + v3) )
  {
    v28 = "overflow while decoding";
    goto LABEL_28;
  }
  if ( *(_BYTE *)a2 == 1 )
  {
    v22 = *(const void **)(a1 + 1256);
    if ( *(_QWORD *)(a1 + 1264) >= (unsigned __int64)v22 + v4 )
    {
      memcpy((void *)(*(_QWORD *)(a1 + 24) + v3), v22, v4);
      *(_QWORD *)(a1 + 1256) += v4;
      *(_QWORD *)(a1 + 32) += v4;
      *(_BYTE *)a2 = 0;
      return 0;
    }
    goto LABEL_29;
  }
  if ( *(_BYTE *)a2 == 2 )
  {
    v7 = *(unsigned __int8 **)(a1 + 1256);
    if ( v7 != *(unsigned __int8 **)(a1 + 1264) )
    {
      memset((void *)(*(_QWORD *)(a1 + 24) + v3), *v7, v4);
      ++*(_QWORD *)(a1 + 1256);
      *(_QWORD *)(a1 + 32) += v4;
      *(_BYTE *)a2 = 0;
      return 0;
    }
LABEL_29:
    v28 = "data underflow";
    goto LABEL_28;
  }
  v9 = *(_QWORD *)(a2 + 16);
  if ( v9 >= *(_QWORD *)(a1 + 936) )
  {
    v23 = *(_QWORD *)(a1 + 1008) + v9;
    *(_BYTE *)a2 = 0;
    v5 = (unsigned __int8)v5;
    *(_QWORD *)(a2 + 8) = 0;
    v24 = *(_QWORD *)(a1 + 32);
    v25 = v24 + *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 32) = v4 + v24;
    if ( v4 )
    {
      do
      {
        *(_BYTE *)(v25 + v5) = *(_BYTE *)(v23 + v5);
        ++v5;
      }
      while ( v4 != v5 );
    }
    return 0;
  }
  if ( (*(_BYTE *)(a1 + 832) & 2) != 0 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    *(_BYTE *)a2 = 0;
    *(_QWORD *)(a1 + 64) = "VCD_TARGET not implemented";
    return 4294949582LL;
  }
  v10 = *(size_t **)(a1 + 72);
  v11 = v10[12] + v9;
  v12 = v10[11];
  v13 = *v10;
  v14 = v11;
  v15 = v11 >> v10[9];
  if ( v15 )
  {
    v12 += v15;
    v14 = v10[10] & v11;
  }
  result = sub_817030((_QWORD *)a1, v12);
  if ( !(_DWORD)result )
  {
    v16 = v10[5];
    v17 = v4 + v14;
    v18 = (const void *)(v14 + v10[6]);
    if ( v16 == v13 || v16 >= v17 )
    {
      if ( v13 < v17 )
      {
        v26 = *(_QWORD *)(a2 + 8);
        v4 = v13 - v14;
        *(_QWORD *)(a2 + 16) += v13 - v14;
        *(_QWORD *)(a2 + 8) = v14 + v26 - v13;
        v27 = *(_QWORD *)(a1 + 32);
        v20 = (void *)(v27 + *(_QWORD *)(a1 + 24));
        v21 = v13 - v14 + v27;
      }
      else
      {
        *(_BYTE *)a2 = 0;
        *(_QWORD *)(a2 + 8) = 0;
        v19 = *(_QWORD *)(a1 + 32);
        v20 = (void *)(v19 + *(_QWORD *)(a1 + 24));
        v21 = v4 + v19;
      }
      *(_QWORD *)(a1 + 32) = v21;
      memcpy(v20, v18, v4);
      return 0;
    }
    v28 = "source file too short";
LABEL_28:
    *(_QWORD *)(a1 + 64) = v28;
    return 4294949584LL;
  }
  if ( (_DWORD)result == -17709 )
  {
    *(_QWORD *)(a1 + 64) = "non-seekable source in decode";
    return 4294949586LL;
  }
  return result;
}
