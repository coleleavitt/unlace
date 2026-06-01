__int64 __fastcall sub_21B3B0(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v3; // rcx
  signed int v5; // ebp
  __int64 v6; // r11
  const char *v7; // rsi
  __int64 v9[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = 3;
  v9[1] = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 8);
  if ( (int)v3 >= 0
    && (int)v3 < (int)(16 * ((qword_8CBB18 == 0) + (unsigned int)((qword_8CBB18 - qword_8CBAF8) >> 3) - 1)
                     + ((qword_8CBAF0 - qword_8CBAE0) >> 5)
                     + ((qword_8CBB00 - qword_8CBB08) >> 5)) )
  {
    v5 = *(_QWORD *)(a1 + 8);
    if ( *(_DWORD *)(sub_20F460((__int64)qword_8CBAA0, v3) + 8) )
    {
      v7 = &s1;
      if ( *(_QWORD *)(v6 + 48) )
        v7 = *(const char **)(v6 + 40);
      v2 = 3;
      if ( (unsigned __int8)sub_21B310(v5, v7, v9) )
      {
        v2 = 0;
        *(_QWORD *)(a2 + 8) = v9[0];
      }
    }
  }
  return v2;
}
