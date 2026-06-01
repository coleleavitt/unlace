unsigned __int64 __fastcall sub_2787D0(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  int v4; // r12d
  __int64 v5; // rsi
  __int64 v6; // rax

  result = *(_QWORD *)(a1 + 152);
  v4 = *(_DWORD *)(a1 + 132);
  v5 = *(_QWORD *)(a1 + 144);
  if ( *(_QWORD *)(a1 + 160) < result + 1 )
  {
    v6 = qvector_reserve(a1 + 144, v5, result + 1, 8);
    *(_QWORD *)(a1 + 144) = v6;
    v5 = v6;
    result = *(_QWORD *)(a1 + 152);
  }
  *(_QWORD *)(v5 + 8 * result) = a2;
  ++*(_QWORD *)(a1 + 152);
  if ( !v4 )
    return sub_278550(a1);
  return result;
}
