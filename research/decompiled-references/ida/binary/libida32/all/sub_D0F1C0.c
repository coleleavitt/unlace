__int64 __fastcall sub_D0F1C0(__int64 a1, int a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v5; // ebp
  __int64 v7; // rbp
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // r13
  __int64 v13; // r14
  _BYTE *v14; // rax
  __int64 v15; // rbp
  __int64 v16; // r13
  __int64 v17; // rbp
  __int64 v18; // r13
  __int64 v19; // r14
  _WORD *v20; // rax
  __int64 v21; // rbp
  __int64 v22; // r13
  __int64 v23; // rbp
  __int64 v24; // r13
  __int64 v25; // r14
  _DWORD *v26; // rax
  __int64 v27; // rbp
  __int64 v28; // r13
  __int64 v29; // rbp
  __int64 v30; // r13
  __int64 v31; // r14
  _QWORD *v32; // rax
  __int64 v33; // rbp
  __int64 v34; // r13
  __int64 v35; // rbp
  __int64 v36; // r13
  __int64 v37; // r14
  const __m128i *v38; // r12
  __int64 v39; // rbp
  __int64 v40; // r13
  __int64 v41; // r14
  const __m128i *v42; // r12
  __int64 v43; // rbp
  __int64 v44; // r13
  __int64 v45; // rbp
  __int64 v46; // r13
  __int64 v47; // r14
  __int64 v48; // rax
  __int64 v49; // rbp
  __int64 v50; // r13
  __int64 v51; // r14
  const __m128i *v52; // r12
  __int64 v53; // rbp
  __int64 v54; // r13
  __int64 v55; // r14
  __int64 v56; // r12
  __int64 v57; // rax
  _BYTE v58[88]; // [rsp+0h] [rbp-58h] BYREF

  v5 = 1;
  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v11 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v12 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
        v5 = sub_DA8420(a1 + 384, v11, v12, 0);
        if ( (_BYTE)v5 )
        {
          v13 = *(_QWORD *)(a1 + 560);
          sub_CDA6F0((__int64)v58, v12, a3);
          v14 = (_BYTE *)sub_CE8890((__int64)v58);
          goto LABEL_43;
        }
      }
      break;
    case 1:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v15 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v16 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
        v5 = sub_DA8420(a1 + 384, v15, v16, 0);
        if ( (_BYTE)v5 )
        {
          v13 = *(_QWORD *)(a1 + 560);
          sub_CDA6F0((__int64)v58, v16, a3);
          v14 = (_BYTE *)sub_CE8AA0((__int64)v58);
          goto LABEL_43;
        }
      }
      break;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v17 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v18 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
        v5 = sub_DA8420(a1 + 384, v17, v18, 0);
        if ( (_BYTE)v5 )
        {
          v19 = *(_QWORD *)(a1 + 560);
          sub_CDA6F0((__int64)v58, v18, a3);
          v20 = (_WORD *)sub_CE8E90((__int64)v58);
          goto LABEL_19;
        }
      }
      break;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v21 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v22 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
        v5 = sub_DA8420(a1 + 384, v21, v22, 0);
        if ( (_BYTE)v5 )
        {
          v19 = *(_QWORD *)(a1 + 560);
          sub_CDA6F0((__int64)v58, v22, a3);
          v20 = (_WORD *)sub_CE90A0((__int64)v58);
LABEL_19:
          *(_WORD *)sub_DFD980(v19, 8) = *v20;
          sub_DFF560(v58);
        }
      }
      break;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v23 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v24 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
        v5 = sub_DA8420(a1 + 384, v23, v24, 0);
        if ( (_BYTE)v5 )
        {
          v25 = *(_QWORD *)(a1 + 560);
          sub_CDA6F0((__int64)v58, v24, a3);
          v26 = (_DWORD *)sub_CE9490((__int64)v58);
          goto LABEL_26;
        }
      }
      break;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v27 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v28 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
        v5 = sub_DA8420(a1 + 384, v27, v28, 0);
        if ( (_BYTE)v5 )
        {
          v25 = *(_QWORD *)(a1 + 560);
          sub_CDA6F0((__int64)v58, v28, a3);
          v26 = (_DWORD *)sub_CE96A0((__int64)v58);
LABEL_26:
          *(_DWORD *)sub_DFD980(v25, 8) = *v26;
          sub_DFF560(v58);
        }
      }
      break;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v29 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v30 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
        v5 = sub_DA8420(a1 + 384, v29, v30, 0);
        if ( (_BYTE)v5 )
        {
          v31 = *(_QWORD *)(a1 + 560);
          sub_CDA6F0((__int64)v58, v30, a3);
          v32 = (_QWORD *)sub_CE9C80((__int64)v58);
          goto LABEL_33;
        }
      }
      break;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v33 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v34 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
        v5 = sub_DA8420(a1 + 384, v33, v34, 0);
        if ( (_BYTE)v5 )
        {
          v31 = *(_QWORD *)(a1 + 560);
          sub_CDA6F0((__int64)v58, v34, a3);
          v32 = (_QWORD *)sub_CE9E90((__int64)v58);
LABEL_33:
          *(_QWORD *)sub_DFD980(v31, 8) = *v32;
          sub_DFF560(v58);
        }
      }
      break;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v35 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v36 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
        v5 = sub_DA8420(a1 + 384, v35, v36, 0);
        if ( (_BYTE)v5 )
        {
          v37 = *(_QWORD *)(a1 + 560);
          sub_CDA6F0((__int64)v58, v36, a3);
          v38 = (const __m128i *)sub_CEA4A0((__int64)v58);
          *(__m128i *)sub_DFD980(v37, 16) = _mm_loadu_si128(v38);
          sub_DFF560(v58);
        }
      }
      break;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v39 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v40 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
        v5 = sub_DA8420(a1 + 384, v39, v40, 0);
        if ( (_BYTE)v5 )
        {
          v41 = *(_QWORD *)(a1 + 560);
          sub_CDA6F0((__int64)v58, v40, a3);
          v42 = (const __m128i *)sub_CEA4F0((__int64)v58);
          *(__m128i *)sub_DFD980(v41, 16) = _mm_loadu_si128(v42);
          sub_DFF560(v58);
        }
      }
      break;
    case 10:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v43 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v44 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
        v5 = sub_DA8420(a1 + 384, v43, v44, 0);
        if ( (_BYTE)v5 )
        {
          v13 = *(_QWORD *)(a1 + 560);
          sub_CDA6F0((__int64)v58, v44, a3);
          v14 = (_BYTE *)sub_CEAA70((__int64)v58);
LABEL_43:
          *(_BYTE *)sub_DFD980(v13, 8) = *v14;
          sub_DFF560(v58);
        }
      }
      break;
    case 11:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v45 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v46 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
        v5 = sub_DA8420(a1 + 384, v45, v46, 0);
        if ( (_BYTE)v5 )
        {
          v47 = *(_QWORD *)(a1 + 560);
          sub_CDA6F0((__int64)v58, v46, a3);
          v48 = sub_CEB480((__int64)v58);
          sub_CE7D50(v47, v48);
          sub_DFF560(v58);
        }
      }
      break;
    case 12:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v49 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v50 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
        v5 = sub_DA8420(a1 + 384, v49, v50, 0);
        if ( (_BYTE)v5 )
        {
          v51 = *(_QWORD *)(a1 + 560);
          sub_CDA6F0((__int64)v58, v50, a3);
          v52 = (const __m128i *)sub_CEA540((__int64)v58);
          *(__m128i *)sub_DFD980(v51, 16) = _mm_loadu_si128(v52);
          sub_DFF560(v58);
        }
      }
      break;
    case 13:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v53 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v54 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
        v5 = sub_DA8420(a1 + 384, v53, v54, 0);
        if ( (_BYTE)v5 )
        {
          v55 = *(_QWORD *)(a1 + 560);
          sub_CDA6F0((__int64)v58, v54, a3);
          v56 = sub_CEACF0((__int64)v58);
          v57 = sub_DFD980(v55, 48);
          sub_DFF4A0(v57, v56);
          sub_DFF560(v58);
        }
      }
      break;
    case 14:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v7 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v8 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
        v5 = sub_DA8420(a1 + 384, v7, v8, 0);
        if ( (_BYTE)v5 )
        {
          v9 = *(_QWORD *)(a1 + 560);
          sub_CDA6F0((__int64)v58, v8, a3);
          v10 = sub_CEB200((__int64)v58);
          sub_D0EE70(v9, v10);
          sub_DFF560(v58);
        }
      }
      break;
  }
  return v5;
}

