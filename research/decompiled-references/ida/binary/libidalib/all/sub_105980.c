__int64 __fastcall sub_105980(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 result; // rax
  _QWORD v5[5]; // [rsp+0h] [rbp-28h] BYREF

  v5[3] = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_10E500() )
  {
    if ( qword_254470 )
    {
      v2 = sub_F5870(qword_254470, (__int64)v5, *(_QWORD *)(a2 + 88), 2);
      if ( (unsigned int)(v2 - 1) <= 1 && v2 == 2 )
        return 3;
    }
  }
  v3 = *(_QWORD *)(a2 + 120);
  result = 7;
  if ( v3 )
  {
    if ( (*(_BYTE *)(v3 + 44) & 4) != 0 )
      return 3;
  }
  return result;
}

