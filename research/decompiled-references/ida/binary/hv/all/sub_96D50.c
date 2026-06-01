__int64 __fastcall sub_96D50(__int64 a1)
{
  __int64 v1; // rbp
  _QWORD *v3; // r12
  _QWORD *v4; // rdi
  __int64 v5; // rdx

  v1 = qword_1671B0;
  sub_98400(qword_1671B0);
  v3 = qword_1671B8;
  if ( qword_1671B8 )
  {
    v4 = *(_QWORD **)qword_1671B8;
    v5 = *(_QWORD *)qword_1671B8 + 8LL * *((_QWORD *)qword_1671B8 + 1);
    if ( *(_QWORD *)qword_1671B8 != v5 )
    {
      while ( *v4 != a1 )
      {
        if ( (_QWORD *)v5 == ++v4 )
          return sub_98450(v1);
      }
      if ( (_QWORD *)v5 != v4 )
      {
        memmove(v4, v4 + 1, v5 - (_QWORD)v4 - 8);
        --v3[1];
      }
    }
  }
  return sub_98450(v1);
}

