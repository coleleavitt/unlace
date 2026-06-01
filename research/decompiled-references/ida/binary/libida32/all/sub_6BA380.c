__int64 __fastcall sub_6BA380(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // r13
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned int v9; // edi

  v4 = (_QWORD *)sub_EBA840(*(_QWORD *)(a1 + 48), a3);
  *(_QWORD *)(a2 + 24) = sub_A74320(*(_QWORD *)(a1 + 48), *v4) / 8;
  *(_QWORD *)(a2 + 32) = sub_A74320(*(_QWORD *)(a1 + 48), v4[1]) / 8;
  *(_DWORD *)(a2 + 40) = sub_A74320(*(_QWORD *)(a1 + 48), v4[2]) / 8;
  if ( (unsigned __int8)sub_6BA300(a1, a3, 126) )
    *(_BYTE *)(a2 + 49) = log2floor(*(unsigned int *)(a2 + 40)) + 1;
  if ( (unsigned __int8)sub_6BA300(a1, a3, 325) )
    *(_DWORD *)(a2 + 44) |= 0x40u;
  if ( (unsigned __int8)sub_B55030(a3, *(_QWORD *)(a1 + 48)) )
    *(_DWORD *)(a2 + 44) |= 0x20u;
  if ( (*(_BYTE *)(a3 + 29) & 1) != 0 )
  {
    v6 = sub_B68690(a3);
    v7 = *(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8);
    v8 = 0;
    if ( (*(_BYTE *)(a3 + 29) & 1) != 0 )
      v8 = *(_QWORD *)sub_B68690(a3);
    if ( v8 != v7 )
    {
      while ( *(_WORD *)(*(_QWORD *)v8 + 36LL) != 253 )
      {
        v8 += 8;
        if ( v7 == v8 )
          return 1;
      }
      v9 = *(_DWORD *)(*(_QWORD *)v8 + 40LL);
      if ( v9 > 7 )
        *(_BYTE *)(a2 + 50) = log2floor(v9 >> 3) + 1;
    }
  }
  return 1;
}

