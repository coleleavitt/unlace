__int64 __fastcall sub_8299C0(__int64 a1, __int64 a2, unsigned int a3)
{
  void *v3; // r12
  int v4; // eax
  __int64 v7; // r12
  unsigned int v8; // eax

  if ( a3 == -1 || !(unsigned __int8)sub_FFAE60(*(_QWORD *)(a2 + 496)) )
  {
    *(_DWORD *)a1 = 0;
    *(_BYTE *)(a1 + 4) &= 0xFCu;
    *(_BYTE *)(a1 + 20) &= 0xFCu;
    v3 = qword_1C7F2C0;
    *(_QWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 16) = 1;
    *(_QWORD *)(a1 + 24) = 0;
    if ( (*(_BYTE *)(&qword_1C7F2A0 + 1) & 1) != 0 )
      sub_182C690(v3, a1, &qword_1C7F2A0);
    else
      *(_DWORD *)a1 = qword_1C7F2A0;
    if ( (qword_1C7F2B0 & 0x100000000LL) != 0 )
    {
      sub_182C690(v3, a1 + 16, &qword_1C7F2B0);
    }
    else
    {
      v4 = qword_1C7F2B0;
      *(_BYTE *)(a1 + 20) &= ~1u;
      *(_DWORD *)(a1 + 16) = v4;
    }
    return a1;
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 496);
    v8 = sub_FF9FB0(v7, a3);
    sub_FFC2C0(a1, v7, v8);
    return a1;
  }
}

