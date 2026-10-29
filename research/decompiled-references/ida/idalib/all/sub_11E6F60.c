__int64 __fastcall sub_11E6F60(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 3932);
  if ( !v1 )
    return (unsigned int)sub_11E6860(a1, 10, 6, 0) ^ 1;
  result = 1;
  if ( v1 == 1 && *(_DWORD *)(a1 + 3936) == 2 )
    return (unsigned int)sub_11E6860(a1, 10, 6, 0) ^ 1;
  return result;
}
