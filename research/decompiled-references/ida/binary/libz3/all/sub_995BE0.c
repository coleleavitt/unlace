__int64 __fastcall sub_995BE0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // r12
  __int64 v5; // rcx
  __int64 v6; // rbp
  void (__fastcall ***v7)(_QWORD); // rbx

  v2 = 8LL * a2;
  result = *(_QWORD *)(a1 + 1056);
  v4 = result + v2;
  if ( result )
  {
    v5 = 8LL * *(unsigned int *)(result - 4);
    v6 = result + v5;
    if ( v2 == v5 )
    {
LABEL_7:
      *(_DWORD *)(result - 4) = a2;
      return result;
    }
  }
  else
  {
    v6 = 0;
    if ( !v2 )
      return result;
  }
  do
  {
    v7 = *(void (__fastcall ****)(_QWORD))(v6 - 8);
    v6 -= 8;
    if ( v7 )
    {
      (**v7)(v7);
      sub_186B220(v7);
    }
  }
  while ( v4 != v6 );
  result = *(_QWORD *)(a1 + 1056);
  if ( result )
    goto LABEL_7;
  return result;
}

