__int64 __fastcall sub_51D220(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // rbp
  __int64 v4; // r15
  char *v5; // r13
  __int64 v6; // r14
  unsigned __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v9; // rsi
  __int64 v10; // rbp
  char v11; // r12
  __int64 v12; // rax
  __int64 v13; // rbp
  unsigned __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // rsi
  __int64 v18; // rax
  __int64 v19; // [rsp+8h] [rbp-60h]
  unsigned __int64 v20; // [rsp+10h] [rbp-58h]
  unsigned __int64 v21; // [rsp+10h] [rbp-58h]
  __int64 v23; // [rsp+20h] [rbp-48h]
  unsigned __int8 v24; // [rsp+2Fh] [rbp-39h]

  v2 = a2[1];
  v24 = sub_692580(a1, (unsigned int)v2);
  if ( !v24 )
    return 0;
  if ( (int)v2 > 0 )
  {
    v19 = 0;
    v23 = 16 * (3LL * (unsigned int)(v2 - 1) + 3);
    while ( 1 )
    {
      v3 = (_QWORD *)(*a2 + v19);
      if ( !(unsigned __int8)sub_6891C0(a1, *v3) )
        return 0;
      v4 = v3[4];
      if ( !(unsigned __int8)sub_692580(a1, (unsigned int)v4) )
        return 0;
      v5 = (char *)v3[3];
      v6 = (__int64)&v5[(unsigned int)(v4 - 1) + 1];
      if ( (int)v4 > 0 )
        break;
LABEL_19:
      v19 += 48;
      if ( v19 == v23 )
        return v24;
    }
    while ( 1 )
    {
      v11 = *v5++;
      if ( (v11 & 0xFD) == 0xAC )
        break;
      if ( !v11 )
        v11 = -84;
LABEL_13:
      v10 = a1[1];
      if ( v10 )
      {
        v7 = v10 + 1;
        v8 = a1[1];
        v9 = *a1;
        --v10;
        if ( a1[2] < v7 )
          goto LABEL_15;
      }
      else
      {
        v9 = *a1;
        v8 = 1;
        v7 = 2;
        if ( (unsigned __int64)a1[2] < 2 )
        {
LABEL_15:
          v20 = v7;
          v12 = qvector_reserve(a1, v9, v7, 1);
          v7 = v20;
          *a1 = v12;
          v9 = v12;
        }
      }
      a1[1] = v7;
      *(_BYTE *)(v9 + v10) = v11;
      *(_BYTE *)(*a1 + v8) = 0;
      if ( v5 == (char *)v6 )
        goto LABEL_19;
    }
    v13 = a1[1];
    if ( v13 )
    {
      v14 = v13 + 1;
      v15 = a1[1];
      v16 = *a1;
      --v13;
      if ( a1[2] >= v14 )
      {
LABEL_18:
        a1[1] = v14;
        *(_BYTE *)(v16 + v13) = -82;
        *(_BYTE *)(*a1 + v15) = 0;
        goto LABEL_13;
      }
    }
    else
    {
      v16 = *a1;
      v15 = 1;
      v14 = 2;
      if ( (unsigned __int64)a1[2] >= 2 )
        goto LABEL_18;
    }
    v21 = v14;
    v18 = qvector_reserve(a1, v16, v14, 1);
    v14 = v21;
    *a1 = v18;
    v16 = v18;
    goto LABEL_18;
  }
  return v24;
}

