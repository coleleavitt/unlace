__int64 __fastcall sub_3A4750(__int64 *a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v5; // rdi
  __int64 v6; // rbp
  unsigned int v7; // r12d
  unsigned int v11; // r12d
  __int64 v12; // rdi
  __int64 v13; // r15
  char v14; // al
  unsigned int v15; // ebp
  unsigned int v16; // esi
  _BYTE v17[4]; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v18; // [rsp+4h] [rbp-44h] BYREF
  int v19[2]; // [rsp+8h] [rbp-40h]

  *(_QWORD *)v19 = __readfsqword(0x28u);
  v5 = *a1;
  v6 = *(_QWORD *)(v5 + 1344);
  if ( *(_DWORD *)(v6 + 116) != 0x3FFF )
  {
    v11 = sub_39F3B0(a1, &v18, a2, a3);
    if ( v11 != -1 )
    {
      v14 = sub_615160(*a1, 44, 4);
      v15 = v18;
      if ( v14 )
        show_auto(v11, v18);
      if ( a4 )
        *(_DWORD *)(*(_QWORD *)(*a1 + 1344) + 16LL) = a4;
      v16 = v11;
      v7 = 1;
      sub_3A3D00(a1, v16, v15);
      return v7;
    }
    if ( a2 || a3 != -1 )
      return 0;
    v5 = *a1;
  }
  if ( *(_BYTE *)(v6 + 120) )
    goto LABEL_4;
  v7 = *(unsigned __int8 *)(v6 + 97);
  if ( !(_BYTE)v7 )
    goto LABEL_4;
  if ( (sub_614FB0(v5, 10) & 0x400) != 0 && (sub_614FB0(*a1, 57) & 0xF) != 0 )
  {
    v18 = -1;
    if ( (unsigned __int8)netnode_check(&v18, "$ stkargs propagated", 0, 1) )
    {
      sub_650E20(*a1);
      return v7;
    }
  }
  netnode_check(v17, "$ Auto ready", 0, 0);
  if ( (unsigned __int8)netnode_exist(v17) )
  {
    LOBYTE(v18) = 1;
    sub_39E480((char *)(v6 + 120), (char *)&v18, 0x75u);
    v5 = *a1;
LABEL_4:
    *(_DWORD *)(*(_QWORD *)(v5 + 1344) + 16LL) = 0;
    show_auto(0xFFFFFFFFLL, 0);
    return 0;
  }
  v12 = *a1;
  if ( (unsigned __int8)sub_615160(*a1, 45, 16)
    || (get_merge_state(v12, 45) & 3) != 0
    || (v13 = a1[2], !(unsigned __int8)netnode_inited())
    || (*(_BYTE *)(v13 + 12) & 0x20) == 0
    || !(unsigned int)reg_int_op("AutoUseLumina", 0, 0, 0)
    || (v18 = -1, !(unsigned __int8)netnode_check(&v18, "$ applied lumina", 0, 1))
    || !(unsigned __int8)sub_7B41A0() )
  {
    sub_396090(3u);
    if ( *(_DWORD *)(v6 + 116) == 0x3FFF )
    {
      if ( (unsigned __int8)netnode_check(v17, "$ Auto ready", 0, 1) )
        sub_365330();
      sub_375400();
    }
  }
  return v7;
}

