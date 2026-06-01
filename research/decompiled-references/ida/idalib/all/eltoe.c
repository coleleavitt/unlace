unsigned __int64 __fastcall eltoe(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // r11
  __int128 v6; // rt0
  unsigned int v7; // eax
  _WORD v9[12]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-10h]

  v4 = a1;
  v10 = __readfsqword(0x28u);
  v5 = a2;
  memset(v9, 0, 22);
  if ( a1 < 0 )
  {
    v4 = -a1;
    v9[0] = -1;
    goto LABEL_3;
  }
  if ( a1 )
  {
LABEL_3:
    *((_QWORD *)&v6 + 1) = WORD2(v4) | ((WORD1(v4) | ((unsigned __int64)(unsigned __int16)v4 << 16)) << 16);
    *(_QWORD *)&v6 = v4;
    *(_QWORD *)&v9[2] = v6 >> 48;
    v7 = sub_8300C0((__int64)v9);
    v4 = v7;
    v9[1] = 16430 - v7;
  }
  emovo(v9, v5, v4, a4);
  return v10 - __readfsqword(0x28u);
}
