__int64 __fastcall sub_CACC0(__int64 a1)
{
  __int64 v1; // rbx
  int *v2; // rax
  __int64 v3; // r12
  __int64 v4; // r13
  char v6; // [rsp+Fh] [rbp-A9h]
  __m128i v7; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v8; // [rsp+20h] [rbp-98h]
  _QWORD v9[6]; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v10; // [rsp+60h] [rbp-58h]
  __int64 v11; // [rsp+68h] [rbp-50h]
  unsigned __int64 v12; // [rsp+78h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 56) )
    return 0;
  v6 = 1;
  v1 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v2 = sub_B8AE0(*(_DWORD *)(*(_QWORD *)(a1 + 48) + 8 * v1));
      if ( v2 )
        break;
LABEL_5:
      if ( (unsigned __int64)++v1 >= *(_QWORD *)(a1 + 56) )
        return 1;
    }
    v3 = *((_QWORD *)v2 + 3);
    v9[5] = 9;
    v9[2] = 0xFFFFFFFFLL;
    v9[0] = -1;
    v9[1] = 0;
    v9[3] = -1;
    v9[4] = 4;
    v10 = 0xFFFFFFFF00000000LL;
    v11 = 0;
    v4 = *((_QWORD *)v2 + 4);
    v7 = (__m128i)0x60uLL;
    v8 = 0;
    if ( !(unsigned __int8)sub_983C0(v3, &v7) )
      goto LABEL_11;
    if ( (int)v10 == v4 )
      break;
    if ( !(unsigned int)sub_92580(
                          0,
                          (__int64)"HIDECANCEL\n"
                                   "A breakpoint at the module start is already present.\n"
                                   "Do you want to replace it?") )
      goto LABEL_19;
    sub_98690((__int64)v9);
LABEL_11:
    if ( !sub_984E0(v3, v4, 3u) || !v6 )
    {
      if ( v7.m128i_i64[1] )
      {
        *(_QWORD *)&v8 = 0;
        qfree();
      }
      goto LABEL_5;
    }
    sub_92200((__int64)"On-access breakpoints added for selected modules.");
    if ( v7.m128i_i64[1] )
    {
      *(_QWORD *)&v8 = 0;
      qfree();
    }
    v6 = 0;
    if ( (unsigned __int64)++v1 >= *(_QWORD *)(a1 + 56) )
      return 1;
  }
  sub_92200((__int64)"On-access breakpoint already present for selected module.");
LABEL_19:
  if ( !v7.m128i_i64[1] )
    return 1;
  *(_QWORD *)&v8 = 0;
  qfree();
  return 1;
}

