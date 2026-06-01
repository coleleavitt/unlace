__int64 __fastcall sub_8131F0(__int64 a1)
{
  __int16 v2; // [rsp+0h] [rbp-418h] BYREF
  _BYTE v3[1030]; // [rsp+2h] [rbp-416h] BYREF
  unsigned __int64 v4; // [rsp+408h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  qstrncpy(v3, a1, 1022);
  v2 = 24426;
  return get_name_ea(-1, &v2);
}
