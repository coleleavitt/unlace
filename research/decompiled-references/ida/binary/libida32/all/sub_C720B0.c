__int64 __fastcall sub_C720B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rax
  unsigned __int64 v6; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( (v2 & 4) == 0 )
    return 0;
  v3 = *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF8LL) + 48);
  if ( v3
    && (*(_BYTE *)(v3 + 28) & 0x7Fu) - 40 <= 6
    && (unsigned __int8)sub_F32DA0(*(_QWORD *)(a1 + 8), a2)
    && (v4 = *(_QWORD *)(a1 + 8), (v4 & 4) == 0)
    && (v6 = v4 & 0xFFFFFFFFFFFFFFF0LL, (*(_BYTE *)(v6 + 8) & 4) == 0)
    && (unsigned __int8)sub_F436F0(*(_QWORD *)v6, a2) )
  {
    return sub_B59570(v3, a2);
  }
  else
  {
    return 0;
  }
}

