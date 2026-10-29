__int64 __fastcall sub_17870(_QWORD *a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // r9
  __int64 v4; // r10
  char v5; // si
  __int64 result; // rax
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rax
  __int64 v9; // rbp
  char v10; // al
  unsigned __int64 v11; // rax
  __int64 v12; // r12
  unsigned __int64 v13; // rdx
  char v14; // al
  __int16 v15; // si
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r12
  __int64 v19; // r14
  __int64 v20; // r13
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r12
  unsigned __int64 v25; // rax
  char v26; // dl
  __int16 v27; // si
  unsigned __int64 v28; // r12
  __int64 v29; // rax
  unsigned __int64 v30; // r12
  __int64 v31; // rax
  unsigned __int64 v32; // r12
  __int64 v33; // rax
  char v34; // al
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // rax
  __int64 v37; // r14
  __int64 v38; // r13
  __int64 v39; // rax
  __int16 v40; // dx
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  __int64 v43; // r12
  __int64 v44; // rax
  __int16 v45; // [rsp+0h] [rbp-54h]
  unsigned __int64 v46; // [rsp+4h] [rbp-50h]
  __int64 v47; // [rsp+Ch] [rbp-48h]
  unsigned __int64 v48; // [rsp+14h] [rbp-40h]

  v1 = a1[9];
  v2 = a1[8];
  if ( v2 <= v1 )
    return 0;
  v3 = v1 + 1;
  v4 = a1[7];
  a1[9] = v1 + 1;
  v5 = *(_BYTE *)(v4 + v1);
  switch ( v5 )
  {
    case 'A':
      v26 = 0;
      v27 = 61;
      return sub_F7F0((__int64)a1, v27, v26);
    case 'B':
      v26 = 0;
      v27 = 155;
      return sub_F7F0((__int64)a1, v27, v26);
    case 'C':
      v26 = 0;
      v27 = 20;
      return sub_F7F0((__int64)a1, v27, v26);
    case 'D':
      v15 = 54;
      v16 = sub_BBE0((__int64)a1, 221);
      goto LABEL_23;
    case 'E':
      v26 = 0;
      v27 = 62;
      return sub_F7F0((__int64)a1, v27, v26);
    case 'G':
    case 'g':
      return sub_11570((__int64)a1, v5);
    case 'K':
      v26 = 0;
      v27 = 11;
      return sub_F7F0((__int64)a1, v27, v26);
    case 'L':
      v26 = 0;
      v27 = 156;
      return sub_F7F0((__int64)a1, v27, v26);
    case 'M':
      v32 = sub_11600(a1);
      v33 = sub_BBE0((__int64)a1, 221);
      v17 = sub_CE00(a1, 135, v32, v33);
      goto LABEL_24;
    case 'P':
      v30 = sub_11830((__int64)a1);
      v31 = sub_BBE0((__int64)a1, 221);
      v17 = sub_CE00(a1, 80, v31, v30);
      goto LABEL_24;
    case 'S':
      if ( v3 >= v2 )
        goto LABEL_5;
      a1[9] = v1 + 2;
      v14 = *(_BYTE *)(v4 + v1 + 1);
      if ( v14 == 112 )
      {
        v15 = 286;
        v16 = sub_BBE0((__int64)a1, 221);
        goto LABEL_23;
      }
      if ( v14 <= 112 )
      {
        if ( v14 == 68 )
        {
          v43 = sub_BBE0((__int64)a1, 221);
          v44 = sub_BBE0((__int64)a1, 221);
          v17 = sub_CE00(a1, 285, v44, v43);
          goto LABEL_24;
        }
        if ( v14 != 97 )
          goto LABEL_5;
        v15 = 284;
        v16 = sub_BBE0((__int64)a1, 221);
LABEL_23:
        v17 = sub_CD20(a1, v15, v16);
LABEL_24:
        v13 = v17;
        return sub_CD20(a1, 221, v13);
      }
      if ( v14 == 113 )
      {
        v15 = 283;
        v16 = sub_BBE0((__int64)a1, 221);
        goto LABEL_23;
      }
      goto LABEL_5;
    case 'U':
      v26 = 0;
      v27 = 234;
      return sub_F7F0((__int64)a1, v27, v26);
    case 'X':
    case 'x':
      v48 = 0;
      v47 = 0;
      if ( v5 == 88 )
      {
        v47 = sub_BBE0((__int64)a1, 40);
        if ( !v47 )
          goto LABEL_5;
        v48 = sub_EBD0((__int64)a1);
        if ( !v48 )
          goto LABEL_5;
      }
      v7 = sub_EBD0((__int64)a1);
      if ( !v7 )
        goto LABEL_5;
      v8 = sub_12C70(a1, 1);
      *(_WORD *)(v8 + 16) = 201;
      v9 = v8;
      *(_BYTE *)(v8 + 18) = 0;
      v10 = *(_BYTE *)(v7 + 18);
      switch ( v10 )
      {
        case 4:
          v46 = 2;
          break;
        case 5:
          v46 = *(unsigned int *)(v7 + 8);
          if ( !*(_DWORD *)(v7 + 8) )
            goto LABEL_12;
          break;
        case 3:
          v46 = 1;
          break;
        default:
          goto LABEL_12;
      }
      v35 = 0;
      do
      {
        v38 = sub_BA70(v7, v35);
        v39 = sub_BA70(v38, 0);
        v40 = 203;
        if ( *(_WORD *)(v39 + 16) == 117 )
        {
          v41 = sub_BA70(v39, 0);
          v42 = sub_CD20(a1, 221, v41);
          v40 = 202;
          v38 = v42;
        }
        v45 = v40;
        ++v35;
        v36 = sub_12C70(a1, 1);
        *(_BYTE *)(v36 + 18) = 0;
        v37 = v36;
        *(_WORD *)(v36 + 16) = v45;
        sub_C080(v36, v38, a1);
        sub_C080(v9, v37, a1);
      }
      while ( v35 < v46 );
LABEL_12:
      v11 = sub_12C70(a1, 1);
      *(_WORD *)(v11 + 16) = 200;
      v12 = v11;
      *(_BYTE *)(v11 + 18) = 0;
      sub_C080(v11, v9, a1);
      if ( v47 )
      {
        sub_C080(v12, v47, a1);
        sub_C080(v12, v48, a1);
      }
      v13 = v12;
      return sub_CD20(a1, 221, v13);
    case 'Y':
      return sub_13100((__int64)a1, 157);
    case 'Z':
      v18 = sub_EBD0((__int64)a1);
      v19 = sub_BBE0((__int64)a1, 98);
      v20 = sub_132E0((__int64)a1);
      v21 = sub_12C70(a1, 1);
      *(_WORD *)(v21 + 16) = 1;
      *(_BYTE *)(v21 + 18) = 0;
      v22 = sub_CCF0(a1, v21, v19);
      v23 = sub_CCF0(a1, v22, v20);
      return sub_CCF0(a1, v23, v18);
    case 'b':
      v15 = 199;
      v16 = sub_BBE0((__int64)a1, 221);
      goto LABEL_23;
    case 'c':
      v24 = sub_BBE0((__int64)a1, 221);
      v25 = sub_137E0((__int64)a1);
      v17 = sub_CE00(a1, 180, v25, v24);
      goto LABEL_24;
    case 'e':
      v13 = sub_12C70(a1, 1);
      *(_WORD *)(v13 + 16) = 60;
      *(_BYTE *)(v13 + 18) = 0;
      return sub_CD20(a1, 221, v13);
    case 'f':
      v26 = 0;
      v27 = 211;
      return sub_F7F0((__int64)a1, v27, v26);
    case 'j':
      return sub_113F0((__int64)a1);
    case 'l':
      v15 = 181;
      v16 = sub_137E0((__int64)a1);
      goto LABEL_23;
    case 'm':
      v28 = sub_11600(a1);
      v29 = sub_BBE0((__int64)a1, 221);
      v17 = sub_CE00(a1, 66, v28, v29);
      goto LABEL_24;
    case 'o':
      v15 = 237;
      v16 = sub_BBE0((__int64)a1, 221);
      goto LABEL_23;
    case 'p':
      v15 = 66;
      v16 = sub_BBE0((__int64)a1, 221);
      goto LABEL_23;
    case 'u':
      v15 = 238;
      v16 = sub_BBE0((__int64)a1, 221);
      goto LABEL_23;
    case 'w':
      v15 = 236;
      v16 = sub_BBE0((__int64)a1, 221);
      goto LABEL_23;
    case 'z':
      if ( v3 >= v2 )
        goto LABEL_5;
      a1[9] = v1 + 2;
      v34 = *(_BYTE *)(v4 + v1 + 1);
      if ( v34 == 66 )
      {
        v26 = 1;
        v27 = 155;
        return sub_F7F0((__int64)a1, v27, v26);
      }
      if ( v34 == 67 )
      {
        v26 = 1;
        v27 = 20;
        return sub_F7F0((__int64)a1, v27, v26);
      }
LABEL_5:
      result = 0;
      break;
    default:
      goto LABEL_5;
  }
  return result;
}

