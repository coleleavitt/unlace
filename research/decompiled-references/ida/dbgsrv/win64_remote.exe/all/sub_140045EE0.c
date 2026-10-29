/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140045EE0
// Address: 0x0000000140045EE0

//----- (0000000140045EE0) ----------------------------------------------------
__int64 __fastcall sub_140045EE0(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  const char *v5; // rdx
  int v6; // eax
  __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rax
  int (__fastcall *v10)(__int64, _QWORD, _QWORD, void *, _QWORD); // rsi
  void *v11; // rbx
  unsigned int v12; // edi
  unsigned int v13; // eax
  unsigned int v14; // ebp
  char *v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rbx
  void *v18; // rcx
  char *v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rbx
  void *v23; // rcx
  void *v24; // [rsp+30h] [rbp-68h] BYREF
  __int64 v25; // [rsp+38h] [rbp-60h]
  __int64 v26; // [rsp+40h] [rbp-58h]
  int v27; // [rsp+48h] [rbp-50h] BYREF
  void *Block[2]; // [rsp+50h] [rbp-48h]
  __int64 v29; // [rsp+60h] [rbp-38h]
  unsigned int v30; // [rsp+A0h] [rbp+8h] BYREF

  v4 = sub_140040170();
  v5 = Str1;
  if ( *(_QWORD *)(a1 + 16) )
    v5 = *(const char **)(a1 + 8);
  v6 = (*(__int64 (__fastcall **)(__int64, const char *, unsigned int *))(*(_QWORD *)v4 + 480LL))(v4, v5, &v30);
  v7 = v6;
  if ( v6 < 0 )
    goto LABEL_34;
  v8 = *(_QWORD *)(v4 + 512);
  if ( !v8 )
    LODWORD(v8) = *(_DWORD *)(v4 + 608);
  if ( v6 >= (int)v8 )
  {
LABEL_34:
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(30056);
  }
  v24 = nullptr;
  v25 = 0;
  v26 = 0;
  v9 = *(_QWORD *)(v4 + 512);
  if ( !v9 )
    LODWORD(v9) = *(_DWORD *)(v4 + 608);
  if ( (_DWORD)v9 )
  {
    v27 = -2;
    Block[1] = nullptr;
    v29 = 0;
    Block[0] = (void *)-1LL;
    sub_140044480((__int64)&v24, (int)v9, (__int64)&v27);
    if ( v27 >= -1 )
    {
      if ( Block[0] )
      {
        Block[1] = nullptr;
        j_free(Block[0]);
      }
    }
  }
  v10 = *(int (__fastcall **)(__int64, _QWORD, _QWORD, void *, _QWORD))(*(_QWORD *)v4 + 216LL);
  v11 = v24;
  v12 = v30;
  v13 = sub_140040180();
  if ( v10(v4, v13, v12, v11, 0) > 0 )
  {
    v20 = (char *)v24;
    *(_QWORD *)(a2 + 8) = *((_QWORD *)v24 + 4 * v7 + 1);
    if ( v20 )
    {
      v21 = v25;
      if ( v25 )
      {
        v22 = 0;
        do
        {
          if ( *(int *)&v20[v22] >= -1 )
          {
            v23 = *(void **)&v20[v22 + 8];
            if ( v23 )
            {
              *(_QWORD *)&v20[v22 + 16] = 0;
              j_free(v23);
              *(_QWORD *)&v20[v22 + 8] = 0;
              *(_QWORD *)&v20[v22 + 24] = 0;
            }
            *(_DWORD *)&v20[v22] = -2;
            v20 = (char *)v24;
          }
          v22 += 32;
          --v21;
        }
        while ( v21 );
      }
      v25 = 0;
      j_free(v20);
    }
    return 0;
  }
  else
  {
    v14 = sub_140020490(a2, "failed to read register value");
    v15 = (char *)v24;
    if ( v24 )
    {
      v16 = v25;
      if ( v25 )
      {
        v17 = 0;
        do
        {
          if ( *(int *)&v15[v17] >= -1 )
          {
            v18 = *(void **)&v15[v17 + 8];
            if ( v18 )
            {
              *(_QWORD *)&v15[v17 + 16] = 0;
              j_free(v18);
              *(_QWORD *)&v15[v17 + 8] = 0;
              *(_QWORD *)&v15[v17 + 24] = 0;
            }
            *(_DWORD *)&v15[v17] = -2;
            v15 = (char *)v24;
          }
          v17 += 32;
          --v16;
        }
        while ( v16 );
      }
      v25 = 0;
      j_free(v15);
    }
    return v14;
  }
}
// 1400CB61C: using guessed type char byte_1400CB61C;
