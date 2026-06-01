__int64 __fastcall sub_9D160(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *v4; // rax

  if ( a2 >= 0 )
  {
    v2 = *(_QWORD **)(a1 + 232);
    if ( *(_BYTE *)(a1 + 224) )
    {
      v4 = *(_QWORD **)(a1 + 184);
      a2 = ((__int64)(v4[10] - v4[8]) >> 5)
         + ((__int64)(v4[12] - v4[13]) >> 5)
         + 16 * ((v4[15] == 0) + ((__int64)(v4[15] - v4[11]) >> 3) - 1)
         - 1;
    }
    else
    {
      a2 -= *v2;
      if ( a2 < 0 )
      {
        sub_9C2D0(dword_252588, 1);
        sub_154600();
        sub_154630();
        v2 = *(_QWORD **)(a1 + 232);
        a2 = 0;
      }
    }
    *v2 = 0;
  }
  return a2;
}

