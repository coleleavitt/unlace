/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D85D0
// Address: 0x00000000000D85D0

//----- (00000000000D85D0) ----------------------------------------------------
_QWORD *__fastcall sub_D85D0(__int64 a1)
{
  _BYTE *v1; // rcx
  _BYTE *v2; // rsi
  _BYTE *v3; // rdx
  unsigned __int64 v4; // rbx
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rbx
  unsigned __int8 v11; // al
  _QWORD *v12; // rbp
  __int64 v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  _QWORD *result; // rax
  __int64 v17; // rax
  _QWORD *v18; // rdx
  char *v19; // r14
  _BYTE *v20; // r15
  signed __int64 v21; // r14
  __int64 v22; // rbx
  __int64 v23; // rbp
  size_t v24; // rsi
  _QWORD *v25; // r14
  char *v26; // rax
  char *v27; // r12
  char *v28; // rax
  _QWORD *v29; // [rsp+0h] [rbp-38h]

  v1 = *(_BYTE **)a1;
  v2 = *(_BYTE **)(a1 + 8);
  if ( *(_BYTE **)a1 == v2 || *v1 != 84 )
    return nullptr;
  v3 = v1 + 1;
  *(_QWORD *)a1 = v1 + 1;
  if ( v1 + 1 != v2 && *v3 == 95 )
  {
    v4 = 0;
    goto LABEL_6;
  }
  if ( v2 == v3 || (unsigned __int8)(*v3 - 48) > 9u )
    return nullptr;
  v9 = 0;
  while ( 1 )
  {
    v10 = 10 * v9;
    if ( v2 - 1 == v1 )
      break;
    v3 = v1 + 2;
    *(_QWORD *)a1 = v1 + 2;
    v9 = (char)v1[1] + v10 - 48;
    if ( v2 - 2 != v1 )
    {
      v11 = v1[2] - 48;
      ++v1;
      if ( v11 < 0xAu )
        continue;
    }
    goto LABEL_22;
  }
  v9 = v10 - 48;
  v3 = v1 + 1;
LABEL_22:
  if ( v3 == v2 || *v3 != 95 )
    return nullptr;
  v4 = v9 + 1;
LABEL_6:
  *(_QWORD *)a1 = v3 + 1;
  if ( *(_BYTE *)(a1 + 722) )
  {
    v5 = *(_QWORD **)(a1 + 4832);
    v6 = v5[1];
    if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
    {
      v8 = v5 + 1;
    }
    else
    {
      v7 = (_QWORD *)operator new[](0x1000u);
      *v7 = v5;
      v7[1] = 0;
      *(_QWORD *)(a1 + 4832) = v7;
      v6 = 0;
      v8 = v7 + 1;
      v5 = v7;
    }
    *v8 = v6 + 32;
    result = (_QWORD *)((char *)v5 + v6 + 16);
    *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
    *result = off_1519B8;
    *(__m128i *)((char *)v5 + v6 + 32) = _mm_unpacklo_epi64(
                                           (__m128i)(unsigned __int64)"auto",
                                           (__m128i)(unsigned __int64)"");
    return result;
  }
  if ( !*(_BYTE *)(a1 + 721) )
  {
    v17 = *(_QWORD *)(a1 + 576);
    if ( v4 < (*(_QWORD *)(a1 + 584) - v17) >> 3 )
      return *(_QWORD **)(v17 + 8 * v4);
    return nullptr;
  }
  v12 = *(_QWORD **)(a1 + 4832);
  v13 = v12[1];
  if ( (unsigned __int64)(v13 + 48) < 0xFF0 )
  {
    v15 = v12 + 1;
  }
  else
  {
    v14 = (_QWORD *)operator new[](0x1000u);
    *v14 = v12;
    v14[1] = 0;
    *(_QWORD *)(a1 + 4832) = v14;
    v13 = 0;
    v15 = v14 + 1;
    v12 = v14;
  }
  *v15 = v13 + 48;
  v18 = (_QWORD *)((char *)v12 + v13 + 16);
  *(_DWORD *)((char *)v12 + v13 + 24) = 33686047;
  *v18 = off_151A28;
  *(_QWORD *)((char *)v12 + v13 + 32) = v4;
  *(_QWORD *)((char *)v12 + v13 + 40) = 0;
  *((_BYTE *)v12 + v13 + 48) = 0;
  v19 = *(char **)(a1 + 672);
  if ( v19 == *(char **)(a1 + 680) )
  {
    v20 = *(_BYTE **)(a1 + 664);
    v21 = v19 - v20;
    v22 = v21 >> 3;
    v23 = v21 >> 2;
    if ( (_BYTE *)(a1 + 688) == v20 )
    {
      v29 = v18;
      v28 = (char *)malloc(2 * v21);
      v27 = v28;
      if ( v21 )
        memmove(v28, v20, v21);
      *(_QWORD *)(a1 + 664) = v27;
      v18 = v29;
    }
    else
    {
      v24 = 2 * v21;
      v25 = v18;
      v26 = (char *)realloc(*(void **)(a1 + 664), v24);
      v18 = v25;
      v27 = v26;
      *(_QWORD *)(a1 + 664) = v26;
    }
    v19 = &v27[8 * v22];
    *(_QWORD *)(a1 + 672) = v19;
    *(_QWORD *)(a1 + 680) = &v27[8 * v23];
  }
  *(_QWORD *)(a1 + 672) = v19 + 8;
  *(_QWORD *)v19 = v18;
  return *(_QWORD **)(*(_QWORD *)(a1 + 672) - 8LL);
}
// 1519B8: using guessed type __int64 (__fastcall *off_1519B8[7])();
// 151A28: using guessed type __int64 (__fastcall *off_151A28[7])();
