__int64 __fastcall l_compare(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // eax

  if ( !a1 )
    return 0xFFFFFFFFLL;
  if ( !a2 )
    return 1;
  result = (*(__int64 (**)(void))(*(_QWORD *)a1 + 40LL))();
  if ( (_DWORD)result )
    return result;
  v3 = *(_DWORD *)(a2 + 8);
  if ( a1[2] > v3 )
    return 1;
  return (unsigned int)-(a1[2] < v3);
}

