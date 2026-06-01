__int64 __fastcall sub_10AE3B0(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 result; // rax
  __int64 *v4; // r13
  __int64 *v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rdx

  v2 = *(__int64 **)(a1 + 16);
  result = *(unsigned int *)(a1 + 24);
  v4 = &v2[result];
  if ( v4 != v2 )
  {
    v6 = *(__int64 **)(a1 + 96);
    if ( !*(_QWORD *)(a1 + 88) || (++v2, v4 != v2) )
    {
      do
      {
        v7 = *v2++;
        v8 = *v6++;
        result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))a2)(
                   *(_QWORD *)(a2 + 8),
                   v7,
                   v8,
                   *(_QWORD *)(v7 + 72));
      }
      while ( v4 != v2 );
    }
  }
  return result;
}

