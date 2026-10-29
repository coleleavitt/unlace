__int64 __fastcall sub_776320(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbp
  void *v5; // rdi
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 v8; // rax

  v3 = a1[6] + 176 * a2;
  v5 = *(void **)v3;
  if ( *(_QWORD *)v3 )
  {
    *(_QWORD *)(v3 + 8) = 0;
    qfree(v5);
    *(_QWORD *)v3 = 0;
    *(_QWORD *)(v3 + 16) = 0;
  }
  *(_QWORD *)(v3 + 160) = 0;
  *(_DWORD *)(v3 + 168) = 3;
  result = a1[10];
  v7 = a1[9];
  if ( a1[11] < (unsigned __int64)(result + 1) )
  {
    v8 = qvector_reserve(a1 + 9, v7, result + 1, 8);
    a1[9] = v8;
    v7 = v8;
    result = a1[10];
  }
  *(_QWORD *)(v7 + 8 * result) = a2;
  ++a1[10];
  return result;
}
