__int64 __fastcall sub_824090(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int *v6; // rsi
  __int64 *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r11
  __int64 v11; // r10
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax

  if ( a4 == 0 || a3 == 0 || !a2 )
  {
    if ( !under_debugger )
      interr(3304);
    BUG();
  }
  v6 = (int *)*a1;
  v8 = a1 + 28;
  v9 = *((_QWORD *)v6 + 9);
  v8[11] = 0;
  memset(
    (void *)((unsigned __int64)v8 & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a1 - ((unsigned int)v8 & 0xFFFFFFF8) + 320) >> 3));
  a1[29] = v9;
  a1[27] = a2;
  v10 = *((_QWORD *)v6 + 10);
  a1[13] = 0;
  memset(
    (void *)((unsigned __int64)(a1 + 2) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a1 - (((_DWORD)a1 + 16) & 0xFFFFFFF8) + 112) >> 3));
  a1[3] = v10;
  a1[1] = a3;
  v11 = *((_QWORD *)v6 + 11);
  a1[26] = 0;
  memset(
    (void *)((unsigned __int64)(a1 + 15) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a1 - (((_DWORD)a1 + 120) & 0xFFFFFFF8) + 216) >> 3));
  *((_DWORD *)a1 + 30) = 1;
  a1[16] = v11;
  a1[14] = a4;
  v12 = *v6;
  qword_2CD4A18 = 0;
  qword_2CD4A10 = nullptr;
  dword_2CD4A2C = v12 & 1;
  v13 = v6[1];
  dword_2CD49FC = 0;
  dword_2CD4A28 = v13;
  v14 = *((_QWORD *)v6 + 4);
  dword_2CD49F8 = 0;
  qword_2CD4A20 = v14;
  dword_2CD49F4 = 0;
  dword_2CD49F0 = 0;
  return 0;
}
