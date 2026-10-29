/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140002A40
// Address: 0x0000000140002A40

//----- (0000000140002A40) ----------------------------------------------------
bool __fastcall sub_140002A40(__int64 a1, __int64 a2)
{
  size_t v4; // r14
  size_t v5; // rsi
  unsigned __int64 v6; // rbx
  size_t v7; // r14
  size_t v8; // rax
  size_t v9; // rsi
  unsigned __int64 v10; // rbx
  char *v11; // rcx
  int v12; // eax
  void *v13; // rcx
  size_t v14; // rbx
  char v15; // al
  signed __int64 v16; // rax
  void *v18; // [rsp+30h] [rbp-50h] BYREF
  size_t v19; // [rsp+38h] [rbp-48h]
  unsigned __int64 v20; // [rsp+40h] [rbp-40h]
  void *Block; // [rsp+48h] [rbp-38h] BYREF
  __int64 v22; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v23[5]; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v24[3]; // [rsp+5Dh] [rbp-23h] BYREF
  _BYTE Src[10]; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v26[6]; // [rsp+6Ah] [rbp-16h] BYREF

  if ( *(_DWORD *)a2 == 1 )
  {
    v18 = nullptr;
    v19 = 0;
    v20 = 0;
    v4 = sub_14005B5A0(Src, (unsigned __int64)v26, *(_QWORD *)(a2 + 8)) - Src;
    if ( v4 )
    {
      v5 = v19;
      v6 = v4 + v19;
      if ( v4 + v19 < v19 )
        v6 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v6 > v19 )
      {
        v18 = sub_14005ABE0((__int64)&v18, v18, v6, 1u);
        memset((char *)v18 + v19, 0, v6 - v19);
        v19 = v6;
      }
      memcpy((char *)v18 + v5, Src, v4);
    }
    v7 = sub_14005B4D0(v23, (unsigned __int64)v24, *(_DWORD *)(a2 + 24)) - v23;
    if ( v7 )
    {
      v8 = v19;
      v9 = v19;
      v10 = v7 + v19;
      if ( v7 + v19 < v19 )
        v10 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v10 <= v19 )
      {
        if ( v10 != v19 )
        {
          if ( v10 < v19 )
            v8 = v10;
          v19 = v8;
        }
      }
      else
      {
        if ( v10 <= v20 )
        {
          v11 = (char *)v18;
        }
        else
        {
          v11 = (char *)sub_14005ABE0((__int64)&v18, v18, v10, 1u);
          v18 = v11;
          v8 = v19;
        }
        memset(&v11[v8], 0, v10 - v8);
        v19 = v10;
      }
      memcpy((char *)v18 + v9, v23, v7);
    }
    Block = nullptr;
    v22 = 0;
    if ( *(_DWORD *)(a1 + 40) == 1 )
      v12 = sub_140052CB0(*(_QWORD *)(a1 + 376), 2u, v18, v19, &Block, &v22);
    else
      v12 = (*(__int64 (__fastcall **)(__int64, __int64, void *, size_t, void **, __int64 *))(*(_QWORD *)a1 + 392LL))(
              a1,
              2,
              v18,
              v19,
              &Block,
              &v22);
    v13 = Block;
    if ( v12 == 1 && Block )
    {
      v14 = v22;
      if ( *(unsigned int *)(a2 + 24) < v22 )
        v14 = *(unsigned int *)(a2 + 24);
      memcpy(*(void **)(a2 + 16), Block, v14);
      *(_DWORD *)(a2 + 24) = v14;
      v15 = 1;
      v13 = Block;
    }
    else
    {
      v15 = 0;
    }
    *(_BYTE *)(a2 + 28) = v15;
    if ( v13 )
      j_free(v13);
    if ( v18 )
    {
      v19 = 0;
      j_free(v18);
    }
  }
  else if ( *(_DWORD *)a2 == 2 )
  {
    v16 = sub_14000D130(a1, *(void **)(a2 + 8), *(void **)(a2 + 16), *(_DWORD *)(a2 + 24), 0);
    if ( v16 >= 0 )
      *(_DWORD *)(a2 + 24) = v16;
    *(_BYTE *)(a2 + 28) = v16 >= 0;
  }
  else
  {
    *(_BYTE *)(a2 + 28) = 0;
  }
  return sub_14005D730(*(void **)(a2 + 40));
}
// 140002ACA: conditional instruction was optimized away because rbx.8!=0
// 140002B09: conditional instruction was optimized away because rbx.8==0
