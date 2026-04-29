unsigned __int64 __fastcall sub_C990(__int64 a1, char a2, double a3)
{
  _QWORD *v3; // r8
  unsigned int v4; // r13d
  __int64 v5; // rax
  __int64 v6; // r14
  _QWORD *v7; // r8
  unsigned __int64 v8; // r11
  const char *v9; // rcx
  __int64 v10; // rax
  unsigned int v12; // ecx
  __m128i v13; // [rsp+10h] [rbp-4A8h] BYREF
  unsigned __int16 v14; // [rsp+20h] [rbp-498h]
  char v15[64]; // [rsp+30h] [rbp-488h] BYREF
  _BYTE v16[1032]; // [rsp+70h] [rbp-448h] BYREF
  unsigned __int64 v17; // [rsp+478h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v3 = *(_QWORD **)(a1 + 141);
  if ( v3[1] > 1u )
  {
    v4 = 1;
    v5 = 1;
    while ( 1 )
    {
      v6 = 32 * v5;
      if ( *(_QWORD *)(*v3 + 32 * v5 + 8) != -1 )
        break;
LABEL_10:
      v5 = ++v4;
      if ( (unsigned __int64)v4 >= v3[1] )
        return v17 - __readfsqword(0x28u);
    }
    if ( (unsigned __int8)sub_8E10(a1, v4, &v13) && (unsigned __int8)(v13.m128i_i8[14] - 1) <= 6u )
    {
      if ( v13.m128i_i8[14] == 5 )
      {
        v12 = v13.m128i_u16[6];
        if ( (*(_BYTE *)(a1 + 59) & 2) != 0 )
          v12 = (v14 << 16) | v13.m128i_u16[6];
        if ( !v12 || a2 || v12 >= v8 )
          goto LABEL_9;
        v15[0] = 0;
        if ( *(_QWORD *)(*v7 + 32LL * v12 + 8) == -1 )
          qsnprintf(v15, 64, "UNLOADED section %u", v12);
        else
          qsnprintf(v15, 64, "section at %a", a3);
        v9 = "associative to ";
      }
      else
      {
        v15[0] = 0;
        v9 = off_223C0[v13.m128i_u8[14] - 1];
      }
      qsnprintf(v16, 1024, "COMDAT (pick %s%s)", v9, v15);
      v10 = getseg(*(_QWORD *)(**(_QWORD **)(a1 + 141) + v6 + 8));
      set_segment_cmt(v10, v16, 0);
    }
LABEL_9:
    v3 = *(_QWORD **)(a1 + 141);
    goto LABEL_10;
  }
  return v17 - __readfsqword(0x28u);
}
