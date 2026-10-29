__int64 __fastcall sub_DCBD70(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  void *v9; // r13
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  void *src; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v16; // [rsp+8h] [rbp-30h]

  v7 = *(unsigned int *)(a2 + 8);
  v8 = (unsigned __int64)(v7 + 63) >> 6;
  if ( v8 == 1 )
  {
    v9 = nullptr;
    v10 = 0;
  }
  else
  {
    v13 = a1[71];
    v14 = 8 * v8;
    a1[81] += v14;
    v10 = (v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( a1[72] >= v14 + v10 && v13 )
    {
      a1[71] = v14 + v10;
      v9 = (void *)((v13 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
    else
    {
      v9 = (void *)sub_962430((__int64)(a1 + 71), v14, v14, 3, a5, a6);
      v10 = (unsigned __int64)v9;
    }
  }
  sub_D27A40((__int64)&src, a2, 0);
  if ( v16 > 0x40 )
  {
    memcpy(v9, src, 8 * (((unsigned __int64)v16 + 63) >> 6));
    if ( v16 > 0x40 && src )
      operator delete[](src);
  }
  else
  {
    v10 = 0;
    if ( v16 )
      v10 = (__int64)((_QWORD)src << (64 - (unsigned __int8)v16)) >> (64 - (unsigned __int8)v16);
  }
  v11 = sub_DFD980(a1[22], 16);
  *(_QWORD *)v11 = v10;
  *(_DWORD *)(v11 + 8) = v7;
  return 1;
}

