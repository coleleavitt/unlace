unsigned __int64 __fastcall sub_EDD140(_QWORD *a1, int a2, int a3, const void *a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v14; // r14
  __int16 v15; // dx
  bool v16; // zf
  __int64 v18; // rax
  __int64 v19; // [rsp+8h] [rbp-40h]

  v11 = 8 * ((8 * ((a6 != 0) + (unsigned __int64)(unsigned int)a5) + 15) >> 3) + 48;
  v12 = a1[294];
  a1[304] += v11;
  v13 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v11 + v13 && v12 )
  {
    a1[294] = v11 + v13;
  }
  else
  {
    v19 = a6;
    v18 = sub_962430(
            (__int64)(a1 + 294),
            v11,
            8 * ((8 * ((a6 != 0) + (unsigned __int64)(unsigned int)a5) + 15) >> 3) + 48,
            3,
            a5,
            a6);
    a6 = v19;
    v13 = v18;
  }
  v14 = sub_ED15F0(v13 + 40, a4, a5, a6, 0);
  v15 = *(_WORD *)v13 & 0xFE00;
  LOBYTE(v15) = -91;
  v16 = unk_2CAD564 == 0;
  *(_WORD *)v13 = v15;
  if ( !v16 )
    sub_EC5E10(165);
  *(_DWORD *)(v13 + 8) = 88;
  *(_DWORD *)(v13 + 12) = a2;
  *(_DWORD *)(v13 + 16) = a3;
  *(_QWORD *)(v13 + 24) = v14;
  *(_BYTE *)(v13 + 32) = a7;
  return v13;
}

