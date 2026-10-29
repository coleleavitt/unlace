__int64 __fastcall sub_E680C0(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  _BYTE *v9; // rdx
  __int64 v10; // rcx
  _BYTE *v11; // rax
  _BYTE *v13; // rax
  __int64 (__fastcall **v14)(); // [rsp+0h] [rbp-8h] BYREF
  __int64 vars0; // [rsp+8h] [rbp+0h] BYREF
  __int128 vars8; // [rsp+10h] [rbp+8h]
  __int64 vars18; // [rsp+20h] [rbp+18h]
  char vars20; // [rsp+28h] [rbp+20h]
  int vars24; // [rsp+2Ch] [rbp+24h]
  char **vars28; // [rsp+30h] [rbp+28h]
  __int64 vars30; // [rsp+38h] [rbp+30h]
  char *vars38; // [rsp+40h] [rbp+38h] BYREF
  __m128i si128; // [rsp+48h] [rbp+40h]
  char vars58; // [rsp+60h] [rbp+58h] BYREF
  __int64 vars98; // [rsp+A0h] [rbp+98h] BYREF
  __int64 *varsA0; // [rsp+A8h] [rbp+A0h]
  __int64 varsA8; // [rsp+B0h] [rbp+A8h]
  int varsB0; // [rsp+B8h] [rbp+B0h]
  _QWORD *varsB8; // [rsp+C0h] [rbp+B8h]
  __int64 varsC0; // [rsp+C8h] [rbp+C0h]
  _QWORD _D0[42]; // [rsp+D0h] [rbp+C8h] BYREF
  int vars218; // [rsp+220h] [rbp+218h]
  __int64 vars220; // [rsp+228h] [rbp+220h]
  __int64 vars228; // [rsp+230h] [rbp+228h]
  int vars230; // [rsp+238h] [rbp+230h]
  __int64 vars238; // [rsp+240h] [rbp+238h]
  __int64 vars240; // [rsp+248h] [rbp+240h]
  int vars248; // [rsp+250h] [rbp+248h]
  __int128 vars250; // [rsp+258h] [rbp+250h] BYREF
  _QWORD *vars260; // [rsp+268h] [rbp+260h]
  __int64 vars268; // [rsp+270h] [rbp+268h]
  _QWORD _278[6]; // [rsp+278h] [rbp+270h] BYREF
  __m128i vars2A0; // [rsp+2A8h] [rbp+2A0h] BYREF
  __int128 *vars2B0; // [rsp+2B8h] [rbp+2B0h]
  int vars2C0; // [rsp+2C8h] [rbp+2C0h] BYREF
  __int64 vars2C8; // [rsp+2D0h] [rbp+2C8h]
  int *vars2D0; // [rsp+2D8h] [rbp+2D0h]
  int *vars2D8; // [rsp+2E0h] [rbp+2D8h]
  __int64 vars2E0; // [rsp+2E8h] [rbp+2E0h]
  bool vars2E8; // [rsp+2F0h] [rbp+2E8h]
  __int64 *vars300; // [rsp+308h] [rbp+300h]

  vars300 = &vars0;
  vars8 = 0;
  LODWORD(vars0) = 2;
  v14 = &off_2BC1F40;
  vars28 = &vars38;
  vars20 = 0;
  vars24 = 1;
  vars18 = 0;
  sub_2257B70(&v14, 0, 0, 0);
  vars30 = a4;
  v14 = &off_2BDAF98;
  vars38 = &vars58;
  varsB8 = _D0;
  varsC0 = 0xA00000000LL;
  vars260 = _278;
  vars268 = 0x400000000LL;
  vars250 = 0;
  _278[4] = &vars2A0;
  vars2B0 = &vars250;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D30);
  vars2A0 = _mm_load_si128((const __m128i *)&unk_2383B90);
  vars2D0 = &vars2C0;
  vars2D8 = &vars2C0;
  vars98 = a1;
  varsA0 = &vars0;
  varsA8 = 0;
  varsB0 = -1;
  _D0[40] = 0;
  _D0[41] = 0;
  vars218 = 0;
  vars220 = 0;
  vars228 = 0;
  vars230 = 0;
  vars238 = 0;
  vars240 = 0;
  vars248 = 0;
  _278[5] = 0;
  vars2C0 = 0;
  vars2C8 = 0;
  vars2E0 = 0;
  vars2E8 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 17448LL) + 8LL) == 64;
  v6 = sub_971800((__int64)&vars0, "??__");
  v9 = *(_BYTE **)(v6 + 32);
  if ( (unsigned __int64)v9 >= *(_QWORD *)(v6 + 24) )
  {
    sub_2257CD0(v6, (unsigned int)a3);
  }
  else
  {
    v10 = (__int64)(v9 + 1);
    *(_QWORD *)(v6 + 32) = v9 + 1;
    *v9 = a3;
  }
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x2B )
    goto LABEL_6;
  v11 = (_BYTE *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
  {
    if ( ((*(_BYTE *)(*(_QWORD *)v11 + 8LL) + 70) & 0x7Fu) > 3 )
      goto LABEL_6;
  }
  else if ( ((v11[8] + 70) & 0x7Fu) > 3 )
  {
LABEL_6:
    sub_E5E850(&vars98, a2, 0, v10, v7, v8);
    goto LABEL_7;
  }
  v13 = (_BYTE *)varsA0[4];
  if ( (unsigned __int64)v13 >= varsA0[3] )
  {
    sub_2257CD0(varsA0, 63);
  }
  else
  {
    varsA0[4] = (__int64)(v13 + 1);
    *v13 = 63;
  }
  sub_E5E850(&vars98, a2, 0, v10, v7, v8);
  sub_E65550(&vars98, a2);
  sub_971800((__int64)varsA0, "@@");
LABEL_7:
  sub_971800((__int64)varsA0, "YAXXZ");
  sub_E56DF0((__int64)&vars98);
  return sub_E56700(&vars0);
}

