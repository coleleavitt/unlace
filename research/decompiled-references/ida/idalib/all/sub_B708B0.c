unsigned __int64 __fastcall sub_B708B0(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(unsigned int *)(a1 + 56);
  if ( !(_DWORD)v1 )
    v1 = *(unsigned int *)(a1 + 24);
  return ((unsigned __int64)*(unsigned int *)(a1 + 24) << 32) | v1;
}
