/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005DFE0
// Address: 0x000000014005DFE0

//----- (000000014005DFE0) ----------------------------------------------------
void sub_14005DFE0(__int64 a1, char a2, char *a3, ...)
{
  size_t v5; // rsi
  char *v6; // rax
  const char **v7; // r12
  const char **v8; // rbx
  __int64 v9; // r15
  size_t v10; // rsi
  char *v11; // r14
  const char *v12; // rdx
  const char *v13; // rcx
  size_t v14; // rbx
  void *v15; // r14
  unsigned __int64 v16; // r8
  __int64 v17; // rdx
  char *Str1; // [rsp+20h] [rbp-E0h] BYREF
  size_t Size; // [rsp+28h] [rbp-D8h]
  __int64 v20; // [rsp+30h] [rbp-D0h]
  __int128 v21; // [rsp+38h] [rbp-C8h]
  size_t v22; // [rsp+48h] [rbp-B8h]
  __int8 Src[272]; // [rsp+50h] [rbp-B0h] BYREF
  va_list va; // [rsp+1D8h] [rbp+D8h] BYREF

  va_start(va, a3);
  sub_14005DE40(Src, 260, a3, (__int64)va);
  if ( (a2 & 4) == 0 || sub_14005EF90(Src) )
  {
    Str1 = nullptr;
    Size = 0;
    v20 = 0;
    v5 = strlen(Src);
    v6 = nullptr;
    if ( v5 != -1 )
    {
      v6 = (char *)sub_14005ABE0((__int64)&Str1, nullptr, v5 + 1, 1u);
      Str1 = v6;
    }
    Size = v5 + 1;
    memcpy(v6, Src, v5);
    Str1[v5] = 0;
    v7 = *(const char ***)a1;
    v8 = *(const char ***)a1;
    v9 = *(_QWORD *)a1 + 24LL * *(_QWORD *)(a1 + 8);
    v10 = Size;
    v11 = Str1;
    if ( *(_QWORD *)a1 != v9 )
    {
      do
      {
        v12 = ::Str1;
        if ( v8[1] )
          v12 = *v8;
        v13 = ::Str1;
        if ( v10 )
          v13 = v11;
        if ( !strcmp(v13, v12) )
          break;
        v8 += 3;
      }
      while ( v8 != (const char **)v9 );
    }
    if ( v8 == (const char **)v9 )
    {
      v21 = 0;
      v14 = 0;
      v22 = 0;
      if ( v10 )
      {
        v15 = sub_14005AAA0(v10);
        *(_QWORD *)&v21 = v15;
        v14 = v10;
        v22 = v10;
        memcpy(v15, Str1, v10);
        *((_QWORD *)&v21 + 1) = v10;
        v7 = *(const char ***)a1;
      }
      else
      {
        v10 = *((_QWORD *)&v21 + 1);
        v15 = (void *)v21;
      }
      v16 = *(_QWORD *)(a1 + 8) + 1LL;
      if ( v16 > *(_QWORD *)(a1 + 16) )
      {
        v7 = (const char **)sub_14005ABE0(a1, *(void **)a1, v16, 0x18u);
        *(_QWORD *)a1 = v7;
      }
      v17 = 3LL * *(_QWORD *)(a1 + 8);
      v7[v17] = (const char *)v15;
      v7[v17 + 1] = (const char *)v10;
      v7[v17 + 2] = (const char *)v14;
      ++*(_QWORD *)(a1 + 8);
      v11 = Str1;
    }
    if ( v11 )
    {
      Size = 0;
      j_free(v11);
    }
  }
}
