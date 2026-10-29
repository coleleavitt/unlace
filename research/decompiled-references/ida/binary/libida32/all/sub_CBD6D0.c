__int64 __fastcall sub_CBD6D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 result; // rax
  __int64 v6[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( *(char *)(sub_CC2430(*(_QWORD *)(a1 + 1264)) + 1) < 0 )
    return sub_CBBDE0(a1, a2, v2, v3, v4);
  v6[0] = a2 | 4;
  result = sub_CE2D50(a1, 2, 0, v6);
  if ( (_BYTE)result )
    return sub_CBBDE0(a1, a2, v2, v3, v4);
  return result;
}

