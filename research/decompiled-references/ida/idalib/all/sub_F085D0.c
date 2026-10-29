void __fastcall sub_F085D0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  unsigned __int8 v9; // di
  char *v10; // rsi
  unsigned __int8 v11; // di
  __int64 v12; // r12
  char *v13; // rax
  size_t v14; // rdx
  unsigned __int8 v15; // al
  __int64 v16; // rdi
  _BYTE *v17; // rax
  __int64 v18; // rbx
  char *v19; // rax
  size_t v20; // rdx

  v9 = *(_BYTE *)(a2 + 2) >> 3;
  if ( v9 <= 1u || (v12 = *a1, v13 = sub_BF9560(v9), sub_9954E0(v12, v13, v14), v15 = *(_BYTE *)(a2 + 2) >> 3, v15 < 6u) )
  {
LABEL_2:
    v10 = *(char **)(a2 + 16);
    if ( !v10 )
      goto LABEL_10;
    goto LABEL_3;
  }
  if ( v15 <= 7u )
  {
    v10 = *(char **)(a2 + 16);
    if ( (*(_WORD *)v10 & 0x1FF) != 4 )
      goto LABEL_3;
    v16 = *a1;
    v17 = *(_BYTE **)(*a1 + 32);
    if ( (unsigned __int64)v17 < *(_QWORD *)(*a1 + 24) )
      goto LABEL_9;
LABEL_14:
    sub_227BA10(v16, 32);
    goto LABEL_2;
  }
  if ( ((v15 + 22) & 0x1Fu) > 2 )
    goto LABEL_2;
  v16 = *a1;
  v17 = *(_BYTE **)(*a1 + 32);
  if ( *(_QWORD *)(*a1 + 24) <= (unsigned __int64)v17 )
    goto LABEL_14;
LABEL_9:
  a3 = (__int64)(v17 + 1);
  *(_QWORD *)(v16 + 32) = v17 + 1;
  *v17 = 32;
  v10 = *(char **)(a2 + 16);
  if ( !v10 )
  {
LABEL_10:
    sub_F049C0(a1);
    v11 = *(_BYTE *)(a2 + 2) >> 3;
    if ( v11 <= 1u )
      goto LABEL_11;
    return;
  }
LABEL_3:
  sub_F05430(a1, v10, a3, a4, a5, a6, a7);
  v11 = *(_BYTE *)(a2 + 2) >> 3;
  if ( v11 <= 1u )
  {
LABEL_11:
    v18 = *a1;
    v19 = sub_BF9560(v11);
    sub_9954E0(v18, v19, v20);
  }
}
