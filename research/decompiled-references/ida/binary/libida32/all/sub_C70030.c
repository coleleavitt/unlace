__int64 __fastcall sub_C70030(__int64 a1, __int64 a2, double a3)
{
  _WORD *v3; // rax
  unsigned int v4; // ecx

  v3 = sub_BD9B60((_WORD *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL), a2, a3);
  v4 = 0;
  if ( (*v3 & 0x1FF) == 0x47 )
    LOBYTE(v4) = (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 2) + 48LL)
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
                                 - 42) > 2u;
  return v4;
}

