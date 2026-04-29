unsigned __int64 __fastcall sub_8A980(__int64 a1, __int64 a2)
{
  int v2; // r13d
  __int64 v4; // rax
  unsigned int i; // esi
  __int64 j; // rbp
  unsigned __int64 v7; // rax
  __m128i v8; // xmm0
  const char *v9; // rdx
  const char *v11; // [rsp+0h] [rbp-68h] BYREF
  __int128 v12; // [rsp+8h] [rbp-60h]
  __m128i v13; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+30h] [rbp-38h]
  unsigned __int64 v15; // [rsp+38h] [rbp-30h]

  v2 = *(_DWORD *)(a2 + 48);
  v15 = __readfsqword(0x28u);
  if ( v2 == 1 )
  {
    sub_88FC0(a2, 2, "block.start");
    sub_79340((__int64 *)a2, *(_QWORD *)(a1 + 32) + 1LL);
  }
  else
  {
    sub_88FC0(a2, 2, "block.flags");
    sub_792E0((__int64 *)a2, *(_DWORD *)(a1 + 24));
    sub_88FC0(a2, 2, "block.boundaries");
    sub_79570((__int64 *)a2, *(_QWORD *)(a1 + 32) - *(_QWORD *)(a2 + 40));
    sub_79340((__int64 *)a2, *(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32));
  }
  sub_88FC0(a2, 2, "block.insns");
  v4 = *(_QWORD *)(a1 + 48);
  for ( i = 0; v4; ++i )
    v4 = *(_QWORD *)(v4 + 8);
  sub_792E0((__int64 *)a2, i);
  for ( j = *(_QWORD *)(a1 + 48); j; j = *(_QWORD *)(j + 8) )
  {
    if ( *(_BYTE *)(a2 + 52) )
    {
      v7 = *(_QWORD *)(a1 + 64);
      v12 = 0;
      v8 = _mm_loadl_epi64((const __m128i *)(v7 + 1496));
      v11 = nullptr;
      v14 = 0;
      v13 = _mm_unpacklo_epi64(v8, (__m128i)v7);
      sub_1ADBD0(j, &v11, &v13, 6);
      v9 = s1;
      if ( (_QWORD)v12 )
        v9 = v11;
      sub_88FC0(a2, 0, v9);
      if ( v11 )
      {
        *(_QWORD *)&v12 = 0;
        qfree(v11);
      }
    }
    sub_8A7D0((unsigned __int8 *)j, (__int64 *)a2);
  }
  if ( *(_DWORD *)(a2 + 48) == 1 )
    return v15 - __readfsqword(0x28u);
  sub_88FC0(a2, 2, "block.type");
  sub_74200((__int64 *)a2, *(_BYTE *)(a1 + 76));
  if ( (unsigned __int8)sub_740C0(v2, 1, 0x50u) )
  {
    sub_88FC0(a2, 2, "block.dead_at_start");
    sub_79E10(a1 + 80, (__int64 *)a2);
    sub_79BC0(a1 + 96, (__int64 *)a2);
  }
  if ( (unsigned __int8)sub_740C0(v2, 1, 0x78u) )
  {
    sub_88FC0(a2, 2, "block.mustbuse");
    sub_79E10(a1 + 120, (__int64 *)a2);
    sub_79BC0(a1 + 136, (__int64 *)a2);
  }
  if ( (unsigned __int8)sub_740C0(v2, 1, 0xA0u) )
  {
    sub_88FC0(a2, 2, "block.maybuse");
    sub_79E10(a1 + 160, (__int64 *)a2);
    sub_79BC0(a1 + 176, (__int64 *)a2);
  }
  if ( (unsigned __int8)sub_740C0(v2, 1, 0xC8u) )
  {
    sub_88FC0(a2, 2, "block.mustbdef");
    sub_79E10(a1 + 200, (__int64 *)a2);
    sub_79BC0(a1 + 216, (__int64 *)a2);
  }
  if ( (unsigned __int8)sub_740C0(v2, 1, 0xF0u) )
  {
    sub_88FC0(a2, 2, "block.maybdef");
    sub_79E10(a1 + 240, (__int64 *)a2);
    sub_79BC0(a1 + 256, (__int64 *)a2);
  }
  if ( (unsigned __int8)sub_740C0(v2, 1, 0x118u) )
  {
    sub_88FC0(a2, 2, "block.dnu");
    sub_79E10(a1 + 280, (__int64 *)a2);
    sub_79BC0(a1 + 296, (__int64 *)a2);
  }
  if ( (unsigned __int8)sub_740C0(v2, 1, 0x140u) )
  {
    sub_88FC0(a2, 2, "block.frame");
    sub_79570((__int64 *)a2, *(_QWORD *)(a1 + 320));
    sub_79570((__int64 *)a2, *(_QWORD *)(a1 + 328));
    sub_79570((__int64 *)a2, *(_QWORD *)(a1 + 336));
  }
  sub_88FC0(a2, 2, "block.subframe");
  sub_792E0((__int64 *)a2, *(_DWORD *)(a1 + 512));
  sub_79570((__int64 *)a2, *(_QWORD *)(a1 + 520));
  sub_88FC0(a2, 2, "block.succset");
  sub_798E0((__int64 *)a2, (unsigned int **)(a1 + 368));
  if ( (unsigned __int8)sub_740C0(v2, 1, 0x188u) )
  {
    sub_88FC0(a2, 2, "block.label");
    if ( *(_QWORD *)(a1 + 400) )
      sub_79640((__int64 *)a2, *(_BYTE **)(a1 + 392));
    else
      sub_79640((__int64 *)a2, s1);
  }
  if ( (unsigned __int8)sub_740C0(v2, 1, 0x1A0u) )
  {
    sub_88FC0(a2, 2, "block.valranges");
    sub_7A720(a1 + 416, (__int64 *)a2);
  }
  sub_88FC0(a2, 2, "block.valranges_tail");
  return sub_7A720(a1 + 448, (__int64 *)a2);
}
