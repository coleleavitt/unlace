__int64 __fastcall sub_776280(_QWORD *a1, __int64 a2, __int64 a3)
{
  void *v6; // rdi
  __int64 result; // rax
  __int64 v8; // rsi
  __int64 v9; // rax

  v6 = *(void **)a3;
  if ( *(_QWORD *)a3 )
  {
    *(_QWORD *)(a3 + 8) = 0;
    qfree(v6);
    *(_QWORD *)a3 = 0;
    *(_QWORD *)(a3 + 16) = 0;
  }
  *(_QWORD *)(a3 + 160) = 0;
  *(_DWORD *)(a3 + 168) = 3;
  result = a1[10];
  v8 = a1[9];
  if ( a1[11] < (unsigned __int64)(result + 1) )
  {
    v9 = qvector_reserve(a1 + 9, v8, result + 1, 8);
    a1[9] = v9;
    v8 = v9;
    result = a1[10];
  }
  *(_QWORD *)(v8 + 8 * result) = a2;
  ++a1[10];
  return result;
}
