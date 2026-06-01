/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002C810
// Address: 0x000000014002C810

//----- (000000014002C810) ----------------------------------------------------
int __fastcall sub_14002C810(__int64 a1, int a2, __int64 a3)
{
  _QWORD *v6; // r14
  __int64 v7; // rcx
  __int64 *v8; // rbx
  __int64 v9; // r14
  __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  const char *v12; // rcx
  const char *v13; // rdx
  __int64 v14; // rax
  size_t v15; // rbp
  void *v16; // r15
  size_t v17; // rsi
  bool v18; // al
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  int v22; // [rsp+20h] [rbp-68h] BYREF
  __int128 v23; // [rsp+28h] [rbp-60h]
  size_t v24; // [rsp+38h] [rbp-50h]
  int v25; // [rsp+40h] [rbp-48h]
  void *v26; // [rsp+48h] [rbp-40h]
  size_t v27; // [rsp+50h] [rbp-38h]
  size_t v28; // [rsp+58h] [rbp-30h]

  v6 = (_QWORD *)(a1 + 96);
  v7 = *(_QWORD *)(a1 + 96);
  v8 = (__int64 *)(a1 + 88);
  if ( !v7 )
  {
LABEL_13:
    v22 = a2;
    v23 = 0;
    v24 = 0;
    v15 = *(_QWORD *)(a3 + 8);
    v16 = nullptr;
    v17 = 0;
    if ( v15 )
    {
      v16 = sub_14005AAA0(*(_QWORD *)(a3 + 8));
      *(_QWORD *)&v23 = v16;
      v24 = v15;
      memcpy(v16, *(const void **)a3, v15);
      *((_QWORD *)&v23 + 1) = v15;
      v17 = v15;
    }
    v18 = (unsigned __int64)&v22 >= *v8 && (unsigned __int64)&v22 < *v8 + 32 * v8[2];
    v19 = *v6 + 1LL;
    if ( v18 )
    {
      v25 = a2;
      v26 = v16;
      v23 = 0u;
      v27 = v17;
      v28 = v17;
      v24 = 0;
    }
    sub_14002E4B0((__int64)v8, v19);
    v20 = 32LL * *v6;
    v14 = *v8;
    *(_DWORD *)(v20 + v14) = a2;
    *(_QWORD *)(v20 + v14 + 8) = v16;
    *(_QWORD *)(v20 + v14 + 16) = v17;
    *(_QWORD *)(v20 + v14 + 24) = v17;
    ++v8[1];
    return v14;
  }
  v9 = 32 * v7 + *v8;
  v10 = v9 - 24;
  v11 = *(_QWORD *)(a3 + 8);
  v12 = Str1;
  v13 = Str1;
  if ( v11 )
    v13 = *(const char **)a3;
  if ( *(_QWORD *)(v10 + 8) )
    v12 = *(const char **)v10;
  LODWORD(v14) = strcmp(v12, v13);
  if ( (_DWORD)v14 )
  {
    if ( *(_DWORD *)(v9 - 32) == a2 )
    {
      if ( v10 != a3 )
      {
        if ( v11 < 2 )
          *(_QWORD *)(v10 + 8) = 0;
        else
          LODWORD(v14) = (unsigned int)sub_140001810(v9 - 24, *(const void **)a3, v11 - 1);
      }
      return v14;
    }
    v6 = (_QWORD *)(a1 + 96);
    goto LABEL_13;
  }
  return v14;
}
