__int64 __fastcall sub_D10390(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // rbp
  __int64 v6; // rsi
  unsigned int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rsi
  _BYTE *v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // rbp
  __int64 v15; // rsi
  _WORD *v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rsi
  __int64 v19; // rbp
  __int64 v20; // rsi
  _DWORD *v21; // rax
  __int64 v22; // rbp
  __int64 v23; // rsi
  __int64 v24; // rbp
  __int64 v25; // rsi
  _QWORD *v26; // rax
  __int64 v27; // rbp
  __int64 v28; // rsi
  __int64 v29; // rbp
  __int64 v30; // rsi
  const __m128i *v31; // r13
  __int64 v32; // rbp
  __int64 v33; // rsi
  const __m128i *v34; // r13
  __int64 v35; // rbp
  __int64 v36; // rsi
  __int64 v37; // rbp
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rbp
  __int64 v41; // rsi
  const __m128i *v42; // r13
  __int64 v43; // rbp
  __int64 v44; // rsi
  __int64 v45; // r13
  __int64 v46; // rax
  _BYTE v47[88]; // [rsp+0h] [rbp-58h] BYREF

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v9 = *(_QWORD *)(a1 + 1232);
      v10 = *(_QWORD *)(a1 + 552);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_E05460(v47, v10, a3);
      v7 = sub_DA5E00(a1 + 384, v9, v47, 0);
      if ( !(_BYTE)v7 )
        goto LABEL_50;
      v11 = (_BYTE *)sub_CE8890((__int64)v47);
      goto LABEL_43;
    case 1:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v12 = *(_QWORD *)(a1 + 1232);
      v13 = *(_QWORD *)(a1 + 552);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_E05460(v47, v13, a3);
      v7 = sub_DA5E00(a1 + 384, v12, v47, 0);
      if ( !(_BYTE)v7 )
        goto LABEL_50;
      v11 = (_BYTE *)sub_CE8AA0((__int64)v47);
      goto LABEL_43;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v14 = *(_QWORD *)(a1 + 1232);
      v15 = *(_QWORD *)(a1 + 552);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_E05460(v47, v15, a3);
      v7 = sub_DA5E00(a1 + 384, v14, v47, 0);
      if ( !(_BYTE)v7 )
        goto LABEL_50;
      v16 = (_WORD *)sub_CE8E90((__int64)v47);
      goto LABEL_19;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v17 = *(_QWORD *)(a1 + 1232);
      v18 = *(_QWORD *)(a1 + 552);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_E05460(v47, v18, a3);
      v7 = sub_DA5E00(a1 + 384, v17, v47, 0);
      if ( !(_BYTE)v7 )
        goto LABEL_50;
      v16 = (_WORD *)sub_CE90A0((__int64)v47);
LABEL_19:
      *(_WORD *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = *v16;
      goto LABEL_50;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v19 = *(_QWORD *)(a1 + 1232);
      v20 = *(_QWORD *)(a1 + 552);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_E05460(v47, v20, a3);
      v7 = sub_DA5E00(a1 + 384, v19, v47, 0);
      if ( !(_BYTE)v7 )
        goto LABEL_50;
      v21 = (_DWORD *)sub_CE9490((__int64)v47);
      goto LABEL_26;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v22 = *(_QWORD *)(a1 + 1232);
      v23 = *(_QWORD *)(a1 + 552);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_E05460(v47, v23, a3);
      v7 = sub_DA5E00(a1 + 384, v22, v47, 0);
      if ( !(_BYTE)v7 )
        goto LABEL_50;
      v21 = (_DWORD *)sub_CE96A0((__int64)v47);
LABEL_26:
      *(_DWORD *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = *v21;
      goto LABEL_50;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v24 = *(_QWORD *)(a1 + 1232);
      v25 = *(_QWORD *)(a1 + 552);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_E05460(v47, v25, a3);
      v7 = sub_DA5E00(a1 + 384, v24, v47, 0);
      if ( !(_BYTE)v7 )
        goto LABEL_50;
      v26 = (_QWORD *)sub_CE9C80((__int64)v47);
      goto LABEL_33;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v27 = *(_QWORD *)(a1 + 1232);
      v28 = *(_QWORD *)(a1 + 552);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_E05460(v47, v28, a3);
      v7 = sub_DA5E00(a1 + 384, v27, v47, 0);
      if ( !(_BYTE)v7 )
        goto LABEL_50;
      v26 = (_QWORD *)sub_CE9E90((__int64)v47);
LABEL_33:
      *(_QWORD *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = *v26;
      goto LABEL_50;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v29 = *(_QWORD *)(a1 + 1232);
      v30 = *(_QWORD *)(a1 + 552);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_E05460(v47, v30, a3);
      v7 = sub_DA5E00(a1 + 384, v29, v47, 0);
      if ( (_BYTE)v7 )
      {
        v31 = (const __m128i *)sub_CEA4A0((__int64)v47);
        *(__m128i *)sub_DFD980(*(_QWORD *)(a1 + 560), 16) = _mm_loadu_si128(v31);
      }
      goto LABEL_50;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v32 = *(_QWORD *)(a1 + 1232);
      v33 = *(_QWORD *)(a1 + 552);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_E05460(v47, v33, a3);
      v7 = sub_DA5E00(a1 + 384, v32, v47, 0);
      if ( (_BYTE)v7 )
      {
        v34 = (const __m128i *)sub_CEA4F0((__int64)v47);
        *(__m128i *)sub_DFD980(*(_QWORD *)(a1 + 560), 16) = _mm_loadu_si128(v34);
      }
      goto LABEL_50;
    case 10:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v35 = *(_QWORD *)(a1 + 1232);
      v36 = *(_QWORD *)(a1 + 552);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_E05460(v47, v36, a3);
      v7 = sub_DA5E00(a1 + 384, v35, v47, 0);
      if ( !(_BYTE)v7 )
        goto LABEL_50;
      v11 = (_BYTE *)sub_CEAA70((__int64)v47);
LABEL_43:
      *(_BYTE *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = *v11;
      goto LABEL_50;
    case 11:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v37 = *(_QWORD *)(a1 + 1232);
      v38 = *(_QWORD *)(a1 + 552);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_E05460(v47, v38, a3);
      v7 = sub_DA5E00(a1 + 384, v37, v47, 0);
      if ( (_BYTE)v7 )
      {
        v39 = sub_CEB480((__int64)v47);
        sub_CE7D50(*(_QWORD *)(a1 + 560), v39);
      }
      goto LABEL_50;
    case 12:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v40 = *(_QWORD *)(a1 + 1232);
      v41 = *(_QWORD *)(a1 + 552);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_E05460(v47, v41, a3);
      v7 = sub_DA5E00(a1 + 384, v40, v47, 0);
      if ( (_BYTE)v7 )
      {
        v42 = (const __m128i *)sub_CEA540((__int64)v47);
        *(__m128i *)sub_DFD980(*(_QWORD *)(a1 + 560), 16) = _mm_loadu_si128(v42);
      }
      goto LABEL_50;
    case 13:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v43 = *(_QWORD *)(a1 + 1232);
      v44 = *(_QWORD *)(a1 + 552);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_E05460(v47, v44, a3);
      v7 = sub_DA5E00(a1 + 384, v43, v47, 0);
      if ( (_BYTE)v7 )
      {
        v45 = sub_CEACF0((__int64)v47);
        v46 = sub_DFD980(*(_QWORD *)(a1 + 560), 48);
        sub_DFF4A0(v46, v45);
      }
      goto LABEL_50;
    case 14:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v5 = *(_QWORD *)(a1 + 1232);
      v6 = *(_QWORD *)(a1 + 552);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_E05460(v47, v6, a3);
      v7 = sub_DA5E00(a1 + 384, v5, v47, 0);
      if ( (_BYTE)v7 )
      {
        v8 = sub_CEB200((__int64)v47);
        sub_D0EE70(*(_QWORD *)(a1 + 560), v8);
      }
LABEL_50:
      sub_DFF560(v47);
      return v7;
  }
}

