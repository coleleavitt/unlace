__int64 __fastcall sub_697B40(__int64 a1)
{
  __int64 result; // rax
  int v2; // esi
  __int64 v3; // rdx

  sub_697840(*(_QWORD *)(*(_QWORD *)a1 + 1672LL));
  result = *(unsigned int *)(a1 + 8);
  if ( !(_DWORD)result )
  {
    *(_DWORD *)(a1 + 8) = 2;
    if ( (_QWORD)xmmword_2CCC3E8 )
    {
      v2 = 0;
      v3 = 0;
      while ( *((_OWORD *)qword_2CCC3E0 + v3) - *(_OWORD *)(a1 + 12) != 0 )
      {
        v3 = ++v2;
        if ( v2 >= (unsigned __int64)xmmword_2CCC3E8 )
          return 2;
      }
      *(_DWORD *)(a1 + 8) = 1;
      return 1;
    }
    else
    {
      return 2;
    }
  }
  return result;
}
