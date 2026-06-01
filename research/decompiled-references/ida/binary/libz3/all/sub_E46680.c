__int64 __fastcall sub_E46680(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  __int64 v3; // rdx

  result = *(unsigned int *)(a1 + 152);
  if ( (_DWORD)result )
  {
    v2 = *(_QWORD *)(a1 + 144);
    if ( v2 )
      return *(unsigned int *)(v2 - 4);
    else
      return 0;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 128);
    if ( v3 )
      return *(unsigned int *)(v3 - 4);
  }
  return result;
}

