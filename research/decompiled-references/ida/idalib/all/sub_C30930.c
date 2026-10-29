__int64 __fastcall sub_C30930(__int64 **a1, __int64 a2)
{
  __int64 v4; // rsi
  unsigned int v5; // r12d
  bool v6; // al
  unsigned __int8 **v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int8 **v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rax
  __int64 v19; // rsi
  unsigned __int64 v20; // rsi
  __int64 v22; // rbp
  __int64 v23; // rdi
  __int64 (*v24)(void); // rax
  __int64 v25; // r13
  __int64 (__fastcall *v26)(__int64); // rax
  __int64 v27; // rax

  v4 = **a1;
  if ( (*(_BYTE *)(v4 + 1) & 6) == 0 )
  {
    sub_C243E0((__int64)a1[1], a1[2][2], *(_QWORD *)(v4 + 8));
    return 1;
  }
  if ( a2 )
  {
    v5 = 1;
    if ( *(_QWORD *)(a2 + 8) != a2 + 8 )
    {
      v5 = 2;
      v6 = sub_B65DB0(a2, *a1[5]);
      v4 = **a1;
      if ( !v6 )
        v5 = 3;
    }
    goto LABEL_6;
  }
  v22 = *a1[4];
  v23 = *a1[3];
  if ( !v22 || !v23 )
    goto LABEL_34;
  if ( v22 == v23 )
  {
    v5 = 0;
    goto LABEL_6;
  }
  v24 = *(__int64 (**)(void))(*(_QWORD *)v23 + 32LL);
  if ( (char *)v24 == (char *)sub_A01140 )
    v25 = sub_B70A60(v23);
  else
    v25 = v24();
  v26 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 32LL);
  if ( v26 == sub_A01140 )
    v27 = sub_B70A60(v22);
  else
    v27 = v26(v22);
  if ( v25 != v27 )
  {
    v23 = *a1[3];
    v22 = *a1[4];
LABEL_34:
    v5 = (unsigned __int8)sub_B70650(v23, v22) ^ 1;
    v4 = **a1;
    goto LABEL_6;
  }
  v5 = 0;
  v4 = **a1;
LABEL_6:
  v7 = (unsigned __int8 **)sub_E33C10(a1[2], v4, 2409, 0);
  v10 = v7;
  if ( v7 )
    sub_AE9DF0(v7, v5, 3u);
  v11 = (__int64)a1[1];
  v12 = *(unsigned int *)(v11 + 56);
  if ( *(_DWORD *)(v11 + 24) >> 4 == v12 )
  {
    v14 = *(_QWORD *)(v11 + 40);
  }
  else
  {
    v13 = *(_QWORD *)(*(_QWORD *)(v11 + 48) + 8 * v12 - 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v13 && (*(_BYTE *)(v13 + 28) & 0x7Fu) - 59 >= 3 )
      v13 = 0;
    v14 = sub_A7A9D0(a1[2][2], v13, v11, v12, v8, v9);
  }
  if ( v10 )
  {
    sub_AE9DF0(v10, v14, 8u);
    v18 = sub_A7A9D0(a1[2][2], *a1[3], (__int64)a1[2], v15, v16, v17);
    sub_AE9DF0(v10, v18, 8u);
  }
  else
  {
    sub_A7A9D0(a1[2][2], *a1[3], (__int64)a1[2], v12, v8, v9);
  }
  v19 = *(_QWORD *)(*(_QWORD *)(**a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_QWORD *)(v19 + 8) & 7LL | (*(__int64 *)(v19 + 8) >> 3) & 1 )
    v20 = sub_F64F00(*(_QWORD *)(**a1 + 8)) & 0xFFFFFFFFFFFFFFF0LL;
  else
    v20 = v19 & 0xFFFFFFFFFFFFFFF0LL;
  if ( v10 )
    sub_AE9DF0(v10, v20, 8u);
  return 0;
}
