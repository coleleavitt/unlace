void __fastcall sub_F1D660(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  int v6; // ebp
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rbp
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // ebp
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rbp
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // rbp
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // r14
  int v31; // ebp
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  int v34; // ebp
  unsigned int v35; // ebp
  __int64 v36; // rax
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rbp
  unsigned __int64 v39; // rbp
  __int64 v40; // rdx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rbp
  unsigned __int64 v47; // rbp
  __int64 v48; // rdx
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rdx
  __int64 v51; // rsi
  unsigned __int8 v52; // al
  void *v53; // rdx
  unsigned __int64 v54; // r14
  unsigned __int64 v55; // rcx
  __int64 v56; // rax
  char v57; // bp
  void *v58; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v59; // [rsp+8h] [rbp-40h]
  char v60; // [rsp+Ch] [rbp-3Ch]
  void *v61; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v62; // [rsp+18h] [rbp-30h]

  v5 = *(unsigned int *)(a2 + 8);
  v6 = *(_DWORD *)a1 & 0x7FFFFFFF;
  if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
  {
    sub_2237220(a2, a2 + 16, v5 + 1, 4);
    v5 = *(unsigned int *)(a2 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a2 + 4 * v5) = v6;
  v7 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v7;
  switch ( *(_DWORD *)a1 & 0x7FFFFFFF )
  {
    case 1:
      v8 = v7 + 1;
      v9 = *(_QWORD *)(a1 + 8);
      if ( v8 > *(unsigned int *)(a2 + 12) )
        sub_2237220(a2, a2 + 16, v8, 4);
      *(_DWORD *)(*(_QWORD *)a2 + 4LL * *(unsigned int *)(a2 + 8)) = v9;
      v10 = HIDWORD(v9);
      v11 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
      v12 = *(unsigned int *)(a2 + 12);
      *(_DWORD *)(a2 + 8) = v11;
      v13 = v11 + 1;
      if ( v13 > v12 )
        sub_2237220(a2, a2 + 16, v13, 4);
      *(_DWORD *)(*(_QWORD *)a2 + 4LL * (unsigned int)(*(_DWORD *)(a2 + 8))++) = v10;
      return;
    case 2:
      v37 = v7 + 1;
      v38 = *(_QWORD *)(a1 + 8);
      if ( v37 > *(unsigned int *)(a2 + 12) )
        sub_2237220(a2, a2 + 16, v37, 4);
      *(_DWORD *)(*(_QWORD *)a2 + 4LL * *(unsigned int *)(a2 + 8)) = v38;
      v39 = HIDWORD(v38);
      v40 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
      v41 = *(unsigned int *)(a2 + 12);
      *(_DWORD *)(a2 + 8) = v40;
      v42 = v40 + 1;
      if ( v42 > v41 )
        sub_2237220(a2, a2 + 16, v42, 4);
      *(_DWORD *)(*(_QWORD *)a2 + 4LL * *(unsigned int *)(a2 + 8)) = v39;
      v43 = *(unsigned int *)(a2 + 12);
      v17 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
      v19 = v17 + 1;
      *(_DWORD *)(a2 + 8) = v17;
      v18 = *(_QWORD *)(a1 + 16);
      if ( v17 + 1 <= v43 )
        goto LABEL_14;
      goto LABEL_37;
    case 3:
      v44 = v7 + 1;
      v18 = *(_QWORD *)(a1 + 8);
      if ( v44 > *(unsigned int *)(a2 + 12) )
        sub_2237220(a2, a2 + 16, v44, 4);
      *(_DWORD *)(*(_QWORD *)a2 + 4LL * *(unsigned int *)(a2 + 8)) = v18;
      goto LABEL_15;
    case 4:
      v45 = v7 + 1;
      v46 = *(_QWORD *)(a1 + 16);
      if ( v45 > *(unsigned int *)(a2 + 12) )
        sub_2237220(a2, a2 + 16, v45, 4);
      *(_DWORD *)(*(_QWORD *)a2 + 4LL * *(unsigned int *)(a2 + 8)) = v46;
      v47 = HIDWORD(v46);
      v48 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
      v49 = *(unsigned int *)(a2 + 12);
      *(_DWORD *)(a2 + 8) = v48;
      v50 = v48 + 1;
      if ( v50 > v49 )
        sub_2237220(a2, a2 + 16, v50, 4);
      *(_DWORD *)(*(_QWORD *)a2 + 4LL * (unsigned int)(*(_DWORD *)(a2 + 8))++) = v47;
      v51 = *(_DWORD *)(a1 + 4) & 0x7FFFFFFF;
      if ( (unsigned int)v51 > 0x40 )
      {
        v57 = *(_BYTE *)(a1 + 7) >> 7;
        sub_2205600(&v61, v51, *(_QWORD *)(a1 + 8), ((unsigned __int64)(unsigned int)v51 + 63) >> 6);
        v60 = v57;
        v59 = v62;
        v58 = v61;
      }
      else
      {
        v52 = *(_BYTE *)(a1 + 7);
        v53 = *(void **)(a1 + 8);
        v59 = *(_DWORD *)(a1 + 4) & 0x7FFFFFFF;
        v58 = v53;
        v60 = v52 >> 7;
      }
      sub_220C670(&v58, a2);
      if ( v59 > 0x40 && v58 )
        operator delete[](v58);
      return;
    case 5:
      v23 = v7 + 1;
      v24 = *(_QWORD *)(a1 + 16);
      if ( v23 > *(unsigned int *)(a2 + 12) )
        sub_2237220(a2, a2 + 16, v23, 4);
      *(_DWORD *)(*(_QWORD *)a2 + 4LL * *(unsigned int *)(a2 + 8)) = v24;
      v25 = HIDWORD(v24);
      v26 = *(unsigned int *)(a2 + 12);
      v27 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
      *(_DWORD *)(a2 + 8) = v27;
      if ( v27 + 1 > v26 )
      {
        sub_2237220(a2, a2 + 16, v27 + 1, 4);
        v27 = *(unsigned int *)(a2 + 8);
      }
      *(_DWORD *)(*(_QWORD *)a2 + 4 * v27) = v25;
      ++*(_DWORD *)(a2 + 8);
      sub_A4FF00(*(unsigned int **)(a1 + 8), a2);
      return;
    case 6:
      goto LABEL_13;
    case 7:
      v14 = (unsigned int)v7;
      v15 = *(_DWORD *)(a1 + 4);
      v16 = (unsigned int)v7 + 1LL;
      if ( v16 > *(unsigned int *)(a2 + 12) )
      {
        sub_2237220(a2, a2 + 16, v16, 4);
        v14 = *(unsigned int *)(a2 + 8);
      }
      *(_DWORD *)(*(_QWORD *)a2 + 4 * v14) = v15;
      LODWORD(v7) = *(_DWORD *)(a2 + 8) + 1;
      *(_DWORD *)(a2 + 8) = v7;
LABEL_13:
      v17 = (unsigned int)v7;
      v18 = *(_QWORD *)(a1 + 8);
      v19 = (unsigned int)v7 + 1LL;
      if ( v19 > *(unsigned int *)(a2 + 12) )
      {
LABEL_37:
        sub_2237220(a2, a2 + 16, v19, 4);
        v17 = *(unsigned int *)(a2 + 8);
      }
LABEL_14:
      *(_DWORD *)(*(_QWORD *)a2 + 4 * v17) = v18;
LABEL_15:
      v20 = *(unsigned int *)(a2 + 12);
      v21 = HIDWORD(v18);
      v22 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
      *(_DWORD *)(a2 + 8) = v22;
      if ( v22 + 1 > v20 )
      {
        sub_2237220(a2, a2 + 16, v22 + 1, 4);
        v22 = *(unsigned int *)(a2 + 8);
      }
      *(_DWORD *)(*(_QWORD *)a2 + 4 * v22) = v21;
      ++*(_DWORD *)(a2 + 8);
      break;
    case 8:
      v28 = (unsigned int)v7;
      v29 = (unsigned int)v7 + 1LL;
      v30 = *(_QWORD *)(a1 + 8);
      v31 = HIDWORD(*(_QWORD *)a1) & 1;
      if ( v29 > *(unsigned int *)(a2 + 12) )
      {
        sub_2237220(a2, a2 + 16, v29, 4);
        v28 = *(unsigned int *)(a2 + 8);
      }
      *(_DWORD *)(*(_QWORD *)a2 + 4 * v28) = v31;
      v32 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
      *(_DWORD *)(a2 + 8) = v32;
      if ( (_BYTE)v31 )
      {
        sub_F1A490(v30, a2, a3, 1, 0);
      }
      else
      {
        if ( v32 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
        {
          sub_2237220(a2, a2 + 16, v32 + 1, 4);
          v32 = *(unsigned int *)(a2 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a2 + 4 * v32) = v30;
        v54 = HIDWORD(v30);
        v55 = *(unsigned int *)(a2 + 12);
        v56 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
        *(_DWORD *)(a2 + 8) = v56;
        if ( v56 + 1 > v55 )
        {
          sub_2237220(a2, a2 + 16, v56 + 1, 4);
          v56 = *(unsigned int *)(a2 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a2 + 4 * v56) = v54;
        ++*(_DWORD *)(a2 + 8);
      }
      break;
    case 9:
      v33 = v7 + 1;
      v34 = *(_DWORD *)(a1 + 4);
      if ( v33 > *(unsigned int *)(a2 + 12) )
        sub_2237220(a2, a2 + 16, v33, 4);
      *(_DWORD *)(*(_QWORD *)a2 + 4LL * *(unsigned int *)(a2 + 8)) = v34;
      v35 = 0;
      ++*(_DWORD *)(a2 + 8);
      if ( *(_DWORD *)(a1 + 4) )
      {
        do
        {
          v36 = v35++;
          sub_F1D660(*(_QWORD *)(a1 + 8) + 24 * v36, a2, a3);
        }
        while ( *(_DWORD *)(a1 + 4) != v35 );
      }
      break;
    default:
      return;
  }
}
