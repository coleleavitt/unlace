__int64 __fastcall sub_4DA8C0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rax

  v4 = sub_186B270(0x68u);
  v5 = v4;
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  *(_OWORD *)(v4 + 8) = 0;
  sub_6299B0(v4 + 24);
  sub_6299B0(v5 + 32);
  *(_BYTE *)(v5 + 40) = 0;
  *(_QWORD *)v5 = off_1C66400;
  v6 = (_QWORD *)sub_186B270(0xC0u);
  *v6 = 0;
  v6[3] = 0;
  v6[6] = 0;
  v6[9] = 0;
  v6[12] = 0;
  v6[15] = 0;
  v6[18] = 0;
  v6[21] = 0;
  *(_QWORD *)(v5 + 48) = v6;
  *(_QWORD *)(v5 + 56) = 8;
  *(_DWORD *)(v5 + 64) = 0;
  *(_QWORD *)v5 = off_1C4F530;
  *(_BYTE *)(v5 + 72) = 0;
  *(_QWORD *)(v5 + 80) = a2;
  *(_QWORD *)(v5 + 88) = a1;
  *(_DWORD *)(v5 + 96) = a3;
  if ( !a2 || *(_DWORD *)(a2 + 8) )
    return v5;
  sub_15D7BC0(a1, a2);
  return v5;
}

