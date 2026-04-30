__int64 __fastcall sub_2B23E0(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rcx

  result = 0;
  if ( a2 >= 0 )
  {
    v4 = *(_QWORD *)(a1 + 440);
    if ( (unsigned __int64)a2 < *(_QWORD *)(v4 + 24) )
    {
      v5 = (_QWORD *)(*(_QWORD *)(v4 + 16) + 24LL * a2);
      if ( a3 >= 0 && (unsigned __int64)a3 < v5[1] )
        return *v5 + 272LL * a3;
    }
  }
  return result;
}
