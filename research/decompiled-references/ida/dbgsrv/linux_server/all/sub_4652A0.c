/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4652A0
// Address: 0x00000000004652A0

//----- (00000000004652A0) ----------------------------------------------------
void **__fastcall sub_4652A0(__int64 a1, __int64 a2)
{
  const void *v2; // r13
  size_t v5; // rax
  unsigned __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rbx
  void *v9; // rsi
  void **result; // rax
  unsigned __int8 *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r13
  int v14; // edx
  void *v15; // rax
  void *v16; // rdi
  size_t v17; // rbx
  size_t v18; // r14
  void *v19; // rax

  v2 = (const void *)(a1 + 1034);
  v5 = strlen((const char *)(a1 + 1034));
  if ( !v5 )
    goto LABEL_2;
  v16 = *(void **)a2;
  v17 = v5;
  v18 = v5 + 1;
  if ( *(_QWORD *)(a2 + 16) < v5 + 1 )
  {
    v19 = sub_481540(a2, *(void **)a2, v5 + 1, 1u);
    *(_QWORD *)a2 = v19;
    v16 = v19;
  }
  *(_QWORD *)(a2 + 8) = v18;
  memmove(v16, v2, v17);
  *(_BYTE *)(*(_QWORD *)a2 + v17) = 0;
  v7 = *(_QWORD *)(a2 + 8);
  v8 = v7 - 1;
  v6 = v7 + 1;
  if ( !v7 )
  {
LABEL_2:
    v6 = 2;
    v7 = 1;
    v8 = 0;
  }
  v9 = *(void **)a2;
  if ( *(_QWORD *)(a2 + 16) < v6 )
  {
    v15 = sub_481540(a2, v9, v6, 1u);
    *(_QWORD *)a2 = v15;
    v9 = v15;
  }
  *(_QWORD *)(a2 + 8) = v6;
  *((_BYTE *)v9 + v7) = 0;
  result = (void **)(v8 + *(_QWORD *)a2);
  v11 = (unsigned __int8 *)(a1 + 10);
  *(_BYTE *)result = 124;
  v12 = *(unsigned __int16 *)(a1 + 8);
  v13 = a1 + v12 + 10;
  if ( (_WORD)v12 )
  {
    do
    {
      v14 = *v11++;
      result = sub_42A760((void **)a2, "%02X", v14);
    }
    while ( v11 != (unsigned __int8 *)v13 );
  }
  return result;
}
