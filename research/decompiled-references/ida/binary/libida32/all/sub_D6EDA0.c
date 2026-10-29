__int64 __fastcall sub_D6EDA0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // ebp
  int v8; // edx
  __int64 v9; // rsi
  __int64 v10; // r13
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // r14d
  __int64 v15; // rbp
  unsigned __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r8
  unsigned int v23; // r15d
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned __int8 *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rax
  unsigned __int8 *v33; // rax
  unsigned __int8 v34; // dl
  bool v35; // al
  __int64 v36; // rcx
  __int64 v37; // r8
  unsigned __int64 *v38; // rax
  __int64 v39; // rdx
  unsigned __int64 v40; // rax
  bool v41; // zf
  __int64 *v42; // rax
  unsigned int *v43; // rax
  unsigned int v44; // edx
  signed int *v45; // rax
  unsigned __int16 *v46; // rax
  unsigned __int16 v47; // dx
  bool v48; // zf
  __int16 *v49; // rax
  __int16 v50; // ax
  unsigned __int8 *v51; // rax
  unsigned __int8 v52; // dl
  bool v53; // zf
  char *v54; // rax
  char v55; // al
  unsigned __int8 v56; // al
  unsigned __int8 v57; // dl
  bool v59; // [rsp+0h] [rbp-178h]
  __int64 v60; // [rsp+8h] [rbp-170h]
  int v61; // [rsp+18h] [rbp-160h]
  int v62; // [rsp+1Ch] [rbp-15Ch]
  __int64 v63; // [rsp+30h] [rbp-148h]
  __int64 v64; // [rsp+48h] [rbp-130h]
  __int64 v65; // [rsp+48h] [rbp-130h]
  unsigned __int64 v66; // [rsp+48h] [rbp-130h]
  __int64 v67; // [rsp+48h] [rbp-130h]
  unsigned int v68; // [rsp+48h] [rbp-130h]
  signed int v69; // [rsp+48h] [rbp-130h]
  unsigned int v70; // [rsp+48h] [rbp-130h]
  signed __int16 v71; // [rsp+48h] [rbp-130h]
  unsigned __int8 v72; // [rsp+48h] [rbp-130h]
  char v73; // [rsp+48h] [rbp-130h]
  unsigned __int8 *v74; // [rsp+48h] [rbp-130h]
  __int64 v75; // [rsp+50h] [rbp-128h]
  __int64 v76; // [rsp+50h] [rbp-128h]
  int v77; // [rsp+58h] [rbp-120h]
  unsigned __int8 v78; // [rsp+5Fh] [rbp-119h]
  __m128i v79; // [rsp+60h] [rbp-118h] BYREF
  __m128i v80; // [rsp+70h] [rbp-108h] BYREF
  _QWORD v81[3]; // [rsp+80h] [rbp-F8h] BYREF
  int v82; // [rsp+98h] [rbp-E0h]
  __int64 v83; // [rsp+A0h] [rbp-D8h]
  int v84; // [rsp+A8h] [rbp-D0h]
  _QWORD v85[3]; // [rsp+B0h] [rbp-C8h] BYREF
  int v86; // [rsp+C8h] [rbp-B0h]
  __int64 v87; // [rsp+D0h] [rbp-A8h]
  int v88; // [rsp+D8h] [rbp-A0h]
  unsigned int v89[8]; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v90; // [rsp+100h] [rbp-78h]
  void *v91; // [rsp+110h] [rbp-68h] BYREF
  unsigned int v92; // [rsp+118h] [rbp-60h]
  int v93; // [rsp+128h] [rbp-50h]
  __int64 v94; // [rsp+130h] [rbp-48h]

  v6 = a4;
  if ( (unsigned int)(a4 - 1246) > 1 && (unsigned int)(a4 - 1489) > 1 )
  {
    v60 = -1;
  }
  else
  {
    v8 = 13;
    v9 = *(_QWORD *)(a3 + 8 * (((*(_BYTE *)(a3 + 2) & 8) != 0) + 1LL) + 48);
    if ( (*(_BYTE *)(v9 + 1) & 6) == 0 )
      v8 = sub_D66A20(a1[23], v9, 13, a4, a5);
    sub_D67460((__int64)&v91, a1[22], v8);
    if ( v92 <= 0x40 )
    {
      v60 = (__int64)v91;
    }
    else
    {
      v60 = *(_QWORD *)v91;
      operator delete[](v91);
    }
  }
  v10 = a1[22];
  sub_DFDA20(v10, 48);
  sub_DFF520(&v91);
  sub_DFDA50(v10, 48);
  v11 = a1[22];
  sub_DFDA20(v11, 48);
  sub_DFF520(v89);
  sub_DFDA50(v11, 48);
  if ( v6 == 1236 || v6 == 1247 || ((v6 - 1486) & 0xFFFFFFFB) == 0 )
    sub_D66F80((__int64)a1, a2, v6);
  if ( v60 )
  {
    if ( !(unsigned __int8)sub_DA4680(a1, a2, v89, 0)
      || (LOBYTE(v14) = sub_DA4680(a1, a2, &v91, 0), !(_BYTE)v14)
      || !v89[6] && v90 && *(_BYTE *)(*(_QWORD *)(v90 + 32) + 61LL)
      || !v93 && v94 && *(_BYTE *)(*(_QWORD *)(v94 + 32) + 61LL) )
    {
      v14 = 0;
    }
    else
    {
      if ( ((v6 - 1486) & 0xFFFFFFFB) != 0 )
        LOBYTE(v14) = ((v6 - 1485) & 0xFFFFFFFB) == 0;
      v15 = a1[23];
      v16 = sub_D66E00((__int64)v89, a2);
      v17 = v15;
      v18 = 0;
      v77 = sub_CC2440(v17, v16, v19, v20, v21);
      v61 = sub_CDA8F0(v89);
      v63 = a3;
      v62 = sub_CDA8F0((unsigned int *)&v91);
      while ( 1 )
      {
        sub_CDA6F0((__int64)v85, (__int64)v89, (unsigned int)(v61 + v18));
        sub_CDA6F0((__int64)v81, (__int64)&v91, (unsigned int)(v62 + v18));
        if ( !(unsigned __int8)sub_DA4EC0(a1, a2, v85, 0) || (v23 = sub_DA4EC0(a1, a2, v81, 0), !(_BYTE)v23) )
        {
          v14 = 0;
          goto LABEL_48;
        }
        if ( (_BYTE)v14 )
          break;
        v25 = v85[0];
        v26 = v87;
        if ( !v86
          && (v75 = v87, v64 = v85[0], v27 = sub_CDA220((__int64)v85), v25 = v64, v26 = v75, *(_BYTE *)(v27 + 60))
          && v64 == v88 )
        {
          v28 = (unsigned __int8 *)(v75 + v64 + 72);
        }
        else
        {
          v28 = (unsigned __int8 *)(v26 + v25 + 40);
        }
        v29 = *v28;
        v30 = v81[0];
        v31 = v83;
        if ( !v82
          && (v78 = *v28,
              v76 = v83,
              v65 = v81[0],
              v32 = sub_CDA220((__int64)v81),
              v30 = v65,
              v31 = v76,
              v29 = v78,
              *(_BYTE *)(v32 + 60))
          && v65 == v84 )
        {
          v33 = (unsigned __int8 *)(v76 + v65 + 72);
        }
        else
        {
          v33 = (unsigned __int8 *)(v31 + v30 + 40);
        }
        v34 = *v33;
        if ( (unsigned __int8)v29 > *v33 )
        {
          v14 = v23;
LABEL_97:
          sub_D6ED60(a1, 1u, *(_QWORD *)(v63 + 8), v29, v22);
          goto LABEL_48;
        }
        if ( (unsigned __int8)v29 < v34 )
        {
          v14 = v23;
LABEL_73:
          sub_D6ED60(a1, 0xFFFFFFFF, *(_QWORD *)(v63 + 8), v29, v22);
          goto LABEL_48;
        }
        v35 = v34 == 0 || (_BYTE)v29 == 0;
        if ( v35 )
        {
LABEL_47:
          v59 = v35;
          sub_D6ED60(a1, 0, *(_QWORD *)(v63 + 8), v29, v22);
          v14 = v59;
          goto LABEL_48;
        }
LABEL_41:
        ++v18;
        sub_DFF560(v81);
        sub_DFF560(v85);
        if ( v60 == v18 )
        {
          v14 = v23;
          sub_D6ED60(a1, 0, *(_QWORD *)(v63 + 8), v36, v37);
          goto LABEL_30;
        }
      }
      switch ( v77 )
      {
        case 0:
          v73 = *(_BYTE *)sub_CE8890((__int64)v85);
          v54 = (char *)sub_CE8890((__int64)v81);
          v52 = v73;
          v55 = *v54;
          if ( v73 > v55 )
            goto LABEL_96;
          if ( v73 < v55 )
            goto LABEL_72;
          v53 = v55 == 0;
          goto LABEL_85;
        case 1:
          v72 = *(_BYTE *)sub_CE8AA0((__int64)v85);
          v51 = (unsigned __int8 *)sub_CE8AA0((__int64)v81);
          v29 = v72;
          v52 = *v51;
          if ( v72 > *v51 )
            goto LABEL_96;
          if ( v72 < v52 )
            goto LABEL_72;
          v53 = v72 == 0;
LABEL_85:
          v35 = v52 == 0 || v53;
          if ( !v35 )
            goto LABEL_41;
          goto LABEL_47;
        case 2:
          v71 = *(_WORD *)sub_CE8E90((__int64)v85);
          v49 = (__int16 *)sub_CE8E90((__int64)v81);
          v47 = v71;
          v50 = *v49;
          if ( v71 > v50 )
            goto LABEL_96;
          if ( v71 < v50 )
            goto LABEL_72;
          v48 = v50 == 0;
          goto LABEL_77;
        case 3:
          v70 = *(unsigned __int16 *)sub_CE90A0((__int64)v85);
          v46 = (unsigned __int16 *)sub_CE90A0((__int64)v81);
          v29 = v70;
          v47 = *v46;
          if ( (unsigned __int16)v70 > *v46 )
            goto LABEL_96;
          if ( (unsigned __int16)v70 < v47 )
            goto LABEL_72;
          v48 = (_WORD)v70 == 0;
LABEL_77:
          v35 = v47 == 0 || v48;
          if ( !v35 )
            goto LABEL_41;
          goto LABEL_47;
        case 4:
          v69 = *(_DWORD *)sub_CE9490((__int64)v85);
          v45 = (signed int *)sub_CE9490((__int64)v81);
          v29 = (unsigned int)v69;
          v44 = *v45;
          if ( v69 > *v45 )
            goto LABEL_96;
          if ( v69 < (int)v44 )
            goto LABEL_72;
          goto LABEL_68;
        case 5:
          v68 = *(_DWORD *)sub_CE96A0((__int64)v85);
          v43 = (unsigned int *)sub_CE96A0((__int64)v81);
          v29 = v68;
          v44 = *v43;
          if ( v68 > *v43 )
            goto LABEL_96;
          if ( v68 < v44 )
            goto LABEL_72;
LABEL_68:
          v35 = v44 == 0 || (_DWORD)v29 == 0;
          if ( !v35 )
            goto LABEL_41;
          goto LABEL_47;
        case 6:
          v67 = *(_QWORD *)sub_CE9C80((__int64)v85);
          v42 = (__int64 *)sub_CE9C80((__int64)v81);
          v29 = v67;
          v39 = *v42;
          if ( v67 > *v42 )
            goto LABEL_96;
          if ( v67 < *v42 )
            goto LABEL_72;
          v41 = v67 == 0;
          goto LABEL_46;
        case 7:
          v66 = *(_QWORD *)sub_CE9E90((__int64)v85);
          v38 = (unsigned __int64 *)sub_CE9E90((__int64)v81);
          v39 = v66;
          v40 = *v38;
          if ( v66 > v40 )
            goto LABEL_96;
          if ( v66 < v40 )
            goto LABEL_72;
          v41 = v40 == 0;
LABEL_46:
          v35 = v39 == 0 || v41;
          if ( v35 )
            goto LABEL_47;
          goto LABEL_41;
        case 8:
          v79 = _mm_loadu_si128((const __m128i *)sub_CEA4A0((__int64)v85));
          v80 = _mm_loadu_si128((const __m128i *)sub_CEA4A0((__int64)v81));
          if ( (unsigned __int8)sub_D68620((__int64)&v79, (__int64)&v80) )
            goto LABEL_96;
          if ( (unsigned __int8)sub_D68730((__int64)&v79, (void *)v80.m128i_i64[0], v80.m128i_u32[2]) )
            goto LABEL_72;
          if ( !(unsigned __int8)sub_D0B8A0((__int64)&v79) && !(unsigned __int8)sub_D0B8A0((__int64)&v80) )
            goto LABEL_41;
          goto LABEL_57;
        case 9:
          v79 = _mm_loadu_si128((const __m128i *)sub_CEA4F0((__int64)v85));
          v80 = _mm_loadu_si128((const __m128i *)sub_CEA4F0((__int64)v81));
          if ( (unsigned __int8)sub_D68850(v79.m128i_i64, v80.m128i_i64) )
            goto LABEL_96;
          if ( (unsigned __int8)sub_D689B0(v79.m128i_i64, v80.m128i_i64[0], v80.m128i_u32[2]) )
            goto LABEL_72;
          if ( (unsigned __int8)sub_D29E30(v79.m128i_i64) || (unsigned __int8)sub_D29E30(v80.m128i_i64) )
            goto LABEL_57;
          goto LABEL_41;
        case 10:
          v74 = (unsigned __int8 *)sub_CEAA70((__int64)v85);
          v56 = *(_BYTE *)sub_CEAA70((__int64)v81);
          v57 = *v74;
          if ( *v74 > v56 )
          {
LABEL_96:
            v14 = (unsigned __int8)v14;
            goto LABEL_97;
          }
          if ( v57 < v56 )
          {
LABEL_72:
            v14 = (unsigned __int8)v14;
            goto LABEL_73;
          }
          if ( v57 && v56 )
            goto LABEL_41;
LABEL_57:
          v14 = (unsigned __int8)v14;
          sub_D6ED60(a1, 0, *(_QWORD *)(v63 + 8), v29, v22);
          break;
      }
LABEL_48:
      sub_DFF560(v81);
      sub_DFF560(v85);
    }
  }
  else
  {
    v14 = 1;
    sub_D6ED60(a1, 0, *(_QWORD *)(a3 + 8), v12, v13);
  }
LABEL_30:
  sub_DFF560(v89);
  sub_DFF560(&v91);
  return v14;
}

