unsigned __int64 __fastcall sub_2247130(_QWORD *a1, unsigned __int8 *a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int8 *v4; // rdx
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rcx
  _OWORD v9[2]; // [rsp+0h] [rbp-28h] BYREF

  v4 = &a2[a3];
  v5 = a4;
  memset(v9, 0, sizeof(v9));
  for ( ; a2 != v4; *((_QWORD *)v9 + (v6 >> 6)) |= 1LL << v6 )
    v6 = *a2++;
  if ( a1[1] <= a4 )
    v5 = a1[1];
  result = v5 - 1;
  if ( v5 )
  {
    v8 = *(unsigned __int8 *)(*a1 + v5 - 1);
    if ( ((1LL << v8) & *((_QWORD *)v9 + (v8 >> 6))) != 0 )
    {
      do
        --result;
      while ( result != -1
           && ((1LL << *(_BYTE *)(*a1 + result))
             & *((_QWORD *)v9 + ((unsigned __int64)*(unsigned __int8 *)(*a1 + result) >> 6))) != 0 );
    }
  }
  return result;
}
