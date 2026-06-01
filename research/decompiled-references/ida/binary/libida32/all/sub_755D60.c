__int64 __fastcall sub_755D60(_QWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r12
  void *v6; // rdi
  __int64 result; // rax
  __int64 v8; // rsi
  __int64 v9; // rax

  v3 = a2;
  v6 = *(void **)a3;
  if ( *(_QWORD *)a3 )
  {
    *(_QWORD *)(a3 + 8) = 0;
    qfree(v6);
    *(_QWORD *)a3 = 0;
    *(_QWORD *)(a3 + 16) = 0;
  }
  *(_QWORD *)(a3 + 160) = 0x300000000LL;
  result = a1[10];
  v8 = a1[9];
  if ( a1[11] < (unsigned __int64)(result + 1) )
  {
    v9 = qvector_reserve(a1 + 9, v8, result + 1, 8);
    a1[9] = v9;
    v8 = v9;
    result = a1[10];
  }
  *(_QWORD *)(v8 + 8 * result) = v3;
  ++a1[10];
  return result;
}

