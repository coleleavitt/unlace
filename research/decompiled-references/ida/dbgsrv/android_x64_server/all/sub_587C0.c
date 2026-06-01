/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_587C0
// Address: 0x00000000000587C0

//----- (00000000000587C0) ----------------------------------------------------
__int64 __fastcall sub_587C0(__int64 a1, _QWORD *a2, __int64 a3, size_t a4, char a5)
{
  unsigned int v5; // r13d
  size_t v6; // r9
  __int64 v8; // rbp
  void *v9; // rax
  __int64 v10; // rbp
  int v12; // r15d
  size_t v13; // rax
  char v14; // r14
  __int64 v15; // rax
  __int64 v16; // r12
  _BYTE *v17; // rax
  _QWORD *v19; // [rsp+8h] [rbp-50h]
  __int64 v20; // [rsp+10h] [rbp-48h]
  char v21; // [rsp+1Fh] [rbp-39h] BYREF
  unsigned __int64 v22; // [rsp+20h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  if ( ~a3 < a4 )
    return 0;
  v6 = a4;
  if ( a4 + a3 > a2[1] )
    return 0;
  *(_QWORD *)(a1 + 8) = 0;
  if ( !a5 )
  {
    v21 = 0;
    v10 = a3;
    sub_5F0D0(a1, a4 + 1, &v21);
    *(_BYTE *)(*(_QWORD *)a1 + a4) = 0;
    memcpy(*(void **)a1, (const void *)(*a2 + v10), a4);
    goto LABEL_9;
  }
  if ( *(_QWORD *)(a1 + 16) < a4 )
  {
    v8 = a3;
    v9 = qvector_reserve(a1, *(char **)a1, a4, 1u);
    a3 = v8;
    v6 = a4;
    *(_QWORD *)a1 = v9;
    goto LABEL_11;
  }
  if ( !a4 )
  {
LABEL_9:
    LOBYTE(v5) = 1;
    return v5;
  }
LABEL_11:
  v12 = 1;
  v13 = 0;
  v20 = a3;
  v19 = a2;
  do
  {
    v14 = *(_BYTE *)(*a2 + a3 + v13);
    LOBYTE(v5) = 1;
    if ( !v14 )
      break;
    v15 = *(_QWORD *)(a1 + 8);
    v16 = v15 - 1;
    if ( !v15 )
      v16 = 0;
    v17 = *(_BYTE **)a1;
    if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v16 + 2) )
    {
      v17 = qvector_reserve(a1, *(char **)a1, v16 + 2, 1u);
      a2 = v19;
      a3 = v20;
      v6 = a4;
      *(_QWORD *)a1 = v17;
    }
    *(_QWORD *)(a1 + 8) = v16 + 2;
    v17[v16] = v14;
    *(_BYTE *)(*(_QWORD *)a1 + v16 + 1) = 0;
    v13 = v12++;
  }
  while ( v13 < v6 );
  return v5;
}
// 5880B: variable 'v5' is possibly undefined
