unsigned __int64 __fastcall sub_46660(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  _QWORD *v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdi
  _QWORD *v11; // r14
  _QWORD *v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rsi
  int v16; // eax
  __int64 v17; // rdi
  __int64 *v18; // rdx
  unsigned __int16 v19; // cx
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int16 v28; // [rsp+Eh] [rbp-3Ah] BYREF
  unsigned __int16 *v29; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v30; // [rsp+18h] [rbp-30h]

  v5 = *(_QWORD *)(a1 + 16);
  v30 = __readfsqword(0x28u);
  v7 = (_QWORD *)(*(_QWORD *)(v5 + 24) + 40LL * *(_QWORD *)(v5 + 32) - 40);
  v8 = v7[3];
  v9 = v7[2];
  v10 = v8 + 1;
  if ( v7[4] < (unsigned __int64)(v8 + 1) )
  {
    v27 = qvector_reserve(v7 + 2, v9, v8 + 1, 24);
    v8 = v7[3];
    v7[2] = v27;
    v9 = v27;
    v10 = v8 + 1;
  }
  v7[3] = v10;
  v11 = (_QWORD *)(v9 + 24 * v8);
  *v11 = a3;
  v11[1] = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL);
  v12 = *(_QWORD **)(a1 + 16);
  v13 = v12[14];
  v14 = v12[13];
  if ( v12[15] < (unsigned __int64)(v13 + 1) )
  {
    v26 = qvector_reserve(v12 + 13, v14, v13 + 1, 24);
    v13 = v12[14];
    v12[13] = v26;
    v14 = v26;
  }
  v15 = v14 + 24 * v13;
  *(_QWORD *)v15 = 0;
  *(_OWORD *)(v15 + 8) = 0;
  ++v12[14];
  v16 = *(_DWORD *)(a1 + 24);
  v17 = *(_QWORD *)(a1 + 8);
  if ( v16 == 1 )
  {
    v18 = (__int64 *)(v17 + 320);
  }
  else
  {
    if ( v16 != 2 )
    {
      if ( !under_debugger )
        interr(20086);
      BUG();
    }
    v18 = (__int64 *)(v17 + 352);
  }
  sub_461E0(v17, (__int64 *)v15, v18, *(_DWORD *)(a2 + 8));
  v19 = *(_WORD *)(a2 + 6) & 0x7FFF;
  v28 = v19;
  if ( v19 )
  {
    v21 = *(_QWORD *)(a1 + 16);
    v22 = *(_QWORD *)(v21 + 144);
    v23 = v21 + 136;
    if ( !v22 )
      goto LABEL_18;
    do
    {
      while ( 1 )
      {
        v24 = *(_QWORD *)(v22 + 16);
        v25 = *(_QWORD *)(v22 + 24);
        if ( *(_WORD *)(v22 + 32) < v19 )
          break;
        v23 = v22;
        v22 = *(_QWORD *)(v22 + 16);
        if ( !v24 )
          goto LABEL_16;
      }
      v22 = *(_QWORD *)(v22 + 24);
    }
    while ( v25 );
LABEL_16:
    if ( v23 == v21 + 136 || v19 < *(_WORD *)(v23 + 32) )
    {
LABEL_18:
      v29 = &v28;
      v23 = sub_310C0((_QWORD *)(v21 + 128), v23, &v29);
    }
    *(_QWORD *)(v23 + 40) = v7[1];
    *(_QWORD *)(v23 + 48) = v11[1];
  }
  return v30 - __readfsqword(0x28u);
}

