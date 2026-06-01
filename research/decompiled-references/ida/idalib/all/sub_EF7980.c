unsigned __int64 __fastcall sub_EF7980(
        __int64 a1,
        int a2,
        int a3,
        const void *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        int a14)
{
  unsigned __int64 v18; // rbx
  unsigned int *v19; // r13
  __int16 v20; // dx
  bool v21; // zf
  __int64 v22; // rax
  unsigned int *v23; // rax

  v18 = sub_EF5E70(
          (__int64 *)(a1 + 2352),
          8 * ((8 * ((unsigned int)a5 + (unsigned __int64)((unsigned int)(a6 != 0) + 7)) + 15) >> 3) + 48,
          3u);
  v19 = (unsigned int *)sub_EF5330(v18 + 40, a4, a5, a6, 7u);
  v20 = *(_WORD *)v18 & 0xFE00;
  LOBYTE(v20) = -21;
  v21 = unk_2CD7484 == 0;
  *(_WORD *)v18 = v20;
  if ( !v21 )
    sub_EE9B50(235);
  *(_DWORD *)(v18 + 12) = a2;
  *(_DWORD *)(v18 + 16) = a3;
  v22 = *v19;
  *(_DWORD *)(v18 + 8) = 4;
  v23 = &v19[2 * v22 + 4];
  *(_QWORD *)(v18 + 24) = v19;
  *(_QWORD *)v23 = a7;
  *((_QWORD *)v23 + 1) = a8;
  *((_QWORD *)v23 + 6) = a9;
  *((_QWORD *)v23 + 2) = a10;
  *((_QWORD *)v23 + 3) = a11;
  *((_QWORD *)v23 + 4) = a12;
  *((_QWORD *)v23 + 5) = a13;
  *(_BYTE *)(v18 + 32) = (4 * (BYTE2(a14) & 1)) | (2 * (BYTE1(a14) & 1)) & 0xFB | a14 & 1 | *(_BYTE *)(v18 + 32) & 0xF8;
  return v18;
}
