bool __fastcall sub_51B9A0(__int64 a1)
{
  unsigned __int64 *v1; // rax
  unsigned __int64 v2; // rcx
  unsigned __int64 *v3; // rsi
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx

  v1 = *(unsigned __int64 **)a1;
  v2 = 0;
  v3 = (unsigned __int64 *)(*(_QWORD *)a1 + (*(_QWORD *)(a1 + 8) << 7));
  if ( v3 != *(unsigned __int64 **)a1 )
  {
    do
    {
      v5 = *v1;
      if ( *v1 < v2 || v5 == -1 )
        return 0;
      v4 = v1[1];
      v1 += 16;
      v2 = v5 + v4;
    }
    while ( v3 != v1 );
    v2 = (v2 + 7) >> 3;
  }
  return *(_QWORD *)(a1 + 24) >= v2;
}

