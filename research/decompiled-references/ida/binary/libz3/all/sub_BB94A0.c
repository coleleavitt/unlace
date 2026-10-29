__int64 __fastcall sub_BB94A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r13
  _QWORD *v4; // r12
  __int64 i; // r12
  __int64 v6; // rdx

  v2 = *(unsigned int *)(a1 + 304);
  if ( (_DWORD)v2 )
  {
    v3 = 4 * v2;
    v4 = (_QWORD *)(*(_QWORD *)(a1 + 320) + 56LL * **(unsigned int **)(a1 + 336));
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_BB9280(a1, a2, v4);
    for ( i = 4; v3 != i; i += 4 )
    {
      v6 = *(unsigned int *)(*(_QWORD *)(a1 + 336) + i);
      sub_BB9280(a1, a2, (_QWORD *)(*(_QWORD *)(a1 + 320) + 56 * v6));
    }
  }
  return a2;
}

