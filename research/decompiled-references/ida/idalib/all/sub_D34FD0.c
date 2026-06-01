__int64 __fastcall sub_D34FD0(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v4; // rbp
  __int64 v5; // rsi
  unsigned int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rsi
  _BYTE *v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // rbp
  __int64 v14; // rsi
  _WORD *v15; // rax
  __int64 v16; // rbp
  __int64 v17; // rsi
  __int64 v18; // rbp
  __int64 v19; // rsi
  _DWORD *v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rsi
  __int64 v23; // rbp
  __int64 v24; // rsi
  _QWORD *v25; // rax
  __int64 v26; // rbp
  __int64 v27; // rsi
  __int64 v28; // rbp
  __int64 v29; // rsi
  const __m128i *v30; // r13
  __int64 v31; // rbp
  __int64 v32; // rsi
  const __m128i *v33; // r13
  __int64 v34; // rbp
  __int64 v35; // rsi
  __int64 v36; // rbp
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rbp
  __int64 v40; // rsi
  const __m128i *v41; // r13
  __int64 v42; // rbp
  __int64 v43; // rsi
  __int64 v44; // r13
  __int64 v45; // rax
  _BYTE v46[24]; // [rsp+0h] [rbp-58h] BYREF
  int v47; // [rsp+18h] [rbp-40h]

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v8 = *(_QWORD *)(a1 + 1232);
      v9 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a3;
      sub_D09010((__int64)v46, v9);
      v6 = sub_DCC160(a1 + 384, v8, v46, 0);
      if ( !(_BYTE)v6 )
        goto LABEL_64;
      if ( v47 )
        goto LABEL_68;
      v10 = (_BYTE *)sub_D0C5D0((__int64)v46);
      goto LABEL_55;
    case 1:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v11 = *(_QWORD *)(a1 + 1232);
      v12 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a3;
      sub_D09010((__int64)v46, v12);
      v6 = sub_DCC160(a1 + 384, v11, v46, 0);
      if ( !(_BYTE)v6 )
        goto LABEL_64;
      if ( v47 )
        goto LABEL_68;
      v10 = (_BYTE *)sub_D0C7E0((__int64)v46);
      goto LABEL_55;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v13 = *(_QWORD *)(a1 + 1232);
      v14 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a3;
      sub_D09010((__int64)v46, v14);
      v6 = sub_DCC160(a1 + 384, v13, v46, 0);
      if ( !(_BYTE)v6 )
        goto LABEL_64;
      if ( v47 )
        goto LABEL_68;
      v15 = (_WORD *)sub_D0CBD0((__int64)v46);
      goto LABEL_24;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v16 = *(_QWORD *)(a1 + 1232);
      v17 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a3;
      sub_D09010((__int64)v46, v17);
      v6 = sub_DCC160(a1 + 384, v16, v46, 0);
      if ( !(_BYTE)v6 )
        goto LABEL_64;
      if ( v47 )
        goto LABEL_68;
      v15 = (_WORD *)sub_D0CDE0((__int64)v46);
LABEL_24:
      *(_WORD *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = *v15;
      goto LABEL_64;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v18 = *(_QWORD *)(a1 + 1232);
      v19 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a3;
      sub_D09010((__int64)v46, v19);
      v6 = sub_DCC160(a1 + 384, v18, v46, 0);
      if ( !(_BYTE)v6 )
        goto LABEL_64;
      if ( v47 )
        goto LABEL_68;
      v20 = (_DWORD *)sub_D0D1D0((__int64)v46);
      goto LABEL_33;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v21 = *(_QWORD *)(a1 + 1232);
      v22 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a3;
      sub_D09010((__int64)v46, v22);
      v6 = sub_DCC160(a1 + 384, v21, v46, 0);
      if ( !(_BYTE)v6 )
        goto LABEL_64;
      if ( v47 )
        goto LABEL_68;
      v20 = (_DWORD *)sub_D0D3E0((__int64)v46);
LABEL_33:
      *(_DWORD *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = *v20;
      goto LABEL_64;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v23 = *(_QWORD *)(a1 + 1232);
      v24 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a3;
      sub_D09010((__int64)v46, v24);
      v6 = sub_DCC160(a1 + 384, v23, v46, 0);
      if ( !(_BYTE)v6 )
        goto LABEL_64;
      if ( v47 )
        goto LABEL_68;
      v25 = (_QWORD *)sub_D0D9C0((__int64)v46);
      goto LABEL_42;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v26 = *(_QWORD *)(a1 + 1232);
      v27 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a3;
      sub_D09010((__int64)v46, v27);
      v6 = sub_DCC160(a1 + 384, v26, v46, 0);
      if ( !(_BYTE)v6 )
        goto LABEL_64;
      if ( v47 )
        goto LABEL_68;
      v25 = (_QWORD *)sub_D0DBD0((__int64)v46);
LABEL_42:
      *(_QWORD *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = *v25;
      goto LABEL_64;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v28 = *(_QWORD *)(a1 + 1232);
      v29 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a3;
      sub_D09010((__int64)v46, v29);
      v6 = sub_DCC160(a1 + 384, v28, v46, 0);
      if ( !(_BYTE)v6 )
        goto LABEL_64;
      if ( v47 )
        goto LABEL_68;
      v30 = (const __m128i *)sub_D0E1E0((__int64)v46);
      *(__m128i *)sub_E216C0(*(_QWORD *)(a1 + 560), 16) = _mm_loadu_si128(v30);
      goto LABEL_64;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v31 = *(_QWORD *)(a1 + 1232);
      v32 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a3;
      sub_D09010((__int64)v46, v32);
      v6 = sub_DCC160(a1 + 384, v31, v46, 0);
      if ( !(_BYTE)v6 )
        goto LABEL_64;
      if ( v47 )
        goto LABEL_68;
      v33 = (const __m128i *)sub_D0E230((__int64)v46);
      *(__m128i *)sub_E216C0(*(_QWORD *)(a1 + 560), 16) = _mm_loadu_si128(v33);
      goto LABEL_64;
    case 10:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v34 = *(_QWORD *)(a1 + 1232);
      v35 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a3;
      sub_D09010((__int64)v46, v35);
      v6 = sub_DCC160(a1 + 384, v34, v46, 0);
      if ( !(_BYTE)v6 )
        goto LABEL_64;
      if ( v47 )
        goto LABEL_68;
      v10 = (_BYTE *)sub_D0E7B0((__int64)v46);
LABEL_55:
      *(_BYTE *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = *v10;
      goto LABEL_64;
    case 11:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v36 = *(_QWORD *)(a1 + 1232);
      v37 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a3;
      sub_D09010((__int64)v46, v37);
      v6 = sub_DCC160(a1 + 384, v36, v46, 0);
      if ( !(_BYTE)v6 )
        goto LABEL_64;
      if ( v47 )
        goto LABEL_68;
      v38 = sub_D0F1C0((__int64)v46);
      sub_D0BA90(*(_QWORD *)(a1 + 560), v38);
      goto LABEL_64;
    case 12:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v39 = *(_QWORD *)(a1 + 1232);
      v40 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a3;
      sub_D09010((__int64)v46, v40);
      v6 = sub_DCC160(a1 + 384, v39, v46, 0);
      if ( !(_BYTE)v6 )
        goto LABEL_64;
      if ( v47 )
        goto LABEL_68;
      v41 = (const __m128i *)sub_D0E280((__int64)v46);
      *(__m128i *)sub_E216C0(*(_QWORD *)(a1 + 560), 16) = _mm_loadu_si128(v41);
      goto LABEL_64;
    case 13:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v42 = *(_QWORD *)(a1 + 1232);
      v43 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a3;
      sub_D09010((__int64)v46, v43);
      v6 = sub_DCC160(a1 + 384, v42, v46, 0);
      if ( !(_BYTE)v6 )
        goto LABEL_64;
      if ( v47 )
        goto LABEL_68;
      v44 = sub_D0EA30((__int64)v46);
      v45 = sub_E216C0(*(_QWORD *)(a1 + 560), 48);
      sub_E231E0(v45, v44);
      goto LABEL_64;
    case 14:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return 1;
      v4 = *(_QWORD *)(a1 + 1232);
      v5 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a3;
      sub_D09010((__int64)v46, v5);
      v6 = sub_DCC160(a1 + 384, v4, v46, 0);
      if ( (_BYTE)v6 )
      {
        if ( v47 )
        {
LABEL_68:
          v6 = 0;
        }
        else
        {
          v7 = sub_D0EF40((__int64)v46);
          sub_D32BB0(*(_QWORD *)(a1 + 560), v7);
        }
      }
LABEL_64:
      sub_E232A0(v46);
      return v6;
  }
}
