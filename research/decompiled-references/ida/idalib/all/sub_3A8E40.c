__int64 __fastcall sub_3A8E40(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  __int64 v5; // rdi
  __int64 v6; // rbp
  unsigned int v7; // r12d
  __int64 v11; // r12
  __int64 v12; // rdi
  __int64 v13; // r15
  char v14; // al
  unsigned int v15; // ebp
  char *v16; // rsi
  _BYTE v17[8]; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v18[9]; // [rsp+10h] [rbp-48h] BYREF

  v18[1] = __readfsqword(0x28u);
  v5 = *a1;
  v6 = *(_QWORD *)(v5 + 1536);
  if ( *(_DWORD *)(v6 + 148) != 0x3FFF )
  {
    v11 = sub_3A3D00(a1, v18, a2, a3);
    if ( v11 != -1 )
    {
      v14 = sub_631C90(*a1, 44, 4);
      v15 = v18[0];
      if ( v14 )
        show_auto(v11, LODWORD(v18[0]));
      if ( a4 )
        *(_DWORD *)(*(_QWORD *)(*a1 + 1536) + 24LL) = a4;
      v16 = (char *)v11;
      v7 = 1;
      sub_3A8380(a1, v16, v15);
      return v7;
    }
    if ( a2 || a3 != -1 )
      return 0;
    v5 = *a1;
  }
  if ( *(_BYTE *)(v6 + 152) )
    goto LABEL_4;
  v7 = *(unsigned __int8 *)(v6 + 125);
  if ( !(_BYTE)v7 )
    goto LABEL_4;
  if ( (sub_631AD0(v5, 10) & 0x400) != 0 && (sub_631AD0(*a1, 57) & 0xF) != 0 )
  {
    v18[0] = -1;
    if ( (unsigned __int8)netnode_check(v18, "$ stkargs propagated", 0, 1) )
    {
      sub_66E780(*a1);
      return v7;
    }
  }
  netnode_check(v17, "$ Auto ready", 0, 0);
  if ( (unsigned __int8)netnode_exist(v17) )
  {
    LOBYTE(v18[0]) = 1;
    sub_3A3130((char *)(v6 + 152), (char *)v18, 0x75u);
    v5 = *a1;
LABEL_4:
    *(_DWORD *)(*(_QWORD *)(v5 + 1536) + 24LL) = 0;
    show_auto(-1, 0);
    return 0;
  }
  v12 = *a1;
  if ( (unsigned __int8)sub_631C90(*a1, 45, 16)
    || (get_merge_state(v12, 45) & 3) != 0
    || (v13 = a1[2], !(unsigned __int8)netnode_inited())
    || (*(_BYTE *)(v13 + 12) & 0x20) == 0
    || !(unsigned int)reg_int_op("AutoUseLumina", 0, 0, 0)
    || (v18[0] = -1, !(unsigned __int8)netnode_check(v18, "$ applied lumina", 0, 1))
    || !(unsigned __int8)sub_7D8460() )
  {
    sub_39ADA0(3u);
    if ( *(_DWORD *)(v6 + 148) == 0x3FFF )
    {
      if ( (unsigned __int8)netnode_check(v17, "$ Auto ready", 0, 1) )
        sub_368890();
      sub_378D50();
    }
  }
  return v7;
}
