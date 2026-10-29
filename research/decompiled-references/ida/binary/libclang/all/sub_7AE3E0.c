__int64 __fastcall sub_7AE3E0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 result; // rax
  char v4; // r12
  _BYTE *v5; // rdx

  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104));
  if ( (**(_BYTE **)(a2 + 128) & 4) != 0
    || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104)),
        (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 4LL) & 4) != 0) )
  {
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    *(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) |= 0x20u;
  }
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104));
  if ( (**(_BYTE **)(a2 + 128) & 8) != 0
    || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104)),
        (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 9LL) & 4) == 0)
    && ((sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104)),
         (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 9LL) & 4) != 0)
     || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104)),
         (**(_BYTE **)(a2 + 128) & 4) != 0)
     || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104)),
         (**(_BYTE **)(a2 + 128) & 0x10) != 0)
     || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104)),
         (**(_BYTE **)(a2 + 128) & 0x20) != 0)
     || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104)),
         ((**(_BYTE **)(a2 + 128) >> 1) & 0x3Fu) > 0x1F))
    || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104)),
        (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 4LL) & 8) != 0) )
  {
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    *(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) |= 0x40u;
  }
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104));
  if ( (**(_BYTE **)(a2 + 128) & 0x10) != 0
    || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104)),
        (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 4LL) & 0x10) != 0) )
  {
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    *(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) |= 0x80u;
  }
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104));
  if ( (**(_BYTE **)(a2 + 128) & 0x20) != 0
    || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104)),
        (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 9LL) & 0x10) == 0)
    && ((sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104)),
         (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 9LL) & 0x10) != 0)
     || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104)),
         (**(_BYTE **)(a2 + 128) & 4) != 0)
     || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104)),
         (**(_BYTE **)(a2 + 128) & 0x10) != 0)
     || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104)),
         (**(_BYTE **)(a2 + 128) & 8) != 0)
     || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104)),
         v5 = *(_BYTE **)(a2 + 128),
         ((*v5 >> 1) & 0x3Fu) > 0x1F)
     || (v5[10] & 0x20) != 0 && !(unsigned __int8)sub_7A3430(a2))
    || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104)),
        (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 4LL) & 0x20) != 0) )
  {
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    *(_BYTE *)(*(_QWORD *)(a1 + 128) + 4LL) |= 1u;
  }
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104));
  if ( ((**(_BYTE **)(a2 + 128) >> 1) & 0x3Fu) > 0x1F
    || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104)),
        (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 4LL) & 0x40) != 0) )
  {
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    *(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) |= 0x20u;
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    *(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) |= 0x40u;
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    *(_BYTE *)(*(_QWORD *)(a1 + 128) + 4LL) |= 2u;
  }
  v2 = sub_7A4880(a2);
  if ( v2 )
  {
    if ( (*(_BYTE *)(v2 + 84) & 3) != 0 )
      goto LABEL_13;
  }
  else
  {
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104));
    if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 8LL) & 0x10) != 0 && *(char *)(sub_798D60(a2) + 1) < 0 )
      goto LABEL_13;
  }
  v4 = *(_BYTE *)(*(_QWORD *)(sub_798D40(a1) + 2160) + 2LL);
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  *(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) = (16 * (v4 & 1)) | *(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) & 0xEF;
LABEL_13:
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104));
  result = *(_QWORD *)(a2 + 128);
  if ( (*(_BYTE *)(result + 8) & 0x40) == 0 )
  {
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    result = *(_QWORD *)(a1 + 128);
    *(_BYTE *)(result + 8) &= ~0x40u;
  }
  return result;
}

