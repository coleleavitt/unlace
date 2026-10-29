__int64 __fastcall sub_16F970(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  int v6; // edx
  int v7; // eax
  char v8; // bp
  int v9; // eax
  int v11; // [rsp+0h] [rbp-28h] BYREF
  int v12; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-20h]

  v6 = -1;
  v7 = *(_DWORD *)(a1 + 208);
  v13 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 212) & 2) == 0 )
  {
    v6 = v7;
    v7 = -1;
  }
  v11 = v6;
  v12 = v7;
  if ( (unsigned int)sub_18BA90(1210, (unsigned int)&v11, (unsigned int)&v12, (unsigned int)&qword_244078 + 4, a5, a6) )
  {
    if ( (unsigned __int16)(WORD2(qword_244078) - 1) > 5u )
      v8 = 16;
    else
      v8 = byte_1D6B93[(unsigned __int16)(WORD2(qword_244078) - 1)];
    if ( WORD2(qword_244078) > 3u )
      add_dref();
    else
      add_cref();
    auto_mark_range();
    auto_mark_range();
    v9 = v11;
    if ( (*(_BYTE *)(a1 + 212) & 2) == 0 )
      v9 = v12;
    *(_BYTE *)(a1 + 205) = v8;
    *(_DWORD *)(a1 + 200) = v9;
  }
  return -1;
}

