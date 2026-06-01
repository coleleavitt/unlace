bool __fastcall sub_CEFA70(int *a1, unsigned int a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rsi
  int v4; // edx

  v2 = 1LL << a2;
  v3 = (_QWORD *)(*((_QWORD *)a1 + 1) + 8LL * (a2 >> 6));
  v4 = *a1;
  if ( (v2 & *v3) == 0 )
  {
    --v4;
    *v3 |= v2;
    *a1 = v4;
  }
  return v4 == 0;
}
