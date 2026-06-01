unsigned __int64 __fastcall sub_492A0(__int64 a1, unsigned int *a2, __int64 a3)
{
  _QWORD *v5; // rax
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdi
  _QWORD *v11; // r13
  _QWORD *v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rsi
  unsigned __int16 v16; // cx
  __int64 v18; // rax
  _QWORD *v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rsi
  __int64 v23; // rax
  _QWORD *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int16 v29; // [rsp+Eh] [rbp-3Ah] BYREF
  unsigned __int16 *v30; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v31; // [rsp+18h] [rbp-30h]

  v5 = *(_QWORD **)(a1 + 16);
  v31 = __readfsqword(0x28u);
  v7 = *v5 + 40LL * v5[1] - 40;
  v8 = *(_QWORD *)(v7 + 16);
  v9 = *(_QWORD *)(v7 + 8);
  v10 = v8 + 1;
  if ( *(_QWORD *)(v7 + 24) < (unsigned __int64)(v8 + 1) )
  {
    v23 = qvector_reserve(v7 + 8, v9, v8 + 1, 16);
    v8 = *(_QWORD *)(v7 + 16);
    *(_QWORD *)(v7 + 8) = v23;
    v9 = v23;
    v10 = v8 + 1;
  }
  *(_QWORD *)(v7 + 16) = v10;
  v11 = (_QWORD *)(v9 + 16 * v8);
  *v11 = a3;
  if ( (*(_BYTE *)(v7 + 32) & 1) != 0 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL) = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 88LL);
    v19 = *(_QWORD **)(a1 + 16);
    v20 = v19[11];
    v21 = v19[10];
    if ( v19[12] < (unsigned __int64)(v20 + 1) )
    {
      v27 = qvector_reserve(v19 + 10, v21, v20 + 1, 24);
      v20 = v19[11];
      v19[10] = v27;
      v21 = v27;
    }
    v22 = v21 + 24 * v20;
    *(_QWORD *)v22 = 0;
    *(_OWORD *)(v22 + 8) = 0;
    ++v19[11];
    sub_48F40(*(_QWORD *)(a1 + 8), (__int64 *)v22, *(_DWORD *)(a1 + 24), *a2);
  }
  v11[1] = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL);
  v12 = *(_QWORD **)(a1 + 16);
  v13 = v12[14];
  v14 = v12[13];
  if ( v12[15] < (unsigned __int64)(v13 + 1) )
  {
    v18 = qvector_reserve(v12 + 13, v14, v13 + 1, 24);
    v13 = v12[14];
    v12[13] = v18;
    v14 = v18;
  }
  v15 = v14 + 24 * v13;
  *(_QWORD *)v15 = 0;
  *(_OWORD *)(v15 + 8) = 0;
  ++v12[14];
  sub_48F40(*(_QWORD *)(a1 + 8), (__int64 *)v15, *(_DWORD *)(a1 + 24), *a2);
  v16 = *(_WORD *)(v7 + 34);
  v29 = v16;
  if ( v16 && *(_QWORD *)(v7 + 16) == 1 )
  {
    v24 = *(_QWORD **)(a1 + 16);
    v25 = v24[18];
    v26 = (__int64)(v24 + 17);
    if ( !v25 )
      goto LABEL_20;
    do
    {
      if ( *(_WORD *)(v25 + 32) >= v16 )
      {
        v26 = v25;
        v25 = *(_QWORD *)(v25 + 16);
      }
      else
      {
        v25 = *(_QWORD *)(v25 + 24);
      }
    }
    while ( v25 );
    if ( (_QWORD *)v26 == v24 + 17 || v16 < *(_WORD *)(v26 + 32) )
    {
LABEL_20:
      v30 = &v29;
      v28 = sub_310C0(v24 + 16, v26, &v30);
      v24 = *(_QWORD **)(a1 + 16);
      v26 = v28;
    }
    *(_QWORD *)(v26 + 40) = v24[9];
    *(_QWORD *)(v26 + 48) = v11[1];
  }
  return v31 - __readfsqword(0x28u);
}

