__int64 __fastcall sub_5E7630(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 v18; // rsi
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rsi
  _DWORD *v24; // rdi
  __int64 v25; // rax
  int v26; // ebp
  __int64 v27; // rsi
  __int64 v28; // rdx
  int v29; // ebp
  __int64 v30; // rsi
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rbp
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  _DWORD v44[6]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v45; // [rsp+18h] [rbp-20h]

  v1 = *(_DWORD *)(a1 + 216);
  v45 = __readfsqword(0x28u);
  if ( (unsigned int)(v1 - 4) <= 1 )
    *(_DWORD *)(a1 + 216) = 0;
  v3 = *(_QWORD *)(a1 + 448);
  v4 = *(_QWORD *)(a1 + 144);
  v5 = *(_QWORD *)(a1 + 440);
  if ( *(_QWORD *)(a1 + 456) < (unsigned __int64)(v3 + 1) )
  {
    v37 = qvector_reserve(a1 + 440, v5, v3 + 1, 8);
    *(_QWORD *)(a1 + 440) = v37;
    v5 = v37;
    v3 = *(_QWORD *)(a1 + 448);
  }
  *(_QWORD *)(v5 + 8 * v3) = v4;
  v6 = *(_QWORD *)(a1 + 448);
  v7 = *(_QWORD *)(a1 + 120);
  v8 = *(_QWORD *)(a1 + 440);
  v9 = v6 + 1;
  v10 = v6 + 2;
  *(_QWORD *)(a1 + 448) = v9;
  if ( *(_QWORD *)(a1 + 456) < v10 )
  {
    v43 = qvector_reserve(a1 + 440, v8, v10, 8);
    *(_QWORD *)(a1 + 440) = v43;
    v8 = v43;
    v9 = *(_QWORD *)(a1 + 448);
  }
  *(_QWORD *)(v8 + 8 * v9) = v7;
  v11 = *(_QWORD *)(a1 + 448);
  v12 = *(_QWORD *)(a1 + 112);
  v13 = *(_QWORD *)(a1 + 440);
  v14 = v11 + 1;
  v15 = v11 + 2;
  *(_QWORD *)(a1 + 448) = v14;
  if ( *(_QWORD *)(a1 + 456) < v15 )
  {
    v42 = qvector_reserve(a1 + 440, v13, v15, 8);
    *(_QWORD *)(a1 + 440) = v42;
    v13 = v42;
    v14 = *(_QWORD *)(a1 + 448);
  }
  *(_QWORD *)(v13 + 8 * v14) = v12;
  v16 = *(_QWORD *)(a1 + 448);
  v17 = *(_QWORD *)(a1 + 128);
  v18 = *(_QWORD *)(a1 + 440);
  v19 = v16 + 1;
  v20 = v16 + 2;
  *(_QWORD *)(a1 + 448) = v19;
  if ( *(_QWORD *)(a1 + 456) < v20 )
  {
    v41 = qvector_reserve(a1 + 440, v18, v20, 8);
    *(_QWORD *)(a1 + 440) = v41;
    v18 = v41;
    v19 = *(_QWORD *)(a1 + 448);
  }
  *(_QWORD *)(v18 + 8 * v19) = v17;
  v21 = *(_QWORD *)(a1 + 112);
  ++*(_QWORD *)(a1 + 448);
  v44[0] = 0;
  copy_argloc(v44, v21 + 112);
  v22 = *(_QWORD *)(a1 + 424);
  v23 = *(_QWORD *)(a1 + 416);
  if ( *(_QWORD *)(a1 + 432) < (unsigned __int64)(v22 + 1) )
  {
    v40 = qvector_reserve(a1 + 416, v23, v22 + 1, 16);
    *(_QWORD *)(a1 + 416) = v40;
    v23 = v40;
    v22 = *(_QWORD *)(a1 + 424);
  }
  v24 = (_DWORD *)(v23 + 16 * v22);
  *v24 = 0;
  copy_argloc(v24, v44);
  ++*(_QWORD *)(a1 + 424);
  cleanup_argloc(v44);
  v25 = *(_QWORD *)(a1 + 176);
  v26 = *(_DWORD *)(a1 + 216);
  v27 = *(_QWORD *)(a1 + 168);
  if ( *(_QWORD *)(a1 + 184) < (unsigned __int64)(v25 + 1) )
  {
    v39 = qvector_reserve(a1 + 168, v27, v25 + 1, 1);
    *(_QWORD *)(a1 + 168) = v39;
    v27 = v39;
    v25 = *(_QWORD *)(a1 + 176);
  }
  *(_BYTE *)(v27 + v25) = v26;
  v28 = *(_QWORD *)(a1 + 176);
  v29 = *(_DWORD *)(a1 + 220);
  v30 = *(_QWORD *)(a1 + 168);
  v31 = v28 + 1;
  v32 = v28 + 2;
  *(_QWORD *)(a1 + 176) = v31;
  if ( *(_QWORD *)(a1 + 184) < v32 )
  {
    v38 = qvector_reserve(a1 + 168, v30, v32, 1);
    *(_QWORD *)(a1 + 168) = v38;
    v30 = v38;
    v31 = *(_QWORD *)(a1 + 176);
  }
  *(_BYTE *)(v30 + v31) = v29;
  v33 = *(_QWORD *)(a1 + 112);
  ++*(_QWORD *)(a1 + 176);
  cleanup_argloc(v33 + 112);
  v34 = sub_5E7430(a1);
  *(_QWORD *)(a1 + 144) = v34;
  *(_BYTE *)(v34 + 186) = 12;
  v35 = *(_QWORD *)(a1 + 144);
  *(_DWORD *)(v35 + 68) = sub_60A100(*(_QWORD *)(qword_2CCB598 + 1672), 16);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 144) + 72LL) )
    return set_qerrno(77);
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  return 0;
}
