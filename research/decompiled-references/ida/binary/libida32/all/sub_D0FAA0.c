__int64 __fastcall sub_D0FAA0(__int64 a1, int a2, unsigned int a3, _QWORD *a4)
{
  __int64 v6; // rbp
  __int64 v7; // rsi
  unsigned int v8; // ebp
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // r14
  _BYTE *v14; // rax
  __int64 v15; // rbp
  __int64 v16; // rsi
  __int64 v17; // rbp
  __int64 v18; // rsi
  __int64 v19; // r14
  _WORD *v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rsi
  __int64 v23; // rbp
  __int64 v24; // rsi
  __int64 v25; // r14
  _DWORD *v26; // rax
  __int64 v27; // rbp
  __int64 v28; // rsi
  __int64 v29; // rbp
  __int64 v30; // rsi
  __int64 v31; // r14
  _QWORD *v32; // rax
  __int64 v33; // rbp
  __int64 v34; // rsi
  __int64 v35; // rbp
  __int64 v36; // rsi
  __int64 v37; // r14
  const __m128i *v38; // r13
  __int64 v39; // rbp
  __int64 v40; // rsi
  __int64 v41; // r14
  const __m128i *v42; // r13
  __int64 v43; // rbp
  __int64 v44; // rsi
  __int64 v45; // rbp
  __int64 v46; // rsi
  __int64 v47; // r14
  __int64 v48; // rax
  __int64 v49; // rbp
  __int64 v50; // rsi
  __int64 v51; // r14
  const __m128i *v52; // r13
  __int64 v53; // rbp
  __int64 v54; // rsi
  __int64 v55; // r14
  __int64 v56; // r13
  __int64 v57; // rax
  _BYTE v58[48]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v59[88]; // [rsp+30h] [rbp-58h] BYREF

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v11 = *(_QWORD *)(a1 + 1232);
      v12 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_CE52D0((__int64)v58, v12);
      v8 = sub_DA8420(a1 + 384, v11, v58, 0);
      if ( !(_BYTE)v8 )
        goto LABEL_50;
      v13 = *(_QWORD *)(a1 + 560);
      sub_CDA6F0((__int64)v59, (__int64)v58, a3);
      v14 = (_BYTE *)sub_CE8890((__int64)v59);
      goto LABEL_43;
    case 1:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v15 = *(_QWORD *)(a1 + 1232);
      v16 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_CE52D0((__int64)v58, v16);
      v8 = sub_DA8420(a1 + 384, v15, v58, 0);
      if ( !(_BYTE)v8 )
        goto LABEL_50;
      v13 = *(_QWORD *)(a1 + 560);
      sub_CDA6F0((__int64)v59, (__int64)v58, a3);
      v14 = (_BYTE *)sub_CE8AA0((__int64)v59);
      goto LABEL_43;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v17 = *(_QWORD *)(a1 + 1232);
      v18 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_CE52D0((__int64)v58, v18);
      v8 = sub_DA8420(a1 + 384, v17, v58, 0);
      if ( !(_BYTE)v8 )
        goto LABEL_50;
      v19 = *(_QWORD *)(a1 + 560);
      sub_CDA6F0((__int64)v59, (__int64)v58, a3);
      v20 = (_WORD *)sub_CE8E90((__int64)v59);
      goto LABEL_19;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v21 = *(_QWORD *)(a1 + 1232);
      v22 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_CE52D0((__int64)v58, v22);
      v8 = sub_DA8420(a1 + 384, v21, v58, 0);
      if ( !(_BYTE)v8 )
        goto LABEL_50;
      v19 = *(_QWORD *)(a1 + 560);
      sub_CDA6F0((__int64)v59, (__int64)v58, a3);
      v20 = (_WORD *)sub_CE90A0((__int64)v59);
LABEL_19:
      *(_WORD *)sub_DFD980(v19, 8) = *v20;
      sub_DFF560(v59);
      goto LABEL_50;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v23 = *(_QWORD *)(a1 + 1232);
      v24 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_CE52D0((__int64)v58, v24);
      v8 = sub_DA8420(a1 + 384, v23, v58, 0);
      if ( !(_BYTE)v8 )
        goto LABEL_50;
      v25 = *(_QWORD *)(a1 + 560);
      sub_CDA6F0((__int64)v59, (__int64)v58, a3);
      v26 = (_DWORD *)sub_CE9490((__int64)v59);
      goto LABEL_26;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v27 = *(_QWORD *)(a1 + 1232);
      v28 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_CE52D0((__int64)v58, v28);
      v8 = sub_DA8420(a1 + 384, v27, v58, 0);
      if ( !(_BYTE)v8 )
        goto LABEL_50;
      v25 = *(_QWORD *)(a1 + 560);
      sub_CDA6F0((__int64)v59, (__int64)v58, a3);
      v26 = (_DWORD *)sub_CE96A0((__int64)v59);
LABEL_26:
      *(_DWORD *)sub_DFD980(v25, 8) = *v26;
      sub_DFF560(v59);
      goto LABEL_50;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v29 = *(_QWORD *)(a1 + 1232);
      v30 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_CE52D0((__int64)v58, v30);
      v8 = sub_DA8420(a1 + 384, v29, v58, 0);
      if ( !(_BYTE)v8 )
        goto LABEL_50;
      v31 = *(_QWORD *)(a1 + 560);
      sub_CDA6F0((__int64)v59, (__int64)v58, a3);
      v32 = (_QWORD *)sub_CE9C80((__int64)v59);
      goto LABEL_33;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v33 = *(_QWORD *)(a1 + 1232);
      v34 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_CE52D0((__int64)v58, v34);
      v8 = sub_DA8420(a1 + 384, v33, v58, 0);
      if ( !(_BYTE)v8 )
        goto LABEL_50;
      v31 = *(_QWORD *)(a1 + 560);
      sub_CDA6F0((__int64)v59, (__int64)v58, a3);
      v32 = (_QWORD *)sub_CE9E90((__int64)v59);
LABEL_33:
      *(_QWORD *)sub_DFD980(v31, 8) = *v32;
      sub_DFF560(v59);
      goto LABEL_50;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v35 = *(_QWORD *)(a1 + 1232);
      v36 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_CE52D0((__int64)v58, v36);
      v8 = sub_DA8420(a1 + 384, v35, v58, 0);
      if ( (_BYTE)v8 )
      {
        v37 = *(_QWORD *)(a1 + 560);
        sub_CDA6F0((__int64)v59, (__int64)v58, a3);
        v38 = (const __m128i *)sub_CEA4A0((__int64)v59);
        *(__m128i *)sub_DFD980(v37, 16) = _mm_loadu_si128(v38);
        sub_DFF560(v59);
      }
      goto LABEL_50;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v39 = *(_QWORD *)(a1 + 1232);
      v40 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_CE52D0((__int64)v58, v40);
      v8 = sub_DA8420(a1 + 384, v39, v58, 0);
      if ( (_BYTE)v8 )
      {
        v41 = *(_QWORD *)(a1 + 560);
        sub_CDA6F0((__int64)v59, (__int64)v58, a3);
        v42 = (const __m128i *)sub_CEA4F0((__int64)v59);
        *(__m128i *)sub_DFD980(v41, 16) = _mm_loadu_si128(v42);
        sub_DFF560(v59);
      }
      goto LABEL_50;
    case 10:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v43 = *(_QWORD *)(a1 + 1232);
      v44 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_CE52D0((__int64)v58, v44);
      v8 = sub_DA8420(a1 + 384, v43, v58, 0);
      if ( !(_BYTE)v8 )
        goto LABEL_50;
      v13 = *(_QWORD *)(a1 + 560);
      sub_CDA6F0((__int64)v59, (__int64)v58, a3);
      v14 = (_BYTE *)sub_CEAA70((__int64)v59);
LABEL_43:
      *(_BYTE *)sub_DFD980(v13, 8) = *v14;
      sub_DFF560(v59);
      goto LABEL_50;
    case 11:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v45 = *(_QWORD *)(a1 + 1232);
      v46 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_CE52D0((__int64)v58, v46);
      v8 = sub_DA8420(a1 + 384, v45, v58, 0);
      if ( (_BYTE)v8 )
      {
        v47 = *(_QWORD *)(a1 + 560);
        sub_CDA6F0((__int64)v59, (__int64)v58, a3);
        v48 = sub_CEB480((__int64)v59);
        sub_CE7D50(v47, v48);
        sub_DFF560(v59);
      }
      goto LABEL_50;
    case 12:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v49 = *(_QWORD *)(a1 + 1232);
      v50 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_CE52D0((__int64)v58, v50);
      v8 = sub_DA8420(a1 + 384, v49, v58, 0);
      if ( (_BYTE)v8 )
      {
        v51 = *(_QWORD *)(a1 + 560);
        sub_CDA6F0((__int64)v59, (__int64)v58, a3);
        v52 = (const __m128i *)sub_CEA540((__int64)v59);
        *(__m128i *)sub_DFD980(v51, 16) = _mm_loadu_si128(v52);
        sub_DFF560(v59);
      }
      goto LABEL_50;
    case 13:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v53 = *(_QWORD *)(a1 + 1232);
      v54 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_CE52D0((__int64)v58, v54);
      v8 = sub_DA8420(a1 + 384, v53, v58, 0);
      if ( (_BYTE)v8 )
      {
        v55 = *(_QWORD *)(a1 + 560);
        sub_CDA6F0((__int64)v59, (__int64)v58, a3);
        v56 = sub_CEACF0((__int64)v59);
        v57 = sub_DFD980(v55, 48);
        sub_DFF4A0(v57, v56);
        sub_DFF560(v59);
      }
      goto LABEL_50;
    case 14:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v6 = *(_QWORD *)(a1 + 1232);
      v7 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_CE52D0((__int64)v58, v7);
      v8 = sub_DA8420(a1 + 384, v6, v58, 0);
      if ( (_BYTE)v8 )
      {
        v9 = *(_QWORD *)(a1 + 560);
        sub_CDA6F0((__int64)v59, (__int64)v58, a3);
        v10 = sub_CEB200((__int64)v59);
        sub_D0EE70(v9, v10);
        sub_DFF560(v59);
      }
LABEL_50:
      sub_DFF560(v58);
      return v8;
  }
}

