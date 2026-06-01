__int64 __fastcall sub_62FCE0(char *a1, const char *a2, __int64 a3, unsigned __int8 a4, double a5, double a6)
{
  unsigned int v6; // r14d
  int v9; // r15d
  unsigned int v10; // edx
  int v12; // eax
  __int64 v13; // rdx

  v6 = a4;
  unk_2CD46C8 = ea2node;
  unk_2CD46C0 = node2ea;
  byte_2CCC2F9 = sub_7AFE40(a1, a2, a3, a4) ^ 1;
  if ( byte_2CCC2F9 )
    goto LABEL_2;
  if ( !(unsigned __int8)netnode_inited() )
    sub_3BC000((int)"si");
  if ( byte_2CCC2F9 )
  {
LABEL_2:
    v9 = 0;
    goto LABEL_3;
  }
  v12 = sub_62FAA0(a1);
  v10 = 0;
  v9 = v12;
  if ( !v12 )
    return v10;
  if ( !byte_2CCC2F9 )
  {
LABEL_9:
    if ( a4 )
      goto LABEL_18;
    return 1;
  }
  sub_7AFEB0(a1);
  if ( byte_2CCC2F9 )
  {
LABEL_3:
    sub_6D36C0(a1);
    byte_2CCC2F9 = 0;
    if ( !(unsigned __int8)sub_7AFE40(a1, a2, a3, v6) || !(unsigned __int8)netnode_inited() )
      goto LABEL_23;
    if ( v9 <= 770 )
      dword_2CCC3C8 |= 0x8000000u;
    v9 = sub_62FAA0(a1);
    if ( !v9 || byte_2CCC2F9 )
LABEL_23:
      sub_378C70((__int64)"Could not work with the database after upgrade. Try to upgrade it manually.");
    goto LABEL_9;
  }
  if ( a4 )
  {
LABEL_18:
    if ( !(unsigned __int8)sub_7AF790(a1) )
    {
      if ( !(unsigned __int8)is_cvt64(a1, a2, v13) )
      {
        if ( v9 <= 32 )
        {
          sub_7AFEB0(a1);
          sub_594080(a2, a5, a6);
        }
        sub_387AC0();
      }
      if ( !under_debugger )
        interr(2802);
      BUG();
    }
  }
  return 1;
}
