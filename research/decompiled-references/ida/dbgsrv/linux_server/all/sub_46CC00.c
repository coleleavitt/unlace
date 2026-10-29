/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46CC00
// Address: 0x000000000046CC00

//----- (000000000046CC00) ----------------------------------------------------
unsigned __int64 __fastcall sub_46CC00(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rdx
  size_t v5; // rax
  unsigned __int64 i; // r12
  unsigned int *v7; // rbp
  size_t v8; // rax
  size_t v9; // rax
  size_t v10; // rax
  size_t v11; // r8
  void *v12; // r9
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // r10
  char *v15; // rsi
  __int64 v16; // rax
  char *v18; // rax
  unsigned __int64 v20; // [rsp+8h] [rbp-60h]
  unsigned __int64 v21; // [rsp+8h] [rbp-60h]
  void *srca; // [rsp+10h] [rbp-58h]
  void *src; // [rsp+10h] [rbp-58h]
  size_t na; // [rsp+18h] [rbp-50h]
  size_t n; // [rsp+18h] [rbp-50h]
  _BYTE v26[5]; // [rsp+23h] [rbp-45h] BYREF
  _QWORD v27[8]; // [rsp+28h] [rbp-40h] BYREF

  v4 = *(unsigned int *)(a2 + 8);
  v27[0] = __readfsqword(0x28u);
  v5 = sub_47FB50(v26, (unsigned __int64)v27, v4) - v26;
  if ( v5 )
    sub_46B720((char **)a1, v26, v5);
  for ( i = 0; i < *(_QWORD *)(a2 + 8); ++i )
  {
    v7 = (unsigned int *)(*(_QWORD *)a2 + 32 * i);
    v8 = sub_47FB50(v26, (unsigned __int64)v27, *v7) - v26;
    if ( v8 )
      sub_46B720((char **)a1, v26, v8);
    v9 = sub_47FB50(v26, (unsigned __int64)v27, v7[4]) - v26;
    if ( v9 )
      sub_46B720((char **)a1, v26, v9);
    if ( !a3 )
      continue;
    v10 = sub_47FB50(v26, (unsigned __int64)v27, v7[1]) - v26;
    if ( v10 )
      sub_46B720((char **)a1, v26, v10);
    v11 = *((_QWORD *)v7 + 2);
    if ( !v11 )
      continue;
    v12 = *((void **)v7 + 1);
    v13 = *(_QWORD *)(a1 + 8);
    v14 = v13 + v11;
    if ( __CFADD__(v13, v11) )
    {
      if ( v13 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v13 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_22;
      }
      v14 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v15 = *(char **)a1;
    v16 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(a1 + 16) < v14 )
    {
      n = v11;
      src = v12;
      v21 = v14;
      v18 = (char *)sub_481540(a1, v15, v14, 1u);
      v11 = n;
      v12 = src;
      *(_QWORD *)a1 = v18;
      v15 = v18;
      v14 = v21;
      v16 = *(_QWORD *)(a1 + 8);
    }
    na = v11;
    srca = v12;
    v20 = v14;
    memset(&v15[v16], 0, v14 - v16);
    v12 = srca;
    v11 = na;
    *(_QWORD *)(a1 + 8) = v20;
LABEL_22:
    memcpy((void *)(v13 + *(_QWORD *)a1), v12, v11);
  }
  return v27[0] - __readfsqword(0x28u);
}
