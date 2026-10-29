__int64 __fastcall sub_CDB570(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 1248);
  *(_DWORD *)(a1 + 1248) = result + 1;
  return result;
}

