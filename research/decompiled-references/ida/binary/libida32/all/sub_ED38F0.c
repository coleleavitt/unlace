unsigned __int64 __fastcall sub_ED38F0(__int64 a1, int a2, int a3, const void *a4, __int64 a5, __int64 a6, __int64 a7)
{
  unsigned __int64 v11; // rbx
  unsigned int *v12; // r13
  __int16 v13; // dx
  bool v14; // zf
  __int64 v15; // rax

  v11 = sub_ED2130(
          (__int64 *)(a1 + 2352),
          8 * ((8 * ((unsigned int)a5 + (unsigned __int64)((unsigned int)(a6 != 0) + 1)) + 15) >> 3) + 40,
          3u);
  v12 = (unsigned int *)sub_ED15F0(v11 + 32, a4, a5, a6, 1u);
  v13 = *(_WORD *)v11 & 0xFE00;
  LOBYTE(v13) = -76;
  v14 = unk_2CAD564 == 0;
  *(_WORD *)v11 = v13;
  if ( !v14 )
    sub_EC5E10(180);
  *(_DWORD *)(v11 + 12) = a2;
  *(_DWORD *)(v11 + 16) = a3;
  v15 = *v12;
  *(_DWORD *)(v11 + 8) = 56;
  *(_QWORD *)(v11 + 24) = v12;
  *(_QWORD *)&v12[2 * v15 + 4] = a7;
  return v11;
}

