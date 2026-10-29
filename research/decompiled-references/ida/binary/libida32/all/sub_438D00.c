__int64 __fastcall sub_438D00(__int64 *a1, _QWORD *a2, unsigned int a3, int a4)
{
  unsigned int v4; // r13d
  __int64 v6; // rbx
  bool v7; // bp
  unsigned int v8; // edx
  bool v9; // cl
  unsigned int *v10; // rbx
  __int64 result; // rax
  unsigned int *i; // rbp
  unsigned int v13; // edx

  v4 = a3 + a4;
  v6 = 0;
  v7 = (*(_BYTE *)(a2[29] + 2LL) & 4) != 0;
  do
  {
    v8 = *((_DWORD *)a2 + v6 + 60);
    v9 = a3 < (unsigned int)v6++;
    sub_438B60((__int64)a2, *a1, v8, v7 && v9);
  }
  while ( v4 >= (unsigned int)v6 );
  v10 = (unsigned int *)a2[78];
  result = a2[79];
  for ( i = &v10[result]; i != v10; result = sub_438B60((__int64)a2, *a1, v13, 0) )
    v13 = *v10++;
  return result;
}

