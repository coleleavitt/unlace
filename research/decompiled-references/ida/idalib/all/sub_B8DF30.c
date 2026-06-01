bool __fastcall sub_B8DF30(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rax
  bool result; // al
  __int64 v8; // rdx
  __int64 *v9; // rdx

  v4 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (unsigned int)(v4 - 26) > 0x1A )
  {
    if ( (unsigned int)(v4 - 64) > 2 )
      return 0;
    v9 = (__int64 *)(*(_QWORD *)(a1 + 80) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a1 + 80) & 4) != 0 )
      v5 = v9[1];
    else
      v5 = *v9;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 48);
  }
  v6 = *(_QWORD *)(*(_QWORD *)&byte_8[v5 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
  result = (*(_BYTE *)(v6 + 16) == 42
         || (v8 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v8 + 16) == 42)
         && (v6 = sub_F63050(v6, a2, v8, a4)) != 0)
        && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 32)
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 25 <= 1;
  return result;
}
