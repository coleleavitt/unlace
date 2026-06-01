/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_425080
// Address: 0x00425080

//----- (00425080) --------------------------------------------------------
int __userpurge sub_425080@<eax>(int a1@<ebx>, __m128i a2@<xmm0>, char *a3, int a4, int *a5, char *a6, char a7)
{
  char *v7; // esi
  char *v8; // edi
  unsigned int v10; // ecx
  unsigned int v11; // edx
  int *v12; // eax
  char *v13; // eax
  bool v14; // zf
  int v15; // edi
  unsigned int *v16; // eax
  int v17; // edi
  int v18; // esi
  int ***v19; // ecx
  unsigned int v20; // edi
  int v21; // ecx
  unsigned int v22; // ecx
  char *v23; // eax
  int v24; // eax
  unsigned int v25; // eax
  int v26; // ecx
  unsigned int v27; // eax
  char *v28; // eax
  int v29; // edx
  unsigned int v30; // edi
  unsigned int v31; // edx
  unsigned int *v32; // eax
  LPVOID v33; // eax
  char **v34; // edi
  char *v35; // eax
  int *v36; // edi
  unsigned int *v37; // esi
  __m128i *v38; // edi
  char *v39; // edi
  int v40; // ecx
  char **v41; // esi
  _DWORD *v42; // eax
  int v43; // edx
  int *v44; // esi
  char *v45; // eax
  _DWORD *v46; // eax
  int v47; // esi
  __m128i *v48; // ecx
  char v49; // al
  __m128i *v50; // edi
  unsigned int *v51; // esi
  int v52; // ecx
  int v53; // eax
  _DWORD *v54; // eax
  int v55; // eax
  char *v56; // edi
  int *v57; // esi
  _BYTE *v58; // eax
  _DWORD *v59; // eax
  bool v60; // sf
  _BYTE *v61; // ecx
  unsigned int v62; // kr00_4
  int v63; // eax
  int v64; // edi
  char ***v65; // edi
  char *v66; // eax
  char *v67; // esi
  _BYTE *v68; // ecx
  unsigned int v69; // kr04_4
  int v70; // eax
  int v71; // edi
  int **v72; // edi
  char *v73; // eax
  int *v74; // ecx
  char *v75; // eax
  int i; // eax
  char *j; // ecx
  int v78; // esi
  _DWORD *v79; // [esp-Ch] [ebp-A8h]
  _DWORD *v80; // [esp-Ch] [ebp-A8h]
  _DWORD *v81; // [esp-Ch] [ebp-A8h]
  _DWORD *v82; // [esp-Ch] [ebp-A8h]
  int v83; // [esp-8h] [ebp-A4h]
  int v84; // [esp-8h] [ebp-A4h]
  int v85; // [esp-8h] [ebp-A4h]
  int v86; // [esp-8h] [ebp-A4h]
  char v87[8]; // [esp+Ch] [ebp-90h] BYREF
  __int128 v88; // [esp+14h] [ebp-88h]
  void **v89; // [esp+24h] [ebp-78h]
  int v90; // [esp+28h] [ebp-74h]
  _DWORD *v91; // [esp+2Ch] [ebp-70h] BYREF
  int v92; // [esp+30h] [ebp-6Ch]
  int v93; // [esp+34h] [ebp-68h]
  char ***v94; // [esp+38h] [ebp-64h] BYREF
  int v95; // [esp+3Ch] [ebp-60h]
  int v96; // [esp+40h] [ebp-5Ch]
  char **v97; // [esp+44h] [ebp-58h] BYREF
  char *v98; // [esp+48h] [ebp-54h]
  int *v99; // [esp+4Ch] [ebp-50h] BYREF
  unsigned int *v100; // [esp+50h] [ebp-4Ch] BYREF
  char *v101; // [esp+54h] [ebp-48h] BYREF
  int v102; // [esp+58h] [ebp-44h]
  _BYTE *v103; // [esp+5Ch] [ebp-40h] BYREF
  int v104; // [esp+60h] [ebp-3Ch]
  int v105; // [esp+64h] [ebp-38h]
  int ***v106; // [esp+68h] [ebp-34h]
  _DWORD v107[8]; // [esp+6Ch] [ebp-30h] BYREF
  int v108; // [esp+98h] [ebp-4h]

  v7 = a3;
  v8 = a6;
  v106 = (int ***)a3;
  v102 = a4;
  v101 = a6;
  while ( *v7 != 5 )
  {
    if ( *v7 == 7 )
    {
      v10 = *((_DWORD *)v7 + 3) != 0 ? *((_DWORD *)v7 + 3) - 1 : 0;
      if ( v102 < 0 )
        v102 += v10;
      v11 = 0;
      if ( v102 >= 0 )
        v11 = v102;
      if ( v11 > v10 )
        v11 = v10;
      v96 = v11;
      v12 = (int *)(v11 + 1);
      if ( (a7 & 1) == 0 )
        v12 = a5;
      v106 = (int ***)v12;
      if ( (int)v12 < 0 )
        v106 = (int ***)((char *)v12 + v10);
      v13 = nullptr;
      v87[0] = 2;
      v88 = 0;
      if ( (int)v106 >= 0 )
        v13 = (char *)v106;
      LODWORD(v88) = 0;
      if ( (unsigned int)v13 > v10 )
        v13 = (char *)v10;
      if ( v11 > (unsigned int)v13 )
        v13 = (char *)v11;
      v101 = v13;
      v14 = *a6 == 7;
      v108 = 0;
      if ( !v14 )
      {
        v15 = sub_423670(v87, a6);
        if ( v15 || (v15 = sub_424980(v87)) != 0 )
        {
          sub_41BC20(v87);
          return v15;
        }
        v11 = v96;
        v8 = v87;
      }
      v16 = (unsigned int *)(v8 + 8);
      v17 = *((_DWORD *)v8 + 3);
      v18 = (int)(v7 + 8);
      v100 = v16;
      v19 = (int ***)&v101[-v11];
      v20 = v17 != 0 ? v17 - 1 : 0;
      v106 = (int ***)&v101[-v11];
      if ( v20 < (unsigned int)&v101[-v11] )
      {
        v102 = v11;
        v21 = *(_DWORD *)(v18 + 4);
        v99 = (int *)&v101[-v11 - v20];
        v22 = v21 != 0 ? v21 - 1 : 0;
        if ( v11 < v22 && v99 )
        {
          v23 = (char *)v99 + v11;
          if ( (unsigned int)v99 + v11 >= v22 )
          {
            v24 = v102;
          }
          else
          {
            v102 = v22 - (_DWORD)v23;
            sub_464310(*(_DWORD *)v18 + v11, (unsigned int)&v23[*(_DWORD *)v18], v22 - (_DWORD)v23);
            v24 = v102 + v96;
            v102 += v96;
          }
          v25 = v24 + 1;
          v99 = (int *)v25;
          if ( v25 > *(_DWORD *)(v18 + 8) )
          {
            *(_DWORD *)v18 = sub_453B00(v18, *(void **)v18, v25, 1u);
            v25 = (unsigned int)v99;
          }
          v26 = v102;
          v11 = v96;
          *(_DWORD *)(v18 + 4) = v25;
          *(_BYTE *)(v26 + *(_DWORD *)v18) = 0;
        }
        v19 = v106;
      }
      v27 = (unsigned int)v19;
      if ( v20 < (unsigned int)v19 )
        v27 = v20;
      sub_464310(v11 + *(_DWORD *)v18, *v100, v27);
      if ( v20 > (unsigned int)v106 )
      {
        v28 = sub_41CEE0(v100, (int)v106);
        v29 = *(_DWORD *)(v18 + 4);
        v30 = v20 - (_DWORD)v106;
        v96 = (int)v28;
        v31 = v29 != 0 ? v29 - 1 : 0;
        v32 = (unsigned int *)(v31 + v30 + 1);
        v99 = (int *)v31;
        v100 = v32;
        if ( (unsigned int)v32 > *(_DWORD *)(v18 + 8) )
        {
          v33 = sub_453B00(v18, *(void **)v18, v31 + v30 + 1, 1u);
          v31 = (unsigned int)v99;
          *(_DWORD *)v18 = v33;
          v32 = v100;
        }
        *(_DWORD *)(v18 + 4) = v32;
        *(_BYTE *)(v31 + v30 + *(_DWORD *)v18) = 0;
        if ( (unsigned int)v101 < v31 )
        {
          sub_464310((unsigned int)&v101[*(_DWORD *)v18 + v30], (unsigned int)&v101[*(_DWORD *)v18], v31 - (_DWORD)v101);
          v31 = (unsigned int)v101;
        }
        sub_464310(v31 + *(_DWORD *)v18, v96, v30);
      }
      sub_41BC20(v87);
      return 0;
    }
    if ( *v7 != 10 )
      return sub_45CC20(1568);
    v7 = sub_4239C0(v7, 0);
    v106 = (int ***)v7;
    if ( !v7 )
      return sub_45C9E0();
  }
  if ( (a7 & 1) != 0 )
  {
    sub_453D50(a2, v107, 32, "%u", v102);
    return sub_424EF0((int)v7, (const char *)v107, a6, 0);
  }
  v98 = nullptr;
  v34 = (char **)sub_41EF50(a1, (int)a6, 1u);
  *v34 = (char *)v34;
  v34[1] = (char *)v34;
  v34[2] = (char *)v34;
  *((_WORD *)v34 + 6) = 257;
  v97 = v34;
  v35 = v101;
  v108 = 1;
  if ( *v101 == 5 )
  {
    v99 = *((int **)v101 + 2);
    v36 = v99;
    sub_401340(&v91, "0");
    v37 = (unsigned int *)sub_41C640(v36, &v103, (int)&v91)[2];
    v100 = v37;
    sub_401400((void **)&v91);
    if ( v37 != (unsigned int *)*v36 )
    {
      do
      {
        v38 = (__m128i *)MultiByteStr;
        if ( v37[5] )
          v38 = (__m128i *)v37[4];
        if ( !sub_420BF0(a1, v38->m128i_i8) )
          break;
        sub_453D70(a1, v38, "%u", &v101);
        v39 = (char *)(v37 + 8);
        sub_408C10((int *)&v97, &v103, (unsigned int *)&v101);
        v40 = v105;
        if ( *(_BYTE *)(v105 + 13) || (unsigned int)v101 < *(_DWORD *)(v105 + 16) )
        {
          if ( v98 == (char *)89478485 )
            goto LABEL_124;
          v41 = v97;
          v94 = &v97;
          LOBYTE(v108) = 2;
          v95 = 0;
          v42 = sub_4627C2(0x30u);
          a2 = 0;
          LOBYTE(v108) = 1;
          v95 = 0;
          v42[4] = v101;
          *((_BYTE *)v42 + 24) = 2;
          v83 = v104;
          *((_OWORD *)v42 + 2) = 0;
          *v42 = v41;
          v79 = v103;
          v42[1] = v41;
          v42[2] = v41;
          *((_WORD *)v42 + 6) = 0;
          v40 = sub_403C10(&v97, v79, v83, (int)v42);
        }
        sub_423670((char *)(v40 + 24), v39);
        sub_40B5E0((int *)&v100);
        v37 = v100;
      }
      while ( v100 != (unsigned int *)*v99 );
    }
    v34 = v97;
  }
  else
  {
    if ( *v101 != 7 )
    {
      v78 = sub_45CC20(1568);
      sub_41C250(&v97, (int)&v97, v97[1]);
      sub_4627F2(v97);
      return v78;
    }
    v51 = nullptr;
    while ( 1 )
    {
      v52 = *((_DWORD *)v35 + 3);
      v96 = (int)v51;
      if ( (unsigned int)v51 >= ((v52 - 1) & (unsigned int)-(v52 != 0)) )
        break;
      v100 = v51;
      sub_408C10((int *)&v97, &v103, (unsigned int *)&v100);
      v53 = v105;
      if ( *(_BYTE *)(v105 + 13) || (unsigned int)v51 < *(_DWORD *)(v105 + 16) )
      {
        if ( v98 == (char *)89478485 )
LABEL_124:
          sub_403E20();
        v94 = &v97;
        LOBYTE(v108) = 5;
        v54 = sub_4627C2(0x30u);
        a2 = 0;
        LOBYTE(v108) = 1;
        v95 = 0;
        v54[4] = v100;
        *((_BYTE *)v54 + 24) = 2;
        v84 = v104;
        *((_OWORD *)v54 + 2) = 0;
        *v54 = v34;
        v80 = v103;
        v54[1] = v34;
        v54[2] = v34;
        *((_WORD *)v54 + 6) = 0;
        v53 = sub_403C10(&v97, v80, v84, (int)v54);
      }
      v55 = v53 + 24;
      v99 = (int *)v55;
      if ( *((_DWORD *)v101 + 3) || v51 )
        v56 = (char *)v51 + *((_DWORD *)v101 + 2);
      else
        v56 = &byte_48BE67;
      sub_423B70(v55);
      v57 = v99;
      *(_BYTE *)v99 = 7;
      v57 += 2;
      v99 = v57;
      *v57 = 0;
      v57[1] = 0;
      v57[2] = 0;
      LOBYTE(v108) = 8;
      v58 = sub_453B00((int)v57, nullptr, 2u, 1u);
      *v57 = (int)v58;
      v57[1] = 2;
      *v58 = *v56;
      v59 = (_DWORD *)*v57;
      LOBYTE(v108) = 1;
      v51 = (unsigned int *)(v96 + 1);
      *((_BYTE *)v59 + 1) = 0;
      v34 = v97;
      v35 = v101;
    }
  }
  v43 = v102;
  v44 = (int *)v106[2];
  v45 = nullptr;
  if ( (int)a5 - v102 >= 0 )
    v45 = (char *)a5 - v102;
  v106 = (int ***)v106[2];
  v96 = v98 - v45;
  if ( v98 != v45 )
  {
    v94 = nullptr;
    v95 = 0;
    v46 = sub_4627C2(0x38u);
    *v46 = v46;
    v46[1] = v46;
    v46[2] = v46;
    *((_WORD *)v46 + 6) = 257;
    v94 = (char ***)v46;
    v103 = nullptr;
    v104 = 0;
    v105 = 0;
    LOBYTE(v108) = 11;
    v103 = sub_453B00((int)&v103, nullptr, 2u, 1u);
    v104 = 2;
    *v103 = 48;
    v103[1] = 0;
    v47 = sub_41C640(v44, &v91, (int)&v103)[2];
    v101 = (char *)v47;
    LOBYTE(v108) = 12;
    if ( v103 )
    {
      v104 = 0;
      sub_453A20(v103);
    }
    LOBYTE(v108) = 10;
    while ( (int **)v47 != *v106 )
    {
      v48 = (__m128i *)MultiByteStr;
      if ( *(_DWORD *)(v47 + 20) )
        v48 = *(__m128i **)(v47 + 16);
      v49 = v48->m128i_i8[0];
      v50 = v48;
      v100 = (unsigned int *)v48;
      if ( !v49 )
        break;
      if ( v49 == 48 )
      {
        if ( v48->m128i_i8[1] )
          break;
      }
      else
      {
        v60 = v49 < 0;
        do
        {
          if ( v60 || !sub_46B760(a1, (unsigned __int8)v49) )
            goto LABEL_104;
          v49 = v50->m128i_i8[1];
          v50 = (__m128i *)((char *)v50 + 1);
          v60 = v49 < 0;
        }
        while ( v49 );
        v48 = (__m128i *)v100;
      }
      sub_453D70(a1, v48, "%u", &v99);
      if ( (unsigned int)v99 >= v102 )
      {
        if ( v99 >= a5 )
        {
          sub_453D50(a2, v107, 32, "%u", (char *)v99 + v96);
          v61 = nullptr;
          v103 = nullptr;
          v104 = 0;
          v105 = 0;
          LOBYTE(v108) = 13;
          v62 = strlen((const char *)v107);
          v63 = v62 + 1;
          if ( v62 != -1 )
          {
            v61 = sub_453B00((int)&v103, nullptr, v62 + 1, 1u);
            v63 = v62 + 1;
            v103 = v61;
          }
          v104 = v63;
          sub_464310((unsigned int)v61, (unsigned int)v107, v62);
          v103[v62] = 0;
          LOBYTE(v108) = 14;
          sub_41C640((int *)&v94, &v91, (int)&v103);
          v64 = v93;
          if ( *(_BYTE *)(v93 + 13) || (unsigned __int8)sub_41D0A0((int)&v103, v93 + 16) )
          {
            if ( v95 == 76695844 )
              goto LABEL_124;
            v65 = v94;
            v89 = (void **)&v94;
            LOBYTE(v108) = 15;
            v66 = (char *)sub_4627C2(0x38u);
            LOBYTE(v108) = 14;
            a2 = 0;
            v90 = 0;
            *((_DWORD *)v66 + 4) = v103;
            v103 = nullptr;
            *((_DWORD *)v66 + 5) = v104;
            v104 = 0;
            *((_DWORD *)v66 + 6) = v105;
            v105 = 0;
            v66[32] = 2;
            v85 = v92;
            *(_OWORD *)(v66 + 40) = 0;
            *(_DWORD *)v66 = v65;
            v81 = v91;
            *((_DWORD *)v66 + 1) = v65;
            *((_DWORD *)v66 + 2) = v65;
            *((_WORD *)v66 + 6) = 0;
            v64 = sub_403C10(&v94, v81, v85, (int)v66);
          }
          sub_423670((char *)(v64 + 32), (char *)(v47 + 32));
          LOBYTE(v108) = 19;
          if ( v103 )
          {
            v104 = 0;
            sub_453A20(v103);
            v103 = nullptr;
            v105 = 0;
          }
          LOBYTE(v108) = 10;
        }
        v47 = sub_41D380(v106, v47);
        v101 = (char *)v47;
      }
      else
      {
        sub_40B5E0((int *)&v101);
        v47 = (int)v101;
      }
    }
LABEL_104:
    sub_41C770((int *)v106, (int)*v94, (int)v94);
    sub_41C390(&v94, (int)&v94, (int *)v94[1]);
    sub_4627F2(v94);
    v34 = v97;
    v43 = v102;
    LOBYTE(v108) = 1;
  }
  v67 = *v34;
  if ( *v34 != (char *)v34 )
  {
    do
    {
      sub_453D50(a2, v107, 32, "%u", v43);
      v68 = nullptr;
      v103 = nullptr;
      v104 = 0;
      v105 = 0;
      LOBYTE(v108) = 21;
      v69 = strlen((const char *)v107);
      v70 = v69 + 1;
      if ( v69 != -1 )
      {
        v68 = sub_453B00((int)&v103, nullptr, v69 + 1, 1u);
        v70 = v69 + 1;
        v103 = v68;
      }
      v104 = v70;
      sub_464310((unsigned int)v68, (unsigned int)v107, v69);
      v103[v69] = 0;
      LOBYTE(v108) = 22;
      sub_41C640((int *)v106, &v91, (int)&v103);
      v71 = v93;
      if ( *(_BYTE *)(v93 + 13) || (unsigned __int8)sub_41D0A0((int)&v103, v93 + 16) )
      {
        if ( v106[1] == (int **)76695844 )
          goto LABEL_124;
        v72 = *v106;
        v89 = (void **)v106;
        LOBYTE(v108) = 23;
        v73 = (char *)sub_4627C2(0x38u);
        LOBYTE(v108) = 22;
        a2 = 0;
        v90 = 0;
        *((_DWORD *)v73 + 4) = v103;
        v103 = nullptr;
        *((_DWORD *)v73 + 5) = v104;
        v74 = (int *)v106;
        v104 = 0;
        *((_DWORD *)v73 + 6) = v105;
        v105 = 0;
        v73[32] = 2;
        v86 = v92;
        *(_OWORD *)(v73 + 40) = 0;
        *(_DWORD *)v73 = v72;
        v82 = v91;
        *((_DWORD *)v73 + 1) = v72;
        *((_DWORD *)v73 + 2) = v72;
        *((_WORD *)v73 + 6) = 0;
        v71 = sub_403C10(v74, v82, v86, (int)v73);
      }
      sub_423670((char *)(v71 + 32), v67 + 24);
      LOBYTE(v108) = 27;
      if ( v103 )
      {
        v104 = 0;
        sub_453A20(v103);
        v103 = nullptr;
        v105 = 0;
      }
      v75 = *((char **)v67 + 2);
      LOBYTE(v108) = 1;
      if ( v75[13] )
      {
        for ( i = *((_DWORD *)v67 + 1); !*(_BYTE *)(i + 13); i = *(_DWORD *)(i + 4) )
        {
          if ( v67 != *(char **)(i + 8) )
            break;
          v67 = (char *)i;
        }
        v67 = (char *)i;
      }
      else
      {
        v67 = v75;
        for ( j = *(char **)v75; !j[13]; j = *(char **)j )
          v67 = j;
      }
      v34 = v97;
      v43 = ++v102;
    }
    while ( v67 != (char *)v97 );
  }
  sub_41C250(&v97, (int)&v97, v34[1]);
  sub_4627F2(v97);
  return 0;
}
// 48BE67: using guessed type char byte_48BE67;
