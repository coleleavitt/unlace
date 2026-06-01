unsigned __int64 __fastcall sub_6BBB40(_QWORD *a1, __int64 a2)
{
  unsigned __int64 result; // rax
  const char *v3; // rcx
  const char *v5; // rsi
  __int64 v6; // rbx
  __int64 i; // r13
  const char *v8; // r12
  __int64 v9; // rdx
  const char *v10; // rsi

  result = *(_BYTE *)(a2 + 32) & 0x3F;
  if ( (_BYTE)result == 45 )
  {
    v3 = haystack;
    if ( *(_QWORD *)(a2 + 8) )
      v3 = *(const char **)a2;
    result = sub_6BB730((__int64)a1, nullptr, 0, v3);
    if ( result != -1 )
    {
      v5 = haystack;
      if ( *(_QWORD *)(a2 + 8) )
        v5 = *(const char **)a2;
      result = sub_6B9860(a1, v5, 0, 0);
      if ( result == -1 )
      {
        v10 = haystack;
        if ( *(_QWORD *)(a2 + 8) )
          v10 = *(const char **)a2;
        result = sub_6B9D30(a1, v10, *(_QWORD *)(a2 + 24));
      }
    }
    v6 = *(_QWORD *)(a2 + 40);
    for ( i = v6 + 32LL * *(_QWORD *)(a2 + 48); i != v6; result = sub_6B9D30(a1, v8, v9) )
    {
      while ( 1 )
      {
        v8 = haystack;
        if ( *(_QWORD *)(v6 + 8) )
          v8 = *(const char **)v6;
        result = sub_6500C0((__int64)a1, a1[1], v8);
        if ( (_DWORD)result )
        {
          result = sub_6B9860(a1, v8, 0, 0);
          if ( result == -1 )
            break;
        }
        v6 += 32;
        if ( i == v6 )
          return result;
      }
      v9 = *(_QWORD *)(v6 + 24);
      v6 += 32;
    }
  }
  return result;
}
