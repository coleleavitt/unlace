/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400303C0
// Address: 0x00000001400303C0

//----- (00000001400303C0) ----------------------------------------------------
__int64 __fastcall sub_1400303C0(_QWORD *a1)
{
  unsigned int v2; // ebp
  __int64 v3; // rax
  int v4; // edx
  __int64 v5; // r14
  size_t v6; // rsi
  void *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  void *v11; // rcx
  __int64 v13; // rsi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  char *v19; // rdx
  unsigned int v20; // ebx

  v2 = sub_140035180((__int64)a1, 2);
  if ( !v2 )
  {
    v3 = a1[40];
    v4 = *(unsigned __int16 *)(a1[39] + 2 * v3 - 2);
    if ( v3 )
      a1[40] = v3 - 1;
    *(_DWORD *)(*(_QWORD *)(a1[42] + 8LL * a1[43] - 8) + 24LL) = v4;
  }
  v5 = a1[19] + 24LL * a1[20];
  v6 = *(_QWORD *)(v5 - 16);
  v7 = nullptr;
  if ( v6 )
  {
    v7 = sub_14005AAA0(*(_QWORD *)(v5 - 16));
    memcpy(v7, *(const void **)(v5 - 24), v6);
  }
  v8 = a1[20];
  if ( v8 )
  {
    v9 = v8 - 1;
    a1[20] = v9;
    v10 = a1[19] + 24 * v9;
    v11 = *(void **)v10;
    if ( *(_QWORD *)v10 )
    {
      *(_QWORD *)(v10 + 8) = 0;
      j_free(v11);
      *(_QWORD *)v10 = 0;
      *(_QWORD *)(v10 + 16) = 0;
    }
  }
  if ( v7 )
    j_free(v7);
  if ( v2 )
    return v2;
  if ( *(_DWORD *)(a1[22] + 16LL) )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(a1[12] + 64LL) + 8LL * *(int *)(a1[22] + 16LL));
      v14 = sub_140025060((_DWORD *)v13, v13 + 24);
      v15 = a1[43];
      v16 = *(_QWORD *)(a1[42] + 8 * v15 - 8);
      if ( v14 != 0x7FFFFFFF )
        break;
      if ( *(int *)(v16 + 24) > 0 )
      {
        v19 = (char *)Str1;
        if ( *(_QWORD *)(v13 + 32) )
          v19 = *(char **)(v13 + 24);
        sub_140063F70(0, v19);
        return sub_1400640B0(0x38u);
      }
      if ( !*(_DWORD *)(v13 + 16) )
        goto LABEL_18;
    }
    if ( v15 )
      a1[43] = v15 - 1;
    v20 = sub_1400339E0((__int64)a1, v16, 0, 0);
    if ( v16 )
      sub_140032910((_QWORD *)v16, 1);
    return sub_1400640B0(v20);
  }
  else
  {
LABEL_18:
    v17 = a1[43];
    v18 = *(_QWORD **)(a1[42] + 8 * v17 - 8);
    if ( v17 )
      a1[43] = v17 - 1;
    if ( v18 )
      sub_140032910(v18, 1);
    if ( a1[43] )
    {
      if ( byte_1400CB61C )
        __debugbreak();
      sub_14005A480(270);
    }
    return 0;
  }
}
// 1400CB61C: using guessed type char byte_1400CB61C;
