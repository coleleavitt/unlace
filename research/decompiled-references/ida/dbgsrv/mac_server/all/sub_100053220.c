/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100053220
// Address: 0x0000000100053220

//----- (0000000100053220) ----------------------------------------------------
__int64 __fastcall sub_100053220(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  size_t v4; // rax
  size_t v5; // r12
  unsigned __int64 v6; // r13
  void *v7; // rax
  __int64 v8; // rax
  __int64 v9; // r12
  bool v10; // cf
  __int64 v11; // rax
  _BYTE *v12; // rax
  int v13; // r12d
  __int64 v14; // r13

  *(_QWORD *)(a2 + 8) = 0;
  if ( a3 )
    return sub_100002D00(
             a2,
             "%02x%02x%02x%02x-%02x%02x-%02x%02x-%02x%02x-%02x%02x%02x%02x%02x%02x",
             *(unsigned __int8 *)(a1 + 2068),
             *(unsigned __int8 *)(a1 + 2069),
             *(unsigned __int8 *)(a1 + 2070),
             *(unsigned __int8 *)(a1 + 2071),
             *(unsigned __int8 *)(a1 + 2072),
             *(unsigned __int8 *)(a1 + 2073),
             *(unsigned __int8 *)(a1 + 2074),
             *(unsigned __int8 *)(a1 + 2075),
             *(unsigned __int8 *)(a1 + 2076),
             *(unsigned __int8 *)(a1 + 2077),
             *(unsigned __int8 *)(a1 + 2078),
             *(unsigned __int8 *)(a1 + 2079),
             *(unsigned __int8 *)(a1 + 2080),
             *(unsigned __int8 *)(a1 + 2081),
             *(unsigned __int8 *)(a1 + 2082),
             *(unsigned __int8 *)(a1 + 2083));
  v4 = strlen((const char *)(a1 + 1034));
  if ( v4 )
  {
    v5 = v4;
    v6 = v4 + 1;
    v7 = *(void **)a2;
    if ( *(_QWORD *)(a2 + 16) < v6 )
    {
      v7 = qvector_reserve(a2, *(void **)a2, v6, 1u);
      *(_QWORD *)a2 = v7;
    }
    *(_QWORD *)(a2 + 8) = v6;
    memmove(v7, (const void *)(a1 + 1034), v5);
    *(_BYTE *)(*(_QWORD *)a2 + v5) = 0;
    v8 = *(_QWORD *)(a2 + 8);
  }
  else
  {
    v8 = 0;
  }
  v9 = 0;
  v10 = v8 == 0;
  v11 = v8 - 1;
  if ( !v10 )
    v9 = v11;
  v12 = *(_BYTE **)a2;
  if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v9 + 2) )
  {
    v12 = qvector_reserve(a2, *(void **)a2, v9 + 2, 1u);
    *(_QWORD *)a2 = v12;
  }
  *(_QWORD *)(a2 + 8) = v9 + 2;
  v12[v9 + 1] = 0;
  result = *(_QWORD *)a2;
  *(_BYTE *)(*(_QWORD *)a2 + v9) = 124;
  v13 = *(unsigned __int16 *)(a1 + 8);
  if ( *(_WORD *)(a1 + 8) )
  {
    v14 = 0;
    do
      result = sub_10002DCA0(a2, "%02X", *(unsigned __int8 *)(a1 + v14++ + 10));
    while ( v13 != (_DWORD)v14 );
  }
  return result;
}
