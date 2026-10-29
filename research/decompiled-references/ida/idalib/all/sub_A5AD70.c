__int64 __fastcall sub_A5AD70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r12
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r13
  unsigned __int64 v11; // r12
  __int64 v12; // r13
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // r13d
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  _QWORD v20[6]; // [rsp+0h] [rbp-30h] BYREF

  if ( !a2 )
    BUG();
  v7 = *(_QWORD *)(a2 - 16);
  v8 = *(unsigned int *)(a5 + 12);
  v20[0] = *(_QWORD *)(a2 - 8);
  v9 = *(unsigned int *)(a5 + 8);
  v10 = v7;
  v11 = v7 & 0xFFFFFFFFFFFFFFF8LL;
  v12 = v10 >> 2;
  if ( v9 + 1 > v8 )
  {
    sub_2237220(a5, a5 + 16, v9 + 1, 4);
    v9 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v9) = v11;
  v13 = HIDWORD(v11);
  v14 = *(unsigned int *)(a5 + 12);
  v15 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v15;
  if ( v15 + 1 > v14 )
  {
    sub_2237220(a5, a5 + 16, v15 + 1, 4);
    v15 = *(unsigned int *)(a5 + 8);
  }
  v16 = v12 & 1;
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v15) = v13;
  v17 = *(unsigned int *)(a5 + 12);
  v18 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v18;
  if ( v18 + 1 > v17 )
  {
    sub_2237220(a5, a5 + 16, v18 + 1, 4);
    v18 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v18) = v16;
  ++*(_DWORD *)(a5 + 8);
  sub_F22900(v20, a5);
  return sub_2222ED0(a5, a3);
}
