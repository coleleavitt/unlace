__int64 __fastcall sub_44C9C0(__int64 *a1, _QWORD *a2, unsigned int a3, int a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r13d
  __int64 v8; // rbx
  bool v9; // bp
  __int64 v10; // rdx
  bool v11; // cl
  __int64 *v12; // rbx
  __int64 result; // rax
  __int64 *i; // rbp
  __int64 v15; // rdx

  v6 = a3 + a4;
  v8 = 0;
  v9 = (*(_BYTE *)(a2[47] + 2LL) & 4) != 0;
  do
  {
    v10 = a2[v8 + 48];
    v11 = a3 < (unsigned int)v8++;
    sub_44C820(a2, *a1, v10, v9 && v11, a5, a6);
  }
  while ( v6 >= (unsigned int)v8 );
  v12 = (__int64 *)a2[105];
  result = a2[106];
  for ( i = &v12[result]; i != v12; result = sub_44C820(a2, *a1, v15, 0, a5, a6) )
    v15 = *v12++;
  return result;
}
