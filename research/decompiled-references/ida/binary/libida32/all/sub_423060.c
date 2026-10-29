unsigned __int64 __fastcall sub_423060(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rbx
  _OWORD *v3; // rax
  char *v4; // rax
  __int64 v5; // rdi
  unsigned __int64 v7; // [rsp+8h] [rbp-50h] BYREF
  _QWORD *v8; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-40h]

  v7 = a2;
  v9 = __readfsqword(0x28u);
  v2 = (_QWORD *)operator new(0x260u);
  memset(v2, 0, 0x260u);
  *v2 = &unk_2BD02F0;
  v3 = (_OWORD *)operator new(0x50u);
  v2[2] = v3++;
  *v3 = 0;
  *((_QWORD *)v3 - 1) = 0x100000001LL;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  *((_QWORD *)v3 - 2) = off_2AFE6C0;
  v2[1] = v3;
  v2[5] = 0;
  *((_DWORD *)v2 + 12) = 0;
  v2[7] = v2 + 13;
  v2[8] = 1;
  v2[9] = 0;
  v2[10] = 0;
  *((_DWORD *)v2 + 22) = 1065353216;
  v2[12] = 0;
  v2[26] = 0;
  v2[27] = 0;
  v2[30] = 0;
  *(_OWORD *)(v2 + 3) = 0;
  *(_OWORD *)(v2 + 13) = 0;
  *(_OWORD *)(v2 + 15) = 0;
  *((_OWORD *)v2 + 9) = 0;
  *((_OWORD *)v2 + 10) = 0;
  *((_OWORD *)v2 + 11) = 0;
  *((_OWORD *)v2 + 12) = 0;
  *((_OWORD *)v2 + 14) = 0;
  v8 = nullptr;
  sub_421320((__int64)(v2 + 24), &v8);
  v2[39] = 0;
  v2[40] = 0;
  v2[43] = 0;
  *(_OWORD *)(v2 + 31) = 0;
  *(_OWORD *)(v2 + 33) = 0;
  *(_OWORD *)(v2 + 35) = 0;
  *(_OWORD *)(v2 + 37) = 0;
  *(_OWORD *)(v2 + 41) = 0;
  v8 = nullptr;
  sub_421320((__int64)(v2 + 37), &v8);
  v2[45] = 0;
  v2[46] = 0;
  v2[47] = 0;
  v2[44] = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  v2[48] = 0;
  v2[49] = 0;
  *v2 = &off_2AFE828;
  v2[50] = 0;
  v2[51] = 0;
  v2[52] = 0;
  v2[53] = 0;
  v2[54] = 0;
  v2[57] = 0;
  *(_OWORD *)(v2 + 55) = 0;
  v8 = nullptr;
  sub_421320((__int64)(v2 + 51), &v8);
  v2[66] = 0;
  v2[67] = 0;
  v2[70] = 0;
  *((_OWORD *)v2 + 29) = 0;
  *((_OWORD *)v2 + 30) = 0;
  *((_OWORD *)v2 + 31) = 0;
  *((_OWORD *)v2 + 32) = 0;
  *((_OWORD *)v2 + 34) = 0;
  v8 = nullptr;
  sub_421320((__int64)(v2 + 64), &v8);
  *((_BYTE *)v2 + 568) = 0;
  *((_DWORD *)v2 + 143) = 0;
  v2[72] = 0;
  v2[75] = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  *(_OWORD *)(v2 + 73) = 0;
  v8 = v2;
  v4 = sub_420FD0((char **)(a1 + 40), &v7);
  v5 = *(_QWORD *)v4;
  *(_QWORD *)v4 = v2;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return v9 - __readfsqword(0x28u);
}

