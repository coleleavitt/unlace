__int64 __fastcall sub_AE630(__int64 a1, __int64 a2)
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
    && (int)v3 < (int)(16 * ((qword_251F98 == 0) + (unsigned int)((qword_251F98 - qword_251F78) >> 3) - 1)
                     + ((qword_251F70 - qword_251F60) >> 5)
                     + ((qword_251F80 - qword_251F88) >> 5)) )
  {
    v5 = *(_QWORD *)(a1 + 8);
    if ( *(_DWORD *)(sub_A0A20((__int64)xmmword_251F20, v3) + 8) )
    {
      v7 = s1;
      if ( *(_QWORD *)(v6 + 48) )
        v7 = *(const char **)(v6 + 40);
      v2 = 3;
      if ( (unsigned __int8)sub_AE590(v5, (__int64)v7, v9) )
      {
        v2 = 0;
        *(_QWORD *)(a2 + 8) = v9[0];
      }
    }
  }
  return v2;
}

