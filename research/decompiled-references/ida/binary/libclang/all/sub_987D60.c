__int64 __fastcall sub_987D60(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 *v10; // r12
  unsigned __int64 v11; // rax
  unsigned int v12; // eax
  __int64 *v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // r13
  __int64 v16; // r12
  __int64 *v17; // rax
  unsigned int v18; // eax
  __int64 *v19; // rdx
  char v20; // bp
  __int64 v21; // r13
  __int64 v22; // r12
  _BYTE *v23; // rax
  unsigned int v25; // eax
  __int64 *v26; // rdx
  __int64 v27; // r12
  __int64 v28; // r14
  __int64 v29; // r13
  __int64 v30; // rbp
  unsigned int v31; // r12d
  unsigned int *v32; // rax
  __int64 v33; // r13
  __int64 v34; // rbp
  unsigned int *v35; // rax
  unsigned int v36; // eax
  __int64 *v37; // rdx
  int v38; // ebp
  __int64 v39; // r13
  __int64 v40; // r12
  _DWORD *v41; // rax
  unsigned int v42; // eax
  __int64 *v43; // rdx
  __int16 v44; // r12
  __int64 v45; // r13
  __int64 v46; // rbp
  _WORD *v47; // rax
  unsigned int v48; // eax
  __int64 *v49; // rdx
  __int16 v50; // bp
  __int64 v51; // r13
  __int64 v52; // r12
  _WORD *v53; // rax
  unsigned int v54; // edx
  __int64 *v55; // rax
  __int64 v56; // r13
  __int64 v57; // r12
  __int64 v58; // rbp
  _QWORD v59[3]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v60; // [rsp+28h] [rbp-50h]
  unsigned int v61; // [rsp+30h] [rbp-48h]
  int v62; // [rsp+40h] [rbp-38h]

  v5 = *(_DWORD *)(a3 + 48);
  if ( v5 == 1 )
  {
    v8 = *(_QWORD *)(a3 + 24);
    v6 = v8;
  }
  else if ( v5 )
  {
    if ( (unsigned int)(v5 - 2) <= 1 )
      BUG();
    v6 = *(_QWORD *)(a3 + 24);
    v8 = *(_QWORD *)(v6 + 32);
  }
  else
  {
    v6 = *(_QWORD *)(a3 + 24);
    v7 = *(unsigned int *)(a3 + 32);
    v8 = *(_QWORD *)(v6 + 32);
    if ( (_DWORD)v7 != *(_DWORD *)(v8 + 16) && (_DWORD)v7 )
      v8 = *(_QWORD *)(v6 + v7 + 32);
  }
  v9 = (unsigned int)(*(_DWORD *)a3 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 280LL) + 8LL));
  sub_A1C030(v59, v6, v9, v9);
  v10 = *(__int64 **)(a1 + 192);
  v11 = sub_8E8FB0((__int64)v59);
  switch ( (unsigned int)sub_8CA760(v10, v11) )
  {
    case 0u:
    case 1u:
      v18 = *(_DWORD *)(a4 + 8);
      v19 = *(__int64 **)a4;
      if ( v18 > 0x40 )
      {
        v20 = *(_BYTE *)v19;
      }
      else
      {
        v20 = 0;
        if ( v18 )
          v20 = (__int64)((_QWORD)v19 << (64 - (unsigned __int8)v18)) >> (64 - (unsigned __int8)v18);
      }
      goto LABEL_21;
    case 2u:
      v48 = *(_DWORD *)(a4 + 8);
      v49 = *(__int64 **)a4;
      if ( v48 <= 0x40 )
      {
        v50 = 0;
        if ( v48 )
          v50 = (__int64)((_QWORD)v49 << (64 - (unsigned __int8)v48)) >> (64 - (unsigned __int8)v48);
      }
      else
      {
        v50 = *(_WORD *)v49;
      }
      v51 = v60;
      v52 = v59[0];
      if ( v62 || !*(_BYTE *)(sub_8E5480((__int64)v59) + 51) || (v53 = (_WORD *)(v51 + v61 + 72), v61 != v52) )
        v53 = (_WORD *)(v51 + v52 + 40);
      *v53 = v50;
      break;
    case 3u:
      v42 = *(_DWORD *)(a4 + 8);
      v43 = *(__int64 **)a4;
      if ( v42 <= 0x40 )
      {
        v44 = 0;
        if ( v42 )
          v44 = (__int64)((_QWORD)v43 << (64 - (unsigned __int8)v42)) >> (64 - (unsigned __int8)v42);
      }
      else
      {
        v44 = *(_WORD *)v43;
      }
      v45 = v60;
      v46 = v59[0];
      if ( v62 || !*(_BYTE *)(sub_8E5480((__int64)v59) + 51) || (v47 = (_WORD *)(v45 + v46 + 72), v46 != v61) )
        v47 = (_WORD *)(v45 + v46 + 40);
      *v47 = v44;
      break;
    case 4u:
      v36 = *(_DWORD *)(a4 + 8);
      v37 = *(__int64 **)a4;
      if ( v36 <= 0x40 )
      {
        v38 = 0;
        if ( v36 )
          v38 = (__int64)((_QWORD)v37 << (64 - (unsigned __int8)v36)) >> (64 - (unsigned __int8)v36);
      }
      else
      {
        v38 = *(_DWORD *)v37;
      }
      v39 = v60;
      v40 = v59[0];
      if ( v62 || !*(_BYTE *)(sub_8E5480((__int64)v59) + 51) || (v41 = (_DWORD *)(v39 + v61 + 72), v61 != v40) )
        v41 = (_DWORD *)(v39 + v40 + 40);
      *v41 = v38;
      break;
    case 5u:
      v31 = *(_DWORD *)(a4 + 8);
      v32 = *(unsigned int **)a4;
      if ( v31 <= 0x40 )
      {
        if ( v31 )
          v31 = (__int64)((_QWORD)v32 << (64 - (unsigned __int8)v31)) >> (64 - (unsigned __int8)v31);
      }
      else
      {
        v31 = *v32;
      }
      v33 = v60;
      v34 = v59[0];
      if ( v62 || !*(_BYTE *)(sub_8E5480((__int64)v59) + 51) || (v35 = (unsigned int *)(v33 + v61 + 72), v61 != v34) )
        v35 = (unsigned int *)(v33 + v34 + 40);
      *v35 = v31;
      break;
    case 6u:
    case 7u:
      v12 = *(_DWORD *)(a4 + 8);
      v13 = *(__int64 **)a4;
      if ( v12 > 0x40 )
      {
        v14 = *v13;
      }
      else
      {
        v14 = 0;
        if ( v12 )
          v14 = (__int64)((_QWORD)v13 << (64 - (unsigned __int8)v12)) >> (64 - (unsigned __int8)v12);
      }
      v15 = v60;
      v16 = v59[0];
      if ( v62 || !*(_BYTE *)(sub_8E5480((__int64)v59) + 51) || (v17 = (__int64 *)(v15 + v61 + 72), v61 != v16) )
        v17 = (__int64 *)(v15 + v16 + 40);
      *v17 = v14;
      break;
    case 8u:
      v25 = *(_DWORD *)(a4 + 8);
      v26 = *(__int64 **)a4;
      if ( v25 <= 0x40 )
      {
        v27 = 0;
        if ( v25 )
          v27 = (__int64)((_QWORD)v26 << (64 - (unsigned __int8)v25)) >> (64 - (unsigned __int8)v25);
      }
      else
      {
        v27 = *v26;
      }
      v28 = v60;
      v29 = v59[0];
      if ( v62 || !*(_BYTE *)(sub_8E5480((__int64)v59) + 51) || (v30 = v28 + v61 + 72, v61 != v29) )
        v30 = v28 + v29 + 40;
      if ( *(_DWORD *)(v30 + 8) > 0x40u && *(_QWORD *)v30 )
        operator delete[](*(void **)v30);
      *(_QWORD *)v30 = v27;
      *(_DWORD *)(v30 + 8) = 0;
      break;
    case 9u:
      v56 = v60;
      v57 = v59[0];
      if ( v62 || !*(_BYTE *)(sub_8E5480((__int64)v59) + 51) || (v58 = v56 + v61 + 72, v61 != v57) )
        v58 = v56 + v57 + 40;
      if ( *(_DWORD *)(v58 + 8) > 0x40u && *(_QWORD *)v58 )
        operator delete[](*(void **)v58);
      *(_QWORD *)v58 = 0;
      *(_DWORD *)(v58 + 8) = 0;
      break;
    case 0xAu:
      v54 = *(_DWORD *)(a4 + 8);
      v55 = *(__int64 **)a4;
      if ( v54 > 0x40 )
      {
        v20 = *v55 != 0;
      }
      else
      {
        v20 = 0;
        if ( v54 )
          v20 = (__int64)((_QWORD)v55 << (64 - (unsigned __int8)v54)) >> (64 - (unsigned __int8)v54) != 0;
      }
LABEL_21:
      v21 = v60;
      v22 = v59[0];
      if ( v62 || !*(_BYTE *)(sub_8E5480((__int64)v59) + 51) || (v23 = (_BYTE *)(v21 + v61 + 72), v61 != v22) )
        v23 = (_BYTE *)(v21 + v22 + 40);
      *v23 = v20;
      break;
  }
  sub_A1DB00(v59);
  sub_A1C0C0(v59);
  return 1;
}

