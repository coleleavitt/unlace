_BOOL8 __fastcall sub_7AAB70(__int64 a1)
{
  _BOOL8 result; // rax

  if ( ((*(_BYTE *)(a1 + 73) >> 5) & 0xFD) == 1 )
    return 0;
  if ( *(_QWORD *)(a1 + 136) > 7u )
    return 0;
  if ( *(_QWORD *)(a1 + 128)
    || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104)),
        result = 1,
        *(_QWORD *)(a1 + 128)) )
  {
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) & 1) != 0 )
    {
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
      return (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 2LL) & 0x20) != 0;
    }
    return 0;
  }
  return result;
}

