__int64 __fastcall sub_78FF30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  sub_78DC70(4, 1, a3);
  result = (unsigned int)(*(_DWORD *)(a1 + 5880) + 1);
  *(_DWORD *)(a1 + 5880) = result;
  return result;
}

