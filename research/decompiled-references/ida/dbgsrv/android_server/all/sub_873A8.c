/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_873A8
// Address: 0x00000000000873A8

//----- (00000000000873A8) ----------------------------------------------------
size_t *__fastcall sub_873A8(size_t *result, __int128 *a2)
{
  size_t *v3; // x19
  __int128 v4; // q0
  size_t v5; // x21
  const void *v6; // x22
  void *v7; // x23
  size_t v8; // x21
  void *v9; // x0

  result[1] = 0;
  result[2] = 0;
  *result = 0;
  v3 = result;
  if ( (*(_BYTE *)a2 & 1) == 0 )
  {
    v4 = *a2;
    result[2] = *((_QWORD *)a2 + 2);
    *(_OWORD *)result = v4;
    goto LABEL_10;
  }
  v5 = *((_QWORD *)a2 + 1);
  if ( v5 >= 0xFFFFFFFFFFFFFFF0LL )
    sub_86648();
  v6 = *((const void **)a2 + 2);
  if ( v5 >= 0x17 )
  {
    v7 = operator new((v5 + 16) & 0xFFFFFFFFFFFFFFF0LL);
    v3[1] = v5;
    v3[2] = (size_t)v7;
    *v3 = (v5 + 16) & 0xFFFFFFFFFFFFFFF0LL | 1;
  }
  else
  {
    *(_BYTE *)result = 2 * v5;
    v7 = (char *)result + 1;
    if ( !v5 )
      goto LABEL_9;
  }
  result = (size_t *)memcpy(v7, v6, v5);
LABEL_9:
  *((_BYTE *)v7 + v5) = 0;
LABEL_10:
  v3[4] = 0;
  v3[5] = 0;
  v3[3] = 0;
  v8 = *((_QWORD *)a2 + 4);
  if ( v8 )
  {
    v9 = qalloc_or_throw(*((_QWORD *)a2 + 4));
    v3[3] = (size_t)v9;
    v3[5] = v8;
    result = (size_t *)memcpy(v9, *((const void **)a2 + 3), v8);
    v3[4] = v8;
  }
  *((_WORD *)v3 + 24) = *((_WORD *)a2 + 24);
  return result;
}
