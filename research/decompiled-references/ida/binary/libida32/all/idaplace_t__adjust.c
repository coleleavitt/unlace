__int64 __fastcall idaplace_t__adjust(__int64 a1)
{
  __int64 result; // rax

  result = sub_3C2EA0(*(_DWORD *)(a1 + 12));
  *(_DWORD *)(a1 + 12) = result;
  return result;
}

