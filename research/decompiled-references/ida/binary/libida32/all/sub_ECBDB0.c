unsigned __int64 __fastcall sub_ECBDB0(
        _QWORD *a1,
        int a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        int a10,
        __int64 a11)
{
  bool v13; // r11
  char v14; // r13
  __int64 v15; // rsi
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v21; // rax
  bool v23; // [rsp+Fh] [rbp-49h]
  bool v24; // [rsp+Fh] [rbp-49h]
  __int64 v25; // [rsp+10h] [rbp-48h]
  __int64 v26; // [rsp+10h] [rbp-48h]
  __int64 v27; // [rsp+18h] [rbp-40h]
  __int64 v28; // [rsp+18h] [rbp-40h]

  v13 = a5 != 0;
  v14 = a4 != 0;
  v15 = 4LL * (a11 != 0) + 8LL * (((a4 != 0) + (a11 != 0) + (a5 != 0) + 2) & 0xF) + 16;
  v16 = a1[294];
  a1[304] += v15;
  v17 = v15 + ((v16 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a1[295] >= v17 && v16 )
  {
    a1[294] = v17;
    v18 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    v28 = a6;
    v26 = a5;
    v24 = a5 != 0;
    v21 = sub_962430((__int64)(a1 + 294), v15, v15, 3, a5, a6);
    a6 = v28;
    a5 = v26;
    v18 = v21;
    v13 = v24;
  }
  v27 = a6;
  v25 = a5;
  v23 = v13;
  sub_EC5910((_WORD *)v18, 241);
  *(_DWORD *)(v18 + 8) = a7;
  *(_DWORD *)(v18 + 12) = a8;
  *(_BYTE *)(v18 + 1) = (2 * (a3 & 7))
                      | (v14 << 6)
                      | *(_BYTE *)(v18 + 1) & 0x81
                      | (16 * (a11 != 0)) & 0xB1
                      | (32 * v23) & 0xB1;
  *(_QWORD *)(v18 + 8LL * (((*(_QWORD *)v18 & 0x4000) != 0) + ((*(_QWORD *)v18 & 0x2000) != 0)) + 16) = v27;
  v19 = *(_QWORD *)v18;
  *(_QWORD *)(v18 + 8LL * (((*(_QWORD *)v18 & 0x4000) != 0) + (unsigned int)((*(_QWORD *)v18 & 0x2000) != 0) + 1) + 16) = a9;
  if ( a11 )
    *(_QWORD *)(v18 + 8LL * (((v19 & 0x4000) != 0) + (unsigned int)((v19 & 0x2000) != 0) + 2) + 16) = a11;
  if ( v25 )
    sub_ECBCF0((_WORD *)v18, a1, v25);
  if ( a4 )
    *(_QWORD *)(v18 + 16) = a4;
  *(_DWORD *)(v18 + 4) = a2;
  if ( a11 )
    *(_DWORD *)(v18
              + 8LL
              * (((*(_QWORD *)v18 & 0x1000) != 0)
               + ((*(_QWORD *)v18 & 0x2000) != 0)
               + 2
               + ((*(_QWORD *)v18 & 0x4000) != 0))
              + 16) = a10;
  return v18;
}

