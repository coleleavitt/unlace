__int64 __fastcall sub_170370(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  char v8; // bp
  __int64 v9; // rax
  __int64 v11; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v12[5]; // [rsp+10h] [rbp-28h] BYREF

  v6 = -1;
  v7 = *(_QWORD *)(a1 + 216);
  v12[1] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 224) & 2) == 0 )
  {
    v6 = v7;
    v7 = -1;
  }
  v11 = v6;
  v12[0] = v7;
  if ( (unsigned int)sub_18C660(1210, (unsigned int)&v11, (unsigned int)v12, (unsigned int)&qword_245088 + 4, a5, a6) )
  {
    if ( (unsigned __int16)(WORD2(qword_245088) - 1) > 5u )
      v8 = 16;
    else
      v8 = byte_1D7BB3[(unsigned __int16)(WORD2(qword_245088) - 1)];
    if ( WORD2(qword_245088) > 3u )
      add_dref();
    else
      add_cref();
    auto_mark_range();
    auto_mark_range();
    if ( (*(_BYTE *)(a1 + 224) & 2) != 0 )
      v9 = v11;
    else
      v9 = v12[0];
    *(_BYTE *)(a1 + 209) = v8;
    *(_QWORD *)(a1 + 200) = v9;
  }
  return -1;
}

