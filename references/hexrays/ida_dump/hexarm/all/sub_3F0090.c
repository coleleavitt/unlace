__int64 __fastcall sub_3F0090(__int64 *a1, int a2)
{
  __int64 v2; // rsi
  __int64 v3; // rcx
  __int64 result; // rax
  _QWORD v5[9]; // [rsp+0h] [rbp-48h] BYREF

  v2 = (unsigned int)(a2 - 8);
  v3 = 100;
  v5[5] = __readfsqword(0x28u);
  if ( (unsigned int)v2 <= 0x18 )
    v3 = (unsigned int)aBdddddddhddddd[v2];
  qsnprintf(v5, 32, "svcnt%c", v3);
  result = sub_335C70(a1[1], a1[5], (__int64)v5, (_QWORD *)(a1[100] + 280), 0, 0, 1);
  *(_DWORD *)(*(_QWORD *)(result + 72) + 280LL) |= 0x14u;
  return result;
}
