bool __fastcall sub_534320(__int64 a1)
{
  unsigned __int64 *v1; // rax
  unsigned __int64 v2; // rcx
  __int64 v3; // rsi
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx

  v1 = *(unsigned __int64 **)a1;
  v2 = 0;
  v3 = *(_QWORD *)a1 + 144LL * *(_QWORD *)(a1 + 8);
  if ( v3 != *(_QWORD *)a1 )
  {
    do
    {
      v5 = *v1;
      if ( *v1 < v2 || v5 == -1 )
        return 0;
      v4 = v1[1];
      v1 += 18;
      v2 = v5 + v4;
    }
    while ( (unsigned __int64 *)v3 != v1 );
    v2 = (v2 + 7) >> 3;
  }
  return *(_QWORD *)(a1 + 24) >= v2;
}
