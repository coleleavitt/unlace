__int64 __fastcall sub_DA0A80(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // rax
  _QWORD *v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdi
  int *v13; // rcx
  int v14; // eax
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // r13
  _BYTE *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rdi
  _BYTE *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rdi
  _WORD *v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rsi
  __int64 v37; // rdi
  _DWORD *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rsi
  __int64 v43; // rdi
  _QWORD *v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // rdx
  __int64 result; // rax
  __int64 v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // r12
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rsi
  __int64 v59; // r13
  unsigned int v60; // eax
  __int64 v61; // rsi
  __int64 v62; // rdi
  __int64 v63; // rdx

  v3 = **(unsigned int **)(a1 + 8);
  v6 = *(_QWORD **)a1;
  switch ( a3 )
  {
    case 0:
      v21 = (_BYTE *)(*v6 + 72 * v3);
      if ( v21[64] == 5 )
        goto LABEL_21;
      goto LABEL_109;
    case 1:
      v21 = (_BYTE *)(*v6 + 72 * v3);
      if ( v21[64] != 4 )
        goto LABEL_109;
      goto LABEL_21;
    case 2:
      v27 = *v6 + 72 * v3;
      if ( *(_BYTE *)(v27 + 64) == 7 )
        goto LABEL_31;
      goto LABEL_109;
    case 3:
      v27 = *v6 + 72 * v3;
      if ( *(_BYTE *)(v27 + 64) != 6 )
        goto LABEL_109;
LABEL_31:
      v28 = a2[4];
      v29 = *a2;
      if ( *((_DWORD *)a2 + 6) )
        goto LABEL_102;
      v30 = *(_QWORD *)(v28 + 32);
      v31 = *((unsigned int *)a2 + 10);
      if ( *(_DWORD *)(v30 + 24) != (_DWORD)v31 && (_DWORD)v31 )
        v30 = *(_QWORD *)(v28 + v31 + 32);
      if ( *(_BYTE *)(v30 + 60) && *((_DWORD *)a2 + 10) == v29 )
        v32 = (_WORD *)(v28 + v29 + 72);
      else
LABEL_102:
        v32 = (_WORD *)(v28 + v29 + 40);
      *v32 = *(_WORD *)v27;
      sub_E24D00(a2);
      v13 = *(int **)(a1 + 8);
      v14 = *v13;
      goto LABEL_67;
    case 4:
      v33 = *v6 + 72 * v3;
      if ( *(_BYTE *)(v33 + 64) == 9 )
        goto LABEL_41;
      goto LABEL_109;
    case 5:
      v33 = *v6 + 72 * v3;
      if ( *(_BYTE *)(v33 + 64) != 8 )
        goto LABEL_109;
LABEL_41:
      v34 = a2[4];
      v35 = *a2;
      if ( *((_DWORD *)a2 + 6) )
        goto LABEL_104;
      v36 = *(_QWORD *)(v34 + 32);
      v37 = *((unsigned int *)a2 + 10);
      if ( *(_DWORD *)(v36 + 24) != (_DWORD)v37 && (_DWORD)v37 )
        v36 = *(_QWORD *)(v34 + v37 + 32);
      if ( *(_BYTE *)(v36 + 60) && *((_DWORD *)a2 + 10) == v35 )
        v38 = (_DWORD *)(v34 + v35 + 72);
      else
LABEL_104:
        v38 = (_DWORD *)(v34 + v35 + 40);
      *v38 = *(_DWORD *)v33;
      sub_E24D00(a2);
      v13 = *(int **)(a1 + 8);
      v14 = *v13;
      goto LABEL_67;
    case 6:
      v39 = *v6 + 72 * v3;
      if ( *(_BYTE *)(v39 + 64) != 11 )
        goto LABEL_109;
      v40 = a2[4];
      v41 = *a2;
      if ( *((_DWORD *)a2 + 6) )
        goto LABEL_57;
      v42 = *(_QWORD *)(v40 + 32);
      v43 = *((unsigned int *)a2 + 10);
      if ( *(_DWORD *)(v42 + 24) != (_DWORD)v43 && (_DWORD)v43 )
        v42 = *(_QWORD *)(v40 + v43 + 32);
      if ( !*(_BYTE *)(v42 + 60) || *((_DWORD *)a2 + 10) != v41 )
        goto LABEL_57;
      goto LABEL_75;
    case 7:
      v39 = *v6 + 72 * v3;
      if ( *(_BYTE *)(v39 + 64) != 10 )
        goto LABEL_109;
      v40 = a2[4];
      v41 = *a2;
      if ( *((_DWORD *)a2 + 6) )
        goto LABEL_57;
      v52 = *(_QWORD *)(v40 + 32);
      v53 = *((unsigned int *)a2 + 10);
      if ( *(_DWORD *)(v52 + 24) != (_DWORD)v53 && (_DWORD)v53 )
        v52 = *(_QWORD *)(v40 + v53 + 32);
      if ( *(_BYTE *)(v52 + 60) && v41 == *((_DWORD *)a2 + 10) )
LABEL_75:
        v44 = (_QWORD *)(v40 + v41 + 72);
      else
LABEL_57:
        v44 = (_QWORD *)(v40 + v41 + 40);
      *v44 = *(_QWORD *)v39;
      sub_E24D00(a2);
      v13 = *(int **)(a1 + 8);
      v14 = *v13;
      goto LABEL_67;
    case 8:
      v45 = *v6 + 72 * v3;
      if ( *(_BYTE *)(v45 + 64) != 13 )
        goto LABEL_109;
      goto LABEL_60;
    case 9:
      v45 = *v6 + 72 * v3;
      if ( *(_BYTE *)(v45 + 64) != 12 )
        goto LABEL_109;
LABEL_60:
      v46 = a2[4];
      v47 = *a2;
      if ( !*((_DWORD *)a2 + 6) )
      {
        v48 = *(_QWORD *)(v46 + 32);
        v49 = *((unsigned int *)a2 + 10);
        if ( *(_DWORD *)(v48 + 24) != (_DWORD)v49 && (_DWORD)v49 )
          v48 = *(_QWORD *)(v46 + v49 + 32);
        if ( *(_BYTE *)(v48 + 60) && *((_DWORD *)a2 + 10) == v47 )
          goto LABEL_107;
      }
      goto LABEL_65;
    case 10:
      v21 = (_BYTE *)(*v6 + 72 * v3);
      if ( v21[64] != 14 )
        goto LABEL_109;
LABEL_21:
      v22 = a2[4];
      v23 = *a2;
      if ( *((_DWORD *)a2 + 6) )
        goto LABEL_100;
      v24 = *(_QWORD *)(v22 + 32);
      v25 = *((unsigned int *)a2 + 10);
      if ( *(_DWORD *)(v24 + 24) != (_DWORD)v25 && (_DWORD)v25 )
        v24 = *(_QWORD *)(v22 + v25 + 32);
      if ( *(_BYTE *)(v24 + 60) && *((_DWORD *)a2 + 10) == v23 )
        v26 = (_BYTE *)(v22 + v23 + 72);
      else
LABEL_100:
        v26 = (_BYTE *)(v22 + v23 + 40);
      *v26 = *v21;
      sub_E24D00(a2);
      v13 = *(int **)(a1 + 8);
      v14 = *v13;
      goto LABEL_67;
    case 11:
      v54 = *v6 + 72 * v3;
      if ( *(_BYTE *)(v54 + 64) != 3 )
        goto LABEL_109;
      v55 = a2[4];
      v56 = *a2;
      if ( *((_DWORD *)a2 + 6) )
        goto LABEL_85;
      v57 = *(_QWORD *)(v55 + 32);
      v58 = *((unsigned int *)a2 + 10);
      if ( *(_DWORD *)(v57 + 24) != (_DWORD)v58 && (_DWORD)v58 )
        v57 = *(_QWORD *)(v55 + v58 + 32);
      if ( !*(_BYTE *)(v57 + 60) || (v59 = v55 + v56 + 72, *((_DWORD *)a2 + 10) != v56) )
LABEL_85:
        v59 = v55 + v56 + 40;
      if ( *(_DWORD *)(v59 + 8) <= 0x40u && (v60 = *(_DWORD *)(v54 + 8), v60 <= 0x40) )
      {
        v63 = *(_QWORD *)v54;
        *(_DWORD *)(v59 + 8) = v60;
        *(_QWORD *)v59 = v63;
      }
      else
      {
        sub_22056A0(v59, v54);
      }
      *(_BYTE *)(v59 + 12) = *(_BYTE *)(v54 + 12);
      *(_DWORD *)(v59 + 16) = *(_DWORD *)(v54 + 16);
      sub_E24D00(a2);
      v13 = *(int **)(a1 + 8);
      v14 = *v13;
      goto LABEL_67;
    case 12:
      v45 = *v6 + 72 * v3;
      if ( *(_BYTE *)(v45 + 64) != 15 )
        goto LABEL_109;
      v46 = a2[4];
      v47 = *a2;
      if ( *((_DWORD *)a2 + 6) )
        goto LABEL_65;
      v61 = *(_QWORD *)(v46 + 32);
      v62 = *((unsigned int *)a2 + 10);
      if ( *(_DWORD *)(v61 + 24) != (_DWORD)v62 && (_DWORD)v62 )
        v61 = *(_QWORD *)(v46 + v62 + 32);
      if ( *(_BYTE *)(v61 + 60) && v47 == *((_DWORD *)a2 + 10) )
LABEL_107:
        v50 = v46 + v47 + 72;
      else
LABEL_65:
        v50 = v46 + v47 + 40;
      *(_QWORD *)v50 = *(_QWORD *)v45;
      *(_DWORD *)(v50 + 8) = *(_DWORD *)(v45 + 8);
      sub_E24D00(a2);
      v13 = *(int **)(a1 + 8);
      v14 = *v13;
      goto LABEL_67;
    case 13:
      v7 = *v6 + 72 * v3;
      if ( *(_BYTE *)(v7 + 64) )
        goto LABEL_109;
      v8 = a2[4];
      v9 = *a2;
      if ( *((_DWORD *)a2 + 6) )
        goto LABEL_9;
      v10 = *(_QWORD *)(v8 + 32);
      v11 = *((unsigned int *)a2 + 10);
      if ( *(_DWORD *)(v10 + 24) != (_DWORD)v11 && (_DWORD)v11 )
        v10 = *(_QWORD *)(v8 + v11 + 32);
      if ( !*(_BYTE *)(v10 + 60) || (v12 = v8 + v9 + 72, v9 != *((_DWORD *)a2 + 10)) )
LABEL_9:
        v12 = v8 + v9 + 40;
      sub_E23300(v12, v7);
      sub_E24D00(a2);
      v13 = *(int **)(a1 + 8);
      v14 = *v13;
      goto LABEL_67;
    case 14:
      v15 = *v6 + 72 * v3;
      if ( *(_BYTE *)(v15 + 64) != 2 )
LABEL_109:
        abort();
      v16 = a2[4];
      v17 = *a2;
      if ( *((_DWORD *)a2 + 6) )
        goto LABEL_18;
      v18 = *(_QWORD *)(v16 + 32);
      v19 = *((unsigned int *)a2 + 10);
      if ( *(_DWORD *)(v18 + 24) != (_DWORD)v19 && (_DWORD)v19 )
        v18 = *(_QWORD *)(v16 + v19 + 32);
      if ( !*(_BYTE *)(v18 + 60) || (v20 = v16 + v17 + 72, v17 != *((_DWORD *)a2 + 10)) )
LABEL_18:
        v20 = v16 + v17 + 40;
      sub_E23300(v20, v15);
      *(_QWORD *)(v20 + 48) = *(_QWORD *)(v15 + 48);
      *(_DWORD *)(v20 + 56) = *(_DWORD *)(v15 + 56);
      sub_E24D00(a2);
      v13 = *(int **)(a1 + 8);
      v14 = *v13;
LABEL_67:
      *v13 = v14 + 1;
      result = 1;
      break;
    default:
      **(_DWORD **)(a1 + 8) = v3 + 1;
      result = 1;
      break;
  }
  return result;
}
