__int64 __fastcall sub_BD5E70(
        __int64 *a1,
        __int64 a2,
        char a3,
        int a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        char a13,
        char a14,
        char a15)
{
  __int64 v19; // rsi
  __int64 v20; // rdx
  char v21; // al
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  _BOOL8 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rcx
  unsigned __int8 v32; // al
  __int64 result; // rax
  __int64 v34; // [rsp+0h] [rbp-58h]
  __int64 v35; // [rsp+8h] [rbp-50h]
  _BYTE v36[57]; // [rsp+1Fh] [rbp-39h] BYREF

  v19 = a8;
  v20 = a10;
  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0x2E;
  if ( unk_2CAD564 )
  {
    v35 = a6;
    v34 = a5;
    sub_EC5E10(46);
    a6 = v35;
    a5 = v34;
    v20 = a10;
    v19 = a8;
  }
  v21 = *((_BYTE *)a1 + 2);
  a1[2] = a2;
  a1[3] = v19;
  *((_BYTE *)a1 + 2) = v21 & 0xF8;
  *((_BYTE *)a1 + 1) = (8 * (a14 & 7)) | (2 * (a13 & 3)) | *((_BYTE *)a1 + 1) & 1;
  a1[1] = a12;
  a1[4] = *(_QWORD *)(v20 + 16);
  *((_DWORD *)a1 + 10) = *(_DWORD *)(v20 + 8);
  *((_BYTE *)a1 + 2) = (16 * (a5 != 0)) | (8 * (a3 & 1)) | v21 & 0xE0;
  v22 = 1;
  if ( v19 == (a9 & 0xFFFFFFFFFFFFFFF8LL) )
  {
    v22 = (*(_BYTE *)(v19 + 29) >> 5) & 3;
    LOBYTE(v22) = v22 != (a9 & 3);
  }
  *((_DWORD *)a1 + 1) = a4;
  v23 = (unsigned int)(32 * v22);
  LOBYTE(v19) = a11 != 0;
  *((_BYTE *)a1 + 2) = ((a11 != 0 || a7 != 0) << 6) & 0x7F | (32 * v22) & 0x7F | *((_BYTE *)a1 + 2) & 0x1F;
  v24 = a15 & 3;
  *((_BYTE *)a1 + 3) = v24 | *((_BYTE *)a1 + 3) & 0xFC;
  v25 = *a1;
  if ( (*a1 & 0x100000) != 0 )
  {
    a1[6] = a5;
    a1[7] = a6;
  }
  v26 = v25 >> 16;
  if ( (v26 & 0x20) != 0 )
  {
    v24 = a9;
    a1[2 * ((v26 & 0x10) != 0) + 6] = a9;
  }
  if ( a11 )
  {
    v27 = *a1;
    v36[0] = 0;
    v28 = (v27 & 0x100000) != 0;
    v29 = 8LL * ((v27 & 0x200000) != 0);
    v30 = v29 + 16 * v28 + 48;
    v31 = 16 * (v28 + ((v27 & 0x400000) != 0)) + v29 + 48;
    v19 = a7;
    sub_EFA9B0((char *)a1 + v30, a7, a11, (char *)a1 + v31, v36);
  }
  else if ( a7 )
  {
    v19 = a7;
    sub_EFA990(&a1[2 * ((*a1 & 0x100000) != 0) + 6 + ((*a1 & 0x200000) != 0)], a7);
  }
  v32 = sub_B407B0(a1, v19, v24, v23, a5, a6);
  *((_BYTE *)a1 + 1) = (v32 << 6) | *((_BYTE *)a1 + 1) & 0x3F;
  result = *((_BYTE *)a1 + 2) & 0xF8 | (v32 >> 2) & 7u;
  *((_BYTE *)a1 + 2) = result;
  return result;
}

