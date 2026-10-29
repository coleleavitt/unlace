void __fastcall __noreturn sub_3851F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // [rsp+38h] [rbp-30h]
  __int64 v5; // [rsp+50h] [rbp-18h]

  v5 = v3;
  v4 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 184) = a2;
  *(_QWORD *)(a1 + 192) = a3;
  *(_QWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 208) = 0x1FFFFFFFFLL;
  *(_QWORD *)(a1 + 216) = 16711828;
  *(_OWORD *)a1 = 0;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 112) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  *(_OWORD *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 224) = 0;
  *(_BYTE *)(a1 + 232) = 0;
  sub_384270((_QWORD *)a1);
}

