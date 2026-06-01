_QWORD *__fastcall sub_918E00(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rbx
  __int64 v3; // rax
  _OWORD *v4; // rax
  _QWORD *v5; // rbp
  __int64 v6; // r12
  _OWORD *v7; // rax

  v1 = (_QWORD *)sub_186B270(0x90u);
  v1[1] = a1;
  v2 = v1;
  *v1 = &off_1C55CD0;
  v3 = *(_QWORD *)(a1 + 104);
  *((_DWORD *)v2 + 4) = 0;
  v2[3] = v3;
  v2[4] = 0;
  v2[5] = 0;
  v4 = (_OWORD *)sub_186B270(0x80u);
  v2[6] = v4;
  *((_DWORD *)v2 + 16) = 0;
  v5 = v2 + 9;
  v6 = 1;
  v2[7] = 8;
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v4[4] = 0;
  v4[5] = 0;
  v4[6] = 0;
  v4[7] = 0;
  do
  {
    v7 = (_OWORD *)sub_186B270(0x80u);
    *v5 = v7;
    v5 += 3;
    *(v5 - 2) = 8;
    *((_DWORD *)v5 - 2) = 0;
    *v7 = 0;
    v7[1] = 0;
    v7[2] = 0;
    v7[3] = 0;
    v7[4] = 0;
    v7[5] = 0;
    v7[6] = 0;
    v7[7] = 0;
  }
  while ( v6-- != 0 );
  *((_BYTE *)v2 + 136) = 0;
  *(_OWORD *)(v2 + 15) = 0;
  return v2;
}

