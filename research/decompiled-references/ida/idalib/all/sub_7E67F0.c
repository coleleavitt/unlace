unsigned __int64 __fastcall sub_7E67F0(__int64 a1, __int64 *a2, int a3)
{
  const char *v5; // rsi
  const char *v6; // rsi
  unsigned __int64 result; // rax
  __int64 v8; // r14
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // r12

  sub_3A0970(a2, *(_DWORD *)a1);
  v5 = haystack;
  if ( *(_QWORD *)(a1 + 16) )
    v5 = *(const char **)(a1 + 8);
  sub_649F10(a2, v5);
  sub_7E6130(a1 + 32, a2);
  sub_3A0A80(a2, *(_QWORD *)(a1 + 152));
  v6 = haystack;
  if ( *(_QWORD *)(a1 + 168) )
    v6 = *(const char **)(a1 + 160);
  sub_649F10(a2, v6);
  result = sub_3A0970(a2, *(_DWORD *)(a1 + 184));
  if ( a3 > 5 )
  {
    v8 = *(_QWORD *)(a1 + 200);
    result = sub_3A0970(a2, v8);
    if ( v8 )
    {
      v9 = 0;
      do
      {
        v10 = 3 * v9++;
        v11 = *(_QWORD *)(a1 + 192) + 8 * v10;
        sub_3A0970(a2, *(_DWORD *)v11);
        sub_3A0970(a2, *(_DWORD *)(v11 + 4));
        sub_3A0A80(a2, *(_QWORD *)(v11 + 8));
        result = sub_3A0A80(a2, *(_QWORD *)(v11 + 16));
      }
      while ( v8 != v9 );
    }
  }
  return result;
}
