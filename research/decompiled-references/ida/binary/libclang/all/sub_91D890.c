__int64 __fastcall sub_91D890(__int64 a1, int a2, unsigned int a3, _QWORD *a4)
{
  __int64 v5; // rsi
  unsigned int v6; // ebp
  __int64 v7; // r13
  _BYTE *v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // r13
  __int64 *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // r13
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rsi
  __int64 v26; // rsi
  __int64 v27; // r13
  _WORD *v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rsi
  __int64 v31; // r13
  _DWORD *v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rsi
  __int64 v35; // r13
  _QWORD *v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rsi
  __int64 v39; // r13
  const __m128i *v40; // rbx
  __m128i *v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45[13]; // [rsp+0h] [rbp-68h] BYREF

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v24 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_A25550(v45, v24, a3);
      v6 = sub_A1C2E0(v45);
      if ( !(_BYTE)v6 )
        goto LABEL_50;
      v7 = *(_QWORD *)(a1 + 568);
      v8 = (_BYTE *)sub_8F63E0(v45);
      goto LABEL_25;
    case 1:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v25 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_A25550(v45, v25, a3);
      v6 = sub_A1C2E0(v45);
      if ( !(_BYTE)v6 )
        goto LABEL_50;
      v7 = *(_QWORD *)(a1 + 568);
      v8 = (_BYTE *)sub_8F6BD0(v45);
      goto LABEL_25;
    case 2:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v26 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_A25550(v45, v26, a3);
      v6 = sub_A1C2E0(v45);
      if ( !(_BYTE)v6 )
        goto LABEL_50;
      v27 = *(_QWORD *)(a1 + 568);
      v28 = (_WORD *)sub_8F6C20(v45);
      goto LABEL_32;
    case 3:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v29 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_A25550(v45, v29, a3);
      v6 = sub_A1C2E0(v45);
      if ( !(_BYTE)v6 )
        goto LABEL_50;
      v27 = *(_QWORD *)(a1 + 568);
      v28 = (_WORD *)sub_8F7430(v45);
LABEL_32:
      *(_WORD *)sub_A1A4E0(v27, 8) = *v28;
      goto LABEL_50;
    case 4:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v30 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_A25550(v45, v30, a3);
      v6 = sub_A1C2E0(v45);
      if ( !(_BYTE)v6 )
        goto LABEL_50;
      v31 = *(_QWORD *)(a1 + 568);
      v32 = (_DWORD *)sub_8F7480(v45);
      goto LABEL_39;
    case 5:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v33 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_A25550(v45, v33, a3);
      v6 = sub_A1C2E0(v45);
      if ( !(_BYTE)v6 )
        goto LABEL_50;
      v31 = *(_QWORD *)(a1 + 568);
      v32 = (_DWORD *)sub_8F7C70(v45);
LABEL_39:
      *(_DWORD *)sub_A1A4E0(v31, 8) = *v32;
      goto LABEL_50;
    case 6:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v34 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_A25550(v45, v34, a3);
      v6 = sub_A1C2E0(v45);
      if ( !(_BYTE)v6 )
        goto LABEL_50;
      v35 = *(_QWORD *)(a1 + 568);
      v36 = (_QWORD *)sub_8F7CC0(v45);
      goto LABEL_46;
    case 7:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v37 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_A25550(v45, v37, a3);
      v6 = sub_A1C2E0(v45);
      if ( !(_BYTE)v6 )
        goto LABEL_50;
      v35 = *(_QWORD *)(a1 + 568);
      v36 = (_QWORD *)sub_8F84D0(v45);
LABEL_46:
      *(_QWORD *)sub_A1A4E0(v35, 8) = *v36;
      goto LABEL_50;
    case 8:
    case 9:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v42 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_A25550(v45, v42, a3);
      v6 = sub_A1C2E0(v45);
      if ( (_BYTE)v6 )
      {
        v43 = *(_QWORD *)(a1 + 568);
        v44 = sub_8F8520(v45);
        sub_91C660(v43, v44);
      }
      goto LABEL_50;
    case 10:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v5 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_A25550(v45, v5, a3);
      v6 = sub_A1C2E0(v45);
      if ( !(_BYTE)v6 )
        goto LABEL_50;
      v7 = *(_QWORD *)(a1 + 568);
      v8 = (_BYTE *)sub_8F9850(v45);
LABEL_25:
      *(_BYTE *)sub_A1A4E0(v7, 8) = *v8;
      goto LABEL_50;
    case 11:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v9 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_A25550(v45, v9, a3);
      v6 = sub_A1C2E0(v45);
      if ( (_BYTE)v6 )
      {
        v10 = *(_QWORD *)(a1 + 568);
        v11 = sub_8FA0E0(v45);
        sub_8F5F00(v10, v11);
      }
      goto LABEL_50;
    case 12:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v12 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_A25550(v45, v12, a3);
      v6 = sub_A1C2E0(v45);
      if ( (_BYTE)v6 )
      {
        v13 = *(_QWORD *)(a1 + 568);
        v14 = (__int64 *)sub_8F8D80(v45);
        v15 = sub_A1A4E0(v13, 24);
        sub_835150(v15, v14, v16);
      }
      goto LABEL_50;
    case 13:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v17 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_A25550(v45, v17, a3);
      v6 = sub_A1C2E0(v45);
      if ( (_BYTE)v6 )
      {
        v18 = *(_QWORD *)(a1 + 568);
        v19 = sub_8F9CB0(v45);
        v20 = sub_A1A4E0(v18, 56);
        sub_A1BFE0(v20, v19);
      }
      goto LABEL_50;
    case 14:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v38 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_A25550(v45, v38, a3);
      v6 = sub_A1C2E0(v45);
      if ( (_BYTE)v6 )
      {
        v39 = *(_QWORD *)(a1 + 568);
        v40 = (const __m128i *)sub_8FA040(v45);
        v41 = (__m128i *)sub_A1A4E0(v39, 24);
        *v41 = _mm_loadu_si128(v40);
        v41[1].m128i_i64[0] = v40[1].m128i_i64[0];
      }
      goto LABEL_50;
    case 15:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v21 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_A25550(v45, v21, a3);
      v6 = sub_A1C2E0(v45);
      if ( (_BYTE)v6 )
      {
        v22 = *(_QWORD *)(a1 + 568);
        v23 = sub_8FA090(v45);
        sub_91C6A0(v22, v23);
      }
LABEL_50:
      sub_A1C0C0(v45);
      return v6;
  }
}

