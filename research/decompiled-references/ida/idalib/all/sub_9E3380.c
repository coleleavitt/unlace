__int16 __fastcall sub_9E3380(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7F) == 4 )
  {
    LOWORD(v2) = sub_9E2140(a1, *(_QWORD *)(a2 + 16));
  }
  else
  {
    LOWORD(v2) = *(_WORD *)a2 & 0x1FF;
    if ( (_WORD)v2 == 87 )
    {
      v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v2 + 16) == 13 )
      {
        LOWORD(v2) = (*(_WORD *)(v2 + 18) >> 3) & 0x1FF;
        if ( (_WORD)v2 == 435 )
          LOWORD(v2) = sub_9E2CF0(a1, *(_QWORD *)(a2 + 16), 5u);
      }
    }
  }
  return v2;
}
