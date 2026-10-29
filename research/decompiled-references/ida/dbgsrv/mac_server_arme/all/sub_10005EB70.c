/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005EB70
// Address: 0x000000010005EB70

//----- (000000010005EB70) ----------------------------------------------------
unsigned __int64 __fastcall sub_10005EB70(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 result; // x0
  const char *v5; // x20
  _BYTE *v6; // x9
  size_t v8; // x21
  unsigned __int64 v9; // x22
  _QWORD *v10; // x1

  *(_DWORD *)a1 = unpack_dd(a2, a2[1]);
  *(_BYTE *)(a1 + 4) = (unsigned int)unpack_dd(a2, a2[1]) != 0;
  result = unpack_dq(a2, a2[1]);
  *(_QWORD *)(a1 + 8) = result - 1;
  v5 = (const char *)*a2;
  v6 = (_BYTE *)*a2;
  do
  {
    if ( (unsigned __int64)v6 >= a2[1] )
      goto LABEL_9;
  }
  while ( *v6++ );
  *a2 = (unsigned __int64)v6;
  if ( !v5 || (result = strlen(v5)) == 0 )
  {
LABEL_9:
    *(_QWORD *)(a1 + 24) = 0;
    return result;
  }
  v8 = result;
  v9 = result + 1;
  v10 = *(_QWORD **)(a1 + 16);
  if ( *(_QWORD *)(a1 + 32) < result + 1 )
  {
    v10 = qvector_reserve((_QWORD *)(a1 + 16), v10, v9, 1u);
    *(_QWORD *)(a1 + 16) = v10;
  }
  *(_QWORD *)(a1 + 24) = v9;
  result = (unsigned __int64)memmove(v10, v5, v8);
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + v8) = 0;
  return result;
}
