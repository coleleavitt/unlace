/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_463390
// Address: 0x0000000000463390

//----- (0000000000463390) ----------------------------------------------------
void *__fastcall sub_463390(__int64 a1, void *a2, size_t a3)
{
  const void *v4; // x1
  const void *v5; // x3
  bool v6; // cf
  bool v7; // zf

  v4 = *(const void **)a1;
  v5 = (const void *)(*(_QWORD *)a1 + a3);
  if ( *(_QWORD *)(a1 + 8) >= (unsigned __int64)v5 )
  {
    v6 = v4 >= v5;
    v7 = v4 == v5;
  }
  else
  {
    v6 = 1;
    v7 = 0;
  }
  if ( !v7 && v6 )
    return nullptr;
  *(_QWORD *)a1 = v5;
  return memcpy(a2, v4, a3);
}
