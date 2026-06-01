__int64 __fastcall rangeset_t_has_common(__int64 a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 *v3; // rax
  __int64 v4; // rcx
  unsigned __int64 *v5; // r8
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rsi
  __int64 result; // rax

  v3 = *(unsigned __int64 **)a1;
  v4 = 16LL * *(_QWORD *)(a1 + 8);
  v5 = (unsigned __int64 *)(*(_QWORD *)a1 + v4);
  if ( !v4 )
    return 0;
  v6 = *a2;
  while ( 1 )
  {
    v7 = v3[1];
    if ( v6 < v7 )
      break;
    v3 += 2;
    if ( v3 == v5 )
      return 0;
  }
  v8 = *v3;
  v9 = a2[1];
  result = 0;
  if ( v8 < v9 )
  {
    result = 1;
    if ( (_BYTE)a3 )
    {
      LOBYTE(result) = v6 >= v8;
      LOBYTE(a3) = v7 >= v9;
      return a3 & (unsigned int)result;
    }
  }
  return result;
}
