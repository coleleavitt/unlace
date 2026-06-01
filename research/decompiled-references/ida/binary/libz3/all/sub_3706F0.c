__int64 __fastcall sub_3706F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  _OWORD *v6; // rax
  _OWORD *v7; // rax
  void (__fastcall ***v8)(_QWORD); // r12

  v4 = sub_186B270(0x818u);
  sub_F0A700(v4, a1, a2);
  v5 = sub_186B270(0xA8u);
  *(_QWORD *)v5 = &off_1C4D738;
  *(_QWORD *)(v5 + 8) = a1;
  sub_1858590(v5 + 16, a3);
  *(_QWORD *)(v5 + 32) = a1;
  *(_QWORD *)(v5 + 24) = 0;
  *(_QWORD *)(v5 + 40) = 0;
  v6 = (_OWORD *)sub_186B270(0xC0u);
  *(_QWORD *)(v5 + 48) = v6;
  *(_DWORD *)(v5 + 64) = 0;
  *(_QWORD *)(v5 + 56) = 8;
  *(_QWORD *)(v5 + 72) = a1;
  *(_QWORD *)(v5 + 80) = 0;
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  v6[4] = 0;
  v6[5] = 0;
  v6[6] = 0;
  v6[7] = 0;
  v6[8] = 0;
  v6[9] = 0;
  v6[10] = 0;
  v6[11] = 0;
  v7 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(v5 + 88) = v7;
  *(_QWORD *)(v5 + 96) = 8;
  *(_DWORD *)(v5 + 104) = 0;
  *v7 = 0;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  *(_OWORD *)(v5 + 112) = 0;
  sub_180C0A0(v5 + 128);
  v8 = *(void (__fastcall ****)(_QWORD))(v4 + 1992);
  if ( (void (__fastcall ***)(_QWORD))v5 != v8 )
  {
    if ( v8 )
    {
      (**v8)(*(_QWORD *)(v4 + 1992));
      sub_186B220(v8);
    }
    *(_QWORD *)(v4 + 1992) = v5;
  }
  return v4;
}

