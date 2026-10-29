unsigned __int64 __fastcall sub_EF6E00(
        __int64 a1,
        int a2,
        int a3,
        const void *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  unsigned __int64 v11; // rbx
  unsigned int *v12; // r14
  __int16 v13; // dx
  bool v14; // zf
  __int64 v15; // rax

  v11 = sub_EF5E70(
          (__int64 *)(a1 + 2352),
          8 * ((8 * ((unsigned int)a5 + (unsigned __int64)((unsigned int)(a6 != 0) + 1)) + 15) >> 3) + 48,
          3u);
  v12 = (unsigned int *)sub_EF5330(v11 + 40, a4, a5, a6, 1u);
  v13 = *(_WORD *)v11 & 0xFE00;
  LOBYTE(v13) = -81;
  v14 = unk_2CD7484 == 0;
  *(_WORD *)v11 = v13;
  if ( !v14 )
    sub_EE9B50(175);
  *(_DWORD *)(v11 + 12) = a2;
  *(_DWORD *)(v11 + 16) = a3;
  v15 = *v12;
  *(_DWORD *)(v11 + 8) = 66;
  *(_QWORD *)(v11 + 24) = v12;
  *(_QWORD *)&v12[2 * v15 + 4] = a7;
  *(_BYTE *)(v11 + 32) = a8;
  return v11;
}
