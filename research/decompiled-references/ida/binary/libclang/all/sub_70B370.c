__int16 __fastcall sub_70B370(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // r12

  v3 = sub_B10DA0(*(_QWORD *)(*a2 & 0xFFFFFFFFFFFFFFF0LL), a2);
  if ( v3 )
  {
    v4 = *a2;
    v3 = *(_QWORD *)(*(_QWORD *)(*a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
    v5 = *(_QWORD *)v3;
    if ( *(_BYTE *)(*(_QWORD *)v3 + 16LL) == 13 )
    {
      LOWORD(v3) = (*(_WORD *)(v5 + 18) >> 3) & 0x1FF;
      if ( (_WORD)v3 == 444 )
      {
        if ( (unsigned int)sub_70B280(a1, v4) == 32 )
        {
          v3 = *(_QWORD *)(a1 + 18608);
          *a2 = v3;
          return v3;
        }
        LOWORD(v3) = (*(_WORD *)(v5 + 18) >> 3) & 0x1FF;
      }
      if ( (_WORD)v3 == 452 )
      {
        LODWORD(v3) = sub_70B280(a1, *a2);
        if ( (_DWORD)v3 == 32 )
        {
          v3 = *(_QWORD *)(a1 + 18560);
          *a2 = v3;
        }
      }
    }
  }
  return v3;
}

