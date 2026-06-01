__int64 __fastcall sub_4080(__int64 a1)
{
  __int64 v1; // rbp
  _QWORD *v3; // r12
  _QWORD *v4; // rdi
  __int64 v5; // rdx

  v1 = qword_7030;
  sub_4550(qword_7030);
  v3 = ptr;
  if ( ptr )
  {
    v4 = *(_QWORD **)ptr;
    v5 = *(_QWORD *)ptr + 8LL * *((_QWORD *)ptr + 1);
    if ( *(_QWORD *)ptr != v5 )
    {
      while ( *v4 != a1 )
      {
        if ( (_QWORD *)v5 == ++v4 )
          return sub_4580(v1);
      }
      if ( (_QWORD *)v5 != v4 )
      {
        memmove(v4, v4 + 1, v5 - (_QWORD)v4 - 8);
        --v3[1];
      }
    }
  }
  return sub_4580(v1);
}

