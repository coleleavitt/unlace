__int64 __fastcall sub_1CDE0(__int64 a1, __int64 *a2, __int64 a3, char a4, __int64 a5, unsigned int *a6, __int64 a7)
{
  unsigned int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // [rsp+8h] [rbp-C0h]
  __int64 v16; // [rsp+10h] [rbp-B8h] BYREF
  __int128 v17; // [rsp+18h] [rbp-B0h]
  int v18; // [rsp+28h] [rbp-A0h]
  __int64 v19; // [rsp+30h] [rbp-98h]
  __int64 v20; // [rsp+38h] [rbp-90h]
  __int128 v21; // [rsp+40h] [rbp-88h]
  __int64 v22; // [rsp+50h] [rbp-78h]
  int v23; // [rsp+58h] [rbp-70h]
  __int128 v24; // [rsp+60h] [rbp-68h]
  __int128 v25; // [rsp+70h] [rbp-58h]
  unsigned __int64 v26; // [rsp+88h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  netnode_check();
  if ( v15 == a3 )
  {
    if ( a5 || a4 != 83 )
    {
      if ( a5 == 0xFFFFFFFFLL && a4 == 65 )
      {
        if ( a7 == 4 )
        {
          v16 = *a6;
          netnode_supset();
          return 1;
        }
LABEL_18:
        sub_1CD20(a2);
        return 0;
      }
      if ( a5 != 4294967294LL || a4 != 83 )
        return 0;
      if ( a7 != 16 )
        goto LABEL_18;
    }
    else if ( a7 != 28 )
    {
      goto LABEL_18;
    }
    netnode_supset();
    return 1;
  }
  if ( a3 != *(_QWORD *)(a1 + 176) )
    return 0;
  switch ( a4 )
  {
    case 'A':
      if ( a5 == 0xFFFFFFFFLL )
        return 1;
      node2ea();
      if ( a7 == 4 )
        goto LABEL_26;
      goto LABEL_18;
    case 'D':
      node2ea();
      if ( !(unsigned __int8)is_mapped() || a7 != 4 )
        goto LABEL_18;
      v12 = netnode_altval();
      if ( v12 )
        goto LABEL_23;
      return 1;
    case 'F':
      v14 = node2ea();
      if ( !(unsigned __int8)is_mapped() )
        goto LABEL_18;
      if ( (unsigned __int8)sub_2F860(a1, &v16, v14) )
        sub_30140(a1, v14, (unsigned __int16)v17, v16);
      return 1;
    case 'I':
      node2ea();
      if ( !(unsigned __int8)is_mapped() || a7 != 4 )
        goto LABEL_18;
      v12 = netnode_altval();
      if ( v12 )
      {
LABEL_23:
        v16 = v12;
        netnode_supset();
      }
      return 1;
    case 'L':
      node2ea();
      if ( !(unsigned __int8)is_mapped() || a7 != 1 )
        goto LABEL_18;
      goto LABEL_35;
    case 'a':
      return 1;
    case 'd':
      node2ea();
      if ( a7 != 4 )
        goto LABEL_18;
LABEL_26:
      v16 = netnode_altval();
      netnode_supset();
      return 1;
    case 's':
      v13 = node2ea();
      if ( !(unsigned __int8)is_mapped() )
        goto LABEL_18;
      v17 = 0;
      v16 = 0;
      v18 = 8;
      v19 = 0;
      v20 = 0;
      v22 = 0;
      v23 = 112;
      v21 = 0;
      v24 = 0;
      v25 = 0;
      sub_5A510(&v16, a1, v13);
      sub_5A480(&v16, a1, v13);
      if ( v20 )
      {
        *(_QWORD *)&v21 = 0;
        qfree(v20);
      }
      if ( v16 )
      {
        *(_QWORD *)&v17 = 0;
        qfree(v16);
      }
      return 1;
    case 't':
      node2ea();
      if ( !(unsigned __int8)is_mapped() || a7 != 1 )
        goto LABEL_18;
LABEL_35:
      LOBYTE(v16) = netnode_charval();
      netnode_supset();
      break;
    case 'x':
      node2ea();
      if ( !(unsigned __int8)is_mapped() || a7 != 1 )
        goto LABEL_18;
      if ( !(unsigned __int8)netnode_charval() )
      {
        LOBYTE(v16) = 1;
        netnode_supset();
      }
      break;
    default:
      return 0;
  }
  return 1;
}
