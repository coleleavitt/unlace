__int64 __fastcall sub_4BC1A0(__int64 a1, const char *a2)
{
  __int64 result; // rax
  __int64 v4; // rbx
  int v5; // r12d
  _DWORD *v6; // rdi

  result = sub_4B7980(a1, a2);
  if ( (int)result >= 0 )
  {
    v4 = *(_QWORD *)(a1 + 56);
    v5 = result;
    while ( v4 )
    {
      while ( 1 )
      {
        result = *(_QWORD *)(a1 + 48);
        --v4;
        v6 = (_DWORD *)(result + 24 * v4);
        if ( *v6 != v5 && v6[1] != v5 )
          break;
        result = (__int64)memmove(v6, v6 + 6, 24 * (*(_QWORD *)(a1 + 56) - v4) - 24);
        --*(_QWORD *)(a1 + 56);
        if ( !v4 )
          return result;
      }
    }
  }
  return result;
}
