void __fastcall sub_14258C0(__int64 a1, int *a2, unsigned int *a3, __m128i a4, double a5)
{
  __int64 v7; // rdx
  unsigned int v8; // eax
  unsigned int *v9; // rcx
  __int64 v10; // r14
  char v11; // r13
  char v12; // cl
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r14
  __int64 v18; // rax
  _BYTE v19[136]; // [rsp+10h] [rbp-88h] BYREF

  ++*(_DWORD *)(a1 + 2316);
  sub_1421C50(a1, (__int64)"else", 0);
  v7 = *(_QWORD *)(a1 + 1120);
  v8 = *(_DWORD *)(v7 + 72);
  if ( !v8 )
  {
    sub_FC70B0((__int64)v19, *(_QWORD *)(a1 + 48), *a2, 1286);
    sub_AEA040((__int64)v19);
    return;
  }
  v9 = (unsigned int *)(*(_QWORD *)(v7 + 64) + 8LL * v8 - 8);
  v10 = *v9;
  v11 = *((_BYTE *)v9 + 5);
  v12 = *((_BYTE *)v9 + 6);
  *(_DWORD *)(v7 + 72) = v8 - 1;
  v13 = *(_QWORD *)(a1 + 1120);
  if ( !*(_DWORD *)(v13 + 72) )
  {
    a4 = 0;
    *(_WORD *)(v13 + 32) = 1;
    *(_OWORD *)(v13 + 40) = 0;
  }
  if ( !v12 )
  {
    v14 = *(_QWORD *)(a1 + 1192);
    if ( !v14 )
      goto LABEL_7;
    goto LABEL_6;
  }
  sub_FC70B0((__int64)v19, *(_QWORD *)(a1 + 48), *a2, 1285);
  sub_AEA040((__int64)v19);
  v14 = *(_QWORD *)(a1 + 1192);
  if ( v14 )
LABEL_6:
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v14 + 368LL))(
      v14,
      (unsigned int)*a2,
      (unsigned int)v10);
LABEL_7:
  v15 = *(_QWORD *)(a1 + 40);
  if ( !*(_BYTE *)(v15 + 313) )
  {
    if ( *(_BYTE *)(v15 + 234) )
      goto LABEL_9;
LABEL_13:
    sub_1424590(a1, *a3, (unsigned int)v10, 1u, 1u, (unsigned int)*a2, a4, a5);
    return;
  }
  if ( sub_1021600(*(_QWORD *)(a1 + 88), *a2) )
    goto LABEL_10;
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 40) + 234LL) )
    goto LABEL_13;
LABEL_9:
  if ( v11 )
    goto LABEL_13;
LABEL_10:
  v16 = *(_QWORD *)(a1 + 1120);
  v17 = v10 | 0x1000000000000LL;
  v18 = *(unsigned int *)(v16 + 72);
  if ( v18 + 1 > (unsigned __int64)*(unsigned int *)(v16 + 76) )
  {
    sub_2237220(v16 + 64, v16 + 80, v18 + 1, 8);
    v18 = *(unsigned int *)(v16 + 72);
  }
  *(_QWORD *)(*(_QWORD *)(v16 + 64) + 8 * v18) = v17;
  ++*(_DWORD *)(v16 + 72);
}
