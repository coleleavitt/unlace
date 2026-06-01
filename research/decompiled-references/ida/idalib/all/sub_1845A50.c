__int64 __fastcall sub_1845A50(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // rsi
  __int64 v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdi
  __int64 v26; // r13
  unsigned __int64 v27; // rax
  __int64 v28; // rax

  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), (__int64)a3, a4, a5, a6);
  v13 = *(_QWORD *)(a1 + 128);
  v14 = v8 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (*(_BYTE *)(v13 + 24) & 1) != 0 )
    v15 = sub_B96980(v13);
  else
    v15 = *(_QWORD *)(v13 + 24);
  sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v9, v10, v11, v12);
  v16 = *(_QWORD *)(a1 + 104);
  v17 = v15 + 24LL * *(unsigned int *)(*(_QWORD *)(a1 + 128) + 16LL);
  sub_7052B0((__int64 *)(v16 + 96), v16, v18, v19, v20, v21);
  v25 = *(_QWORD *)(a1 + 128);
  if ( (*(_BYTE *)(v25 + 24) & 1) != 0 )
    v26 = sub_B96980(v25);
  else
    v26 = *(_QWORD *)(v25 + 24);
  if ( v17 == v26 )
    return 0;
  while ( 1 )
  {
    v27 = *(_QWORD *)(**(_QWORD **)(v26 + 16) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v27 + 8) & 0xF) != 0 )
      v27 = sub_F64F00(**(_QWORD **)(v26 + 16), v16, v22, v23, v24);
    v28 = *(_QWORD *)(*(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF0LL) + 8LL);
    if ( v14 == v28 )
      break;
    if ( (*(_BYTE *)(*(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
      *a3 = 1;
    v26 += 24;
    if ( v26 == v17 )
      return 0;
  }
  return v26;
}
