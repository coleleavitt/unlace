__int64 __fastcall sub_842490(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 (__fastcall *v4)(__int64); // rax
  __int64 v5; // rax
  _OWORD *v6; // rax
  __int64 v7; // rax
  _OWORD *v8; // rax
  _OWORD *v9; // rax
  __int64 result; // rax

  *(_QWORD *)a1 = &off_1C55380;
  v3 = *a2;
  *(_QWORD *)(a1 + 16) = a3;
  v4 = *(__int64 (__fastcall **)(__int64))(v3 + 424);
  *(_QWORD *)(a1 + 8) = a2;
  if ( v4 == sub_79EFD0 )
    v5 = a2[18];
  else
    v5 = v4((__int64)a2);
  *(_QWORD *)(a1 + 24) = v5;
  v6 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 32) = v6;
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  v6[4] = 0;
  v6[5] = 0;
  v6[6] = 0;
  v6[7] = 0;
  v7 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 40) = 8;
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = v7;
  v8 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 64) = v8;
  *(_QWORD *)(a1 + 72) = 8;
  *(_DWORD *)(a1 + 80) = 0;
  *v8 = 0;
  v8[1] = 0;
  v8[2] = 0;
  v8[3] = 0;
  v8[4] = 0;
  v8[5] = 0;
  v8[6] = 0;
  v8[7] = 0;
  v9 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 88) = v9;
  *(_QWORD *)(a1 + 96) = 8;
  *(_DWORD *)(a1 + 104) = 0;
  *v9 = 0;
  v9[1] = 0;
  v9[2] = 0;
  v9[3] = 0;
  v9[4] = 0;
  v9[5] = 0;
  v9[6] = 0;
  v9[7] = 0;
  result = sub_186B270(0x100u);
  *(_QWORD *)result = 0;
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 40) = 0;
  *(_QWORD *)(result + 64) = 0;
  *(_QWORD *)(result + 72) = 0;
  *(_QWORD *)(result + 96) = 0;
  *(_QWORD *)(result + 104) = 0;
  *(_QWORD *)(result + 128) = 0;
  *(_QWORD *)(result + 136) = 0;
  *(_QWORD *)(result + 160) = 0;
  *(_QWORD *)(result + 168) = 0;
  *(_QWORD *)(result + 192) = 0;
  *(_QWORD *)(result + 200) = 0;
  *(_QWORD *)(result + 224) = 0;
  *(_QWORD *)(result + 232) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 80) = 0;
  *(_DWORD *)(result + 112) = 0;
  *(_DWORD *)(result + 144) = 0;
  *(_DWORD *)(result + 176) = 0;
  *(_DWORD *)(result + 208) = 0;
  *(_DWORD *)(result + 240) = 0;
  *(_QWORD *)(a1 + 112) = result;
  *(_QWORD *)(a1 + 120) = 8;
  *(_DWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  return result;
}

