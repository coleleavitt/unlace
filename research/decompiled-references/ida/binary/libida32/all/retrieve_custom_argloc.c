__int64 __fastcall retrieve_custom_argloc(int a1)
{
  unsigned __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 result; // rax

  v1 = (unsigned int)(a1 - 7);
  v2 = *(_QWORD *)(qword_2CA1698 + 1480);
  result = 0;
  if ( v1 < *(_QWORD *)(v2 + 2576) )
    return *(_QWORD *)(*(_QWORD *)(v2 + 2568) + 8LL * (int)v1);
  return result;
}

