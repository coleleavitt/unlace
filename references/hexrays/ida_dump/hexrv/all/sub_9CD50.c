__int64 __fastcall sub_9CD50(_QWORD *a1)
{
  _DWORD *v1; // rbp
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rax

  v1 = (_DWORD *)a1[4];
  if ( *v1 != 2 )
    return 0;
  v3 = a1[6];
  v4 = a1[5];
  if ( a1[7] < (unsigned __int64)(v3 + 1) )
  {
    v5 = qvector_reserve(a1 + 5, v4, v3 + 1, 8);
    a1[5] = v5;
    v4 = v5;
    v3 = a1[6];
  }
  *(_QWORD *)(v4 + 8 * v3) = v1;
  ++a1[6];
  return 0;
}
