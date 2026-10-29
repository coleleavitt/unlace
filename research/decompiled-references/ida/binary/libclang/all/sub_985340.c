__int64 __fastcall sub_985340(__int64 *a1, __int64 a2)
{
  __int64 v3; // [rsp+0h] [rbp-18h]

  if ( (*(_BYTE *)(a2 + 1) & 6) == 0 )
    return sub_8CA760(a1, *(_QWORD *)(a2 + 8));
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25 > 1 )
    LODWORD(v3) = 13;
  else
    LODWORD(v3) = 14;
  BYTE4(v3) = 1;
  return v3;
}

