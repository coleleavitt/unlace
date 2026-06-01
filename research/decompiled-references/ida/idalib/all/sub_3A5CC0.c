__int64 __fastcall sub_3A5CC0(_QWORD *a1, char *a2, char *a3)
{
  unsigned __int64 v4; // r12
  __int64 result; // rax
  __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // r15
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // r14
  __int64 v15; // r15
  _QWORD *v16; // rdx
  char *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r13
  __int64 v21; // r12

  v4 = (unsigned __int64)a2;
  result = sub_631AD0(*a1, 10);
  if ( (result & 0x20) != 0 )
  {
    if ( a3 >= a2 )
    {
      v17 = a3;
      a3 = a2;
      v4 = (unsigned __int64)v17;
    }
    result = -2;
    if ( v4 == -1 )
      v4 = -2;
    if ( (char *)v4 != a3 )
    {
      v6 = *(_QWORD *)(*a1 + 1536LL);
      v7 = v6 + 1640;
      sub_3A3E40(v6, 1, a3, v4);
      v8 = v6 + 1640;
      sub_3A3E40(v6, 2, a3, v4);
      sub_3A3E40(v6, 3, a3, v4);
      sub_3A3E40(v6, 6, a3, v4);
      v9 = *(_QWORD **)(v6 + 1648);
      if ( v9 )
      {
        v10 = *(_QWORD **)(v6 + 1648);
        do
        {
          if ( v10[4] < (unsigned __int64)a3 )
          {
            v10 = (_QWORD *)v10[3];
          }
          else
          {
            v8 = (__int64)v10;
            v10 = (_QWORD *)v10[2];
          }
        }
        while ( v10 );
        do
        {
          while ( 1 )
          {
            v11 = v9[2];
            v12 = v9[3];
            if ( v9[4] >= v4 )
              break;
            v9 = (_QWORD *)v9[3];
            if ( !v12 )
              goto LABEL_17;
          }
          v7 = (__int64)v9;
          v9 = (_QWORD *)v9[2];
        }
        while ( v11 );
      }
LABEL_17:
      if ( (unsigned __int8)sub_3A4D70(v8, v7, *(unsigned int *)(v6 + 1692)) )
        sub_3A4E90(v6 + 1632, v8, v7);
      v13 = *(_QWORD **)(v6 + 1752);
      v14 = v6 + 1744;
      v15 = v6 + 1744;
      if ( v13 )
      {
        v16 = *(_QWORD **)(v6 + 1752);
        do
        {
          if ( v16[4] < (unsigned __int64)a3 )
          {
            v16 = (_QWORD *)v16[3];
          }
          else
          {
            v15 = (__int64)v16;
            v16 = (_QWORD *)v16[2];
          }
        }
        while ( v16 );
        do
        {
          while ( 1 )
          {
            v18 = v13[2];
            v19 = v13[3];
            if ( v13[4] >= v4 )
              break;
            v13 = (_QWORD *)v13[3];
            if ( !v19 )
              goto LABEL_28;
          }
          v14 = (__int64)v13;
          v13 = (_QWORD *)v13[2];
        }
        while ( v18 );
      }
LABEL_28:
      if ( (unsigned __int8)sub_3A4D70(v15, v14, *(unsigned int *)(v6 + 1796)) )
        sub_3A4E90(v6 + 1736, v15, v14);
      v20 = sub_3BDD60(a1, a3);
      v21 = sub_3BDF40(a1, v4);
      sub_7BE8D0(v6 + 88, *a1, v20, v21, 65);
      sub_7BE8D0(v6 + 88, *a1, v20, v21, 80);
      return sub_7BE8D0(v6 + 112, *a1, v20, v21, 65);
    }
  }
  return result;
}
