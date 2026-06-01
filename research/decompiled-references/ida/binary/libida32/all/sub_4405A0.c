__int64 __fastcall sub_4405A0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  v2 = switch_dbctx(*(int *)(a1 + 8));
  result = sub_79B4D0(a1 + 72, v2, a2, *(unsigned __int8 *)(a1 + 92));
  *(_BYTE *)(a1 + 94) = 1;
  return result;
}

