__int64 __fastcall sub_8C1560(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ecx

  v2 = sub_811B20(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL, a2);
  v3 = 0;
  if ( (*(_WORD *)v2 & 0x1FF) == 0x48 )
    LOBYTE(v3) = (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 48LL)
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
                                 - 41) > 2u;
  return v3;
}

