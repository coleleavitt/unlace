__int64 __fastcall sub_4C9680(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 1536LL);
  sub_4C92F0(v2);
  if ( !*(_BYTE *)(v2 + 640) )
    sub_4C7100(v2);
  v3 = *(_QWORD *)(v2 + 616);
  if ( a2 >= (*(_QWORD *)(v2 + 624) - v3) >> 2 )
    return 0;
  else
    return *(_QWORD *)(v2 + 152)
         + *(_QWORD *)(*(_QWORD *)(v2 + 200)
                     + 8LL * *(unsigned int *)(*(_QWORD *)(v2 + 232) + 4LL * *(unsigned int *)(v3 + 4 * a2)));
}

