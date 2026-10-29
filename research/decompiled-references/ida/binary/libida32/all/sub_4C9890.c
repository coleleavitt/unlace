__int64 __fastcall sub_4C9890(__int64 a1, __int64 (__fastcall ***a2)(_QWORD, _QWORD, _QWORD))
{
  __int64 v2; // rbx
  unsigned int *v3; // rbp
  unsigned int *v4; // r12
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 1536);
  sub_4C92F0(v2);
  if ( !*(_BYTE *)(v2 + 640) )
    sub_4C7100(v2);
  v3 = *(unsigned int **)(v2 + 616);
  v4 = *(unsigned int **)(v2 + 624);
  if ( v4 == v3 )
    return 0;
  while ( 1 )
  {
    result = (**a2)(
               a2,
               *(unsigned int *)(*(_QWORD *)(v2 + 104) + 4LL * *v3),
               *(_QWORD *)(v2 + 152)
             + *(_QWORD *)(*(_QWORD *)(v2 + 200) + 8LL * *(unsigned int *)(*(_QWORD *)(v2 + 232) + 4LL * *v3)));
    if ( result )
      break;
    if ( v4 == ++v3 )
      return 0;
  }
  return result;
}

