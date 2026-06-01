__int64 __fastcall sub_C0B850(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  _OWORD *v9; // rax
  __int64 result; // rax

  v6 = sub_186B270(0xA0u);
  *(_QWORD *)v6 = a2;
  *(_QWORD *)(v6 + 8) = a3;
  *(_QWORD *)(v6 + 16) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3);
  sub_16669D0(v6 + 24, a2);
  *(_QWORD *)(v6 + 56) = a2;
  *(_QWORD *)(v6 + 64) = 0;
  v7 = sub_186B270(0x80u);
  *(_QWORD *)v7 = 0;
  *(_DWORD *)(v7 + 8) = 0;
  *(_QWORD *)(v7 + 16) = 0;
  *(_DWORD *)(v7 + 24) = 0;
  *(_QWORD *)(v7 + 32) = 0;
  *(_DWORD *)(v7 + 40) = 0;
  *(_QWORD *)(v7 + 48) = 0;
  *(_DWORD *)(v7 + 56) = 0;
  *(_QWORD *)(v7 + 64) = 0;
  *(_DWORD *)(v7 + 72) = 0;
  *(_QWORD *)(v7 + 80) = 0;
  *(_DWORD *)(v7 + 88) = 0;
  *(_QWORD *)(v7 + 96) = 0;
  *(_DWORD *)(v7 + 104) = 0;
  *(_QWORD *)(v7 + 112) = 0;
  *(_DWORD *)(v7 + 120) = 0;
  *(_QWORD *)(v6 + 72) = v7;
  v8 = *(_QWORD *)(v6 + 16);
  *(_QWORD *)(v6 + 80) = 8;
  *(_DWORD *)(v6 + 88) = 0;
  *(_QWORD *)(v6 + 112) = v8;
  *(_QWORD *)(v6 + 120) = 0;
  *(_QWORD *)(v6 + 128) = v8;
  *(_OWORD *)(v6 + 96) = 0;
  v9 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(v6 + 136) = v9;
  *v9 = 0;
  v9[1] = 0;
  v9[2] = 0;
  v9[3] = 0;
  v9[4] = 0;
  v9[5] = 0;
  v9[6] = 0;
  v9[7] = 0;
  result = 0;
  *(_QWORD *)(v6 + 144) = 8;
  *(_DWORD *)(v6 + 152) = 0;
  if ( !a4 )
  {
    a4 = sub_186B270(0x30u);
    sub_16234C0(a4, a2);
    result = 1;
  }
  *(_QWORD *)(v6 + 40) = a4;
  *(_BYTE *)(v6 + 48) = result;
  *a1 = v6;
  return result;
}

