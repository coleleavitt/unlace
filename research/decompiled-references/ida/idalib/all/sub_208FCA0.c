__int64 __fastcall sub_208FCA0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  char v6; // al
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rax
  void *v11; // rdx
  __int64 v12; // rbp
  const void *v13; // rax
  _WORD *v14; // rdi
  size_t v15; // rdx
  size_t v16; // r12
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  _BYTE *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx

  v3 = sub_20CC3B0(a2);
  if ( !(unsigned __int8)sub_20C2E50(v3, v4) )
    return 0;
  v6 = sub_20C2950();
  v7 = a1[6];
  v8 = a1[5];
  v9 = a1[4];
  if ( v6 )
  {
    v10 = sub_227BF10(v9, v8, v7);
    v11 = *(void **)(v10 + 32);
    v12 = v10;
    if ( *(_QWORD *)(v10 + 24) - (_QWORD)v11 > 0xBu )
    {
      qmemcpy(v11, " (function: ", 12);
      *(_QWORD *)(v10 + 32) += 12LL;
    }
    else
    {
      v12 = sub_227BF10(v10, " (function: ", 12);
    }
    v13 = (const void *)sub_20CC3B0(a2);
    v14 = *(_WORD **)(v12 + 32);
    v16 = v15;
    v17 = *(_QWORD *)(v12 + 24) - (_QWORD)v14;
    if ( v17 < v16 )
    {
      v20 = sub_227BF10(v12, v13, v16);
      v14 = *(_WORD **)(v20 + 32);
      v12 = v20;
      v17 = *(_QWORD *)(v20 + 24) - (_QWORD)v14;
    }
    else if ( v16 )
    {
      memcpy(v14, v13, v16);
      v21 = *(_QWORD *)(v12 + 24);
      v14 = (_WORD *)(v16 + *(_QWORD *)(v12 + 32));
      *(_QWORD *)(v12 + 32) = v14;
      v17 = v21 - (_QWORD)v14;
    }
    if ( v17 > 1 )
    {
      *v14 = 2601;
      *(_QWORD *)(v12 + 32) += 2LL;
    }
    else
    {
      v12 = sub_227BF10(v12, ")\n", 2);
    }
    sub_2045D40(*(_QWORD *)(a2 + 40), v12, 0, 0, 0);
    return 0;
  }
  else
  {
    v18 = sub_227BF10(v9, v8, v7);
    v19 = *(_BYTE **)(v18 + 32);
    if ( (unsigned __int64)v19 >= *(_QWORD *)(v18 + 24) )
    {
      v18 = sub_227BA10(v18, 10);
    }
    else
    {
      *(_QWORD *)(v18 + 32) = v19 + 1;
      *v19 = 10;
    }
    sub_2045580((unsigned __int8 *)a2, v18);
    return 0;
  }
}
