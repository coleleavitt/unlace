__int64 __fastcall sub_56C3B0(unsigned __int16 a1, __int64 a2, __int16 a3, __int64 a4)
{
  char *v8; // rax
  char v9; // cl
  char v10; // bp
  __int64 v11; // rsi
  bool v12; // dl
  void *v13; // rdi
  int v14; // r13d
  void *v15; // rax
  __int64 v16; // rbx
  char v18; // [rsp+Eh] [rbp-3Ah]

  if ( a1 == 0xFFFF )
  {
    v10 = 1;
    v9 = 1;
  }
  else if ( a1 == 0xFFFE )
  {
    v10 = 0;
    v9 = 0;
  }
  else
  {
    v8 = (char *)(*(_QWORD *)(a4 + 104) + 3LL * a1);
    v9 = *v8;
    v10 = v8[1];
  }
  v11 = *(unsigned int *)(a2 + 8);
  v12 = a1 > 0xFFFDu;
  v13 = *(void **)a2;
  v14 = *(_DWORD *)(a2 + 8);
  if ( 8 * (unsigned __int64)*(unsigned int *)(a2 + 12) < 8 * v11 + 80 )
  {
    v18 = v9;
    v15 = off_8C52A8(v13, 8 * v11 + 80);
    v11 = *(unsigned int *)(a2 + 8);
    v12 = a1 > 0xFFFDu;
    *(_DWORD *)(a2 + 12) = v14 + 10;
    *(_QWORD *)a2 = v15;
    v9 = v18;
    v13 = v15;
    v14 = v11;
  }
  v16 = (__int64)v13 + 8 * v11;
  *(_OWORD *)(v16 + 32) = 0;
  *(_DWORD *)(v16 + 36) = v14;
  *(_WORD *)(v16 + 40) = a1;
  *(_OWORD *)v16 = 0;
  *(_BYTE *)(v16 + 44) = ((16 * v12) | (8 * v12) | v9 | (2 * v10)) & 0x1B;
  *(_OWORD *)(v16 + 64) = 0;
  *(_DWORD *)v16 = 1;
  *(_WORD *)(v16 + 66) = a3;
  *(_OWORD *)(v16 + 16) = 0;
  *(_OWORD *)(v16 + 48) = 0;
  sub_56BAE0(v16, a4);
  return v16;
}
