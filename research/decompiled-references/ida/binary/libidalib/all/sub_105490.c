__int64 __fastcall sub_105490(__int64 a1, __int64 a2)
{
  int v3; // eax
  _QWORD v4[5]; // [rsp+0h] [rbp-28h] BYREF

  v4[3] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 80) & 1) != 0 )
    return 3;
  if ( !(unsigned __int8)sub_10E500()
    && qword_254470
    && (v3 = sub_F5870(qword_254470, (__int64)v4, *(_QWORD *)(a2 + 88), 2), (unsigned int)(v3 - 1) <= 1)
    && v3 != 2 )
  {
    return 3;
  }
  else
  {
    return 7;
  }
}

