__int64 __fastcall sub_1FCBA90(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 *v18; // rsi
  __int64 result; // rax

  sub_1FC2690(a1, a2);
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 16));
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_BYTE *)(a2 + 24) & 1);
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 28), *(_QWORD *)(a1 + 24));
  sub_1F9A420((__int64 *)(a1 + 8), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
  sub_1F9A760((__int64 *)(a1 + 8), *(__int64 **)(a2 + 48), v4, v5, v6, v7);
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 56), *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 60), *(_QWORD *)(a1 + 24));
  v11 = *(_QWORD *)(a2 + 64);
  v12 = 0;
  if ( v11 )
  {
    if ( (v11 & 4) != 0 )
      v12 = v11 & 0xFFFFFFFFFFFFFFF8LL;
  }
  sub_1F80F20(*(_QWORD *)(a1 + 16), v12, *(_QWORD *)(a1 + 24), v8, v9, v10);
  v17 = *(_QWORD *)(a2 + 64);
  if ( !v17 )
  {
    v18 = nullptr;
    goto LABEL_7;
  }
  v13 = v17 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v17 & 4) == 0 )
  {
    v18 = (__int64 *)(v17 & 0xFFFFFFFFFFFFFFF8LL);
    goto LABEL_7;
  }
  v18 = nullptr;
  if ( !v13 )
  {
LABEL_7:
    result = sub_1F9A760((__int64 *)(a1 + 8), v18, v13, v14, v15, v16);
    *(_DWORD *)(a1 + 224) = 270;
    return result;
  }
  result = sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 72), *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 270;
  return result;
}
