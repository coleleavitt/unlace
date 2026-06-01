__int64 __fastcall sub_97B280(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  unsigned __int64 *v19; // rax
  __int64 v20; // rsi

  v7 = *(_QWORD *)(a2 + 24);
  v8 = sub_979740(a1, v7, 1, 0, a5, a6);
  if ( v8 )
  {
    if ( *(_BYTE *)(a1 + 320) )
      return 0;
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 24) = v8;
LABEL_4:
    v13 = sub_975DA0(a1, v7, v9, v10, v11, v12);
    *(_QWORD *)(a1 + 16) = v13;
    v14 = v13;
    if ( (unsigned __int8)sub_978340((_QWORD *)a1, (_WORD *)a2) )
      goto LABEL_5;
    goto LABEL_7;
  }
  v14 = *(_QWORD *)(a1 + 16);
  if ( !v14 )
    goto LABEL_4;
  if ( (unsigned __int8)sub_978340((_QWORD *)a1, (_WORD *)a2) )
  {
LABEL_5:
    v18 = *(_QWORD *)(a1 + 352);
    if ( v18 )
      *(_QWORD *)(v18 + 8) = v14;
  }
LABEL_7:
  v19 = *(unsigned __int64 **)(v14 + 8);
  if ( (unsigned __int64)v19 >= *(_QWORD *)(v14 + 16) )
  {
    sub_975850((const __m128i **)v14, (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL), 1u, v15, v16, v17);
    v19 = *(unsigned __int64 **)(v14 + 8);
  }
  *v19 = a2 & 0xFFFFFFFFFFFFFFFCLL | 2;
  v19[1] = 1;
  v20 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(v14 + 8) += 16LL;
  return sub_979740(a1, v20, 1, 0, v16, v17);
}

