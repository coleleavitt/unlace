__int64 *__fastcall sub_15B9AE0(__int64 **a1, _DWORD *a2)
{
  __int64 v4; // rsi
  _QWORD *v5; // rbp
  unsigned __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // r9
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rsi
  unsigned __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdi
  __m128i *v28; // rdi
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9

  v4 = **a1;
  v5 = *(_QWORD **)(v4 + 248);
  if ( a2 )
    a2 = (_DWORD *)sub_15B8DC0((__int64 *)a1, v4, (__int64)a2);
  v6 = sub_BC21A0(v5, 0, 0, (__int64)a1[1], *((unsigned int *)a1 + 4), 0, a2);
  v8 = (*a1)[1];
  v9 = *(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  v10 = *(_QWORD *)(v8 + 16);
  if ( (*(_QWORD *)(v8 + 40) & 7) != 0 )
    v9 = 0;
  v11 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v10 & 4) != 0 )
    v11 = (_QWORD *)*v11;
  v7 = (__int64)*a1;
  *(_QWORD *)(v7 + 16) = sub_BBDF30((unsigned __int64)v5, (__int64)v11, 0, v9, v6, v8);
  sub_B97250((*a1)[1], (*a1)[2]);
  *(_BYTE *)((*a1)[2] + 29) |= 2u;
  v16 = *(_QWORD *)((*a1)[1] + 16);
  if ( (v16 & 4) != 0 )
    v17 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v17 = v16 & 0xFFFFFFFFFFFFFFF8LL;
  sub_B90130((*a1)[2], v17, v12, v13, v14, v15);
  sub_AEABB0((_QWORD *)((*a1)[2] + 64), (*a1)[3], v18, v19, v20, v21);
  v25 = (__int64)*a1;
  v26 = (*a1)[1];
  v27 = *(_QWORD *)(v26 + 16);
  if ( (v27 & 4) != 0 )
    v28 = *(__m128i **)(v27 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v28 = (__m128i *)(v27 & 0xFFFFFFFFFFFFFFF8LL);
  sub_B94AD0(v28, *(_QWORD *)(v25 + 16), v26, v22, v23, v24);
  v29 = (__int64)*a1;
  *((_DWORD *)a1 + 4) = 0;
  v30 = sub_BC3930(*(_QWORD *)(v29 + 16));
  sub_A7A4F0((__int64)v5, (*a1)[1], v30, v31, v32, v33);
  return *a1;
}
