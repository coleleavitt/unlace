unsigned __int64 __fastcall eltoe64u(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r11
  __int128 v5; // rt0
  unsigned int v6; // eax
  _WORD v8[12]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  v4 = a2;
  memset(v8, 0, 22);
  if ( a1 )
  {
    *((_QWORD *)&v5 + 1) = WORD2(a1) | ((WORD1(a1) | ((unsigned __int64)(unsigned __int16)a1 << 16)) << 16);
    *(_QWORD *)&v5 = a1;
    *(_QWORD *)&v8[2] = v5 >> 48;
    v6 = sub_8300C0((__int64)v8);
    a3 = v6;
    v8[1] = 16430 - v6;
  }
  emovo(v8, v4, a3, a4);
  return v9 - __readfsqword(0x28u);
}
