unsigned __int64 __fastcall sub_6DA540(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int8 v2; // al
  unsigned __int64 v4; // rdx

  v2 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (*(_BYTE *)(a1[270] + 89LL) & 1) != 0 )
  {
    if ( (unsigned int)v2 - 2 <= 1 )
      return sub_6C48D0((__int64)a1, a2);
  }
  else if ( v2 == 2 )
  {
    goto LABEL_8;
  }
  if ( (unsigned __int8)(v2 - 3) > 3u )
  {
    if ( (unsigned __int8)(v2 - 25) > 1u )
      return a2;
    goto LABEL_9;
  }
LABEL_8:
  v4 = sub_6DA450(a1, a2);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25 <= 1 )
LABEL_9:
    v4 = sub_6C4160((__int64)a1, a2);
  return sub_6C46B0((__int64)a1, a2, v4);
}

