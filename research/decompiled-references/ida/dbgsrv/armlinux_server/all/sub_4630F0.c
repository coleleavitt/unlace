/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4630F0
// Address: 0x00000000004630F0

//----- (00000000004630F0) ----------------------------------------------------
void *__fastcall sub_4630F0(__int64 a1, const void *a2, size_t a3)
{
  unsigned __int64 v6; // x19
  unsigned __int64 v7; // x21
  __int64 v8; // x3
  char *v9; // x0
  char *v10; // x0

  v6 = *(_QWORD *)(a1 + 8);
  v7 = v6 + a3;
  if ( v6 <= v6 + a3 )
  {
    if ( v6 >= v6 + a3 )
      return memcpy((void *)(*(_QWORD *)a1 + v6), a2, a3);
  }
  else
  {
    if ( v6 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (v6 & 0x8000000000000000LL) != 0 )
        *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
      return memcpy((void *)(*(_QWORD *)a1 + v6), a2, a3);
    }
    v7 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(char **)a1;
  if ( *(_QWORD *)(a1 + 16) < v7 )
  {
    v9 = (char *)sub_491288(a1, *(void **)a1, v7, 1u);
    *(_QWORD *)a1 = v9;
    v8 = *(_QWORD *)(a1 + 8);
  }
  memset(&v9[v8], 0, v7 - v8);
  v10 = *(char **)a1;
  *(_QWORD *)(a1 + 8) = v7;
  return memcpy(&v10[v6], a2, a3);
}
