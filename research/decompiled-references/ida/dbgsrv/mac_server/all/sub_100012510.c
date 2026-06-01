/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100012510
// Address: 0x0000000100012510

//----- (0000000100012510) ----------------------------------------------------
__int64 __fastcall sub_100012510(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  __int64 v4; // r14
  void *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  char v8; // dl
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 i; // r14
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  unsigned __int64 v15; // rdi
  __int64 j; // rdx
  unsigned __int64 v17; // r8
  __int64 v19; // [rsp+0h] [rbp-70h]
  _QWORD v20[6]; // [rsp+8h] [rbp-68h] BYREF
  char v21; // [rsp+38h] [rbp-38h]
  int v22; // [rsp+3Ch] [rbp-34h]

  if ( !*(_BYTE *)(a1 + 440) )
  {
    v2 = *(void **)(a1 + 248);
    if ( v2 )
    {
      *(_QWORD *)(a1 + 256) = 0;
      qfree(v2);
      *(_QWORD *)(a1 + 248) = 0;
      *(_QWORD *)(a1 + 264) = 0;
    }
    v3 = *(void **)(a1 + 224);
    if ( v3 )
    {
      *(_QWORD *)(a1 + 232) = 0;
      qfree(v3);
      *(_QWORD *)(a1 + 224) = 0;
      *(_QWORD *)(a1 + 240) = 0;
    }
    v4 = a1 + 224;
    v5 = *(void **)(a1 + 272);
    if ( v5 )
    {
      *(_QWORD *)(a1 + 280) = 0;
      qfree(v5);
      *(_QWORD *)(a1 + 272) = 0;
      *(_QWORD *)(a1 + 288) = 0;
    }
    v6 = *(_QWORD *)(a1 + 8);
    v7 = *(_QWORD *)(a1 + 472);
    v8 = *(_BYTE *)(a1 + 161);
    v20[0] = off_1000A78B8;
    v20[1] = v6;
    v20[2] = a1 + 248;
    v20[3] = a1 + 224;
    v20[4] = a1 + 272;
    v20[5] = v7;
    v21 = v8;
    v22 = 0;
    sub_100010C80(a1, (__int64)v20);
    *(_BYTE *)(a1 + 440) = 1;
    if ( (*(_BYTE *)(a1 + 480) & 2) != 0 )
    {
      if ( *(_QWORD *)(a1 + 232) )
      {
        v9 = *(_QWORD *)v4;
        if ( !strcmp((const char *)(*(_QWORD *)v4 + 8LL), "__TEXT") )
        {
          if ( *(_QWORD *)(v9 + 40) )
          {
            v10 = 80LL * *(_QWORD *)(a1 + 256);
            if ( v10 )
            {
              v19 = *(_QWORD *)(a1 + 248);
              for ( i = 0; i != v10; i += 80 )
              {
                if ( !strcmp((const char *)(i + v19 + 16), "__TEXT") )
                  *(_DWORD *)(v19 + i + 48) -= *(_DWORD *)(v9 + 40);
              }
            }
            *(_QWORD *)(v9 + 40) = 0;
          }
        }
      }
    }
    v12 = 72LL * *(_QWORD *)(a1 + 232);
    if ( v12 )
    {
      v13 = *(_QWORD *)(a1 + 224);
      v14 = *(_QWORD *)(a1 + 448);
      v15 = *(_QWORD *)(a1 + 456);
      for ( j = 0; j != v12; j += 72 )
      {
        if ( v14 == -1 )
        {
          v14 = -1;
          if ( !*(_QWORD *)(v13 + j + 40) )
          {
            if ( *(_QWORD *)(v13 + j + 48) )
            {
              v14 = *(_QWORD *)(v13 + j + 24);
              *(_QWORD *)(a1 + 448) = v14;
            }
          }
        }
        v17 = *(_QWORD *)(v13 + j + 24);
        if ( v17 < v15 )
        {
          *(_QWORD *)(a1 + 456) = v17;
          v15 = v17;
        }
      }
    }
  }
  return __stack_chk_guard;
}
// 1000A78B8: using guessed type __int64 (__fastcall *off_1000A78B8[38])();
