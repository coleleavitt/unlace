__int64 __fastcall sub_8297C0(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rdx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 392);
  v2 = sub_7E4EB0(a1);
  result = 0;
  if ( v1 < *(_DWORD *)(v2 + 344) )
    return *(unsigned int *)(sub_7E4EB0(a1) + 268);
  return result;
}

