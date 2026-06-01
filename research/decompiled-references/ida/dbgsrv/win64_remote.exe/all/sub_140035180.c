/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140035180
// Address: 0x0000000140035180

//----- (0000000140035180) ----------------------------------------------------
__int64 __fastcall sub_140035180(__int64 a1, int a2)
{
  __int64 v3; // rcx
  __int64 v5; // r15
  unsigned int v6; // ebp
  _DWORD *v7; // rax
  _DWORD *v8; // rsi
  _QWORD *v9; // rax
  _QWORD *v10; // r14
  const void *v11; // r15
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // eax

  v3 = *(_QWORD *)(a1 + 248);
  v5 = *(int *)(*(_QWORD *)(a1 + 240) + 4 * v3 - 4);
  if ( v3 )
    *(_QWORD *)(a1 + 248) = v3 - 1;
  v6 = *(_DWORD *)(a1 + 200) - v5;
  v7 = operator new(0x20u);
  v8 = v7;
  if ( v7 )
  {
    *v7 = 0;
    v7[6] = 0;
  }
  else
  {
    v8 = nullptr;
  }
  *v8 = a2;
  v9 = sub_14005AAA0(24);
  v10 = v9;
  if ( v9 )
  {
    *v9 = 0;
    v9[1] = 0;
    v9[2] = 0;
  }
  else
  {
    v10 = nullptr;
  }
  *((_QWORD *)v8 + 1) = v10;
  v11 = (const void *)(**(_QWORD **)(a1 + 192) + v5);
  if ( v6 )
  {
    v12 = v10[1];
    v13 = v12 + (int)v6;
    if ( v13 < v12 )
      v13 = 0x7FFFFFFFFFFFFFFFLL;
    sub_140002EF0((__int64)v10, v13);
    memcpy((void *)(v12 + *v10), v11, (int)v6);
  }
  *((_QWORD *)v8 + 2) = *(_QWORD *)(*(_QWORD *)(a1 + 336) + 8LL * *(_QWORD *)(a1 + 344) - 8);
  *(_QWORD *)(*(_QWORD *)(a1 + 336) + 8LL * *(_QWORD *)(a1 + 344) - 8) = v8;
  if ( v6 )
  {
    v14 = *(_DWORD *)(a1 + 200);
    if ( v14 < v6 )
    {
      if ( byte_1400CB61C )
        __debugbreak();
      sub_14005A480(708);
    }
    v15 = *(_QWORD *)(a1 + 192);
    v16 = v14 - v6;
    *(_DWORD *)(a1 + 200) = v16;
    sub_140002EF0(v15, v16);
  }
  *(_BYTE *)(a1 + 204) = -87;
  return 0;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
