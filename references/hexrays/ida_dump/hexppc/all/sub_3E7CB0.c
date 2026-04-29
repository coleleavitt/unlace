__int64 __fastcall sub_3E7CB0(__int64 a1, int a2)
{
  _QWORD *v3; // rbx
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rax

  v3 = *(_QWORD **)(a1 + 8);
  result = v3[558];
  v5 = v3[557];
  if ( v3[559] < (unsigned __int64)(result + 1) )
  {
    v6 = qvector_reserve(v3 + 557, v5, result + 1, 4);
    v3[557] = v6;
    v5 = v6;
    result = v3[558];
  }
  *(_DWORD *)(v5 + 4 * result) = a2;
  ++v3[558];
  return result;
}
