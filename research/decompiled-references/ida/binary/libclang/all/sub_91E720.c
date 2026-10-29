__int64 __fastcall sub_91E720(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v4; // rbp
  __int64 v5; // rsi
  unsigned int v6; // ebp
  __int64 v7; // r13
  _BYTE *v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rsi
  __int64 v15; // r13
  __int64 *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rbp
  __int64 v20; // rsi
  __int64 v21; // r13
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rbp
  __int64 v25; // rsi
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rbp
  __int64 v29; // rsi
  __int64 v30; // rbp
  __int64 v31; // rsi
  __int64 v32; // rbp
  __int64 v33; // rsi
  __int64 v34; // r13
  _WORD *v35; // rax
  __int64 v36; // rbp
  __int64 v37; // rsi
  __int64 v38; // rbp
  __int64 v39; // rsi
  __int64 v40; // r13
  _DWORD *v41; // rax
  __int64 v42; // rbp
  __int64 v43; // rsi
  __int64 v44; // rbp
  __int64 v45; // rsi
  __int64 v46; // r13
  _QWORD *v47; // rax
  __int64 v48; // rbp
  __int64 v49; // rsi
  __int64 v50; // rbp
  __int64 v51; // rsi
  __int64 v52; // r13
  const __m128i *v53; // rbx
  __m128i *v54; // rax
  __int64 v55; // rbp
  __int64 v56; // rsi
  __int64 v57; // rbx
  __int64 v58; // rax
  __int64 v59[6]; // [rsp+0h] [rbp-68h] BYREF
  int v60; // [rsp+30h] [rbp-38h]

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v28 = *(_QWORD *)(a1 + 792);
      v29 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v59, v29);
      v6 = sub_9E4580(a1 + 384, v28, v59, 0);
      if ( !(_BYTE)v6 )
        goto LABEL_64;
      if ( v60 )
        goto LABEL_65;
      v7 = *(_QWORD *)(a1 + 568);
      v8 = (_BYTE *)sub_8F63E0(v59);
      goto LABEL_32;
    case 1:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v30 = *(_QWORD *)(a1 + 792);
      v31 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v59, v31);
      v6 = sub_9E4580(a1 + 384, v30, v59, 0);
      if ( !(_BYTE)v6 )
        goto LABEL_64;
      if ( v60 )
        goto LABEL_65;
      v7 = *(_QWORD *)(a1 + 568);
      v8 = (_BYTE *)sub_8F6BD0(v59);
      goto LABEL_32;
    case 2:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v32 = *(_QWORD *)(a1 + 792);
      v33 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v59, v33);
      v6 = sub_9E4580(a1 + 384, v32, v59, 0);
      if ( !(_BYTE)v6 )
        goto LABEL_64;
      if ( v60 )
        goto LABEL_65;
      v34 = *(_QWORD *)(a1 + 568);
      v35 = (_WORD *)sub_8F6C20(v59);
      goto LABEL_41;
    case 3:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v36 = *(_QWORD *)(a1 + 792);
      v37 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v59, v37);
      v6 = sub_9E4580(a1 + 384, v36, v59, 0);
      if ( !(_BYTE)v6 )
        goto LABEL_64;
      if ( v60 )
        goto LABEL_65;
      v34 = *(_QWORD *)(a1 + 568);
      v35 = (_WORD *)sub_8F7430(v59);
LABEL_41:
      *(_WORD *)sub_A1A4E0(v34, 8) = *v35;
      goto LABEL_64;
    case 4:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v38 = *(_QWORD *)(a1 + 792);
      v39 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v59, v39);
      v6 = sub_9E4580(a1 + 384, v38, v59, 0);
      if ( !(_BYTE)v6 )
        goto LABEL_64;
      if ( v60 )
        goto LABEL_65;
      v40 = *(_QWORD *)(a1 + 568);
      v41 = (_DWORD *)sub_8F7480(v59);
      goto LABEL_50;
    case 5:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v42 = *(_QWORD *)(a1 + 792);
      v43 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v59, v43);
      v6 = sub_9E4580(a1 + 384, v42, v59, 0);
      if ( !(_BYTE)v6 )
        goto LABEL_64;
      if ( v60 )
        goto LABEL_65;
      v40 = *(_QWORD *)(a1 + 568);
      v41 = (_DWORD *)sub_8F7C70(v59);
