__int64 __fastcall sub_1FBB4C0(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 *v14; // rsi
  __int64 result; // rax
  __int64 *v16; // rdi

  sub_1FBAE50((__int64 *)a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 36));
  v4 = *(_DWORD *)(a2 + 36);
  if ( v4 )
  {
    v5 = 0;
    v6 = 8LL * (unsigned int)(v4 - 1) + 8;
    do
    {
      v7 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + v5);
      v5 += 8;
      sub_1F95F90(a1 + 8, v7);
    }
    while ( v5 != v6 );
  }
  v8 = *(_QWORD *)(a2 + 48);
  if ( v8 )
    v8 = (v8 & 4) == 0 && (v8 & 0xFFFFFFFFFFFFFFF8LL) != 0;
  sub_9B9C90(*(_QWORD *)(a1 + 24), v8);
  v13 = *(_QWORD *)(a2 + 48);
  if ( !v13 )
    goto LABEL_12;
  v10 = v13 & 0xFFFFFFFFFFFFFFF8LL;
  v14 = (__int64 *)(v13 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v13 & 4) != 0 )
  {
    v16 = (__int64 *)(a1 + 8);
    goto LABEL_13;
  }
  if ( !v10 )
  {
LABEL_12:
    v16 = (__int64 *)(a1 + 8);
    v14 = nullptr;
LABEL_13:
    sub_1F9A760(v16, v14, v9, v10, v11, v12);
    goto LABEL_11;
  }
  sub_1F92A90(*(_QWORD *)(a1 + 16), (__int64)v14, *(_QWORD *)(a1 + 24));
LABEL_11:
  result = sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 56), *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 107;
  return result;
}
