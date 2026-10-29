/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000D730
// Address: 0x000000014000D730

//----- (000000014000D730) ----------------------------------------------------
__int64 __fastcall sub_14000D730(__int64 a1, const void *a2, int a3, char a4, char a5, const void **a6, __int64 a7)
{
  char v7; // di
  int v8; // ebp
  const void *v9; // rsi
  char *v11; // r12
  const char *v12; // r13
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r8
  void **v15; // rdi
  char *v16; // rdx
  unsigned __int64 j; // rcx
  unsigned __int64 i; // rcx
  const void **v19; // r14
  unsigned __int64 v20; // r8
  const char **v21; // rsi
  size_t v22; // rax
  const char *v23; // rdx
  unsigned __int64 v24; // r8
  const char **v25; // rbx
  size_t v26; // rax
  unsigned __int64 v27; // r8
  __int64 v28; // rcx
  _BYTE v30[72]; // [rsp+20h] [rbp-48h] BYREF

  v7 = a4;
  v8 = a3;
  v9 = a2;
  v11 = (char *)a6;
  v12 = Str1;
  if ( !a6 )
    goto LABEL_41;
  if ( (a3 & 0x100) != 0 )
  {
    v13 = 1;
  }
  else
  {
    switch ( a4 )
    {
      case 1:
        v13 = 16;
        break;
      case 2:
        v13 = 32;
        break;
      case 7:
        v13 = 64;
        break;
      default:
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(1795);
    }
  }
  v14 = *(_QWORD *)(a1 + 80) + 1LL;
  if ( v14 > *(_QWORD *)(a1 + 88) )
    *(_QWORD *)(a1 + 72) = sub_14005ABE0(a1 + 72, *(void **)(a1 + 72), v14, 0x18u);
  v15 = (void **)(*(_QWORD *)(a1 + 72) + 24LL * *(_QWORD *)(a1 + 80));
  if ( v15 )
  {
    *v15 = nullptr;
    v15[1] = nullptr;
    v15[2] = nullptr;
  }
  ++*(_QWORD *)(a1 + 80);
  if ( v13 >= (unsigned __int64)v15[1] )
  {
    if ( v13 <= (unsigned __int64)v15[1] )
      goto LABEL_28;
    v16 = (char *)*v15;
    if ( v30 < *v15 || v30 >= &v16[8 * (_QWORD)v15[2]] )
    {
      if ( v13 > (unsigned __int64)v15[2] )
        *v15 = sub_14005ABE0((__int64)v15, v16, v13, 8u);
      for ( i = (unsigned __int64)v15[1]; i < v13; ++i )
        *((_QWORD *)*v15 + i) = 0;
    }
    else
    {
      if ( v13 > (unsigned __int64)v15[2] )
        *v15 = sub_14005ABE0((__int64)v15, v16, v13, 8u);
      for ( j = (unsigned __int64)v15[1]; j < v13; ++j )
        *((_QWORD *)*v15 + j) = 0;
    }
  }
  v15[1] = (void *)v13;
LABEL_28:
  v19 = a6;
  do
  {
    if ( *v19 )
    {
      v20 = *(_QWORD *)(a1 + 32) + 1LL;
      if ( v20 > *(_QWORD *)(a1 + 40) )
        *(_QWORD *)(a1 + 24) = sub_14005ABE0(a1 + 24, *(void **)(a1 + 24), v20, 0x18u);
      v21 = (const char **)(*(_QWORD *)(a1 + 24) + 24LL * *(_QWORD *)(a1 + 32));
      v22 = 0;
      *v21 = nullptr;
      v21[1] = nullptr;
      v21[2] = nullptr;
      ++*(_QWORD *)(a1 + 32);
      if ( *v19 && (v22 = strlen((const char *)*v19)) != 0 )
        sub_140001810((__int64)v21, *v19, v22);
      else
        v21[1] = (const char *)v22;
      v23 = Str1;
      if ( v21[1] )
        v23 = *v21;
      *(_QWORD *)((char *)*v15 + (char *)v19 - (char *)a6) = v23;
    }
    ++v19;
    --v13;
  }
  while ( v13 );
  v8 = a3;
  v11 = (char *)*v15;
  v7 = a4;
  v9 = a2;
LABEL_41:
  v24 = *(_QWORD *)(a1 + 32) + 1LL;
  if ( v24 > *(_QWORD *)(a1 + 40) )
    *(_QWORD *)(a1 + 24) = sub_14005ABE0(a1 + 24, *(void **)(a1 + 24), v24, 0x18u);
  v25 = (const char **)(*(_QWORD *)(a1 + 24) + 24LL * *(_QWORD *)(a1 + 32));
  *v25 = nullptr;
  v25[1] = nullptr;
  v25[2] = nullptr;
  ++*(_QWORD *)(a1 + 32);
  if ( v9 && (v26 = strlen((const char *)v9)) != 0 )
    sub_140001810((__int64)v25, v9, v26);
  else
    v25[1] = nullptr;
  v27 = *(_QWORD *)(a1 + 8) + 1LL;
  if ( v27 > *(_QWORD *)(a1 + 16) )
    *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, v27, 0x20u);
  v28 = *(_QWORD *)a1 + 32LL * (*(_QWORD *)(a1 + 8))++;
  if ( v25[1] )
    v12 = *v25;
  *(_QWORD *)v28 = v12;
  *(_DWORD *)(v28 + 8) = v8;
  *(_BYTE *)(v28 + 13) = v7;
  *(_BYTE *)(v28 + 12) = a5;
  *(_QWORD *)(v28 + 16) = v11;
  *(_QWORD *)(v28 + 24) = a7;
  return a7;
}
// 14000D8C6: conditional instruction was optimized away because rbx.8 is in (==1|==10|==20|==40)
// 1400CB61C: using guessed type char byte_1400CB61C;
