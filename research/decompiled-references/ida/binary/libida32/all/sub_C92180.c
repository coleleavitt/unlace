__int64 __fastcall sub_C92180(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  int v10; // eax
  _QWORD v11[6]; // [rsp+8h] [rbp-30h] BYREF

  v4 = a3 | 4;
  v5 = sub_E0A100(*(_QWORD *)(a1 + 1272));
  v11[0] = v4;
  v6 = sub_CE25C0(a1, v5, v11);
  if ( !(_BYTE)v6 )
    return 0;
  v7 = v6;
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v8 + 16) == 13 && ((*(_WORD *)(v8 + 18) >> 3) & 0x1FF) == 0x1B3 )
    return v7;
  if ( (*(_BYTE *)(a3 + 1) & 6) != 0 )
    return v7;
  v10 = sub_CC2440(*(_QWORD *)(a1 + 1264), *(_QWORD *)(a3 + 8));
  if ( v10 == 13 )
    return v7;
  if ( v10 != 14 )
    return 0;
  v11[0] = v4;
  return (unsigned int)sub_CE6950(a1, 13, 14, v11);
}

