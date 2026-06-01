unsigned __int64 __fastcall sub_2053EA0(__int64 a1)
{
  unsigned __int64 v1; // rbp
  unsigned __int64 v2; // rax
  char v3; // dl
  char v4; // dl
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rdi
  _WORD v9[13]; // [rsp+0h] [rbp-98h] BYREF
  __int128 v10; // [rsp+1Ah] [rbp-7Eh]
  __int128 v11; // [rsp+2Ah] [rbp-6Eh]
  int v12; // [rsp+3Ah] [rbp-5Eh]
  __int16 v13; // [rsp+3Eh] [rbp-5Ah]
  __int128 v14; // [rsp+40h] [rbp-58h]
  __int128 v15; // [rsp+50h] [rbp-48h]
  __int128 v16; // [rsp+60h] [rbp-38h]
  __m128i si128; // [rsp+70h] [rbp-28h]

  v1 = sub_2053DD0(*(_QWORD **)(a1 + 32), *(_QWORD *)(a1 + 32) + 4LL * *(_QWORD *)(a1 + 40));
  v2 = sub_2053D00(*(_QWORD **)(a1 + 16), *(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24));
  v3 = *(_BYTE *)(a1 + 8);
  v10 = 0;
  v11 = 0;
  LOBYTE(v9[0]) = v3;
  v4 = *(_BYTE *)(a1 + 9);
  v14 = 0;
  v15 = 0;
  v16 = 0;
  *(_QWORD *)&v9[1] = v2;
  v5 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)&v9[5] = v1;
  HIBYTE(v9[0]) = v4;
  v13 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
  v12 = 0;
  *(_QWORD *)&v9[9] = v5;
  v6 = sub_2012F20(v9, 0x1Au, 0xFF51AFD7ED558CCDLL);
  v7 = *(_QWORD *)a1;
  *(_DWORD *)v9 = v6;
  return sub_2050F80(v7, (int *)v9);
}
