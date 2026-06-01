/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140061F60
// Address: 0x0000000140061F60

//----- (0000000140061F60) ----------------------------------------------------
char __fastcall sub_140061F60(__int64 a1, unsigned __int8 *a2, int a3)
{
  int v3; // eax
  int i; // r13d
  unsigned int v7; // edi
  __int64 v8; // rax
  _QWORD *v9; // r14
  unsigned __int64 v10; // rcx
  __int64 v11; // rsi
  unsigned int v12; // edi
  _QWORD *v13; // r15
  __int64 v14; // rbp
  unsigned __int8 *v16; // [rsp+58h] [rbp+10h] BYREF

  v16 = a2;
  v3 = 16;
  if ( a3 > 0 )
    v3 = a3;
  if ( (unsigned __int64)v3 > *(_QWORD *)(a1 + 16) )
    *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, v3, 2u);
  for ( i = 0; ; ++i )
  {
    while ( 1 )
    {
      if ( a3 >= 0 && i >= a3 )
        return 1;
      v7 = sub_1400615C0(&v16);
      if ( v7 )
        break;
      if ( a3 < 0 )
        return 1;
      v8 = *(_QWORD *)(a1 + 8);
      v9 = (_QWORD *)(a1 + 8);
      ++v16;
      v10 = *(_QWORD *)(a1 + 16);
      v11 = v8 - 1;
LABEL_13:
      if ( !v8 )
        v11 = 0;
      if ( v11 + 2 > v10 )
        *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, v11 + 2, 2u);
      *v9 = v11 + 2;
      ++i;
      *(_WORD *)(*(_QWORD *)a1 + 2 * v11) = v7;
      *(_WORD *)(*(_QWORD *)a1 + 2 * v11 + 2) = 0;
    }
    if ( v7 == -1 )
      break;
    v8 = *(_QWORD *)(a1 + 8);
    v9 = (_QWORD *)(a1 + 8);
    v10 = *(_QWORD *)(a1 + 16);
    v11 = v8 - 1;
    if ( v7 < 0x10000 )
      goto LABEL_13;
    v12 = v7 - 0x10000;
    if ( !v8 )
      v11 = 0;
    if ( v11 + 2 > v10 )
      *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, v11 + 2, 2u);
    v13 = (_QWORD *)(a1 + 8);
    *v9 = v11 + 2;
    *(_WORD *)(*(_QWORD *)a1 + 2 * v11) = (v12 >> 10) & 0x3FF | 0xD800;
    *(_WORD *)(*(_QWORD *)a1 + 2 * v11 + 2) = 0;
    v14 = *v9 - 1LL;
    if ( !*v9 )
      v14 = 0;
    if ( (unsigned __int64)(v14 + 2) <= *(_QWORD *)(a1 + 16) )
      v13 = (_QWORD *)(a1 + 8);
    else
      *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, v14 + 2, 2u);
    *v13 = v14 + 2;
    *(_WORD *)(*(_QWORD *)a1 + 2 * v14) = v12 & 0x3FF | 0xDC00;
    *(_WORD *)(*(_QWORD *)a1 + 2 * v14 + 2) = 0;
  }
  return 0;
}
