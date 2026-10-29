__int64 __fastcall sub_A554E0(__int64 a1, unsigned __int64 a2, char a3, int a4, __int64 a5, int a6, __int64 a7)
{
  bool v7; // bp
  char v8; // al
  bool v9; // zf
  char v10; // dl
  char v12; // [rsp+Ch] [rbp-2Ch]
  __int64 v13; // [rsp+10h] [rbp-28h]
  int v14; // [rsp+18h] [rbp-20h]

  v7 = a6 == 5;
  v8 = 0;
  if ( !a6 )
  {
    v8 = 1;
    if ( (*(_DWORD *)a2 & 0x4000) == 0 )
    {
      v8 = 0;
      if ( (a5 & 0xFFFFFFFFFFFFFFF8LL) != 0 && (a5 & 4) == 0 )
      {
        v13 = a5;
        v14 = a4;
        v12 = a3;
        v8 = sub_BBD670();
        a6 = 0;
        a5 = v13;
        a4 = v14;
        a3 = v12;
      }
    }
  }
  *(_DWORD *)(a1 + 16) = a4;
  v9 = a3 == 0;
  v10 = *(_BYTE *)(a1 + 4) & 0xFC;
  *(_QWORD *)(a1 + 8) = a2 & 0xFFFFFFFFFFFFFFFDLL;
  *(_DWORD *)a1 = v9 + 1;
  *(_QWORD *)(a1 + 24) = a5;
  *(_DWORD *)(a1 + 40) = a6;
  *(_QWORD *)(a1 + 32) = a7;
  *(_BYTE *)(a1 + 4) = (4 * v7) | (2 * (v8 & 1)) & 0xFB | (a6 == 0) | v10 & 0xFB;
  return a7;
}
