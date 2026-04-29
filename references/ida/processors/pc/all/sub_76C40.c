unsigned __int64 __fastcall sub_76C40(
        char *a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 (__fastcall *a4)(const char *, __int64),
        __int64 a5)
{
  int v7; // edx
  int v8; // eax
  char v9; // dl
  __int64 v10; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r14

  v7 = *(_DWORD *)(a2 + 28);
  v8 = v7 & 0x1018;
  if ( v8 == 4112 )
  {
    v9 = 7;
    goto LABEL_5;
  }
  if ( (v7 & 0x1008) == 0 || v8 == 4104 )
  {
    v9 = 2;
LABEL_5:
    v10 = a3;
    return sub_76B80(a1, v10, v9, a4, a5);
  }
  if ( v8 != 4096 && v8 != 8 )
  {
    v9 = 1;
    goto LABEL_5;
  }
  if ( a3 == 0xFFFF )
  {
    v9 = 1;
    v10 = 4;
    return sub_76B80(a1, v10, v9, a4, a5);
  }
  v12 = sub_76B80(a1, (unsigned int)word_159920[2 * a3], 1, a4, a5);
  v13 = v12;
  if ( a3 <= 3u )
    return sub_76B80(a1, (unsigned int)word_159920[2 * a3 + 1], 1, a4, a5) + v12;
  return v13;
}
