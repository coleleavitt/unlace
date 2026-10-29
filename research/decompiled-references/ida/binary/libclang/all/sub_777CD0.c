unsigned __int64 __fastcall sub_777CD0(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(unsigned int *)(a1 + 56);
  if ( !(_DWORD)v1 )
    v1 = *(unsigned int *)(a1 + 24);
  return v1 | ((unsigned __int64)*(unsigned int *)(a1 + 24) << 32);
}

