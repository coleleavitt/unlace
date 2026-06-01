__int64 __fastcall sub_4CAAE0(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  result = *(unsigned int *)(a3 + 12);
  if ( (result & 0x10) != 0 )
  {
    result = sub_614FB0(a1, 93);
    *(_DWORD *)(a3 + 4) = result;
  }
  else if ( (result & 0x1000) != 0 )
  {
    *(_DWORD *)(a3 + 4) = a2;
  }
  return result;
}

