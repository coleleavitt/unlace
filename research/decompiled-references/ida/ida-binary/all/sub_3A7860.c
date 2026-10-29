__int64 __fastcall sub_3A7860(__int64 a1, const char **a2)
{
  const char *v3; // rsi
  unsigned int tinfo_details; // r13d
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rbp
  _QWORD *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdi
  unsigned __int8 tinfo_property; // al
  __int64 v13; // rcx
  __int16 v14; // dx
  __int16 v15; // ax
  __int16 v16; // cx
  __int16 v17; // ax
  __int16 v18; // cx
  __int16 v19; // cx
  __int16 v20; // ax
  __int16 v21; // cx
  __int64 v22; // [rsp+0h] [rbp-68h] BYREF
  __int128 v23; // [rsp+8h] [rbp-60h]
  __int128 v24; // [rsp+18h] [rbp-50h]
  __int64 v25; // [rsp+28h] [rbp-40h]
  int v26; // [rsp+30h] [rbp-38h]
  unsigned __int64 v27; // [rsp+38h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  v3 = (_BYTE *)(off_88 + 5);
  v23 = 0;
  v22 = 0;
  v25 = 0;
  v26 = 1;
  v24 = 0;
  tinfo_details = get_tinfo_details(*a2, 141, &v22);
  if ( (_BYTE)tinfo_details )
  {
    tinfo_property = get_tinfo_property(*a2, 0);
    v13 = tinfo_property;
    if ( (tinfo_property & 0xFE) != 0 )
      v13 = 1LL << (tinfo_property - 1);
    v14 = *(_WORD *)(a1 + 48);
    *(_QWORD *)(a1 + 40) = v13;
    v15 = v14 & 0xFFF7;
    if ( HIBYTE(v26) )
      v15 = v14 | 8;
    v16 = v15;
    v17 = v15 & 0xFFFD;
    v18 = v16 | 2;
    if ( (v25 & 0x4000000000LL) != 0 )
      v17 = v18;
    v19 = v17;
    v20 = v17 & 0xFFFB;
    v21 = v19 | 4;
    if ( (v25 & 0x80000000000LL) != 0 )
      v20 = v21;
    *(_WORD *)(a1 + 48) = v20;
    *(_WORD *)(a1 + 24) = ((unsigned __int64)get_tinfo_property(*a2, 306) >> 10) & 1;
    v3 = *a2;
    *(_QWORD *)(a1 + 32) = get_tinfo_size(0, *a2, 0);
  }
  v5 = v22;
  if ( v22 )
  {
    v6 = v23;
    if ( (_QWORD)v23 )
    {
      v7 = 0;
      do
      {
        v8 = (_QWORD *)(v5 + 144 * v7);
        clear_tinfo_t(v8 + 8);
        v9 = v8[5];
        if ( v9 )
        {
          v8[6] = 0;
          qfree(v9, v3);
        }
        v10 = v8[2];
        if ( v10 )
        {
          v8[3] = 0;
          qfree(v10, v3);
        }
        ++v7;
        v5 = v22;
      }
      while ( v6 != v7 );
    }
    *(_QWORD *)&v23 = 0;
    qfree(v5, v3);
  }
  return tinfo_details;
}
