_BOOL8 __fastcall sub_7ADB20(__int64 a1)
{
  _BOOL8 result; // rax

  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  result = 1;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 6LL) & 0x20) == 0 )
  {
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 9LL) & 4) != 0 )
      return 0;
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    if ( (**(_BYTE **)(a1 + 128) & 4) != 0 )
      return 0;
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    if ( (**(_BYTE **)(a1 + 128) & 0x10) != 0 )
      return 0;
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    if ( (**(_BYTE **)(a1 + 128) & 0x20) != 0 )
      return 0;
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    if ( ((**(_BYTE **)(a1 + 128) >> 1) & 0x3Fu) > 0x1F )
    {
      return 0;
    }
    else
    {
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
      return (*(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) & 0x200) == 0;
    }
  }
  return result;
}

