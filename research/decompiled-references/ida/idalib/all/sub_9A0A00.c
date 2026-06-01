__int64 __fastcall sub_9A0A00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r13
  __int64 v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 *v15; // rax
  bool v16; // zf
  __int64 v18; // rax
  int v19; // [rsp+10h] [rbp-38h]

  v7 = *(_QWORD *)(a1 + 128);
  v8 = *(_QWORD *)(a1 + 136);
  v9 = *(_QWORD *)(a2 + 16);
  v19 = v8;
  if ( v9 )
  {
    sub_998FE0(a1, v9, 0, a4, a5, a6);
    sub_99A450((_QWORD *)a1, *(_QWORD *)(a1 + 128), *(_QWORD *)(a1 + 136), v7, v8, a2);
  }
  v10 = *(_QWORD *)(a2 + 24);
  if ( v10 )
    sub_99D480(a1, v10, 1, 0, a5, a6);
  v11 = *(_QWORD *)(a1 + 16);
  if ( !v11 )
    v11 = sub_999AE0(a1, v10, a3, a4, a5, a6);
  if ( (unsigned __int8)sub_99C080((_QWORD *)a1, (_WORD *)a2) )
  {
    v18 = *(_QWORD *)(a1 + 352);
    if ( v18 )
      *(_QWORD *)(v18 + 8) = v11;
  }
  v15 = *(unsigned __int64 **)(v11 + 8);
  if ( (unsigned __int64)v15 >= *(_QWORD *)(v11 + 16) )
  {
    sub_999590((const __m128i **)v11, (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL), 1u, v12, v13, v14);
    v15 = *(unsigned __int64 **)(v11 + 8);
  }
  *v15 = a2 & 0xFFFFFFFFFFFFFFFCLL | 2;
  v15[1] = 1;
  *(_QWORD *)(v11 + 8) += 16LL;
  v16 = *(_BYTE *)(a1 + 320) == 0;
  *(_QWORD *)(v11 + 24) = a2;
  if ( v16 )
    *(_QWORD *)(a1 + 16) = 0;
  else
    v11 = 0;
  *(_QWORD *)(a1 + 128) = v7;
  *(_DWORD *)(a1 + 136) = v19;
  return v11;
}
