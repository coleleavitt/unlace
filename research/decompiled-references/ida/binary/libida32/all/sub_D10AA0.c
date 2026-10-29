__int64 __fastcall sub_D10AA0(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebp
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // r12
  _BYTE *v10; // rax
  __int64 v11; // rbp
  __int64 v12; // r12
  __int64 v13; // rbp
  __int64 v14; // r12
  _WORD *v15; // rax
  __int64 v16; // rbp
  __int64 v17; // r12
  __int64 v18; // rbp
  __int64 v19; // r12
  _DWORD *v20; // rax
  __int64 v21; // rbp
  __int64 v22; // r12
  __int64 v23; // rbp
  __int64 v24; // r12
  _QWORD *v25; // rax
  __int64 v26; // rbp
  __int64 v27; // r12
  __int64 v28; // rbp
  __int64 v29; // r12
  const __m128i *v30; // r12
  __int64 v31; // rbp
  __int64 v32; // r12
  const __m128i *v33; // r12
  __int64 v34; // rbp
  __int64 v35; // r12
  __int64 v36; // rbp
  __int64 v37; // r12
  __int64 v38; // rax
  __int64 v39; // rbp
  __int64 v40; // r12
  const __m128i *v41; // r12
  __int64 v42; // rbp
  __int64 v43; // r12
  __int64 v44; // r12
  __int64 v45; // rax

  v3 = 1;
  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v3;
      v8 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      v9 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
      v3 = sub_DA8420(a1 + 384, v8, v9, 0);
      if ( !(_BYTE)v3 )
        return v3;
      if ( *(_DWORD *)(v9 + 24) )
        return 0;
      v10 = (_BYTE *)sub_CE8890(v9);
      goto LABEL_55;
    case 1:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v3;
      v11 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      v12 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
      v3 = sub_DA8420(a1 + 384, v11, v12, 0);
      if ( !(_BYTE)v3 )
        return v3;
      if ( *(_DWORD *)(v12 + 24) )
        return 0;
      v10 = (_BYTE *)sub_CE8AA0(v12);
      goto LABEL_55;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v3;
      v13 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      v14 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
      v3 = sub_DA8420(a1 + 384, v13, v14, 0);
      if ( !(_BYTE)v3 )
        return v3;
      if ( *(_DWORD *)(v14 + 24) )
        return 0;
      v15 = (_WORD *)sub_CE8E90(v14);
      goto LABEL_24;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v3;
      v16 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      v17 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
      v3 = sub_DA8420(a1 + 384, v16, v17, 0);
      if ( !(_BYTE)v3 )
        return v3;
      if ( *(_DWORD *)(v17 + 24) )
        return 0;
      v15 = (_WORD *)sub_CE90A0(v17);
LABEL_24:
      *(_WORD *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = *v15;
      return v3;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v3;
      v18 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      v19 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
      v3 = sub_DA8420(a1 + 384, v18, v19, 0);
      if ( !(_BYTE)v3 )
        return v3;
      if ( *(_DWORD *)(v19 + 24) )
        return 0;
      v20 = (_DWORD *)sub_CE9490(v19);
      goto LABEL_33;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v3;
      v21 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      v22 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
      v3 = sub_DA8420(a1 + 384, v21, v22, 0);
      if ( !(_BYTE)v3 )
        return v3;
      if ( *(_DWORD *)(v22 + 24) )
        return 0;
      v20 = (_DWORD *)sub_CE96A0(v22);
LABEL_33:
      *(_DWORD *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = *v20;
      return v3;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v3;
      v23 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      v24 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
      v3 = sub_DA8420(a1 + 384, v23, v24, 0);
      if ( !(_BYTE)v3 )
        return v3;
      if ( *(_DWORD *)(v24 + 24) )
        return 0;
      v25 = (_QWORD *)sub_CE9C80(v24);
      goto LABEL_42;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v3;
      v26 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      v27 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
      v3 = sub_DA8420(a1 + 384, v26, v27, 0);
      if ( !(_BYTE)v3 )
        return v3;
      if ( *(_DWORD *)(v27 + 24) )
        return 0;
      v25 = (_QWORD *)sub_CE9E90(v27);
LABEL_42:
      *(_QWORD *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = *v25;
      return v3;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v3;
      v28 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      v29 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
      v3 = sub_DA8420(a1 + 384, v28, v29, 0);
      if ( !(_BYTE)v3 )
        return v3;
      if ( *(_DWORD *)(v29 + 24) )
        return 0;
      v30 = (const __m128i *)sub_CEA4A0(v29);
      *(__m128i *)sub_DFD980(*(_QWORD *)(a1 + 560), 16) = _mm_loadu_si128(v30);
      return v3;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v3;
      v31 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      v32 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
      v3 = sub_DA8420(a1 + 384, v31, v32, 0);
      if ( !(_BYTE)v3 )
        return v3;
      if ( *(_DWORD *)(v32 + 24) )
        return 0;
      v33 = (const __m128i *)sub_CEA4F0(v32);
      *(__m128i *)sub_DFD980(*(_QWORD *)(a1 + 560), 16) = _mm_loadu_si128(v33);
      return v3;
    case 10:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v3;
      v34 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      v35 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
      v3 = sub_DA8420(a1 + 384, v34, v35, 0);
      if ( !(_BYTE)v3 )
        return v3;
      if ( *(_DWORD *)(v35 + 24) )
        return 0;
      v10 = (_BYTE *)sub_CEAA70(v35);
LABEL_55:
      *(_BYTE *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = *v10;
      return v3;
    case 11:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v3;
      v36 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      v37 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
      v3 = sub_DA8420(a1 + 384, v36, v37, 0);
      if ( !(_BYTE)v3 )
        return v3;
      if ( *(_DWORD *)(v37 + 24) )
        return 0;
      v38 = sub_CEB480(v37);
      sub_CE7D50(*(_QWORD *)(a1 + 560), v38);
      return v3;
    case 12:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v3;
      v39 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      v40 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
      v3 = sub_DA8420(a1 + 384, v39, v40, 0);
      if ( !(_BYTE)v3 )
        return v3;
      if ( *(_DWORD *)(v40 + 24) )
        return 0;
      v41 = (const __m128i *)sub_CEA540(v40);
      *(__m128i *)sub_DFD980(*(_QWORD *)(a1 + 560), 16) = _mm_loadu_si128(v41);
      return v3;
    case 13:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v3;
      v42 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      v43 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
      v3 = sub_DA8420(a1 + 384, v42, v43, 0);
      if ( !(_BYTE)v3 )
        return v3;
      if ( *(_DWORD *)(v43 + 24) )
        return 0;
      v44 = sub_CEACF0(v43);
      v45 = sub_DFD980(*(_QWORD *)(a1 + 560), 48);
      sub_DFF4A0(v45, v44);
      return v3;
    case 14:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v3;
      v5 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      v6 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
      v3 = sub_DA8420(a1 + 384, v5, v6, 0);
      if ( !(_BYTE)v3 )
        return v3;
      if ( *(_DWORD *)(v6 + 24) )
        return 0;
      v7 = sub_CEB200(v6);
      sub_D0EE70(*(_QWORD *)(a1 + 560), v7);
      return v3;
  }
}

