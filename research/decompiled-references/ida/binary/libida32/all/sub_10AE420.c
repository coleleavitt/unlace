__int64 __fastcall sub_10AE420(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 *v4; // rbx
  __int64 result; // rax
  __int64 *v6; // r14
  __int64 *v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rdx

  v3 = *(_QWORD *)(a1 + 88);
  v4 = *(__int64 **)(a1 + 16);
  if ( !v3 )
  {
    result = *(unsigned int *)(a1 + 24);
    v6 = &v4[result];
    if ( v6 == v4 )
      return result;
    v7 = *(__int64 **)(a1 + 96);
    goto LABEL_5;
  }
  (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))a2)(*(_QWORD *)(a2 + 8), *v4, v3, *(_QWORD *)(*v4 + 72));
  v4 = *(__int64 **)(a1 + 16);
  result = *(unsigned int *)(a1 + 24);
  v6 = &v4[result];
  if ( v6 != v4 )
  {
    v7 = *(__int64 **)(a1 + 96);
    if ( !*(_QWORD *)(a1 + 88) || (++v4, v6 != v4) )
    {
      do
      {
LABEL_5:
        v8 = *v4++;
        v9 = *v7++;
        result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))a2)(
                   *(_QWORD *)(a2 + 8),
                   v8,
                   v9,
                   *(_QWORD *)(v8 + 72));
      }
      while ( v4 != v6 );
    }
  }
  return result;
}

