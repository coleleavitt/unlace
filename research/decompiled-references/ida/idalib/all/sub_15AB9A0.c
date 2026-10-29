unsigned __int64 __fastcall sub_15AB9A0(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3[3]; // [rsp+0h] [rbp-18h] BYREF

  result = *(_QWORD *)(a1 + 8);
  if ( result )
  {
    v2 = *(_QWORD *)(a1 + 16);
    v3[0] = *(_QWORD *)(a1 + 8);
    v3[1] = v2;
    return sub_E90530(v3);
  }
  return result;
}
