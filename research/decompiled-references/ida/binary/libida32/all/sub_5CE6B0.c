__int64 __fastcall sub_5CE6B0(__int64 a1, __int64 a2)
{
  const void *v2; // rdx
  _QWORD v4[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(const void **)(a2 + 72);
  v4[1] = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_5CC930(a1, nullptr, v2, (int)v4) && (*(_BYTE *)v4[0] & 0xF) != 0xD )
    sub_5CA510(a1);
  return 0;
}

