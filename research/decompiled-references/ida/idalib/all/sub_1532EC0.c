char __fastcall sub_1532EC0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  _QWORD *v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rax
  _QWORD *v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx

  v2 = *(_QWORD **)(a1 + 8);
  v3 = 8LL * *(unsigned int *)(a1 + 16);
  v4 = &v2[(unsigned __int64)v3 / 8];
  v5 = v3 >> 3;
  v6 = v3 >> 5;
  if ( v6 )
  {
    v7 = &v2[4 * v6];
    while ( (unsigned __int8)sub_15D85A0(*v2, a2, v5) )
    {
      if ( !(unsigned __int8)sub_15D85A0(v2[1], a2, v10) )
        return v4 == v2 + 1;
      if ( !(unsigned __int8)sub_15D85A0(v2[2], a2, v8) )
        return v4 == v2 + 2;
      if ( !(unsigned __int8)sub_15D85A0(v2[3], a2, v9) )
        return v4 == v2 + 3;
      v2 += 4;
      if ( v7 == v2 )
      {
        v5 = v4 - v2;
        goto LABEL_10;
      }
    }
    return v4 == v2;
  }
LABEL_10:
  switch ( v5 )
  {
    case 2LL:
LABEL_16:
      if ( !(unsigned __int8)sub_15D85A0(*v2, a2, v5) )
        return v4 == v2;
      ++v2;
      goto LABEL_18;
    case 3LL:
      if ( !(unsigned __int8)sub_15D85A0(*v2, a2, 3) )
        return v4 == v2;
      ++v2;
      goto LABEL_16;
    case 1LL:
LABEL_18:
      if ( (unsigned __int8)sub_15D85A0(*v2, a2, v5) )
        return 1;
      return v4 == v2;
  }
  return 1;
}
