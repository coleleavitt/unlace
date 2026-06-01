unsigned __int64 __fastcall sub_1EAB3F0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // rdx
  int v4; // ebx
  unsigned __int64 v5; // [rsp+8h] [rbp-10h] BYREF

  result = a2;
  v5 = a2;
  if ( a2 > 0x13 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 160) + 8LL * (unsigned int)(HIDWORD(a2) - 1));
    if ( v3 )
    {
      v4 = *(_DWORD *)(v3 + 3072);
      return v4 + (unsigned int)sub_B8F2E0((__int64)&v5);
    }
  }
  return result;
}
