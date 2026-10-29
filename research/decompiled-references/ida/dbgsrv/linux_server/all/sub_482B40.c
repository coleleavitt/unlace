/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_482B40
// Address: 0x0000000000482B40

//----- (0000000000482B40) ----------------------------------------------------
void __fastcall sub_482B40(__int64 a1, __int64 *a2)
{
  _QWORD *v2; // rbx
  int *v3; // rax
  int v4; // r14d
  int *v5; // r13
  _QWORD *v6; // rax

  v2 = *(_QWORD **)(a1 + 24);
  if ( v2 == (_QWORD *)(a1 + 24) )
  {
LABEL_7:
    if ( !byte_4C94E1 )
      sub_481AC0(1209);
LABEL_11:
    BUG();
  }
  while ( a2 != v2 + 2 )
  {
    v2 = (_QWORD *)*v2;
    if ( (_QWORD *)(a1 + 24) == v2 )
      goto LABEL_7;
  }
  v3 = __errno_location();
  v4 = *v3;
  v5 = v3;
  if ( (unsigned __int8)sub_482A00(a2[2], 0) )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(1158);
    goto LABEL_11;
  }
  v6 = (_QWORD *)*v2;
  *(_QWORD *)v2[1] = *v2;
  v6[1] = v2[1];
  sub_4826F0((char *)v2[4]);
  j__free(v2);
  --*(_QWORD *)(a1 + 40);
  *v5 = v4;
}
// 4C94E1: using guessed type char byte_4C94E1;
