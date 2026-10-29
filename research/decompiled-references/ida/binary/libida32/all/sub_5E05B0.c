__int64 __fastcall sub_5E05B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v8; // dl
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // edx
  char v13; // cl
  char v14; // al
  char v15; // cl
  int v16; // eax
  int v17; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v18; // [rsp+8h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  v8 = sub_728190(&v17, a1, a3, 4294967264LL, 32);
  result = 3;
  if ( v8 )
  {
    v10 = a6 + 464;
    v11 = a6 + 448;
    v12 = v17;
    if ( a4 )
      v11 = v10;
    v13 = *(_BYTE *)(v11 + 14);
    v14 = v13 & 0xF7;
    v15 = v13 | 8;
    if ( v17 < 0 )
      v14 = v15;
    *(_BYTE *)(v11 + 14) = v14;
    v16 = -v12;
    if ( v12 > 0 )
      LOWORD(v16) = v12;
    *(_WORD *)(v11 + 12) = v16;
    return 0;
  }
  return result;
}

