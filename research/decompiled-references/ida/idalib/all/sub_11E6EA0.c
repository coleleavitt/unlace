__int64 __fastcall sub_11E6EA0(__int64 a1, char a2)
{
  int v2; // edx
  int v3; // edx
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 3932);
  if ( (unsigned int)(v2 - 1) <= 1 )
  {
    if ( *(_DWORD *)(a1 + 3936) <= 1u )
      return 1;
    result = 0;
    if ( v2 != 1 )
      return result;
    if ( *(_DWORD *)(a1 + 3936) != 2 )
      goto LABEL_12;
  }
  else
  {
    if ( (unsigned int)(v2 - 3) <= 2 )
      return 1;
    if ( v2 )
      return 0;
  }
  if ( !(unsigned __int8)sub_11E6860(a1, 10, 6, 0) )
    return 1;
  v3 = *(_DWORD *)(a1 + 3932);
  if ( !v3 )
    return (unsigned __int8)(a2 | sub_11E6860(a1, 10, 5, 0)) ^ 1u;
  result = 0;
  if ( v3 == 1 )
  {
LABEL_12:
    result = 0;
    if ( *(_DWORD *)(a1 + 3936) == 2 )
      return (unsigned __int8)(a2 | sub_11E6860(a1, 10, 5, 0)) ^ 1u;
  }
  return result;
}
