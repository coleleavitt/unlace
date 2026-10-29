unsigned __int64 __fastcall sub_423520(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  _OWORD *v3; // rax
  char *v4; // rax
  __int64 v5; // rdi
  unsigned __int64 v7; // [rsp+8h] [rbp-40h] BYREF
  __int64 v8; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v7 = a2;
  v9 = __readfsqword(0x28u);
  v2 = operator new(0x178u);
  *(_QWORD *)v2 = &unk_2BD0340;
  *(_QWORD *)(v2 + 8) = 0;
  v3 = (_OWORD *)operator new(0x50u);
  *(_QWORD *)(v2 + 16) = v3;
  v3[1] = 0;
  ++v3;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  *((_QWORD *)v3 - 1) = 0x100000001LL;
  *((_QWORD *)v3 - 2) = off_2AFE6C0;
  *(_QWORD *)(v2 + 8) = v3;
  *(_QWORD *)(v2 + 40) = 0;
  *(_DWORD *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 56) = v2 + 104;
  *(_QWORD *)(v2 + 64) = 1;
  *(_QWORD *)(v2 + 72) = 0;
  *(_QWORD *)(v2 + 80) = 0;
  *(_DWORD *)(v2 + 88) = 1065353216;
  *(_QWORD *)(v2 + 96) = 0;
  *(_QWORD *)(v2 + 232) = 0;
  *(_QWORD *)(v2 + 256) = 0;
  *(_OWORD *)(v2 + 24) = 0;
  *(_OWORD *)(v2 + 104) = 0;
  *(_OWORD *)(v2 + 120) = 0;
  *(_OWORD *)(v2 + 136) = 0;
  *(_OWORD *)(v2 + 152) = 0;
  *(_OWORD *)(v2 + 168) = 0;
  *(_OWORD *)(v2 + 184) = 0;
  *(_OWORD *)(v2 + 200) = 0;
  *(_OWORD *)(v2 + 216) = 0;
  *(_OWORD *)(v2 + 240) = 0;
  v8 = 0;
  sub_421320(v2 + 208, &v8);
  *(_QWORD *)(v2 + 328) = 0;
  *(_QWORD *)(v2 + 336) = 0;
  *(_QWORD *)(v2 + 360) = 0;
  *(_OWORD *)(v2 + 264) = 0;
  *(_OWORD *)(v2 + 280) = 0;
  *(_OWORD *)(v2 + 296) = 0;
  *(_OWORD *)(v2 + 312) = 0;
  *(_OWORD *)(v2 + 344) = 0;
  v8 = 0;
  sub_421320(v2 + 312, &v8);
  *(_QWORD *)(v2 + 368) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  *(_QWORD *)v2 = &off_2AFE878;
  v4 = sub_420FD0((char **)(a1 + 40), &v7);
  v5 = *(_QWORD *)v4;
  *(_QWORD *)v4 = v2;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return v9 - __readfsqword(0x28u);
}

