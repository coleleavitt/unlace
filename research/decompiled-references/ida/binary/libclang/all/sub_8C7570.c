__int64 __fastcall sub_8C7570(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( (v2 & 4) == 0 )
    return 0;
  v3 = *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF8LL) + 48);
  if ( v3
    && (*(_BYTE *)(v3 + 28) & 0x7Fu) - 38 <= 6
    && (unsigned __int8)sub_B05C30(*(_QWORD *)(a1 + 8), a2)
    && (v4 = *(_QWORD *)(a1 + 8), (v4 & 4) == 0)
    && (v5 = v4 & 0xFFFFFFFFFFFFFFF0LL, (*(_BYTE *)(v5 + 8) & 4) == 0)
    && (unsigned __int8)sub_B19540(*(_QWORD *)v5, a2) )
  {
    return sub_788D80((_QWORD *)v3, a2);
  }
  else
  {
    return 0;
  }
}

