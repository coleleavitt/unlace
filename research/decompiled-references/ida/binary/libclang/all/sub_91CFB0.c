__int64 __fastcall sub_91CFB0(__int64 a1, int a2, unsigned int a3, _QWORD *a4)
{
  __int64 v6; // rbp
  __int64 v7; // rsi
  unsigned int v8; // ebp
  __int64 v9; // r14
  _BYTE *v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v16; // rsi
  __int64 v17; // r14
  __int64 *v18; // r12
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rbp
  __int64 v22; // rsi
  __int64 v23; // r14
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 v27; // rsi
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // rbp
  __int64 v31; // rsi
  __int64 v32; // rbp
  __int64 v33; // rsi
  __int64 v34; // rbp
  __int64 v35; // rsi
  __int64 v36; // r14
  _WORD *v37; // rax
  __int64 v38; // rbp
  __int64 v39; // rsi
  __int64 v40; // rbp
  __int64 v41; // rsi
  __int64 v42; // r14
  _DWORD *v43; // rax
  __int64 v44; // rbp
  __int64 v45; // rsi
  __int64 v46; // rbp
  __int64 v47; // rsi
  __int64 v48; // r14
  _QWORD *v49; // rax
  __int64 v50; // rbp
  __int64 v51; // rsi
  __int64 v52; // rbp
  __int64 v53; // rsi
  __int64 v54; // r14
  const __m128i *v55; // r12
  __m128i *v56; // rax
  __int64 v57; // rbp
  __int64 v58; // rsi
  __int64 v59; // r14
  __int64 v60; // rax
  _BYTE v61[64]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v62[13]; // [rsp+40h] [rbp-68h] BYREF

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v30 = *(_QWORD *)(a1 + 792);
      v31 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_8F41A0((__int64)v61, v31);
      v8 = sub_9E4580(a1 + 384, v30, v61, 0);
      if ( !(_BYTE)v8 )
        goto LABEL_50;
      v9 = *(_QWORD *)(a1 + 568);
      sub_8E61F0((__int64)v62, (__int64)v61, a3);
      v10 = (_BYTE *)sub_8F63E0(v62);
      goto LABEL_25;
    case 1:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v32 = *(_QWORD *)(a1 + 792);
      v33 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_8F41A0((__int64)v61, v33);
      v8 = sub_9E4580(a1 + 384, v32, v61, 0);
      if ( !(_BYTE)v8 )
        goto LABEL_50;
      v9 = *(_QWORD *)(a1 + 568);
      sub_8E61F0((__int64)v62, (__int64)v61, a3);
      v10 = (_BYTE *)sub_8F6BD0(v62);
      goto LABEL_25;
    case 2:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v34 = *(_QWORD *)(a1 + 792);
      v35 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_8F41A0((__int64)v61, v35);
      v8 = sub_9E4580(a1 + 384, v34, v61, 0);
      if ( !(_BYTE)v8 )
        goto LABEL_50;
      v36 = *(_QWORD *)(a1 + 568);
      sub_8E61F0((__int64)v62, (__int64)v61, a3);
      v37 = (_WORD *)sub_8F6C20(v62);
      goto LABEL_32;
    case 3:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v38 = *(_QWORD *)(a1 + 792);
      v39 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_8F41A0((__int64)v61, v39);
      v8 = sub_9E4580(a1 + 384, v38, v61, 0);
      if ( !(_BYTE)v8 )
        goto LABEL_50;
      v36 = *(_QWORD *)(a1 + 568);
      sub_8E61F0((__int64)v62, (__int64)v61, a3);
      v37 = (_WORD *)sub_8F7430(v62);
LABEL_32:
      *(_WORD *)sub_A1A4E0(v36, 8) = *v37;
      sub_A1C0C0(v62);
      goto LABEL_50;
    case 4:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v40 = *(_QWORD *)(a1 + 792);
      v41 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_8F41A0((__int64)v61, v41);
      v8 = sub_9E4580(a1 + 384, v40, v61, 0);
      if ( !(_BYTE)v8 )
        goto LABEL_50;
      v42 = *(_QWORD *)(a1 + 568);
      sub_8E61F0((__int64)v62, (__int64)v61, a3);
      v43 = (_DWORD *)sub_8F7480(v62);
      goto LABEL_39;
    case 5:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v44 = *(_QWORD *)(a1 + 792);
      v45 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_8F41A0((__int64)v61, v45);
      v8 = sub_9E4580(a1 + 384, v44, v61, 0);
      if ( !(_BYTE)v8 )
        goto LABEL_50;
      v42 = *(_QWORD *)(a1 + 568);
      sub_8E61F0((__int64)v62, (__int64)v61, a3);
      v43 = (_DWORD *)sub_8F7C70(v62);
LABEL_39:
      *(_DWORD *)sub_A1A4E0(v42, 8) = *v43;
      sub_A1C0C0(v62);
      goto LABEL_50;
    case 6:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v46 = *(_QWORD *)(a1 + 792);
      v47 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_8F41A0((__int64)v61, v47);
      v8 = sub_9E4580(a1 + 384, v46, v61, 0);
      if ( !(_BYTE)v8 )
        goto LABEL_50;
      v48 = *(_QWORD *)(a1 + 568);
      sub_8E61F0((__int64)v62, (__int64)v61, a3);
      v49 = (_QWORD *)sub_8F7CC0(v62);
      goto LABEL_46;
    case 7:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v50 = *(_QWORD *)(a1 + 792);
      v51 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_8F41A0((__int64)v61, v51);
      v8 = sub_9E4580(a1 + 384, v50, v61, 0);
      if ( !(_BYTE)v8 )
        goto LABEL_50;
      v48 = *(_QWORD *)(a1 + 568);
      sub_8E61F0((__int64)v62, (__int64)v61, a3);
      v49 = (_QWORD *)sub_8F84D0(v62);
LABEL_46:
      *(_QWORD *)sub_A1A4E0(v48, 8) = *v49;
      sub_A1C0C0(v62);
      goto LABEL_50;
    case 8:
    case 9:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v57 = *(_QWORD *)(a1 + 792);
      v58 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_8F41A0((__int64)v61, v58);
      v8 = sub_9E4580(a1 + 384, v57, v61, 0);
      if ( (_BYTE)v8 )
      {
        v59 = *(_QWORD *)(a1 + 568);
        sub_8E61F0((__int64)v62, (__int64)v61, a3);
        v60 = sub_8F8520(v62);
        sub_91C660(v59, v60);
        sub_A1C0C0(v62);
      }
      goto LABEL_50;
    case 10:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v6 = *(_QWORD *)(a1 + 792);
      v7 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_8F41A0((__int64)v61, v7);
      v8 = sub_9E4580(a1 + 384, v6, v61, 0);
      if ( !(_BYTE)v8 )
        goto LABEL_50;
      v9 = *(_QWORD *)(a1 + 568);
      sub_8E61F0((__int64)v62, (__int64)v61, a3);
      v10 = (_BYTE *)sub_8F9850(v62);
LABEL_25:
      *(_BYTE *)sub_A1A4E0(v9, 8) = *v10;
      sub_A1C0C0(v62);
      goto LABEL_50;
    case 11:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v11 = *(_QWORD *)(a1 + 792);
      v12 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_8F41A0((__int64)v61, v12);
      v8 = sub_9E4580(a1 + 384, v11, v61, 0);
      if ( (_BYTE)v8 )
      {
        v13 = *(_QWORD *)(a1 + 568);
        sub_8E61F0((__int64)v62, (__int64)v61, a3);
        v14 = sub_8FA0E0(v62);
        sub_8F5F00(v13, v14);
        sub_A1C0C0(v62);
      }
      goto LABEL_50;
    case 12:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v15 = *(_QWORD *)(a1 + 792);
      v16 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_8F41A0((__int64)v61, v16);
      v8 = sub_9E4580(a1 + 384, v15, v61, 0);
      if ( (_BYTE)v8 )
      {
        v17 = *(_QWORD *)(a1 + 568);
        sub_8E61F0((__int64)v62, (__int64)v61, a3);
        v18 = (__int64 *)sub_8F8D80(v62);
        v19 = sub_A1A4E0(v17, 24);
        sub_835150(v19, v18, v20);
        sub_A1C0C0(v62);
      }
      goto LABEL_50;
    case 13:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v21 = *(_QWORD *)(a1 + 792);
      v22 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_8F41A0((__int64)v61, v22);
      v8 = sub_9E4580(a1 + 384, v21, v61, 0);
      if ( (_BYTE)v8 )
      {
        v23 = *(_QWORD *)(a1 + 568);
        sub_8E61F0((__int64)v62, (__int64)v61, a3);
        v24 = sub_8F9CB0(v62);
        v25 = sub_A1A4E0(v23, 56);
        sub_A1BFE0(v25, v24);
        sub_A1C0C0(v62);
      }
      goto LABEL_50;
    case 14:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v52 = *(_QWORD *)(a1 + 792);
      v53 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_8F41A0((__int64)v61, v53);
      v8 = sub_9E4580(a1 + 384, v52, v61, 0);
      if ( (_BYTE)v8 )
      {
        v54 = *(_QWORD *)(a1 + 568);
        sub_8E61F0((__int64)v62, (__int64)v61, a3);
        v55 = (const __m128i *)sub_8FA040(v62);
        v56 = (__m128i *)sub_A1A4E0(v54, 24);
        *v56 = _mm_loadu_si128(v55);
        v56[1].m128i_i64[0] = v55[1].m128i_i64[0];
        sub_A1C0C0(v62);
      }
      goto LABEL_50;
    case 15:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v26 = *(_QWORD *)(a1 + 792);
      v27 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_8F41A0((__int64)v61, v27);
      v8 = sub_9E4580(a1 + 384, v26, v61, 0);
      if ( (_BYTE)v8 )
      {
        v28 = *(_QWORD *)(a1 + 568);
        sub_8E61F0((__int64)v62, (__int64)v61, a3);
        v29 = sub_8FA090(v62);
        sub_91C6A0(v28, v29);
        sub_A1C0C0(v62);
      }
LABEL_50:
      sub_A1C0C0(v61);
      return v8;
  }
}

