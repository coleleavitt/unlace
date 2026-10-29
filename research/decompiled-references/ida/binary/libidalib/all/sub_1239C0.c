__int64 __fastcall sub_1239C0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r13
  __int64 v3; // rbp
  __int64 v4; // rbp
  char v5; // al
  unsigned int v6; // edx
  __m128i v8; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v9; // [rsp+10h] [rbp-98h]
  _QWORD v10[6]; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v11; // [rsp+50h] [rbp-58h]
  __int64 v12; // [rsp+58h] [rbp-50h]
  unsigned __int64 v13; // [rsp+68h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  if ( !dbg || (*(_BYTE *)(dbg + 34LL) & 0x40) == 0 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  if ( !*(_QWORD *)(a1 + 56) )
    return 0;
  v1 = 0;
  while ( 1 )
  {
    v2 = getnseg();
    if ( !v2 )
      goto LABEL_15;
    v10[0] = -1;
    v10[2] = 0xFFFFFFFFLL;
    v10[1] = 0;
    v10[3] = -1;
    v10[4] = 4;
    v10[5] = 9;
    v11 = 0xFFFFFFFF00000000LL;
    v12 = 0;
    v9 = 0;
    v3 = *(_QWORD *)(v2 + 8);
    v8 = (__m128i)0x60uLL;
    v4 = v3 - *(_QWORD *)v2;
    if ( (unsigned __int8)sub_983C0(*(_QWORD *)v2, &v8) )
      break;
LABEL_10:
    v5 = *(_BYTE *)(v2 + 42);
    v6 = 8;
    if ( (v5 & 1) == 0 )
      v6 = ((v5 & 2) != 0) + 2;
    if ( !sub_984E0(*(_QWORD *)v2, v4, v6) )
    {
      sub_92200((__int64)"%a: failed to add breakpoint (would it overlap with another breakpoint?)", 0.0);
      goto LABEL_18;
    }
    if ( v8.m128i_i64[1] )
    {
      *(_QWORD *)&v9 = 0;
      qfree();
    }
LABEL_15:
    if ( (unsigned __int64)++v1 >= *(_QWORD *)(a1 + 56) )
      goto LABEL_16;
  }
  if ( (int)v11 != v4 )
  {
    if ( !(unsigned int)sub_92580(
                          0,
                          (__int64)"HIDECANCEL\nA breakpoint at %a already exists. Do you want to replace it?",
                          0.0) )
      goto LABEL_18;
    sub_98690((__int64)v10);
    goto LABEL_10;
  }
  sub_92200((__int64)"On-access breakpoint already exists for segment at %a", 0.0);
LABEL_18:
  if ( v8.m128i_i64[1] )
  {
    *(_QWORD *)&v9 = 0;
    qfree();
  }
LABEL_16:
  mark_builtin_widgets();
  return 1;
}

