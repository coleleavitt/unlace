__int64 __fastcall sub_ADF90(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  int v3; // ebp
  __int64 v5; // r11
  const char *v6; // rsi
  __int64 v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = 3;
  v8[1] = __readfsqword(0x28u);
  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 >= 0
    && v3 < (int)(16 * ((qword_250ED8 == 0) + (unsigned int)((qword_250ED8 - qword_250EB8) >> 3) - 1)
                + ((qword_250EB0 - qword_250EA0) >> 5)
                + ((qword_250EC0 - qword_250EC8) >> 5))
    && *(_DWORD *)(sub_A0850((__int64)xmmword_250E60, v3) + 8) )
  {
    v6 = s1;
    if ( *(_QWORD *)(v5 + 48) )
      v6 = *(const char **)(v5 + 40);
    v2 = 3;
    if ( (unsigned __int8)sub_ADEF0(v3, (__int64)v6, v8) )
    {
      v2 = 0;
      *(_DWORD *)(a2 + 8) = v8[0];
    }
  }
  return v2;
}

