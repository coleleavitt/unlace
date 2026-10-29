__int64 __fastcall sub_1FC73D0(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdi
  char v10; // r13
  bool v11; // bp
  bool v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 *v18; // rbp
  __int64 result; // rax
  __int64 v20; // r14
  __int64 v21; // r15
  __int64 v22; // rdx

  sub_1FC2690(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_QWORD *)a2 >> 20) & 1LL);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_QWORD *)a2 >> 24) & 1LL);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 4));
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_QWORD *)a2 >> 27) & 1LL);
  v4 = (*(_QWORD *)a2 >> 19) & 1LL;
  sub_9B9C90(*(_QWORD *)(a1 + 24), v4);
  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v8 + 16) != 42 )
    v8 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL), v4, v5, v6);
  v9 = *(_QWORD *)(v8 + 32);
  v10 = *(_BYTE *)(a2 + 2);
  v11 = (v10 & 0x20) != 0;
  v12 = (v10 & 0x40) != 0;
  if ( (v9 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v22 = *(_QWORD *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 7LL
        | (*(__int64 *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) >> 3) & 1;
    if ( v22 )
      sub_F64F00(v9, v4, v22, v6, v7);
  }
  sub_9B9C90(*(_QWORD *)(a1 + 24), v11);
  sub_9B9C90(*(_QWORD *)(a1 + 24), v12);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (unsigned __int8)BYTE2(*(_QWORD *)a2) >> 7);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_BYTE *)(a2 + 3) & 1);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_BYTE *)(a2 + 3) >> 1) & 3);
  sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 16), *(_QWORD *)(a1 + 24));
  sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 24), *(_QWORD *)(a1 + 24));
  sub_1F9A760((__int64 *)(a1 + 8), *(__int64 **)(a2 + 32), v13, v14, v15, v16);
  v17 = *(_QWORD *)a2 >> 24;
  if ( (v17 & 8) != 0 )
    sub_1F6F5B0(
      *(_QWORD **)(a1 + 16),
      *(_QWORD *)(a2 + 8 * (*(_DWORD *)(a2 + 4) + (v17 & 1) + ((*(_QWORD *)a2 >> 20) & 1)) + 56),
      *(_QWORD *)(a1 + 24));
  v18 = (__int64 *)(a2 + 56);
  sub_1F6F5B0(*(_QWORD **)(a1 + 16), *(_QWORD *)(a2 + 40), *(_QWORD *)(a1 + 24));
  sub_1F6F5B0(*(_QWORD **)(a1 + 16), *(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 24));
  result = *(_DWORD *)(a2 + 4) + ((*(_QWORD *)a2 & 0x100000LL) != 0) + (BYTE3(*(_QWORD *)a2) & 1);
  v20 = a2 + 8 * result + 56;
  if ( v20 != a2 + 56 )
  {
    result = *(unsigned int *)(a1 + 40);
    do
    {
      v21 = *v18;
      if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
      {
        sub_2237220(a1 + 32, a1 + 48, result + 1, 8);
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 40)) = v21;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * result) = v21;
      }
      ++v18;
      result = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
      *(_DWORD *)(a1 + 40) = result;
    }
    while ( (__int64 *)v20 != v18 );
  }
  *(_DWORD *)(a1 + 224) = 268;
  return result;
}
