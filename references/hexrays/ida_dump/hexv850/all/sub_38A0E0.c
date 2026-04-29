unsigned __int64 __fastcall sub_38A0E0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 *v9; // rbx
  unsigned __int64 result; // rax
  __int64 *i; // r12
  __int64 v12; // rdi

  sub_252C70((__int64)a1, 0, a3);
  v8 = *(_QWORD *)(a1[27] + 1008);
  v9 = *(__int64 **)(v8 + 40);
  result = *(_QWORD *)(v8 + 48);
  for ( i = &v9[result]; i != v9; result = sub_37DFF0(v12, a1, v4, v5, v6, v7) )
  {
    while ( 1 )
    {
      v12 = *v9;
      if ( *v9 )
      {
        if ( a1 == *(__int64 **)(v12 + 32) )
          break;
      }
      if ( i == ++v9 )
        return result;
    }
    ++v9;
  }
  return result;
}
