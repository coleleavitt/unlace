/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_51FCC
// Address: 0x00051FCC

//----- (00051FCC) --------------------------------------------------------
int __fastcall sub_51FCC(int *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r2
  unsigned int v5; // r1
  int *v6; // r10
  unsigned int v7; // r2
  unsigned int v8; // r3
  int *v9; // r9
  int v10; // r6
  _DWORD *v11; // r0
  unsigned int v12; // r2
  int v13; // r3
  int v14; // r2
  _BYTE *v15; // r10
  _BYTE *v16; // r7
  int v17; // r8
  int v18; // r6
  int v19; // r9
  int v20; // r4
  int v21; // t1
  int v22; // r5
  int v23; // t1
  int *v24; // r3
  char *v25; // r5
  unsigned int v26; // r7
  unsigned int v27; // r2
  int v28; // r3
  char **v29; // r8
  size_t v30; // r4
  _DWORD *v31; // r0
  int v32; // r0
  int v33; // r10
  char *v34; // r1
  size_t v35; // r6
  int *v37; // r0
  __int64 v38; // kr08_8
  int v39; // r4
  int v40; // r2
  int v41; // r1
  int v42; // r5
  unsigned int v43; // r3
  unsigned int v44; // r5
  _DWORD *v45; // r0
  unsigned int v46; // r2
  _BYTE *v47; // r11
  unsigned int v48; // r2
  int v49; // r8
  _BYTE *v50; // r7
  int v51; // r6
  int v52; // r10
  int v53; // r4
  int v54; // t1
  int v55; // r5
  int v56; // t1
  _BOOL4 v57; // r4
  unsigned int v58; // r3
  unsigned int v59; // r4
  _DWORD *v60; // r0
  int v61; // [sp+0h] [bp-74h]
  int v62; // [sp+Ch] [bp-68h]
  int v63; // [sp+Ch] [bp-68h]
  int v64; // [sp+Ch] [bp-68h]
  unsigned int v65; // [sp+10h] [bp-64h]
  int v66; // [sp+10h] [bp-64h]
  int *v67; // [sp+10h] [bp-64h]
  int *v68; // [sp+14h] [bp-60h]
  int *v69; // [sp+18h] [bp-5Ch]
  int *v70; // [sp+18h] [bp-5Ch]
  unsigned int v71; // [sp+18h] [bp-5Ch]
  unsigned int v72; // [sp+1Ch] [bp-58h]
  unsigned int v73; // [sp+20h] [bp-54h]
  int *v74; // [sp+20h] [bp-54h]
  unsigned int v75; // [sp+20h] [bp-54h]
  _DWORD *v76; // [sp+24h] [bp-50h]
  int *v77; // [sp+24h] [bp-50h]
  int *v78; // [sp+28h] [bp-4Ch]
  _DWORD *v79; // [sp+28h] [bp-4Ch]
  unsigned int v80; // [sp+28h] [bp-4Ch]
  unsigned int *v81; // [sp+2Ch] [bp-48h]
  int v82; // [sp+30h] [bp-44h]
  int v83; // [sp+30h] [bp-44h]
  int *v84; // [sp+34h] [bp-40h]
  unsigned int v85; // [sp+34h] [bp-40h]
  unsigned int *v87; // [sp+3Ch] [bp-38h]
  _DWORD *v88; // [sp+40h] [bp-34h]
  int *v89; // [sp+44h] [bp-30h]
  int **v90; // [sp+48h] [bp-2Ch]
  int v92; // [sp+5Ch] [bp-18h]
  _DWORD v93[2]; // [sp+60h] [bp-14h] BYREF
  int v94; // [sp+68h] [bp-Ch]
  int v95; // [sp+6Ch] [bp-8h]

  v3 = (a3 - 1) & 0xFFFFF000;
  v72 = a3 - v3;
  v88 = a1 + 1033;
  v4 = _stack_chk_guard;
  a1[1030] = v3;
  v5 = v3;
  v95 = v4;
LABEL_2:
  v6 = a1;
  v92 = 1000;
  while ( 1 )
  {
    if ( v5 + 4096 <= a2 )
      return -1;
    if ( (v6[4] & 2) != 0 )
      goto LABEL_5;
    v93[1] = 0;
    v94 = 0;
    v93[0] = &off_D0D90;
    v39 = ((int (__fastcall *)(unsigned int, char *, int, int, int))callui)(0x56u, (char *)v93, 0, (int)callui, v61);
    v93[0] = &off_D27E4;
    sub_79D3C(v94);
    if ( v39 )
      return -7;
    v5 = v6[1030];
LABEL_5:
    v68 = v6 + 6;
    v61 = v6[5];
    if ( (*(int (__fastcall **)(int, unsigned int, int *, int))(*(_DWORD *)v6[2] + 144))(v6[2], v5, v6 + 6, 4096) != 4096 )
    {
      a1[1034] = a1[1030];
      return -7;
    }
    v7 = v6[1030];
    v81 = (unsigned int *)(v6 + 1030);
    v69 = v6;
    if ( v7 >= a2 )
      v8 = 0;
    else
      v8 = a2 - v7;
    v65 = v8;
    v6[1042] = v8;
    v87 = (unsigned int *)(v6 + 1042);
    v84 = v6 + 1031;
    v9 = (int *)v6[1031];
    if ( v9 != v6 + 1031 )
    {
      while ( 1 )
      {
        v10 = v9[4];
        v82 = v10;
        v11 = (_DWORD *)(*(_DWORD *)v69[3] + 40 * v9[3]);
        v12 = v11[1] - v10;
        v13 = 4096 - v65;
        if ( 4096 - v65 >= v12 )
          v13 = v11[1] - v10;
        v73 = v11[1] - v10;
        v14 = v12 - v13;
        v15 = (_BYTE *)v11[4];
        if ( v15 )
          v15 = (_BYTE *)(v11[3] + v14);
        if ( v13 )
          break;
LABEL_25:
        if ( v73 <= 4096 - v65 )
        {
          *(_DWORD *)v69[1] = v9[2];
          return 1;
        }
        v24 = (int *)*v9;
        if ( v65 )
        {
LABEL_42:
          v37 = v9;
          *(_DWORD *)v9[1] = v24;
          v38 = *(_QWORD *)v9;
          v9 = v24;
          *(_DWORD *)(v38 + 4) = HIDWORD(v38);
          sub_77F70(v37);
          --*v88;
        }
        else
        {
          v9[4] = v82 + 4096;
          v9 = v24;
        }
        v65 = *v87;
        if ( v9 == v84 )
          goto LABEL_29;
      }
      v78 = v9;
      v16 = v15;
      v17 = v14 - 1 + *v11;
      v18 = (int)v68 + 4096 - v13 - 1;
      v19 = v69[4] & 1;
      v62 = v69[4] & 0x20;
      while ( 2 )
      {
        v21 = *(unsigned __int8 *)++v18;
        v20 = v21;
        v23 = *(unsigned __int8 *)++v17;
        v22 = v23;
        if ( !v19 )
        {
          v20 = (unsigned __int8)toupper(v20);
          v22 = (unsigned __int8)toupper(v22);
        }
        if ( v15 )
        {
          if ( v62 )
          {
            if ( ((v20 ^ v22) & (unsigned __int8)*v16) != 0 )
            {
LABEL_41:
              v9 = v78;
              v24 = (int *)*v78;
              goto LABEL_42;
            }
          }
          else if ( v15 == (_BYTE *)255 )
          {
            if ( v22 != 255 )
              goto LABEL_22;
          }
          else if ( *v16 )
          {
            goto LABEL_22;
          }
        }
        else
        {
LABEL_22:
          if ( v20 != v22 )
            goto LABEL_41;
        }
        ++v16;
        if ( (int *)((char *)v68 + 4095) == (int *)v18 )
        {
          v9 = v78;
          goto LABEL_25;
        }
        continue;
      }
    }
LABEL_29:
    v6 = v69;
    v79 = v69 + 1036;
    v76 = v69 + 1035;
    v25 = (char *)v68 + v65;
    v26 = v69[1030];
    v85 = v26;
    if ( 4 * v69[1036] )
    {
      v27 = v65;
      v70 = (int *)v69[1035];
      v74 = v6;
      while ( 1 )
      {
        v28 = *v70++;
        v29 = (char **)(*(_DWORD *)v74[3] + 40 * v28);
        v30 = (size_t)v29[1];
        v63 = (unsigned __int8)(*v29)[v30 - 1];
        if ( v72 != v27 )
        {
          do
          {
            v32 = memrchr(v25, v63);
            if ( !v32 )
              break;
            v33 = v32 + 1;
            v34 = *v29;
            v35 = v32 + 1 - (_DWORD)v25;
            if ( v30 > v35 )
            {
              if ( !memcmp(v25, &v34[v30 - v35], v35) )
              {
                v66 = *(v70 - 1);
                v31 = sub_77FEC(20);
                v31[2] = v26 - v30 + v33 - (_DWORD)v68;
                *v31 = v9;
                v31[3] = v66;
                v31[4] = v35;
                v31[1] = v9[1];
                *(_DWORD *)v9[1] = v31;
                v9[1] = (int)v31;
                ++*v88;
                v26 = *v81;
              }
            }
            else if ( !memcmp((const void *)(v32 + 1 - v30), v34, v30) )
            {
              *(_DWORD *)v74[1] = v26 - v30 + v33 - (_DWORD)v68;
              return 1;
            }
          }
          while ( v35 != 1 );
        }
        if ( (int *)(*v76 + 4 * *v79) == v70 )
          break;
        v27 = *v87;
      }
      v6 = v74;
      v85 = v26;
    }
    v40 = v6[1039];
    v89 = v6 + 1039;
    if ( v40 )
    {
      v43 = v6[1042];
      if ( v72 > v43 )
      {
        v77 = v6;
        v90 = (int **)(v6 + 1038);
        while ( 1 )
        {
          v80 = v72 - v43;
          if ( 4 * v40 )
            break;
LABEL_78:
          v43 = *v87;
          if ( *v87 >= --v72 )
          {
            v6 = v77;
            goto LABEL_52;
          }
          v40 = *v89;
        }
        v67 = *v90;
        while ( 1 )
        {
          v44 = v80;
          v83 = *v67++;
          v45 = (_DWORD *)(*(_DWORD *)v77[3] + 40 * v83);
          v46 = v45[1];
          v75 = v46;
          if ( v80 >= v46 )
            v44 = v45[1];
          v47 = (_BYTE *)v45[4];
          v71 = v44;
          v48 = v46 - v44;
          if ( v47 )
            v47 = (_BYTE *)(v45[3] + v48);
          if ( v44 )
            break;
LABEL_75:
          v58 = v85 + v72;
          if ( v80 >= v75 )
          {
            *(_DWORD *)v77[1] = v58 - v71;
            return 1;
          }
          v59 = v58 - v75;
          v60 = sub_77FEC(20);
          v60[2] = v59;
          v60[3] = v83;
          *v60 = v9;
          v60[4] = v71;
          v60[1] = v9[1];
          *(_DWORD *)v9[1] = v60;
          v9[1] = (int)v60;
          ++*v88;
          v85 = *v81;
LABEL_77:
          if ( &(*v90)[*v89] == v67 )
            goto LABEL_78;
        }
        v49 = v48 - 1 + *v45;
        v50 = v47;
        v51 = (int)v68 + v72 - v44 - 1;
        v64 = v77[4] & 0x20;
        v52 = v77[4] & 1;
        while ( 2 )
        {
          v54 = *(unsigned __int8 *)++v51;
          v53 = v54;
          v56 = *(unsigned __int8 *)++v49;
          v55 = v56;
          if ( !v52 )
          {
            v53 = (unsigned __int8)toupper(v53);
            v55 = (unsigned __int8)toupper(v55);
          }
          if ( !v47 )
            goto LABEL_72;
          if ( v64 )
          {
            v57 = ((v53 ^ v55) & (unsigned __int8)*v50) == 0;
          }
          else
          {
            if ( v47 != (_BYTE *)255 )
            {
              if ( *v50 )
                goto LABEL_72;
LABEL_74:
              ++v50;
              if ( (int *)((char *)v68 + v72 - 1) == (int *)v51 )
                goto LABEL_75;
              continue;
            }
            if ( v55 == 255 )
              goto LABEL_74;
LABEL_72:
            v57 = v53 == v55;
          }
          break;
        }
        if ( !v57 )
          goto LABEL_77;
        goto LABEL_74;
      }
    }
LABEL_52:
    v5 = v85 - 4096;
    v72 = 4096;
    v6[1030] = v85 - 4096;
    if ( !--v92 )
    {
      sub_78F48();
      v42 = v41;
      if ( (unsigned int)(v41 - a1[1041]) > 4 )
      {
        sub_17480(a1[2], &byte_8DFE8);
        a1[1041] = v42;
      }
      v5 = *v81;
      goto LABEL_2;
    }
  }
}
// 5230A: variable 'v61' is possibly undefined
// 52380: variable 'v41' is possibly undefined
// 146C8: using guessed type int __fastcall memrchr(_DWORD, _DWORD);
// 8DFE8: using guessed type char byte_8DFE8;
// D0D90: using guessed type _UNKNOWN *;
// D27E4: using guessed type _UNKNOWN *off_D27E4;
// D4944: using guessed type int (__fastcall *callui)(_DWORD, _DWORD, _DWORD);
