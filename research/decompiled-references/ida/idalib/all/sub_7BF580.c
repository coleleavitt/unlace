__int64 __fastcall sub_7BF580(__int64 *a1, __int64 a2, void **a3, int a4)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  void *v9; // rdi
  __int64 v12; // rsi

  v12 = *a1;
  if ( *a1 == -1 )
    return -1;
  v6 = *(_QWORD *)(a2 + 1736);
  v7 = *(_QWORD *)(v6 + 8);
  if ( v7 )
  {
    *(_BYTE *)(v6 + 60) = a4;
    *(_WORD *)(v6 + 53) = 6;
    *(_DWORD *)(v6 + 56) = _byteswap_ulong(v12);
  }
  else
  {
    *(_WORD *)(v6 + 53) = 10;
    v8 = swap64(v12);
    v7 = *(_QWORD *)(v6 + 8);
    *(_BYTE *)(v6 + 64) = a4;
    *(_QWORD *)(v6 + 56) = v8;
    if ( !v7 )
      v7 = *(_QWORD *)v6;
  }
  if ( (unsigned __int64)sub_7443D0(v7, (unsigned __int16 *)(v6 + 53)) < 2 )
    return sub_7AD990(v6, a4, v12, (__int64)a3, 0, 0, 1);
  if ( a3 )
  {
    v9 = *a3;
    if ( *a3 )
    {
      a3[1] = nullptr;
      qfree(v9);
      *a3 = nullptr;
      a3[2] = nullptr;
    }
  }
  return 0;
}
