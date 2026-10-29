__int64 __fastcall sub_755DF0(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // r12
  __int64 v4; // rbp
  void *v5; // rdi
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 v8; // rax

  v2 = a2;
  v4 = a1[6] + 176LL * a2;
  v5 = *(void **)v4;
  if ( *(_QWORD *)v4 )
  {
    *(_QWORD *)(v4 + 8) = 0;
    qfree(v5);
    *(_QWORD *)v4 = 0;
    *(_QWORD *)(v4 + 16) = 0;
  }
  *(_QWORD *)(v4 + 160) = 0x300000000LL;
  result = a1[10];
  v7 = a1[9];
  if ( a1[11] < (unsigned __int64)(result + 1) )
  {
    v8 = qvector_reserve(a1 + 9, v7, result + 1, 8);
    a1[9] = v8;
    v7 = v8;
    result = a1[10];
  }
  *(_QWORD *)(v7 + 8 * result) = v2;
  ++a1[10];
  return result;
}

