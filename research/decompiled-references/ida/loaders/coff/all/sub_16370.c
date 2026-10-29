__int64 __fastcall sub_16370(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  unsigned int dword; // r14d
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(__int64, __int64); // rax
  unsigned int v12; // r13d
  unsigned int v13; // ebp
  __int64 v14; // rax
  void (*v15)(); // rdx
  __int64 (__fastcall *v16)(__int64, __int64, __int64); // rax
  unsigned int v17; // r12d
  __int64 v18; // rsi
  __int64 (__fastcall *v19)(__int64, __int64, __int64); // rax
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 (__fastcall *v25)(__int64, __int64); // rax
  __int16 v26; // r12
  __int64 v27; // rcx
  __int64 (__fastcall *v28)(__int64, __int64); // rax
  __int16 v29; // ax
  __int64 v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // r9
  __int64 v35; // r8
  int v36; // r9d
  __int64 v37; // rcx
  __int64 v38; // rsi
  int v39; // edx
  int v40; // r12d
  unsigned int v41; // esi
  __int64 v42; // rsi
  __int64 (__fastcall *v43)(__int64, __int64, __int64); // rax
  __int64 v44; // rax
  __int64 v45; // rdi
  __int64 (__fastcall *v46)(__int64, __int64); // rax
  __int64 v47; // rcx
  __int64 (__fastcall *v48)(__int64, __int64); // rax
  unsigned __int16 v49; // r13
  __int64 v50; // rcx
  __int64 (__fastcall *v51)(__int64, __int64); // rax
  __int64 v52; // rcx
  __int64 (__fastcall *v53)(__int64, __int64); // rax
  unsigned __int16 v54; // r12
  __int64 v55; // rsi
  void (*v56)(); // rax
  __int64 (__fastcall *v57)(__int64, __int64, __int64); // r8
  __int64 v58; // rdi
  unsigned int v59; // r14d
  __int64 v60; // rsi
  __int64 v61; // rax
  __int64 (__fastcall *v62)(__int64, __int64, __int64); // r8
  unsigned __int16 v63; // r12
  __int64 (__fastcall *v64)(__int64, __int64, __int64); // r8
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int16 word; // [rsp+Ah] [rbp-3Eh]
  __int16 v71; // [rsp+Ch] [rbp-3Ch]
  unsigned __int16 v72; // [rsp+Eh] [rbp-3Ah]

  switch ( *(_WORD *)(a3 + 12) )
  {
    case 0:
      return 1;
    case 1:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 4;
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, _QWORD, _QWORD))(*a1 + 8LL))(
        a1,
        a1[4],
        a1[5],
        31,
        0,
        *((unsigned __int8 *)a1 + 64));
      return 1;
    case 2:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 4;
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, __int64, __int64))(*a1 + 8LL))(
        a1,
        a1[4],
        a1[7],
        31,
        1,
        1);
      return 1;
    case 3:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 4;
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, __int64, _QWORD))(*a1 + 8LL))(
        a1,
        a1[4],
        (a1[5] - 8LL - a1[4]) >> 2,
        23,
        1,
        0);
      return 1;
    case 5:
    case 0xF:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 4;
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, _QWORD, __int64))(*a1 + 8LL))(
        a1,
        a1[4],
        a1[7],
        31,
        0,
        1);
      return 1;
    case 8:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 4;
      v66 = a1[5];
      v30 = a1[4];
      v67 = *a1;
      v68 = v66 - 8 - v30;
      if ( *((_BYTE *)a1 + 65) )
      {
        v43 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v67 + 80);
        v42 = v68 & 0xFFFFFF | ((_DWORD)v68 << 23) & 0x1000000 | 0xFA000000;
        if ( v43 == sub_149F0 )
LABEL_50:
          put_dword(v30, v42);
        else
