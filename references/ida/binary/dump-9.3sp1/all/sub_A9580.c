__int64 __fastcall sub_A9580(__int64 a1, __int64 a2, int *a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, char a8)
{
  unsigned int v9; // r15d
  __int64 v11; // r15
  char v14; // al
  __int64 v15; // r10
  char v16; // al
  __int64 v17; // r10
  char v18; // al
  __int64 v19; // r10
  __int64 v20; // rax
  char v21; // al
  char v22; // al
  char v23; // al
  char v24; // al
  __int64 v25; // rax
  char v26; // al
  char v27; // al
  __int64 v28; // rax
  int *v29; // [rsp+8h] [rbp-70h]
  __int64 v30; // [rsp+10h] [rbp-68h]
  __int64 v31; // [rsp+18h] [rbp-60h]
  __int64 v33; // [rsp+20h] [rbp-58h]
  int v34; // [rsp+20h] [rbp-58h]
  int v35; // [rsp+20h] [rbp-58h]
  __int64 v36; // [rsp+30h] [rbp-48h]
  __int64 v37; // [rsp+30h] [rbp-48h]
  __int64 v38; // [rsp+30h] [rbp-48h]
  int *v39; // [rsp+38h] [rbp-40h]
  int *v40; // [rsp+38h] [rbp-40h]

  if ( *(_DWORD *)a5 != *a3 )
    return 0;
  v11 = a5 + 32;
  v31 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  v30 = a5 + 48;
  switch ( *a3 )
  {
    case 5:
    case 7:
    case 22:
      v35 = *a3;
      if ( !(unsigned __int8)sub_130BC0(a1, a2, a3 + 8, a4, a5 + 32, 1)
        || v35 == 22 && !(unsigned __int8)sub_125B60(a3 + 12, v30, 0) )
      {
        return 0;
      }
      goto LABEL_26;
    case 12:
    case 13:
    case 14:
      if ( !(unsigned __int8)sub_130BC0(a1, a2, a3 + 12, a4, v30, 1) )
        return 0;
      v34 = 1;
      if ( !(unsigned __int8)sub_130BC0(a1, a2, a3 + 8, a4, v11, 1) )
        return 0;
      goto LABEL_19;
    case 19:
    case 20:
    case 21:
      v29 = a3 + 8;
      v14 = sub_130BC0(a1, a2, a3 + 8, a4, a5 + 32, 1);
      v15 = a5;
      if ( v14 )
      {
        v34 = 1;
      }
      else
      {
        if ( *(_BYTE *)(a5 + 32) != 4 )
          goto LABEL_7;
        v22 = sub_30D8F0(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), a1, a4, *(_QWORD *)(a5 + 40), a2, v29);
        v15 = a5;
        if ( !v22 )
          goto LABEL_7;
        v34 = 2;
      }
      v37 = v15;
      v40 = a3 + 12;
      if ( (unsigned __int8)sub_130BC0(a1, a2, a3 + 12, a4, v30, 1) )
        goto LABEL_26;
      v15 = v37;
      if ( (a8 & 2) != 0 )
      {
        v23 = sub_11FD80(v40, 0, 1);
        v15 = v37;
        if ( v23 )
        {
          v24 = sub_11FD80(v30, 0, 1);
          v15 = v37;
          if ( v24 )
          {
LABEL_43:
            v34 = 3;
            goto LABEL_19;
          }
        }
      }
      if ( v34 != 2
        || *(_BYTE *)(v15 + 48) != 4
        || (v38 = v15,
            v21 = sub_30D8F0(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), a1, a4, *(_QWORD *)(v15 + 56), a2, v40),
            v15 = v38,
            !v21) )
      {
LABEL_7:
        v33 = v15;
        v16 = sub_130BC0(a1, a2, v29, a4, v30, 1);
        v17 = v33;
        if ( v16 )
        {
          v34 = 1;
        }
        else
        {
          if ( *(_BYTE *)(v33 + 48) != 4 )
            return 0;
          v18 = sub_30D8F0(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), a1, a4, *(_QWORD *)(v33 + 56), a2, v29);
          v17 = v33;
          if ( !v18 )
            return 0;
          v34 = 2;
        }
        v36 = v17;
        v39 = a3 + 12;
        if ( !(unsigned __int8)sub_130BC0(a1, a2, a3 + 12, a4, v11, 1) )
        {
          v19 = v36;
          if ( (a8 & 2) == 0
            || (v26 = sub_11FD80(v39, 0, 1), v19 = v36, !v26)
            || (v27 = sub_11FD80(v11, 0, 1), v19 = v36, !v27) )
          {
            if ( v34 != 2
              || *(_BYTE *)(v19 + 32) != 4
              || !(unsigned __int8)sub_30D8F0(
                                     *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL),
                                     a1,
                                     a4,
                                     *(_QWORD *)(v19 + 40),
                                     a2,
                                     v39) )
            {
              return 0;
            }
            v20 = v11;
            LODWORD(v11) = v30;
            v30 = v20;
            goto LABEL_19;
          }
          v28 = v11;
          LODWORD(v11) = v30;
          v30 = v28;
          goto LABEL_43;
        }
        v25 = v11;
        LODWORD(v11) = v30;
        v30 = v25;
LABEL_26:
        v34 = 1;
      }
LABEL_19:
      sub_125180(a6);
      v9 = sub_132E20(a1, a2, a6, a4, v11, 4);
      if ( !(_BYTE)v9 )
        return 0;
      if ( *((_BYTE *)a3 + 48) )
      {
        sub_125180(a7);
        if ( v34 == 2 )
        {
          sub_1207E0(a7, v31, 8, *(_QWORD *)(a2 + 24), *(unsigned int *)(a6 + 4));
        }
        else
        {
          if ( v34 != 3 )
            return sub_132E20(a1, a2, a7, a4, v30, 4);
          sub_1571F0(a1, a2, a7, a4, v30, 0);
        }
      }
      return v9;
    default:
      return 0;
  }
}
