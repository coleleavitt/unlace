bool __fastcall sub_1C17A0(__int64 a1, __int64 a2)
{
  int *v2; // rbp
  int *v3; // rbx

  v2 = (int *)a2;
  v3 = (int *)a1;
  if ( *(_DWORD *)a1 == 2 && (unsigned __int8)sub_1BF6D0(a1, 0, 0) )
  {
    v3 = **(int ***)(a1 + 8);
    if ( *(_DWORD *)a2 != 2 )
      return (unsigned int)sub_1BF090(v3, v2) == 0;
  }
  else if ( *(_DWORD *)a2 != 2 )
  {
    return (unsigned int)sub_1BF090(v3, v2) == 0;
  }
  if ( (unsigned __int8)sub_1BF6D0(a2, 0, 0) )
    v2 = **(int ***)(a2 + 8);
  return (unsigned int)sub_1BF090(v3, v2) == 0;
}