LABEL_25:
          v43((__int64)a1, v30, v42);
      }
      else
      {
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, __int64, _QWORD))(v67 + 8))(
          a1,
          a1[4],
          v68 >> 2,
          23,
          1,
          0);
      }
      return 1;
    case 0x10:
      v6 = *a1;
      v7 = a1[4];
      v8 = *(__int64 (__fastcall **)(__int64, __int64))(v6 + 48);
      if ( v8 == sub_14A30 )
        dword = get_dword(v7);
      else
        dword = v8((__int64)a1, v7);
      v10 = a1[4];
      v11 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 48LL);
      if ( v11 == sub_14A30 )
        v12 = get_dword(v10 + 4);
      else
        v12 = v11((__int64)a1, v10 + 4);
      v13 = dword & 0xFFF | (dword >> 4) & 0xF000 | ((v12 & 0xFFF | (v12 >> 4) & 0xF000) << 16);
      v14 = *a1;
      v15 = *(void (**)())(*a1 + 16LL);
      if ( v15 != nullsub_2 )
      {
        ((void (__fastcall *)(_QWORD *, _QWORD))v15)(a1, v13);
        v14 = *a1;
      }
      v16 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v14 + 80);
      v17 = v13 + *((_DWORD *)a1 + 10);
      v18 = ((dword & 0xFFF | (dword >> 4) & 0xF000) + *((_WORD *)a1 + 20)) & 0xFFF
          | dword & 0xFFF0F000
          | (16 * v17) & 0xF0000;
      if ( v16 == sub_149F0 )
        put_dword(a1[4], v18);
      else
        v16((__int64)a1, a1[4], v18);
      v19 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*a1 + 80LL);
      v20 = a1[4] + 4LL;
      v21 = HIWORD(v17) & 0xFFF | v12 & 0xFFF0F000 | (16 * HIWORD(v17)) & 0xF0000;
      if ( v19 != sub_149F0 )
        goto LABEL_56;
      put_dword(v20, v21);
      goto LABEL_12;
    case 0x11:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 4;
      v44 = *a1;
      v45 = a1[4];
      v46 = *(__int64 (__fastcall **)(__int64, __int64))(v44 + 40);
      if ( v46 == sub_14A40 )
        word = get_word(v45);
      else
        word = v46((__int64)a1, v45);
      v47 = a1[4];
      v48 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 40LL);
      if ( v48 == sub_14A40 )
        v49 = get_word(v47 + 2);
      else
        v49 = v48((__int64)a1, v47 + 2);
      v50 = a1[4];
      v51 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 40LL);
      if ( v51 == sub_14A40 )
        v71 = get_word(v50 + 4);
      else
        v71 = v51((__int64)a1, v50 + 4);
      v52 = a1[4];
      v53 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 40LL);
      if ( v53 == sub_14A40 )
        v54 = get_word(v52 + 6);
      else
        v54 = v53((__int64)a1, v52 + 6);
      v55 = *a1;
      v13 = (v49 >> 4) & 0x300
          | (unsigned __int8)v49
          | (unsigned __int16)(word << 12)
          | (2 * word) & 0x800
          | (((v54 >> 4) & 0x300 | (unsigned __int8)v54 | (unsigned __int16)(v71 << 12) | (2 * v71) & 0x800) << 16);
      v56 = *(void (**)())(*a1 + 16LL);
      if ( v56 != nullsub_2 )
      {
        ((void (__fastcall *)(_QWORD *, _QWORD))v56)(a1, v13);
        v55 = *a1;
      }
      v57 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v55 + 72);
      v58 = a1[4];
      v59 = v13 + *((_DWORD *)a1 + 10);
      v72 = (16 * (v13 + *((_WORD *)a1 + 20))) & 0x3000 | (unsigned __int8)(v13 + *((_BYTE *)a1 + 40)) | v49 & 0xCF00;
      v60 = ((unsigned __int16)(v13 + *((_WORD *)a1 + 20)) >> 1) & 0x400
          | ((unsigned __int16)(v13 + *((_WORD *)a1 + 20)) >> 12)
          | word & 0xFBF0u;
      if ( v57 == sub_14A50 )
        put_word(v58, v60);
      else
        v57((__int64)a1, v58, v60);
      v61 = a1[4];
      v62 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*a1 + 72LL);
      if ( v62 == sub_14A50 )
        put_word(v61 + 2, v72);
      else
        v62((__int64)a1, v61 + 2, v72);
      v63 = (16 * HIWORD(v59)) & 0x3000 | BYTE2(v59) | v54 & 0xCF00;
      v64 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*a1 + 72LL);
      v65 = a1[4];
      if ( v64 == sub_14A50 )
        put_word(v65 + 4, (HIWORD(v59) >> 1) & 0x400 | (HIWORD(v59) >> 12) | v71 & 0xFBF0u);
      else
        v64((__int64)a1, v65 + 4, (HIWORD(v59) >> 1) & 0x400 | (HIWORD(v59) >> 12) | v71 & 0xFBF0u);
      v21 = v63;
      v19 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*a1 + 72LL);
      v20 = a1[4] + 6LL;
      if ( v19 == sub_14A50 )
        put_word(v20, v63);
      else
LABEL_56:
        v19((__int64)a1, v20, v21);
LABEL_12:
      *(_QWORD *)(a2 + 24) = a1[5];
      *(_QWORD *)(a2 + 32) = v13;
      return 1;
    case 0x12:
    case 0x14:
    case 0x15:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 4;
      v23 = *a1;
      v24 = a1[4];
      v25 = *(__int64 (__fastcall **)(__int64, __int64))(v23 + 40);
      if ( v25 == sub_14A40 )
        v26 = get_word(v24);
      else
        v26 = v25((__int64)a1, v24);
      v27 = a1[4];
      v28 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 40LL);
      if ( v28 == sub_14A40 )
        v29 = get_word(v27 + 2);
      else
        v29 = v28((__int64)a1, v27 + 2);
      v30 = a1[4];
      v31 = a1[5] - v30;
      v32 = v31 - 4;
      if ( *((_BYTE *)a1 + 65) )
      {
        v69 = v31 - 6;
        v33 = v29 & 0x1000;
        if ( (v32 & 4) != 0 )
          v32 = v69;
      }
      else
      {
        v33 = v29 & 0xD000;
      }
      v34 = v32 >> 12;
      v35 = (v32 >> 1) & 0x7FF;
      if ( *(_WORD *)(a3 + 12) == 18 )
      {
        v36 = v34 & 0x3F;
        v37 = (v32 >> 20) & 1;
        v38 = (v32 >> 19) & 1;
        v39 = (v32 >> 18) & 1;
      }
      else
      {
        v36 = v34 & 0x3FF;
        v37 = (v32 >> 24) & 1;
        LODWORD(v38) = ((v32 >> 23) & 1) == v37;
        v39 = ((v32 >> 22) & 1) == v37;
      }
      v40 = ((_DWORD)v37 << 10) | v36 | v26 & 0xF800;
      v41 = (v39 << 11) | v35 | v33 | ((_DWORD)v38 << 13);
      if ( *((_BYTE *)a1 + 67) )
        v42 = (v40 << 16) | v41;
      else
        v42 = v40 | (v41 << 16);
      v43 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*a1 + 80LL);
      if ( v43 != sub_149F0 )
        goto LABEL_25;
      goto LABEL_50;
    default:
      (*(void (__fastcall **)(_QWORD *))*a1)(a1);
      return 0;
  }
}

