__int64 __fastcall sub_91DEE0(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebp
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 v7; // r13
  _BYTE *v8; // rax
  __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // r12
  __int64 v15; // r13
  __int64 *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rbp
  __int64 v20; // r12
  __int64 v21; // r13
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rbp
  __int64 v25; // r12
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rbp
  __int64 v29; // r12
  __int64 v30; // rbp
  __int64 v31; // r12
  __int64 v32; // rbp
  __int64 v33; // r12
  __int64 v34; // r13
  _WORD *v35; // rax
  __int64 v36; // rbp
  __int64 v37; // r12
  __int64 v38; // rbp
  __int64 v39; // r12
  __int64 v40; // r13
  _DWORD *v41; // rax
  __int64 v42; // rbp
  __int64 v43; // r12
  __int64 v44; // rbp
  __int64 v45; // r12
  __int64 v46; // r13
  _QWORD *v47; // rax
  __int64 v48; // rbp
  __int64 v49; // r12
  __int64 v50; // rbp
  __int64 v51; // r12
  __int64 v52; // r13
  const __m128i *v53; // rbx
  __m128i *v54; // rax
  __int64 v55; // rbp
  __int64 v56; // r12
  __int64 v57; // rbx
  __int64 v58; // rax

  v3 = 1;
  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v28 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v29 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
      v3 = sub_9E4580(a1 + 384, v28, v29, 0);
      if ( !(_BYTE)v3 )
        return v3;
      if ( *(_DWORD *)(v29 + 48) )
        return 0;
      v7 = *(_QWORD *)(a1 + 568);
      v8 = (_BYTE *)sub_8F63E0((__int64 *)v29);
      goto LABEL_32;
    case 1:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v30 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v31 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
      v3 = sub_9E4580(a1 + 384, v30, v31, 0);
      if ( !(_BYTE)v3 )
        return v3;
      if ( *(_DWORD *)(v31 + 48) )
        return 0;
      v7 = *(_QWORD *)(a1 + 568);
      v8 = (_BYTE *)sub_8F6BD0((__int64 *)v31);
      goto LABEL_32;
    case 2:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v32 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v33 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
      v3 = sub_9E4580(a1 + 384, v32, v33, 0);
      if ( !(_BYTE)v3 )
        return v3;
      if ( *(_DWORD *)(v33 + 48) )
        return 0;
      v34 = *(_QWORD *)(a1 + 568);
      v35 = (_WORD *)sub_8F6C20((__int64 *)v33);
      goto LABEL_41;
    case 3:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v36 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v37 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
      v3 = sub_9E4580(a1 + 384, v36, v37, 0);
      if ( !(_BYTE)v3 )
        return v3;
      if ( *(_DWORD *)(v37 + 48) )
        return 0;
      v34 = *(_QWORD *)(a1 + 568);
      v35 = (_WORD *)sub_8F7430((__int64 *)v37);
LABEL_41:
      *(_WORD *)sub_A1A4E0(v34, 8) = *v35;
      return v3;
    case 4:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v38 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v39 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
      v3 = sub_9E4580(a1 + 384, v38, v39, 0);
      if ( !(_BYTE)v3 )
        return v3;
      if ( *(_DWORD *)(v39 + 48) )
        return 0;
      v40 = *(_QWORD *)(a1 + 568);
      v41 = (_DWORD *)sub_8F7480((__int64 *)v39);
      goto LABEL_50;
    case 5:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v42 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v43 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
      v3 = sub_9E4580(a1 + 384, v42, v43, 0);
      if ( !(_BYTE)v3 )
        return v3;
      if ( *(_DWORD *)(v43 + 48) )
        return 0;
      v40 = *(_QWORD *)(a1 + 568);
      v41 = (_DWORD *)sub_8F7C70((__int64 *)v43);
LABEL_50:
      *(_DWORD *)sub_A1A4E0(v40, 8) = *v41;
      return v3;
    case 6:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v44 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v45 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
      v3 = sub_9E4580(a1 + 384, v44, v45, 0);
      if ( !(_BYTE)v3 )
        return v3;
      if ( *(_DWORD *)(v45 + 48) )
        return 0;
      v46 = *(_QWORD *)(a1 + 568);
      v47 = (_QWORD *)sub_8F7CC0((__int64 *)v45);
      goto LABEL_59;
    case 7:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v48 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v49 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
      v3 = sub_9E4580(a1 + 384, v48, v49, 0);
      if ( !(_BYTE)v3 )
        return v3;
      if ( *(_DWORD *)(v49 + 48) )
        return 0;
      v46 = *(_QWORD *)(a1 + 568);
      v47 = (_QWORD *)sub_8F84D0((__int64 *)v49);
LABEL_59:
      *(_QWORD *)sub_A1A4E0(v46, 8) = *v47;
      return v3;
    case 8:
    case 9:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v55 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v56 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
      v3 = sub_9E4580(a1 + 384, v55, v56, 0);
      if ( !(_BYTE)v3 )
        return v3;
      if ( *(_DWORD *)(v56 + 48) )
        return 0;
      v57 = *(_QWORD *)(a1 + 568);
      v58 = sub_8F8520((__int64 *)v56);
      sub_91C660(v57, v58);
      return v3;
    case 10:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v5 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v6 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
      v3 = sub_9E4580(a1 + 384, v5, v6, 0);
      if ( !(_BYTE)v3 )
        return v3;
      if ( *(_DWORD *)(v6 + 48) )
        return 0;
      v7 = *(_QWORD *)(a1 + 568);
      v8 = (_BYTE *)sub_8F9850((__int64 *)v6);
LABEL_32:
      *(_BYTE *)sub_A1A4E0(v7, 8) = *v8;
      return v3;
    case 11:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v9 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v10 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
      v3 = sub_9E4580(a1 + 384, v9, v10, 0);
      if ( !(_BYTE)v3 )
        return v3;
      if ( *(_DWORD *)(v10 + 48) )
        return 0;
      v11 = *(_QWORD *)(a1 + 568);
      v12 = sub_8FA0E0((__int64 *)v10);
      sub_8F5F00(v11, v12);
      return v3;
    case 12:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v13 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v14 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
      v3 = sub_9E4580(a1 + 384, v13, v14, 0);
      if ( !(_BYTE)v3 )
        return v3;
      if ( *(_DWORD *)(v14 + 48) )
        return 0;
      v15 = *(_QWORD *)(a1 + 568);
      v16 = (__int64 *)sub_8F8D80((__int64 *)v14);
      v17 = sub_A1A4E0(v15, 24);
      sub_835150(v17, v16, v18);
      return v3;
    case 13:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v19 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v20 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
      v3 = sub_9E4580(a1 + 384, v19, v20, 0);
      if ( !(_BYTE)v3 )
        return v3;
      if ( *(_DWORD *)(v20 + 48) )
        return 0;
      v21 = *(_QWORD *)(a1 + 568);
      v22 = sub_8F9CB0((__int64 *)v20);
      v23 = sub_A1A4E0(v21, 56);
      sub_A1BFE0(v23, v22);
      return v3;
    case 14:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v50 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v51 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
      v3 = sub_9E4580(a1 + 384, v50, v51, 0);
      if ( !(_BYTE)v3 )
        return v3;
      if ( *(_DWORD *)(v51 + 48) )
        return 0;
      v52 = *(_QWORD *)(a1 + 568);
      v53 = (const __m128i *)sub_8FA040((__int64 *)v51);
      v54 = (__m128i *)sub_A1A4E0(v52, 24);
      *v54 = _mm_loadu_si128(v53);
      v54[1].m128i_i64[0] = v53[1].m128i_i64[0];
      return v3;
    case 15:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return v3;
      v24 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v25 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
      v3 = sub_9E4580(a1 + 384, v24, v25, 0);
      if ( !(_BYTE)v3 )
        return v3;
      if ( *(_DWORD *)(v25 + 48) )
        return 0;
      v26 = *(_QWORD *)(a1 + 568);
      v27 = sub_8FA090((__int64 *)v25);
      sub_91C6A0(v26, v27);
      return v3;
  }
}

