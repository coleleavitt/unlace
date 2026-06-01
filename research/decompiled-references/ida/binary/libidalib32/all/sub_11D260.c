__int64 __fastcall sub_11D260(_QWORD *a1, _QWORD *a2, int a3)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 *v10; // rbx
  unsigned int v11; // r13d
  __int64 v12; // rsi
  __int64 v13; // rax

  if ( a2 != a1 + 535 )
  {
    v5 = a1[1069];
    if ( *a2 == a1[535] )
    {
      a1[1072] = v5;
      a1[1071] = a2;
    }
    v6 = a1[1068];
    v7 = v5 + 1;
    if ( a1[1070] < (unsigned __int64)(v5 + 1) )
    {
      v13 = qvector_reserve();
      a1[1068] = v13;
      v6 = v13;
      v5 = a1[1069];
      v7 = v5 + 1;
    }
    a1[1069] = v7;
    v8 = 16 * v5 + v6;
    *(_DWORD *)(v8 + 8) = a3;
    *(_QWORD *)v8 = a2;
  }
  result = 8LL * a2[531];
  if ( result )
  {
    v10 = (__int64 *)a2[530];
    v11 = a3 + 1;
    do
    {
      v12 = *v10++;
      sub_11D260(a1, v12, v11);
      result = a2[530] + 8LL * a2[531];
    }
    while ( v10 != (__int64 *)result );
  }
  return result;
}

