__int64 __fastcall sub_123340(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r14
  unsigned int v3; // ebp
  char v4; // al
  unsigned int v5; // edx
  __int64 v7; // [rsp+0h] [rbp-98h] BYREF
  __int64 v8; // [rsp+8h] [rbp-90h]
  __int128 v9; // [rsp+10h] [rbp-88h]
  _QWORD v10[5]; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-50h]
  int v12; // [rsp+50h] [rbp-48h]
  unsigned __int64 v13; // [rsp+58h] [rbp-40h]

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
    v7 = 88;
    v10[0] = 0xFFFFFFFFLL;
    v8 = 0;
    v10[3] = 4;
    v10[1] = 0xFFFFFFFF00000000LL;
    v10[2] = 0xFFFFFFFF00000000LL;
    v10[4] = 9;
    v11 = 0xFFFFFFFF00000000LL;
    v12 = 0;
    v9 = 0;
    v3 = *(_DWORD *)(v2 + 4) - *(_DWORD *)v2;
    if ( (unsigned __int8)sub_98300(*(_DWORD *)v2, (__int64)&v7) )
      break;
LABEL_10:
    v4 = *(_BYTE *)(v2 + 22);
    v5 = 8;
    if ( (v4 & 1) == 0 )
      v5 = ((v4 & 2) != 0) + 2;
    if ( !sub_98420(*(_DWORD *)v2, v3, v5) )
    {
      sub_92120((__int64)"%a: failed to add breakpoint (would it overlap with another breakpoint?)", 0.0);
      goto LABEL_18;
    }
    if ( v8 )
    {
      *(_QWORD *)&v9 = 0;
      qfree();
    }
LABEL_15:
    if ( (unsigned __int64)++v1 >= *(_QWORD *)(a1 + 56) )
      goto LABEL_16;
  }
  if ( (int)v11 != (unsigned __int64)v3 )
  {
    if ( !(unsigned int)sub_924A0(
                          0,
                          (__int64)"HIDECANCEL\nA breakpoint at %a already exists. Do you want to replace it?",
                          0.0) )
      goto LABEL_18;
    sub_985C0((__int64)v10);
    goto LABEL_10;
  }
  sub_92120((__int64)"On-access breakpoint already exists for segment at %a", 0.0);
LABEL_18:
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree();
  }
LABEL_16:
  mark_builtin_widgets();
  return 1;
}

