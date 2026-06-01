__int64 __fastcall sub_2A8380(__int64 a1, int a2)
{
  unsigned int v2; // ebp
  _QWORD vars0[2]; // [rsp+0h] [rbp+0h] BYREF
  int vars10; // [rsp+10h] [rbp+10h]
  __int64 vars18; // [rsp+18h] [rbp+18h]
  int vars20; // [rsp+20h] [rbp+20h]
  __int64 vars24; // [rsp+24h] [rbp+24h]
  __int64 vars30; // [rsp+30h] [rbp+30h]
  __int64 vars38; // [rsp+38h] [rbp+38h]
  __int128 vars40; // [rsp+40h] [rbp+40h]
  unsigned __int64 vars58; // [rsp+58h] [rbp+58h]

  vars58 = __readfsqword(0x28u);
  vars0[1] = a1;
  vars20 = a2;
  vars10 = 0;
  vars0[0] = colorize_selected_nodes;
  vars18 = 56;
  vars24 = 0xFFFFFFFFLL;
  vars30 = -1;
  vars38 = 0;
  vars40 = 0;
  sub_2B37F0(a1 + 192, vars0, 1, 0);
  v2 = 32770;
  if ( vars10 == 1 )
    v2 = 32772;
  vars0[0] = colorize_selected_nodes;
  if ( vars38 )
  {
    *(_QWORD *)&vars40 = 0;
    qfree(vars38, (const char *)vars0);
  }
  return v2;
}
