__int64 __fastcall sub_B229C0(__int64 *a1)
{
  __int64 v1; // rax
  unsigned __int8 (*v2)(void); // rdx
  __int64 v3; // rdx

  v1 = *a1;
  v2 = *(unsigned __int8 (**)(void))(*a1 + 176);
  if ( (char *)v2 == (char *)sub_B227D0 )
  {
    v3 = a1[25];
    if ( !v3 || *((_DWORD *)a1 + 52) >= *(_DWORD *)(v3 - 4) )
      return 0;
  }
  else
  {
    if ( !v2() )
      return 0;
    v1 = *a1;
  }
  (*(void (**)(void))(v1 + 184))();
  return 1;
}