LABEL_50:
      *(_DWORD *)sub_A1A4E0(v40, 8) = *v41;
      goto LABEL_64;
    case 6:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v44 = *(_QWORD *)(a1 + 792);
      v45 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v59, v45);
      v6 = sub_9E4580(a1 + 384, v44, v59, 0);
      if ( !(_BYTE)v6 )
        goto LABEL_64;
      if ( v60 )
        goto LABEL_65;
      v46 = *(_QWORD *)(a1 + 568);
      v47 = (_QWORD *)sub_8F7CC0(v59);
      goto LABEL_59;
    case 7:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v48 = *(_QWORD *)(a1 + 792);
      v49 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v59, v49);
      v6 = sub_9E4580(a1 + 384, v48, v59, 0);
      if ( !(_BYTE)v6 )
        goto LABEL_64;
      if ( v60 )
        goto LABEL_65;
      v46 = *(_QWORD *)(a1 + 568);
      v47 = (_QWORD *)sub_8F84D0(v59);
LABEL_59:
      *(_QWORD *)sub_A1A4E0(v46, 8) = *v47;
      goto LABEL_64;
    case 8:
    case 9:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v55 = *(_QWORD *)(a1 + 792);
      v56 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v59, v56);
      v6 = sub_9E4580(a1 + 384, v55, v59, 0);
      if ( !(_BYTE)v6 )
        goto LABEL_64;
      if ( v60 )
        goto LABEL_65;
      v57 = *(_QWORD *)(a1 + 568);
      v58 = sub_8F8520(v59);
      sub_91C660(v57, v58);
      goto LABEL_64;
    case 10:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v4 = *(_QWORD *)(a1 + 792);
      v5 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v59, v5);
      v6 = sub_9E4580(a1 + 384, v4, v59, 0);
      if ( !(_BYTE)v6 )
        goto LABEL_64;
      if ( v60 )
        goto LABEL_65;
      v7 = *(_QWORD *)(a1 + 568);
      v8 = (_BYTE *)sub_8F9850(v59);
LABEL_32:
      *(_BYTE *)sub_A1A4E0(v7, 8) = *v8;
      goto LABEL_64;
    case 11:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v9 = *(_QWORD *)(a1 + 792);
      v10 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v59, v10);
      v6 = sub_9E4580(a1 + 384, v9, v59, 0);
      if ( !(_BYTE)v6 )
        goto LABEL_64;
      if ( v60 )
        goto LABEL_65;
      v11 = *(_QWORD *)(a1 + 568);
      v12 = sub_8FA0E0(v59);
      sub_8F5F00(v11, v12);
      goto LABEL_64;
    case 12:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v13 = *(_QWORD *)(a1 + 792);
      v14 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v59, v14);
      v6 = sub_9E4580(a1 + 384, v13, v59, 0);
      if ( !(_BYTE)v6 )
        goto LABEL_64;
      if ( v60 )
        goto LABEL_65;
      v15 = *(_QWORD *)(a1 + 568);
      v16 = (__int64 *)sub_8F8D80(v59);
      v17 = sub_A1A4E0(v15, 24);
      sub_835150(v17, v16, v18);
      goto LABEL_64;
    case 13:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v19 = *(_QWORD *)(a1 + 792);
      v20 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v59, v20);
      v6 = sub_9E4580(a1 + 384, v19, v59, 0);
      if ( !(_BYTE)v6 )
        goto LABEL_64;
      if ( v60 )
        goto LABEL_65;
      v21 = *(_QWORD *)(a1 + 568);
      v22 = sub_8F9CB0(v59);
      v23 = sub_A1A4E0(v21, 56);
      sub_A1BFE0(v23, v22);
      goto LABEL_64;
    case 14:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v50 = *(_QWORD *)(a1 + 792);
      v51 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v59, v51);
      v6 = sub_9E4580(a1 + 384, v50, v59, 0);
      if ( !(_BYTE)v6 )
        goto LABEL_64;
      if ( v60 )
        goto LABEL_65;
      v52 = *(_QWORD *)(a1 + 568);
      v53 = (const __m128i *)sub_8FA040(v59);
      v54 = (__m128i *)sub_A1A4E0(v52, 24);
      *v54 = _mm_loadu_si128(v53);
      v54[1].m128i_i64[0] = v53[1].m128i_i64[0];
      goto LABEL_64;
    case 15:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v24 = *(_QWORD *)(a1 + 792);
      v25 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F41A0((__int64)v59, v25);
      v6 = sub_9E4580(a1 + 384, v24, v59, 0);
      if ( (_BYTE)v6 )
      {
        if ( v60 )
        {
LABEL_65:
          v6 = 0;
        }
        else
        {
          v26 = *(_QWORD *)(a1 + 568);
          v27 = sub_8FA090(v59);
          sub_91C6A0(v26, v27);
        }
      }
LABEL_64:
      sub_A1C0C0(v59);
      return v6;
  }
}

