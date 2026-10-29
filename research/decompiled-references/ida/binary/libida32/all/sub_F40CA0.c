__int64 __fastcall sub_F40CA0(__int64 a1)
{
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 16) - 2) <= 4u )
    return *(_QWORD *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
    return 0;
  return *(_QWORD *)(*(_QWORD *)(sub_F3F130(a1) + 32) & 0xFFFFFFFFFFFFFFF0LL);
}

