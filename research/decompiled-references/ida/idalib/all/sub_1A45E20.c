__int64 __fastcall sub_1A45E20(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rdx

  v2 = operator new(0x170u);
  *(_QWORD *)v2 = 0;
  *(_QWORD *)(v2 + 16) = v2 + 8;
  *(_QWORD *)(v2 + 8) = v2 + 8;
  v3 = (_QWORD *)(v2 + 40);
  *(_QWORD *)(v2 + 24) = 0;
  for ( *(_QWORD *)(v2 + 32) = 1; (_QWORD *)(v2 + 168) != v3; v3 += 2 )
    *v3 = 0;
  a1[11] = v2;
  *(_QWORD *)(v2 + 168) = v2 + 192;
  *(_QWORD *)(v2 + 232) = v2 + 248;
  *(_QWORD *)(v2 + 176) = 4;
  *(_DWORD *)(v2 + 184) = 0;
  *(_BYTE *)(v2 + 188) = 1;
  *(_QWORD *)(v2 + 224) = 0;
  *(_QWORD *)(v2 + 240) = 0x400000000LL;
  *(_DWORD *)(v2 + 344) = 0;
  *(_QWORD *)(v2 + 352) = 0;
  *(_WORD *)(v2 + 360) = 257;
  *(_BYTE *)(v2 + 362) = 1;
  sub_B66CC0(v2, a2);
  sub_1A39870((__int64)a1, a1[11]);
  sub_1A43500((__int64)a1);
  *a1 = 0x100000005LL;
  return 0x100000005LL;
}
