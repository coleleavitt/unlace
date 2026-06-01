__int64 __fastcall sub_4D39D0(__int64 a1)
{
  const char *v2; // rsi
  __int64 *v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // r13
  __int64 i; // rbx
  __int64 result; // rax

  v2 = *(const char **)(a1 + 88);
  (*(void (__fastcall **)(_QWORD, const char *, _QWORD))(**(_QWORD **)(a1 + 80) + 240LL))(*(_QWORD *)(a1 + 80), v2, 0);
  v3 = *(__int64 **)(a1 + 88);
  v4 = *v3;
  if ( *v3 )
  {
    v5 = v3[1];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        sub_4DE2C0();
        v4 = *v3;
      }
    }
    v3[1] = 0;
    qfree(v4, v2);
    *v3 = 0;
    v3[2] = 0;
    v3 = *(__int64 **)(a1 + 88);
  }
  result = (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(a1 + 80) + 208LL))(
             *(_QWORD *)(a1 + 80),
             v3,
             7);
  *(_BYTE *)(a1 + 112) = 1;
  return result;
}
