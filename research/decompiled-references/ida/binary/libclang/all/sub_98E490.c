__int64 __fastcall sub_98E490(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rax
  __int64 *v6; // rdi
  __int64 v7; // r12
  int v8; // esi
  int *v9; // r13
  __int64 v10; // r11
  __int64 v11; // rsi
  __int64 v12; // r12
  int v13; // ebp
  __int64 v14; // r12
  char v15; // al
  int *v16; // r13
  __int64 v17; // r11
  __int64 v18; // r14
  __int64 v19; // r12
  unsigned __int8 *v20; // r13
  int *v21; // r13
  __int64 v22; // r11
  __int64 v23; // rsi
  unsigned __int8 *v24; // r12
  int *v25; // r13
  __int64 v26; // r11
  __int64 v27; // rsi
  unsigned __int8 *v28; // r12
  int *v29; // r13
  __int64 v30; // r11
  __int64 v31; // rsi
  unsigned __int16 *v32; // r12
  int *v33; // r13
  __int64 v34; // r11
  __int64 v35; // rsi
  unsigned __int16 *v36; // r12
  int *v37; // r13
  __int64 v38; // r11
  __int64 v39; // rsi
  unsigned int *v40; // r12
  int *v41; // r13
  __int64 v42; // r11
  __int64 v43; // rsi
  unsigned int *v44; // r12
  int *v45; // r13
  __int64 v46; // r11
  __int64 v47; // rsi
  __int64 *v48; // r12
  int *v49; // r13
  __int64 v50; // r11
  __int64 v51; // rsi
  __int64 *v52; // r12
  int *v53; // r13
  __int64 v54; // r11
  __int64 v55; // rsi
  __int64 v56; // r12
  __int64 v58; // [rsp+0h] [rbp-68h] BYREF
  int v59; // [rsp+8h] [rbp-60h]
  __int64 v60; // [rsp+18h] [rbp-50h]
  unsigned int v61; // [rsp+20h] [rbp-48h]
  int v62; // [rsp+30h] [rbp-38h]

  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)a1 = 0;
  *(_BYTE *)(a1 + 12) = 0;
  v5 = *(_QWORD *)(a2 + 32);
  v6 = (__int64 *)(a2 + 192);
  v7 = *(unsigned int *)(*(_QWORD *)(v5 + 448) + 4LL * a3);
  v8 = *(_DWORD *)(*(_QWORD *)(v5 + 448) + 4LL * a3);
  switch ( *(_DWORD *)(*(_QWORD *)(v5 + 376) + 4LL * a3) )
  {
    case 0:
      v21 = sub_97DED0(v6, v8);
      if ( v21 == (int *)sub_914A80(v22) )
      {
        v14 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 168) + v7 - *(unsigned int *)(a2 + 160));
      }
      else
      {
        sub_A1BF70(&v58, *((_QWORD *)v21 + 1));
        if ( v62 )
          goto LABEL_31;
        v23 = *(_QWORD *)(v60 + 32);
        if ( *(_DWORD *)(v23 + 16) != v61 && v61 )
          v23 = *(_QWORD *)(v60 + v61 + 32);
        if ( !*(_BYTE *)(v23 + 51) || (v24 = (unsigned __int8 *)(v60 + v58 + 72), v58 != v61) )
LABEL_31:
          v24 = (unsigned __int8 *)(v60 + v58 + 40);
        sub_A1C0C0(&v58);
        v14 = *v24;
        if ( *(_DWORD *)(a1 + 8) > 0x40u && *(_QWORD *)a1 )
          operator delete[](*(void **)a1);
      }
      v13 = 8;
      v15 = 0;
      break;
    case 1:
      v25 = sub_97DED0(v6, v8);
      if ( v25 == (int *)sub_914A80(v26) )
      {
        v14 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 168) + v7 - *(unsigned int *)(a2 + 160));
      }
      else
      {
        sub_A1BF70(&v58, *((_QWORD *)v25 + 1));
        if ( v62 )
          goto LABEL_43;
        v27 = *(_QWORD *)(v60 + 32);
        if ( *(_DWORD *)(v27 + 16) != v61 && v61 )
          v27 = *(_QWORD *)(v60 + v61 + 32);
        if ( !*(_BYTE *)(v27 + 51) || (v28 = (unsigned __int8 *)(v60 + v58 + 72), v58 != v61) )
LABEL_43:
          v28 = (unsigned __int8 *)(v60 + v58 + 40);
        sub_A1C0C0(&v58);
        v14 = *v28;
        if ( *(_DWORD *)(a1 + 8) > 0x40u && *(_QWORD *)a1 )
          operator delete[](*(void **)a1);
      }
      v13 = 8;
      v15 = 1;
      break;
    case 2:
      v29 = sub_97DED0(v6, v8);
      if ( v29 == (int *)sub_914A80(v30) )
      {
        v14 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 168) + v7 - *(unsigned int *)(a2 + 160));
      }
      else
      {
        sub_A1BF70(&v58, *((_QWORD *)v29 + 1));
        if ( v62 )
          goto LABEL_55;
        v31 = *(_QWORD *)(v60 + 32);
        if ( *(_DWORD *)(v31 + 16) != v61 && v61 )
          v31 = *(_QWORD *)(v60 + v61 + 32);
        if ( !*(_BYTE *)(v31 + 51) || (v32 = (unsigned __int16 *)(v60 + v58 + 72), v58 != v61) )
LABEL_55:
          v32 = (unsigned __int16 *)(v60 + v58 + 40);
        sub_A1C0C0(&v58);
        v14 = *v32;
        if ( *(_DWORD *)(a1 + 8) > 0x40u && *(_QWORD *)a1 )
          operator delete[](*(void **)a1);
      }
      v13 = 16;
      v15 = 0;
      break;
    case 3:
      v33 = sub_97DED0(v6, v8);
      if ( v33 == (int *)sub_914A80(v34) )
      {
        v14 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 168) + v7 - *(unsigned int *)(a2 + 160));
      }
      else
      {
        sub_A1BF70(&v58, *((_QWORD *)v33 + 1));
        if ( v62 )
          goto LABEL_67;
        v35 = *(_QWORD *)(v60 + 32);
        if ( *(_DWORD *)(v35 + 16) != v61 && v61 )
          v35 = *(_QWORD *)(v60 + v61 + 32);
        if ( !*(_BYTE *)(v35 + 51) || (v36 = (unsigned __int16 *)(v60 + v58 + 72), v58 != v61) )
LABEL_67:
          v36 = (unsigned __int16 *)(v60 + v58 + 40);
        sub_A1C0C0(&v58);
        v14 = *v36;
        if ( *(_DWORD *)(a1 + 8) > 0x40u && *(_QWORD *)a1 )
          operator delete[](*(void **)a1);
      }
      v13 = 16;
      v15 = 1;
      break;
    case 4:
      v37 = sub_97DED0(v6, v8);
      if ( v37 == (int *)sub_914A80(v38) )
      {
        v14 = *(unsigned int *)(*(_QWORD *)(a2 + 168) + v7 - *(unsigned int *)(a2 + 160));
      }
      else
      {
        sub_A1BF70(&v58, *((_QWORD *)v37 + 1));
        if ( v62 )
          goto LABEL_79;
        v39 = *(_QWORD *)(v60 + 32);
        if ( *(_DWORD *)(v39 + 16) != v61 && v61 )
          v39 = *(_QWORD *)(v60 + v61 + 32);
        if ( !*(_BYTE *)(v39 + 51) || (v40 = (unsigned int *)(v60 + v58 + 72), v58 != v61) )
LABEL_79:
          v40 = (unsigned int *)(v60 + v58 + 40);
        sub_A1C0C0(&v58);
        v14 = *v40;
        if ( *(_DWORD *)(a1 + 8) > 0x40u && *(_QWORD *)a1 )
          operator delete[](*(void **)a1);
      }
      v13 = 32;
      v15 = 0;
      break;
    case 5:
      v41 = sub_97DED0(v6, v8);
      if ( v41 == (int *)sub_914A80(v42) )
      {
        v14 = *(unsigned int *)(*(_QWORD *)(a2 + 168) + v7 - *(unsigned int *)(a2 + 160));
      }
      else
      {
        sub_A1BF70(&v58, *((_QWORD *)v41 + 1));
        if ( v62 )
          goto LABEL_91;
        v43 = *(_QWORD *)(v60 + 32);
        if ( *(_DWORD *)(v43 + 16) != v61 && v61 )
          v43 = *(_QWORD *)(v60 + v61 + 32);
        if ( !*(_BYTE *)(v43 + 51) || (v44 = (unsigned int *)(v60 + v58 + 72), v61 != v58) )
LABEL_91:
          v44 = (unsigned int *)(v60 + v58 + 40);
        sub_A1C0C0(&v58);
        v14 = *v44;
        if ( *(_DWORD *)(a1 + 8) > 0x40u && *(_QWORD *)a1 )
          operator delete[](*(void **)a1);
      }
      v13 = 32;
      v15 = 1;
      break;
    case 6:
      v45 = sub_97DED0(v6, v8);
      if ( v45 == (int *)sub_914A80(v46) )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(a2 + 168) + v7 - *(unsigned int *)(a2 + 160));
      }
      else
      {
        sub_A1BF70(&v58, *((_QWORD *)v45 + 1));
        if ( v62 )
          goto LABEL_103;
        v47 = *(_QWORD *)(v60 + 32);
        if ( *(_DWORD *)(v47 + 16) != v61 && v61 )
          v47 = *(_QWORD *)(v60 + v61 + 32);
        if ( !*(_BYTE *)(v47 + 51) || (v48 = (__int64 *)(v60 + v58 + 72), v61 != v58) )
LABEL_103:
          v48 = (__int64 *)(v60 + v58 + 40);
        sub_A1C0C0(&v58);
        v14 = *v48;
        if ( *(_DWORD *)(a1 + 8) > 0x40u && *(_QWORD *)a1 )
          operator delete[](*(void **)a1);
      }
      v13 = 64;
      v15 = 0;
      break;
    case 7:
      v49 = sub_97DED0(v6, v8);
      if ( v49 == (int *)sub_914A80(v50) )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(a2 + 168) + v7 - *(unsigned int *)(a2 + 160));
      }
      else
      {
        sub_A1BF70(&v58, *((_QWORD *)v49 + 1));
        if ( v62 )
          goto LABEL_115;
        v51 = *(_QWORD *)(v60 + 32);
        if ( *(_DWORD *)(v51 + 16) != v61 && v61 )
          v51 = *(_QWORD *)(v60 + v61 + 32);
        if ( !*(_BYTE *)(v51 + 51) || (v52 = (__int64 *)(v60 + v58 + 72), v61 != v58) )
LABEL_115:
          v52 = (__int64 *)(v60 + v58 + 40);
        sub_A1C0C0(&v58);
        v14 = *v52;
        if ( *(_DWORD *)(a1 + 8) > 0x40u && *(_QWORD *)a1 )
          operator delete[](*(void **)a1);
      }
      v13 = 64;
      v15 = 1;
      break;
    case 8:
      v53 = sub_97DED0(v6, v8);
      if ( v53 == (int *)sub_914A80(v54) )
      {
        v56 = *(_QWORD *)(a2 + 168) + v7 - *(unsigned int *)(a2 + 160);
      }
      else
      {
        sub_A1BF70(&v58, *((_QWORD *)v53 + 1));
        if ( v62 )
          goto LABEL_127;
        v55 = *(_QWORD *)(v60 + 32);
        if ( *(_DWORD *)(v55 + 16) != v61 && v61 )
          v55 = *(_QWORD *)(v60 + v61 + 32);
        if ( !*(_BYTE *)(v55 + 51) || (v56 = v60 + v58 + 72, v58 != v61) )
LABEL_127:
          v56 = v60 + v58 + 40;
        sub_A1C0C0(&v58);
      }
      sub_2587D60(&v58, v56);
      v13 = v59;
      v14 = v58;
      if ( *(_DWORD *)(a1 + 8) > 0x40u && *(_QWORD *)a1 )
        operator delete[](*(void **)a1);
      goto LABEL_132;
    case 9:
      v9 = sub_97DED0(v6, v8);
      if ( v9 == (int *)sub_914A80(v10) )
      {
        v12 = *(_QWORD *)(a2 + 168) + v7 - *(unsigned int *)(a2 + 160);
      }
      else
      {
        sub_A1BF70(&v58, *((_QWORD *)v9 + 1));
        if ( v62 )
          goto LABEL_9;
        v11 = *(_QWORD *)(v60 + 32);
        if ( *(_DWORD *)(v11 + 16) != v61 && v61 )
          v11 = *(_QWORD *)(v60 + v61 + 32);
        if ( !*(_BYTE *)(v11 + 51) || (v12 = v60 + v58 + 72, v58 != v61) )
LABEL_9:
          v12 = v60 + v58 + 40;
        sub_A1C0C0(&v58);
      }
      sub_2587BE0(&v58, v12, *(unsigned int *)(v12 + 8));
      v13 = v59;
      v14 = v58;
      if ( *(_DWORD *)(a1 + 8) > 0x40u && *(_QWORD *)a1 )
        operator delete[](*(void **)a1);
      v15 = 0;
      break;
    case 0xA:
      v16 = sub_97DED0(v6, v8);
      if ( v16 == (int *)sub_914A80(v17) )
      {
        v14 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 168) + v7 - *(unsigned int *)(a2 + 160));
      }
      else
      {
        sub_A1BF70(&v58, *((_QWORD *)v16 + 1));
        v18 = v60;
        v19 = v58;
        if ( v62
          || !*(_BYTE *)(sub_8E5480((__int64)&v58) + 51)
          || (v20 = (unsigned __int8 *)(v18 + v19 + 72), v19 != v61) )
        {
          v20 = (unsigned __int8 *)(v18 + v19 + 40);
        }
        sub_A1C0C0(&v58);
        v14 = *v20;
        if ( *(_DWORD *)(a1 + 8) > 0x40u && *(_QWORD *)a1 )
          operator delete[](*(void **)a1);
      }
      v13 = 1;
LABEL_132:
      v15 = 1;
      break;
  }
  *(_BYTE *)(a1 + 12) = v15;
  *(_QWORD *)a1 = v14;
  *(_DWORD *)(a1 + 8) = v13;
  return a1;
}

