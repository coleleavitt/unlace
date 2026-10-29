__int64 __fastcall sub_40BEC0(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 156);
  if ( a2 > 0 )
    *(_DWORD *)(a1 + 156) = a2;
  return result;
}

