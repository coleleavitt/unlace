__int64 __fastcall sub_239E20(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rdi

  if ( *(_DWORD *)(a2 + 8) != 61 )
    return 0;
  v3 = *(_QWORD *)(a2 + 24);
  if ( (unsigned __int8)is_enum(*(_QWORD *)(v3 + 40), (unsigned int)*(char *)(v3 + 12))
    && (*(_BYTE *)(v3 + 13) & 0x20) == 0 )
  {
    v4 = *(_QWORD *)(a2 + 24);
    v5 = -1;
    v6 = 8 * *(char *)(v4 + 15);
    if ( (unsigned __int64)v6 <= 0x3F )
      v5 = (1LL << v6) - 1;
    if ( (unsigned __int8)sub_25CA60(
                            0,
                            a2 + 48,
                            *(unsigned __int8 *)(v3 + 14),
                            *(_QWORD *)v4 & v5,
                            (unsigned int)*(char *)(v3 + 15),
                            0) )
    {
      *(_BYTE *)(v3 + 13) |= 0x20u;
    }
    else
    {
      v7 = *(_QWORD *)(v3 + 16);
      if ( v7 )
      {
        *(_QWORD *)(v3 + 24) = 0;
        qfree(v7);
        *(_QWORD *)(v3 + 16) = 0;
        *(_QWORD *)(v3 + 32) = 0;
      }
      sub_324F00(v3 + 8, *(_QWORD *)(v3 + 40) & 0xFF000000F009FFFFLL);
    }
  }
  return 0;
}
