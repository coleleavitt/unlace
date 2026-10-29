_DWORD *__fastcall sub_40D5E0(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // rdx

  if ( *(char ***)(a1 + 24) != &off_653DC0 )
    sub_40D430(0, a1);
  v2 = *(_DWORD **)(a1 + 32);
  if ( a2 )
    *a2 = *v2;
  return v2 + 2;
}

