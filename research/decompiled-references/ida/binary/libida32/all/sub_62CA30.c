__int64 __fastcall sub_62CA30(__int64 a1, __int64 *a2, __int64 *a3, char a4)
{
  char v5; // r12
  __int64 v7; // r13
  const char *v9; // rsi
  __int64 result; // rax
  __int64 v11; // rsi
  __int64 v12; // rax

  v5 = a4;
  v7 = *a3;
  v9 = &byte_22CD811;
  if ( *a3 && v7 != *(_QWORD *)(a1 + 8) )
    v9 = *(const char **)v7;
  sub_62C910(a2, v9);
  if ( a3 != *(__int64 **)(v7 + 64) )
    v5 = a4 | ((a3 == *(__int64 **)(v7 + 72)) + 1);
  result = a2[1];
  v11 = *a2;
  if ( a2[2] < (unsigned __int64)(result + 1) )
  {
    v12 = qvector_reserve(a2, v11, result + 1, 1);
    *a2 = v12;
    v11 = v12;
    result = a2[1];
  }
  *(_BYTE *)(v11 + result) = v5;
  ++a2[1];
  return result;
}

