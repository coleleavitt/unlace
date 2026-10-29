_QWORD *__fastcall sub_A1B40(_QWORD *a1, int a2)
{
  __int64 v2; // r13
  _QWORD *v3; // r12
  unsigned __int64 v4; // r13
  _QWORD v6[9]; // [rsp+0h] [rbp-48h] BYREF

  v2 = a1[1];
  v6[3] = __readfsqword(0x28u);
  v3 = (_QWORD *)*a1;
  v4 = v2 - 1;
  if ( *a1 )
  {
    while ( v4 < 16 * ((unsigned __int64)(v3[15] == 0) + ((__int64)(v3[15] - v3[11]) >> 3) - 1)
               + ((__int64)(v3[10] - v3[8]) >> 5)
               + ((__int64)(v3[12] - v3[13]) >> 5) )
    {
      v6[0] = v3;
      v6[1] = v4;
      if ( *((_DWORD *)sub_A19D0((__int64)v6) + 2) == a2 )
        break;
      --v4;
    }
  }
  return v3;
}

