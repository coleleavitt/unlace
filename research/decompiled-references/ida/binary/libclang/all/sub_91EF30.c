__int64 __fastcall sub_91EF30(__int64 a1, int a2, unsigned int a3, __int64 *a4)
{
  __int64 v5; // rsi
  __int64 v6; // r13
  __int64 v7; // rax
  unsigned int v8; // ebp
  __int64 v9; // r13
  _BYTE *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rsi
  __int64 v31; // r13
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // r13
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // r13
  __int64 v40; // rax
  __int64 v41; // rsi
  __int64 v42; // r13
  __int64 v43; // rax
  __int64 v44; // r13
  _WORD *v45; // rax
  __int64 v46; // rsi
  __int64 v47; // r13
  __int64 v48; // rax
  __int64 v49; // rsi
  __int64 v50; // r13
  __int64 v51; // rax
  __int64 v52; // r13
  _DWORD *v53; // rax
  __int64 v54; // rsi
  __int64 v55; // r13
  __int64 v56; // rax
  __int64 v57; // rsi
  __int64 v58; // r13
  __int64 v59; // rax
  __int64 v60; // r13
  _QWORD *v61; // rax
  __int64 v62; // rsi
  __int64 v63; // r13
  __int64 v64; // rax
  __int64 v65[3]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v66; // [rsp+18h] [rbp-50h]
  int v67; // [rsp+30h] [rbp-38h]

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v35 = *(_QWORD *)(a1 + 560);
      v36 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_A25550(v65, v35, a3);
      v37 = sub_8E5480((__int64)v65);
      if ( !(unsigned __int8)sub_9D4860(a1 + 384, v36, v37) || !v67 && v66 && *(_BYTE *)(v66 + 25) )
        goto LABEL_102;
      v8 = sub_9D7D80(a1 + 384, v36, v65);
      if ( !(_BYTE)v8 )
        goto LABEL_102;
      v9 = *(_QWORD *)(a1 + 568);
      v10 = (_BYTE *)sub_8F63E0(v65);
      goto LABEL_55;
    case 1:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v38 = *(_QWORD *)(a1 + 560);
      v39 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_A25550(v65, v38, a3);
      v40 = sub_8E5480((__int64)v65);
      if ( !(unsigned __int8)sub_9D4860(a1 + 384, v39, v40) || !v67 && v66 && *(_BYTE *)(v66 + 25) )
        goto LABEL_102;
      v8 = sub_9D7D80(a1 + 384, v39, v65);
      if ( !(_BYTE)v8 )
        goto LABEL_102;
      v9 = *(_QWORD *)(a1 + 568);
      v10 = (_BYTE *)sub_8F6BD0(v65);
      goto LABEL_55;
    case 2:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v41 = *(_QWORD *)(a1 + 560);
      v42 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_A25550(v65, v41, a3);
      v43 = sub_8E5480((__int64)v65);
      if ( !(unsigned __int8)sub_9D4860(a1 + 384, v42, v43) || !v67 && v66 && *(_BYTE *)(v66 + 25) )
        goto LABEL_102;
      v8 = sub_9D7D80(a1 + 384, v42, v65);
      if ( !(_BYTE)v8 )
        goto LABEL_102;
      v44 = *(_QWORD *)(a1 + 568);
      v45 = (_WORD *)sub_8F6C20(v65);
      goto LABEL_70;
    case 3:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v46 = *(_QWORD *)(a1 + 560);
      v47 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_A25550(v65, v46, a3);
      v48 = sub_8E5480((__int64)v65);
      if ( !(unsigned __int8)sub_9D4860(a1 + 384, v47, v48) || !v67 && v66 && *(_BYTE *)(v66 + 25) )
        goto LABEL_102;
      v8 = sub_9D7D80(a1 + 384, v47, v65);
      if ( !(_BYTE)v8 )
        goto LABEL_102;
      v44 = *(_QWORD *)(a1 + 568);
      v45 = (_WORD *)sub_8F7430(v65);
LABEL_70:
      *(_WORD *)sub_A1A4E0(v44, 8) = *v45;
      goto LABEL_101;
    case 4:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v49 = *(_QWORD *)(a1 + 560);
      v50 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_A25550(v65, v49, a3);
      v51 = sub_8E5480((__int64)v65);
      if ( !(unsigned __int8)sub_9D4860(a1 + 384, v50, v51) || !v67 && v66 && *(_BYTE *)(v66 + 25) )
        goto LABEL_102;
      v8 = sub_9D7D80(a1 + 384, v50, v65);
      if ( !(_BYTE)v8 )
        goto LABEL_102;
      v52 = *(_QWORD *)(a1 + 568);
      v53 = (_DWORD *)sub_8F7480(v65);
      goto LABEL_85;
    case 5:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v54 = *(_QWORD *)(a1 + 560);
      v55 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_A25550(v65, v54, a3);
      v56 = sub_8E5480((__int64)v65);
      if ( !(unsigned __int8)sub_9D4860(a1 + 384, v55, v56) || !v67 && v66 && *(_BYTE *)(v66 + 25) )
        goto LABEL_102;
      v8 = sub_9D7D80(a1 + 384, v55, v65);
      if ( !(_BYTE)v8 )
        goto LABEL_102;
      v52 = *(_QWORD *)(a1 + 568);
      v53 = (_DWORD *)sub_8F7C70(v65);
LABEL_85:
      *(_DWORD *)sub_A1A4E0(v52, 8) = *v53;
      goto LABEL_101;
    case 6:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v57 = *(_QWORD *)(a1 + 560);
      v58 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_A25550(v65, v57, a3);
      v59 = sub_8E5480((__int64)v65);
      if ( !(unsigned __int8)sub_9D4860(a1 + 384, v58, v59) || !v67 && v66 && *(_BYTE *)(v66 + 25) )
        goto LABEL_102;
      v8 = sub_9D7D80(a1 + 384, v58, v65);
      if ( !(_BYTE)v8 )
        goto LABEL_102;
      v60 = *(_QWORD *)(a1 + 568);
      v61 = (_QWORD *)sub_8F7CC0(v65);
      goto LABEL_100;
    case 7:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v62 = *(_QWORD *)(a1 + 560);
      v63 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_A25550(v65, v62, a3);
      v64 = sub_8E5480((__int64)v65);
      if ( !(unsigned __int8)sub_9D4860(a1 + 384, v63, v64) || !v67 && v66 && *(_BYTE *)(v66 + 25) )
        goto LABEL_102;
      v8 = sub_9D7D80(a1 + 384, v63, v65);
      if ( !(_BYTE)v8 )
        goto LABEL_102;
      v60 = *(_QWORD *)(a1 + 568);
      v61 = (_QWORD *)sub_8F84D0(v65);
LABEL_100:
      *(_QWORD *)sub_A1A4E0(v60, 8) = *v61;
      goto LABEL_101;
    case 8:
    case 9:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      return sub_8E6080((_QWORD *)a1, a3, *a4);
    case 10:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v5 = *(_QWORD *)(a1 + 560);
      v6 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_A25550(v65, v5, a3);
      v7 = sub_8E5480((__int64)v65);
      if ( !(unsigned __int8)sub_9D4860(a1 + 384, v6, v7) || !v67 && v66 && *(_BYTE *)(v66 + 25) )
        goto LABEL_102;
      v8 = sub_9D7D80(a1 + 384, v6, v65);
      if ( !(_BYTE)v8 )
        goto LABEL_102;
      v9 = *(_QWORD *)(a1 + 568);
      v10 = (_BYTE *)sub_8F9850(v65);
LABEL_55:
      *(_BYTE *)sub_A1A4E0(v9, 8) = *v10;
      goto LABEL_101;
    case 11:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v11 = *(_QWORD *)(a1 + 560);
      v12 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_A25550(v65, v11, a3);
      v13 = sub_8E5480((__int64)v65);
      if ( !(unsigned __int8)sub_9D4860(a1 + 384, v12, v13) || !v67 && v66 && *(_BYTE *)(v66 + 25) )
        goto LABEL_102;
      v8 = sub_9D7D80(a1 + 384, v12, v65);
      if ( !(_BYTE)v8 )
        goto LABEL_102;
      v14 = *(_QWORD *)(a1 + 568);
      v15 = sub_8FA0E0(v65);
      sub_8F5F00(v14, v15);
      goto LABEL_101;
    case 12:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v16 = *(_QWORD *)(a1 + 560);
      v17 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_A25550(v65, v16, a3);
      v18 = sub_8E5480((__int64)v65);
      if ( !(unsigned __int8)sub_9D4860(a1 + 384, v17, v18) || !v67 && v66 && *(_BYTE *)(v66 + 25) )
        goto LABEL_102;
      v8 = sub_9D7D80(a1 + 384, v17, v65);
      if ( !(_BYTE)v8 )
        goto LABEL_102;
      v19 = *(_QWORD *)(a1 + 568);
      v20 = (__int64 *)sub_8F8D80(v65);
      v21 = sub_A1A4E0(v19, 24);
      sub_835150(v21, v20, v22);
      goto LABEL_101;
    case 13:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v23 = *(_QWORD *)(a1 + 560);
      v24 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_A25550(v65, v23, a3);
      v25 = sub_8E5480((__int64)v65);
      if ( !(unsigned __int8)sub_9D4860(a1 + 384, v24, v25) || !v67 && v66 && *(_BYTE *)(v66 + 25) )
        goto LABEL_102;
      v8 = sub_9D7D80(a1 + 384, v24, v65);
      if ( !(_BYTE)v8 )
        goto LABEL_102;
      v26 = *(_QWORD *)(a1 + 568);
      v27 = sub_8F9CB0(v65);
      v28 = sub_A1A4E0(v26, 56);
      sub_A1BFE0(v28, v27);
      goto LABEL_101;
    case 14:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v29 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a4;
      return sub_9033A0(a1 + 384, v29, a3);
    case 15:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      v30 = *(_QWORD *)(a1 + 560);
      v31 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a4;
      sub_A25550(v65, v30, a3);
      v32 = sub_8E5480((__int64)v65);
      if ( (unsigned __int8)sub_9D4860(a1 + 384, v31, v32)
        && (v67 || !v66 || !*(_BYTE *)(v66 + 25))
        && (v8 = sub_9D7D80(a1 + 384, v31, v65), (_BYTE)v8) )
      {
        v33 = *(_QWORD *)(a1 + 568);
        v34 = sub_8FA090(v65);
        sub_91C6A0(v33, v34);
      }
      else
      {
LABEL_102:
        v8 = 0;
      }
LABEL_101:
      sub_A1C0C0(v65);
      return v8;
  }
}

