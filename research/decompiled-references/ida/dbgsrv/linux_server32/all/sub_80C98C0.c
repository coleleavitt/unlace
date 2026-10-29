/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C98C0
// Address: 0x080C98C0

//----- (080C98C0) --------------------------------------------------------
int __cdecl sub_80C98C0(char **a1, _OWORD *a2)
{
  char *i; // esi
  char v3; // di
  char *v4; // ebp
  int v5; // edx
  unsigned __int8 v6; // al
  int v7; // edi
  int v8; // esi
  const __m128i *v9; // edi
  __m128i v10; // xmm0
  int v11; // ebx
  _BYTE *v12; // esi
  __int16 v13; // cx
  _BYTE *v14; // esi
  int v15; // ebx
  __int16 v16; // cx
  unsigned __int16 *v17; // ebx
  unsigned int v18; // esi
  _BYTE *v19; // ecx
  int v20; // edx
  int v21; // edi
  unsigned int v22; // edx
  int v23; // edx
  _BYTE *v24; // ebx
  __int16 v25; // cx
  __m128i v26; // xmm0
  bool v27; // zf
  int v28; // eax
  int v29; // ebp
  int v30; // edi
  __m128i *v31; // edx
  int *v32; // esi
  int *v33; // ecx
  int result; // eax
  int v35; // eax
  int v36; // ebx
  char v37; // al
  int v38; // ecx
  _BYTE *v39; // ebx
  __int16 v40; // dx
  int v41; // ecx
  __m128i v42; // xmm0
  _BYTE *v43; // esi
  __int16 v44; // dx
  _BYTE *v45; // esi
  int v46; // ecx
  __int16 v47; // dx
  unsigned __int16 *v48; // ecx
  _BYTE *v49; // edx
  unsigned int v50; // esi
  int v51; // edi
  int v52; // ebp
  unsigned int v53; // edi
  unsigned int v54; // esi
  unsigned __int16 *v55; // ecx
  _BYTE *v56; // edx
  int v57; // edi
  int v58; // ebp
  unsigned int v59; // edi
  unsigned int v60; // ecx
  char *v61; // edx
  unsigned __int8 j; // al
  char *v63; // edx
  int v64; // esi
  int v65; // eax
  char *v66; // ebx
  int v67; // edx
  int v68; // eax
  __m128i *v69; // [esp+0h] [ebp-104h]
  __int64 v70; // [esp+8h] [ebp-FCh]
  int *v71; // [esp+8h] [ebp-FCh]
  char *v72; // [esp+8h] [ebp-FCh]
  __m128i *v73; // [esp+Ch] [ebp-F8h]
  int v74; // [esp+10h] [ebp-F4h]
  int v75; // [esp+10h] [ebp-F4h]
  __int16 v76; // [esp+10h] [ebp-F4h]
  char v77; // [esp+10h] [ebp-F4h]
  int v78; // [esp+1Ch] [ebp-E8h]
  int v79; // [esp+20h] [ebp-E4h]
  __int16 v80; // [esp+26h] [ebp-DEh]
  char v81; // [esp+28h] [ebp-DCh]
  int v82; // [esp+28h] [ebp-DCh]
  char *v83; // [esp+30h] [ebp-D4h]
  int v84; // [esp+34h] [ebp-D0h]
  __m128i si128; // [esp+38h] [ebp-CCh] BYREF
  _BYTE v86[22]; // [esp+50h] [ebp-B4h] BYREF
  _BYTE v87[22]; // [esp+66h] [ebp-9Eh] BYREF
  __int16 v88; // [esp+7Ch] [ebp-88h] BYREF
  unsigned __int16 v89; // [esp+7Eh] [ebp-86h]
  _BYTE v90[82]; // [esp+92h] [ebp-72h] BYREF
  unsigned int v91; // [esp+E4h] [ebp-20h]

  v91 = __readgsdword(0x14u);
  *a2 = 0;
  for ( i = *a1; ; ++i )
  {
    v3 = *i;
    if ( (unsigned int)*i > 0x7F )
      break;
    if ( !isspace(*i) )
    {
      if ( !v3 )
      {
        result = 3;
        goto LABEL_47;
      }
      break;
    }
  }
  *a1 = i;
  v4 = v90;
  sub_80D0740((unsigned int)v90, i, 80);
  v5 = v90[0];
  memset(v86, 0, sizeof(v86));
  v74 = v90[0];
  v6 = v90[0];
  if ( !v90[0] )
  {
    v79 = 0;
    v81 = 0;
    v80 = 0;
    goto LABEL_36;
  }
  v81 = 0;
  v7 = 0;
  v8 = 0;
  v78 = 0;
  v70 = 0;
  v80 = 0;
LABEL_5:
  if ( (unsigned __int8)(v6 - 48) > 9u )
    goto LABEL_6;
  if ( !v7 )
    v7 = 1;
  v35 = v8;
  while ( 1 )
  {
LABEL_53:
    while ( 1 )
    {
      v76 = v5 - 48;
      if ( v5 == 48 )
        break;
      if ( *(_WORD *)&v86[4] )
      {
        v81 = 1;
        goto LABEL_56;
      }
LABEL_68:
      v38 = 0;
      v78 += v70;
      v39 = &v86[20];
      do
      {
        if ( *(__int16 *)v39 < 0 )
          v38 |= 1u;
        v40 = 2 * *(_WORD *)v39;
        if ( (v38 & 2) != 0 )
          v40 |= 1u;
        v39 -= 2;
        v38 *= 2;
        *((_WORD *)v39 + 1) = v40;
      }
      while ( v39 != &v86[2] );
      v41 = 0;
      v42 = _mm_loadu_si128((const __m128i *)v86);
      *(_DWORD *)&v87[16] = *(_DWORD *)&v86[16];
      *(_WORD *)&v87[20] = 0;
      v43 = &v87[20];
      v83 = v4;
      *(__m128i *)v87 = v42;
      do
      {
        if ( *(__int16 *)v43 < 0 )
          v41 |= 1u;
        v44 = 2 * *(_WORD *)v43;
        if ( (v41 & 2) != 0 )
          v44 |= 1u;
        v43 -= 2;
        v41 *= 2;
        *((_WORD *)v43 + 1) = v44;
      }
      while ( v43 != &v87[2] );
      v45 = &v87[20];
      v46 = 0;
      do
      {
        if ( *(__int16 *)v45 < 0 )
          v46 |= 1u;
        v47 = 2 * *(_WORD *)v45;
        if ( (v46 & 2) != 0 )
          v47 |= 1u;
        v45 -= 2;
        v46 *= 2;
        *((_WORD *)v45 + 1) = v47;
      }
      while ( v45 != &v87[2] );
      v48 = (unsigned __int16 *)&v86[20];
      v49 = &v87[20];
      v84 = v7;
      v50 = 0;
      do
      {
        v51 = *(unsigned __int16 *)v49;
        v52 = *v48;
        v49 -= 2;
        --v48;
        v53 = v50 + v52 + v51;
        v48[1] = v53;
        v50 = HIWORD(v53);
      }
      while ( v49 != &v87[2] );
      v54 = 0;
      memset(v87, 0, sizeof(v87));
      v55 = (unsigned __int16 *)&v86[20];
      *(_WORD *)&v87[18] = v76;
      v56 = &v87[20];
      do
      {
        v57 = *(unsigned __int16 *)v56;
        v58 = *v55;
        v56 -= 2;
        --v55;
        v59 = v54 + v58 + v57;
        v55[1] = v59;
        v54 = HIWORD(v59);
      }
      while ( v56 != &v87[2] );
      v4 = v83;
      v7 = v84;
LABEL_56:
      v5 = *++v4;
      ++HIDWORD(v70);
      if ( !v5 )
        goto LABEL_93;
      if ( (unsigned __int8)(v5 - 48) > 9u )
      {
        v8 = v35;
        v6 = v5;
        goto LABEL_6;
      }
    }
    if ( v70 )
    {
      if ( *(_WORD *)&v86[4] )
        goto LABEL_56;
      goto LABEL_68;
    }
    v5 = *++v4;
    if ( !v5 )
      goto LABEL_93;
    if ( (unsigned __int8)(v5 - 48) > 9u )
      break;
    v70 = 0;
  }
  v8 = v35;
  v6 = v5;
  v70 = 0;
  while ( 1 )
  {
LABEL_6:
    if ( v5 == 46 )
    {
      if ( (_DWORD)v70 )
        goto LABEL_94;
      v60 = *v4;
      v61 = v4;
      for ( j = *v4; v60 <= 0x7F; j = v60 )
      {
        if ( v60 - 48 > 9 )
          break;
        v60 = *++v61;
      }
      v72 = v61;
      if ( tolower(j) == 101 )
      {
        if ( !v7 && v4 == v72 )
          goto LABEL_94;
      }
      else
      {
        *v72 = 0;
      }
      if ( v90 < v72 && *(v72 - 1) == 48 )
      {
        v63 = v72 - 1;
        do
        {
          *v63 = 122;
          if ( v63 == v90 )
            break;
          --v63;
        }
        while ( *v63 == 48 );
        v8 = 1;
      }
      v5 = *++v4;
      v6 = v5;
      if ( v7 )
      {
        if ( !v5 )
          goto LABEL_93;
        if ( (unsigned __int8)(v5 - 48) <= 9u )
          goto LABEL_128;
        if ( v5 == 46 )
          goto LABEL_94;
        LODWORD(v70) = 1;
      }
      else
      {
        if ( !v5 )
          goto LABEL_93;
        if ( (unsigned __int8)(v5 - 48) <= 9u )
        {
          v7 = 1;
LABEL_128:
          LODWORD(v70) = 1;
          v35 = v8;
          goto LABEL_53;
        }
        if ( v5 == 46 )
          goto LABEL_94;
        LODWORD(v70) = 1;
        v7 = 1;
      }
    }
    if ( v5 == 122 )
    {
      if ( !v8 )
        goto LABEL_94;
      v5 = *++v4;
      v6 = v5;
      if ( v5 )
        goto LABEL_5;
LABEL_93:
      v75 = v5;
LABEL_11:
      v74 = v75 - v78;
      v79 = v4 - v90;
      if ( v74 > 0 )
      {
        v9 = (const __m128i *)v86;
        do
        {
          if ( *(_WORD *)&v86[4] )
            break;
          v10 = _mm_loadu_si128(v9);
          v11 = 0;
          v12 = &v87[20];
          *(_DWORD *)&v87[16] = v9[1].m128i_i32[0];
          *(_WORD *)&v87[20] = 0;
          *(__m128i *)v87 = v10;
          do
          {
            if ( *(__int16 *)v12 < 0 )
              v11 |= 1u;
            v13 = 2 * *(_WORD *)v12;
            if ( (v11 & 2) != 0 )
              v13 |= 1u;
            v12 -= 2;
            v11 *= 2;
            *((_WORD *)v12 + 1) = v13;
          }
          while ( v12 != &v87[2] );
          v14 = &v87[20];
          v15 = 0;
          do
          {
            if ( *(__int16 *)v14 < 0 )
              v15 |= 1u;
            v16 = 2 * *(_WORD *)v14;
            if ( (v15 & 2) != 0 )
              v16 |= 1u;
            v14 -= 2;
            v15 *= 2;
            *((_WORD *)v14 + 1) = v16;
          }
          while ( v14 != &v87[2] );
          v17 = (unsigned __int16 *)&v87[20];
          v18 = 0;
          v19 = &v86[20];
          v73 = (__m128i *)v9;
          do
          {
            v20 = *(unsigned __int16 *)v19;
            v21 = *v17;
            v19 -= 2;
            --v17;
            v22 = v18 + v21 + v20;
            v17[1] = v22;
            v18 = HIWORD(v22);
          }
          while ( v19 != &v86[2] );
          v23 = 0;
          v9 = v73;
          v24 = &v87[20];
          do
          {
            if ( *(__int16 *)v24 < 0 )
              v23 |= 1u;
            v25 = 2 * *(_WORD *)v24;
            if ( (v23 & 2) != 0 )
              v25 |= 1u;
            v24 -= 2;
            v23 *= 2;
            *((_WORD *)v24 + 1) = v25;
          }
          while ( v24 != &v87[2] );
          if ( *(_WORD *)&v87[4] )
            break;
          v26 = _mm_loadu_si128((const __m128i *)v87);
          v73[1].m128i_i32[0] = *(_DWORD *)&v87[16];
          v27 = v74-- == 1;
          *(_WORD *)&v86[20] = 0;
          *v73 = v26;
        }
        while ( !v27 );
      }
LABEL_36:
      v28 = sub_80C7F40((int)v86);
      if ( v28 > 112 )
      {
        memset(&v86[2], 0, 20);
        goto LABEL_60;
      }
      if ( !(unsigned __int8)sub_80C87C0((int)v86, v81, 0, 16494 - v28, 112) )
      {
LABEL_66:
        result = 2;
        goto LABEL_61;
      }
      v29 = *(unsigned __int16 *)&v86[2];
      if ( v74 )
      {
        v82 = 1;
        if ( v74 < 0 )
        {
          if ( -v74 > 4096 )
          {
            sub_80C8760((int)&qword_811CFF4 - 179540, &v88);
            v64 = v89;
            sub_80C8280((int)&v88, (int)v86);
            v29 = v29 + 0x3FFF - v64;
            v74 = -4096 - v74;
          }
          else
          {
            v74 = -v74;
          }
          v82 = -1;
        }
        v30 = 1;
        v31 = &si128;
        v32 = dword_80F1360;
        v33 = dword_80F1290;
        si128 = _mm_load_si128((const __m128i *)&xmmword_80DE2D0);
        do
        {
          if ( (v30 & v74) != 0 )
          {
            v71 = v33;
            v69 = v31;
            sub_80C9450((int)v31, (int)v32, v31);
            v33 = v71;
            v31 = v69;
          }
          v32 -= 4;
          v30 *= 2;
        }
        while ( v32 != v33 );
        sub_80C8760((int)v31, &v88);
        v36 = v89;
        if ( v82 == -1 )
        {
          v77 = sub_80C8280((int)&v88, (int)v86);
          v37 = sub_80C87C0((int)v86, v77, 0, v29 - v36 + 0x3FFF, 112);
LABEL_65:
          if ( !v37 )
            goto LABEL_66;
LABEL_60:
          *(_WORD *)v86 = v80;
          sub_80C8700(v86, (int)a2);
          result = 1;
          goto LABEL_61;
        }
        v29 = v29 + v89 - 16382;
        LOBYTE(v74) = sub_80C80C0((int)&v88, (int *)v86);
      }
      v37 = sub_80C87C0((int)v86, v74, 0, v29, 112);
      goto LABEL_65;
    }
    if ( ((v5 - 43) & 0xFFFFFFFD) != 0 )
      break;
    if ( v7 )
      goto LABEL_10;
    if ( v5 == 45 )
    {
      v5 = *++v4;
      v6 = v5;
      if ( !v5 )
      {
        v75 = 0;
        v80 = -1;
        goto LABEL_11;
      }
      if ( (unsigned __int8)(v5 - 48) <= 9u )
      {
        v7 = -1;
        v35 = v8;
        v80 = -1;
        goto LABEL_53;
      }
      v80 = -1;
    }
    else
    {
      v5 = *++v4;
      v6 = v5;
      if ( !v5 )
        goto LABEL_93;
      if ( (unsigned __int8)(v5 - 48) <= 9u )
      {
        v7 = -1;
        v35 = v8;
        goto LABEL_53;
      }
    }
    v7 = -1;
  }
  if ( tolower(v6) == 101 )
  {
    if ( v7 )
    {
      v65 = v4[1];
      v66 = v4 + 2;
      v67 = -1;
      if ( v65 != 45 )
      {
        if ( v65 != 43 )
          v66 = v4 + 1;
        v67 = 1;
      }
      if ( (unsigned __int8)(*v66 - 48) > 9u )
      {
        result = 3;
        v79 = v66 - v90;
        goto LABEL_61;
      }
      v68 = 0;
      while ( 1 )
      {
        v4 = v66 + 1;
        v68 = *v66 + 10 * v68 - 48;
        if ( (v68 & 0x8000) != 0 )
          break;
        if ( (unsigned __int8)(v66[1] - 48) > 9u )
        {
          v75 = v68;
          if ( v67 != -1 )
            goto LABEL_11;
          if ( v68 )
          {
            v75 = -v68;
            goto LABEL_11;
          }
          break;
        }
        ++v66;
      }
    }
LABEL_94:
    result = 3;
    v79 = v4 - v90;
    goto LABEL_61;
  }
  v79 = v4 - v90;
  result = 3;
  if ( v7 && (v7 != -1 || HIDWORD(v70)) )
  {
LABEL_10:
    v75 = 0;
    goto LABEL_11;
  }
LABEL_61:
  *a1 += v79;
LABEL_47:
  if ( v91 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 80DE2D0: using guessed type __int128 xmmword_80DE2D0;
// 80F1290: using guessed type int dword_80F1290[4];
// 80F1360: using guessed type int dword_80F1360[3];
// 811CFF4: using guessed type __int64 qword_811CFF4;
