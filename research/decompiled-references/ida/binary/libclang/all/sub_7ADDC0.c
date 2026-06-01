_BOOL8 __fastcall sub_7ADDC0(__int64 a1)
{
  _BOOL8 result; // rax
  _BYTE *v2; // rdx

  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  result = 1;
  if ( *(char *)(*(_QWORD *)(a1 + 128) + 6LL) >= 0 )
  {
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 9LL) & 0x10) != 0 )
      return 0;
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    if ( (**(_BYTE **)(a1 + 128) & 4) != 0 )
      return 0;
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    if ( (**(_BYTE **)(a1 + 128) & 0x10) != 0 )
      return 0;
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    if ( (**(_BYTE **)(a1 + 128) & 8) != 0 )
      return 0;
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    v2 = *(_BYTE **)(a1 + 128);
    if ( ((*v2 >> 1) & 0x3Fu) > 0x1F || (v2[10] & 0x20) != 0 && !(unsigned __int8)sub_7A3430(a1) )
    {
      return 0;
    }
    else
    {
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
      return (*(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) & 0x800) == 0;
    }
  }
  return result;
}

