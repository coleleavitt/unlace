__int64 __fastcall sub_1FBB5D0(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 i; // rbx
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 result; // rax
  __int64 v15; // rax
  __int64 *v16; // rdi
  __int64 *v17; // rsi

  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_DWORD *)(a2 + 64) >> 1);
  sub_1FBAE50((__int64 *)a1, a2);
  v4 = (*(__int64 *)(a2 + 40) >> 2) & 1;
  sub_9B9C90(*(_QWORD *)(a1 + 24), !((*(__int64 *)(a2 + 40) >> 2) & 1));
  if ( v4 )
  {
    v15 = *(_QWORD *)(a2 + 40);
    v16 = (__int64 *)(a1 + 8);
    v17 = nullptr;
    if ( v15 )
    {
      v5 = v15 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v15 & 4) != 0 )
        v17 = (__int64 *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
    }
    sub_1F9A760(v16, v17, v5, v6, v7, v8);
  }
  else
  {
    v9 = *(_QWORD *)(a2 + 40);
    v10 = 0;
    if ( v9 && (v9 & 4) == 0 )
      v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
    sub_1F92A90(*(_QWORD *)(a1 + 16), v10, *(_QWORD *)(a1 + 24));
  }
  for ( i = 0; *(_DWORD *)(a2 + 64) >> 1 > (unsigned int)i; ++i )
  {
    v12 = *(_QWORD *)(a2 + 8 * i + 72);
    sub_1F95F90(a1 + 8, v12);
  }
  if ( (*(_BYTE *)(a2 + 48) & 1) != 0 )
    v13 = sub_BA5A00(a2);
  else
    v13 = *(_QWORD *)(a2 + 48);
  sub_1F92A90(*(_QWORD *)(a1 + 16), v13, *(_QWORD *)(a1 + 24));
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_BYTE *)(a2 + 64) & 1);
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 56), *(_QWORD *)(a1 + 24));
  result = sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 60), *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 106;
  return result;
}
