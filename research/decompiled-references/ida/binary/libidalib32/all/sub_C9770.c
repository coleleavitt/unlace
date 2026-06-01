__int64 __fastcall sub_C9770(__int64 a1)
{
  __int64 v1; // rbx
  int *v2; // rax
  unsigned int v3; // r12d
  unsigned int v4; // r13d
  char v6; // [rsp+Fh] [rbp-99h]
  __int64 v7; // [rsp+10h] [rbp-98h] BYREF
  __int64 v8; // [rsp+18h] [rbp-90h]
  __int128 v9; // [rsp+20h] [rbp-88h]
  _QWORD v10[5]; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v11; // [rsp+58h] [rbp-50h]
  int v12; // [rsp+60h] [rbp-48h]
  unsigned __int64 v13; // [rsp+68h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 56) )
    return 0;
  v6 = 1;
  v1 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v2 = sub_B85A0(*(_DWORD *)(*(_QWORD *)(a1 + 48) + 8 * v1));
      if ( v2 )
        break;
LABEL_5:
      if ( (unsigned __int64)++v1 >= *(_QWORD *)(a1 + 56) )
        return 1;
    }
    v3 = v2[6];
    v10[0] = 0xFFFFFFFFLL;
    v10[1] = 0xFFFFFFFF00000000LL;
    v10[2] = 0xFFFFFFFF00000000LL;
    v10[3] = 4;
    v10[4] = 9;
    v11 = 0xFFFFFFFF00000000LL;
    v12 = 0;
    v9 = 0;
    v4 = v2[7];
    v7 = 88;
    v8 = 0;
    if ( !(unsigned __int8)sub_98300(v3, (__int64)&v7) )
      goto LABEL_11;
    if ( (int)v11 == (unsigned __int64)v4 )
      break;
    if ( !(unsigned int)sub_924A0(
                          0,
                          (__int64)"HIDECANCEL\n"
                                   "A breakpoint at the module start is already present.\n"
                                   "Do you want to replace it?") )
      goto LABEL_19;
    sub_985C0((__int64)v10);
LABEL_11:
    if ( !sub_98420(v3, v4, 3u) || !v6 )
    {
      if ( v8 )
      {
        *(_QWORD *)&v9 = 0;
        qfree();
      }
      goto LABEL_5;
    }
    sub_92120((__int64)"On-access breakpoints added for selected modules.");
    if ( v8 )
    {
      *(_QWORD *)&v9 = 0;
      qfree();
    }
    v6 = 0;
    if ( (unsigned __int64)++v1 >= *(_QWORD *)(a1 + 56) )
      return 1;
  }
  sub_92120((__int64)"On-access breakpoint already present for selected module.");
LABEL_19:
  if ( !v8 )
    return 1;
  *(_QWORD *)&v9 = 0;
  qfree();
  return 1;
}

