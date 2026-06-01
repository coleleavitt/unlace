void __fastcall sub_F0B5D0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  char *v8; // rsi
  __int64 v9; // r12
  char *v10; // rax
  size_t v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  char *v17; // rsi

  v8 = *(char **)(a2 + 16);
  if ( v8 )
    sub_F05430(a1, v8, a3, a4, a5, a6, a7);
  else
    sub_F049C0(a1);
  v9 = sub_995540(*a1, " ");
  v10 = sub_BFA720((*(_WORD *)(a2 + 2) >> 3) & 0x3F);
  v12 = sub_9954E0(v9, v10, v11);
  sub_995540(v12, " ");
  v17 = *(char **)(a2 + 24);
  if ( v17 )
    sub_F05430(a1, v17, v13, v14, v15, v16, a7);
  else
    sub_F049C0(a1);
}
