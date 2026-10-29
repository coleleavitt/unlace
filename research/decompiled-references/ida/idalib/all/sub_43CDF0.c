__int64 __fastcall sub_43CDF0(__int64 a1)
{
  int v1; // ebp
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 212);
  result = getinf(36);
  if ( v1 != (_DWORD)result )
    *(_BYTE *)(a1 + 208) = 0;
  return result;
}
