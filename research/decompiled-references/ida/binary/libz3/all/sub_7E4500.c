__int64 __fastcall sub_7E4500(__int64 a1, __int64 a2)
{
  int v2; // edx
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 16);
  if ( v2 != -2 )
  {
    sub_7E4390(a1, a2, v2);
    result = sub_7E4390(a1, a2, *(_DWORD *)(a1 + 16) ^ 1u);
    *(_DWORD *)(a1 + 16) = -2;
  }
  return result;
}

