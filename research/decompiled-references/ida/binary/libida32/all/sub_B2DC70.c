bool __fastcall sub_B2DC70(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx

  v4 = *(_QWORD *)(a1 + 40);
  if ( !v4 )
    return 0;
  if ( (*(_BYTE *)(v4 + 48) & 1) == 0 )
  {
    sub_B169D0((__int64 *)v4, a2);
    v4 = *(_QWORD *)(a1 + 40);
  }
  if ( ((*(_BYTE *)(v4 + 48) >> 1) & 7) != 3 )
    return 0;
  v6 = *(_QWORD *)(v4 + 8);
  if ( !v6 || (*(_BYTE *)(v6 + 28) & 0x7Fu) - 40 > 6 )
    return 0;
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v7 + 16) == 42 )
    return (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 32)
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 25 <= 1;
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v8 + 16) != 42 )
    return 0;
  v7 = sub_F3F310(v7, a2, v8, a4);
  if ( v7 )
    return (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 32)
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 25 <= 1;
  return 0;
}

