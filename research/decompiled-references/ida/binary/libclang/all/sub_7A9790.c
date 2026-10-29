__int64 __fastcall sub_7A9790(__int64 a1)
{
  _BYTE *v1; // rax
  unsigned int v2; // ebp

  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  if ( (**(_BYTE **)(a1 + 128) & 1) == 0 )
  {
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    v1 = *(_BYTE **)(a1 + 128);
    if ( (v1[9] & 1) == 0 )
    {
      v2 = 1;
      if ( (v1[10] & 0x20) == 0
        || (v1[104] & 0x18) == 0
        && (*((_DWORD *)v1 + 26) & 0xFFFE0) == 0
        && *(char *)(*(_QWORD *)(sub_798D40(a1) + 2160) + 1LL) < 0 )
      {
        return v2;
      }
    }
  }
  v2 = 0;
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) & 8) == 0 )
    return v2;
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  return (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 9LL) & 1) == 0;
}

