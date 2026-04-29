__int64 __fastcall sub_329080(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  unsigned int v7; // ecx
  _QWORD v9[2]; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+10h] [rbp-18h]
  unsigned __int64 v11; // [rsp+18h] [rbp-10h]

  v11 = __readfsqword(0x28u);
  v6 = *a1;
  if ( (*a1 & 0xE) != 0 )
  {
    v7 = 0;
    if ( ((unsigned __int8)v6 & 0xFu) > 9 )
    {
      v9[0] = off_4B60D8;
      v9[1] = 4;
      v10 = 0;
      ((void (__fastcall *)(_QWORD *, _QWORD, __int64 *, _QWORD, _QWORD, __int64))visit_subtypes)(v9, 0, a1, 0, 0, a6);
      return v10;
    }
  }
  else
  {
    return (v6 & 0x30) != 0;
  }
  return v7;
}
