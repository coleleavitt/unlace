unsigned __int64 __fastcall sub_9E0110(__int64 **a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  char *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // rdi
  char *v9; // r12
  __int64 v10; // rax
  _QWORD *v11; // rbx
  char *v12; // rbp
  __int64 (__fastcall *v13)(__int64); // rax
  __int64 *v14; // rdi
  __int64 v15; // rax
  unsigned __int64 v16; // rsi

  v5 = (char *)sub_9DF520((__int64)a1, *(_QWORD *)(a2 + 24), a3, a4);
  v8 = *a1;
  v9 = v5;
  v10 = **a1;
  v8[10] += 32;
  v11 = (_QWORD *)((v10 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  if ( v8[1] >= (unsigned __int64)(v11 + 4) && v10 )
    *v8 = (__int64)(v11 + 4);
  else
    v11 = (_QWORD *)sub_986170((__int64)v8, 32, 32, 4, v6, v7);
  *v11 = 11;
  v11[1] = 0;
  v11[2] = v9;
  v11[3] = 0;
  v12 = *(char **)(a2 + 16);
  v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL);
  if ( v13 == sub_9DCF10 )
  {
    if ( v12[29] < 0 )
      v12 = (char *)sub_B72720(v12);
  }
  else
  {
    v12 = (char *)v13((__int64)v12);
  }
  v14 = *a1;
  v15 = **a1;
  v14[10] += 72;
  v16 = (v15 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( v14[1] >= v16 + 72 && v15 )
    *v14 = v16 + 72;
  else
    v16 = sub_986170((__int64)v14, 72, 72, 4, v6, v7);
  *(_QWORD *)v16 = 12;
  *(_QWORD *)(v16 + 8) = 0;
  *(_QWORD *)(v16 + 16) = v11;
  *(_BYTE *)(v16 + 56) = 0;
  *(_QWORD *)(v16 + 64) = v12;
  if ( sub_9DCE80(v9) )
    *(_WORD *)(v16 + 2) = 1;
  return v16;
}
