unsigned __int64 __fastcall sub_6A7810(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rcx
  unsigned __int64 result; // rax

  v3 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 80) += a2;
  result = (v3 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_QWORD *)(a1 + 8) < a2 + result || !v3 )
    return sub_6A76A0(a1, a2, a3);
  *(_QWORD *)a1 = a2 + result;
  return result;
}

