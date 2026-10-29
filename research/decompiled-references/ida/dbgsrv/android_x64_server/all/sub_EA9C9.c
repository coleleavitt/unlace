/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EA9C9
// Address: 0x00000000000EA9C9

//----- (00000000000EA9C9) ----------------------------------------------------
_QWORD *__fastcall sub_EA9C9(unsigned __int64 *a1)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  _QWORD *v4; // rax
  _QWORD *v5; // rdx
  void *v6; // rax
  const void *v7; // rsi
  unsigned __int64 v8; // rcx

  v2 = a1[1];
  v3 = *a1;
  if ( v2 > 8 )
  {
    v6 = malloc(v2 + v3 + 7);
    if ( !v6 )
LABEL_3:
      abort();
    v5 = (_QWORD *)(-(__int64)v2 & ((unsigned __int64)v6 + v2 + 7));
    *(v5 - 1) = v6;
  }
  else
  {
    v4 = malloc(v3 + 8);
    if ( !v4 )
      goto LABEL_3;
    *v4 = v4;
    v5 = v4 + 1;
  }
  v7 = (const void *)a1[3];
  v8 = *a1;
  if ( v7 )
    qmemcpy(v5, v7, v8);
  else
    memset(v5, 0, v8);
  return v5;
}
