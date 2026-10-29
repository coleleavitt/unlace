/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C600
// Address: 0x000000000003C600

//----- (000000000003C600) ----------------------------------------------------
_DWORD *__fastcall sub_3C600(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v5; // rsi
  unsigned __int64 v6; // rcx
  _QWORD *v7; // rdi
  _DWORD *result; // rax

  v2 = *(_QWORD *)(a1 + 1040);
  if ( !v2 )
    goto LABEL_16;
  v5 = a1 + 1040;
  do
  {
    if ( *(_DWORD *)(v2 + 32) >= a2 )
      v5 = v2;
    v2 = *(_QWORD *)(v2 + 8LL * (*(_DWORD *)(v2 + 32) < a2));
  }
  while ( v2 );
  if ( v5 == a1 + 1040 || *(_DWORD *)(v5 + 32) > a2 )
  {
LABEL_16:
    if ( !(_BYTE)under_debugger )
      interr(30064);
    BUG();
  }
  if ( *(_BYTE *)(v5 + 65) )
    --*(_DWORD *)(a1 + 1224);
  sub_4C7E0(a1 + 1032, (__int64 *)v5);
  v6 = *(_QWORD *)(a1 + 1064);
  if ( v6 >= 0xA )
  {
    memmove(*(void **)(a1 + 1056), (const void *)(*(_QWORD *)(a1 + 1056) + 4LL), (4 * v6 - 4) & 0xFFFFFFFFFFFFFFFCLL);
    v6 = *(_QWORD *)(a1 + 1064) - 1LL;
    *(_QWORD *)(a1 + 1064) = v6;
  }
  v7 = (_QWORD *)(a1 + 1056);
  if ( *(_QWORD *)(a1 + 1072) >= v6 + 1 )
  {
    result = (_DWORD *)*v7;
  }
  else
  {
    result = qvector_reserve((__int64)v7, *(char **)(a1 + 1056), v6 + 1, 4u);
    *(_QWORD *)(a1 + 1056) = result;
    v6 = *(_QWORD *)(a1 + 1064);
  }
  result[v6] = a2;
  ++*(_QWORD *)(a1 + 1064);
  return result;
}
// 158B40: using guessed type __int64 under_debugger;
