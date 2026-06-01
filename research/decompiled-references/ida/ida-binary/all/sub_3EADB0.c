__int64 __fastcall xref_editor_t__::vfunc_10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  char v8; // bp
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v12; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v13[5]; // [rsp+10h] [rbp-28h] BYREF

  v6 = -1;
  v7 = *(_QWORD *)(a1 + 216);
  v13[1] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 224) & 2) == 0 )
  {
    v6 = v7;
    v7 = -1;
  }
  v12 = v6;
  v13[0] = v7;
  if ( (unsigned int)sub_507F10(1210, (unsigned int)&v12, (unsigned int)v13, (unsigned int)&qword_8BCD88 + 4, a5, a6) )
  {
    if ( (unsigned __int16)(WORD2(qword_8BCD88) - 1) > 5u )
    {
      v9 = 48;
      v8 = 16;
    }
    else
    {
      v8 = byte_5EA820[(unsigned __int16)(WORD2(qword_8BCD88) - 1)];
      v9 = (unsigned __int8)v8 | 0x20u;
    }
    if ( WORD2(qword_8BCD88) > 3u )
      add_dref(v12, v13[0], v9);
    else
      add_cref(v12, v13[0], v9);
    auto_mark_range(v12, v12 + 1, 40);
    auto_mark_range(v13[0], v13[0] + 1LL, 40);
    if ( (*(_BYTE *)(a1 + 224) & 2) != 0 )
      v10 = v12;
    else
      v10 = v13[0];
    *(_BYTE *)(a1 + 209) = v8;
    *(_QWORD *)(a1 + 200) = v10;
  }
  return -1;
}
