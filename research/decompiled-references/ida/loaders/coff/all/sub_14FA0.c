__int64 __fastcall sub_14FA0(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v4; // r13d
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64, __int64); // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 (__fastcall *v13)(__int64, __int64, unsigned int); // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, __int64); // rax
  unsigned int v18; // r14d
  __int64 v19; // r12
  void (*v20)(); // rax
  __int64 v21; // rax
  __int64 (__fastcall *v22)(__int64, __int64, __int64); // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 (__fastcall *v26)(__int64, __int64); // rax
  unsigned int dword; // r12d
  __int64 v28; // rax
  char v29; // cl
  bool v30; // zf
  __int64 v31; // rax
  void (*v32)(); // rdx
  int v33; // ebp
  unsigned int v34; // r12d
  int v35; // esi
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 (__fastcall *v38)(__int64, __int64); // rax
  unsigned int v39; // r12d
  int v40; // r13d
  signed int v41; // ebp
  __int64 v42; // rax
  void (*v43)(); // rdx
  __int64 v44; // rax
  __int64 v45; // rdi
  __int64 (__fastcall *v46)(__int64, __int64); // rax
  unsigned int v47; // r12d
  unsigned int v48; // r14d
  void (*v49)(); // rax
  __int64 v50; // rdx
  char v51; // [rsp+Ch] [rbp-3Ch]

  v4 = *(_DWORD *)(a2 + 4) & 2;
  switch ( *(_WORD *)(a3 + 12) )
  {
    case 0:
      return 1;
    case 6:
    case 0x11:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 4;
      v6 = *a1;
      v7 = a1[7];
      v8 = a1[4];
      v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v6 + 112);
      if ( v9 == sub_14A20 )
        goto LABEL_3;
      goto LABEL_10;
    case 0xF:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 13;
      v23 = *a1;
      v12 = *((unsigned int *)a1 + 14);
      v14 = a1[4];
      v13 = *(__int64 (__fastcall **)(__int64, __int64, unsigned int))(v23 + 96);
      if ( v13 != sub_14A00 )
        goto LABEL_21;
      goto LABEL_8;
    case 0x10:
    case 0x15:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 1;
      v11 = *a1;
      v7 = a1[7];
      v8 = a1[4];
      v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v11 + 104);
      if ( v9 == sub_14A10 )
        goto LABEL_6;
      goto LABEL_10;
    case 0x12:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 13;
      v12 = (unsigned int)a1[7] - *((_DWORD *)a1 + 12);
      v13 = *(__int64 (__fastcall **)(__int64, __int64, unsigned int))(*a1 + 96LL);
      v14 = a1[4];
      if ( v13 == sub_14A00 )
LABEL_8:
        add_byte(v14, v12);
      else
LABEL_21:
        v13((__int64)a1, v14, v12);
      return 1;
    case 0x13:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 1;
      v7 = a1[7] - a1[6];
      v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*a1 + 104LL);
      v8 = a1[4];
      if ( v9 != sub_14A10 )
        goto LABEL_10;
LABEL_6:
      add_word(v8, v7);
      return 1;
    case 0x14:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 4;
      v8 = a1[4];
      v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*a1 + 112LL);
      v7 = a1[7] - a1[6];
      if ( v9 != sub_14A20 )
        goto LABEL_10;
LABEL_3:
      add_dword(v8, v7);
      return 1;
    case 0x50:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 1;
      if ( !a1[7] )
        return 1;
      v24 = *a1;
      v25 = a1[4];
      v26 = *(__int64 (__fastcall **)(__int64, __int64))(v24 + 48);
      if ( v26 == sub_14A30 )
        dword = get_dword(v25);
      else
        dword = v26((__int64)a1, v25);
      v28 = (dword >> 4) & 7;
      v29 = byte_1EB68[v28];
      v30 = byte_1EB60[v28] == 0;
      v31 = *a1;
      *((_BYTE *)a1 + 66) = !v30;
      v32 = *(void (**)())(v31 + 16);
      v33 = ((dword >> 8) & 0x7FFF) << v29;
      if ( v32 != nullsub_2 )
      {
        v51 = v29;
        ((void (__fastcall *)(_QWORD *, _QWORD))v32)(a1, (unsigned __int16)v33);
        v31 = *a1;
        v29 = v51;
      }
      v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v31 + 80);
      v34 = dword & 0xFF8000FF;
      v35 = ((int)(unsigned __int16)(*((_WORD *)a1 + 28) + v33) >> v29 << 8) & 0x7FFF00;
      goto LABEL_38;
    case 0x52:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 4;
      if ( a1[7] == a1[6] )
        return 1;
      v36 = *a1;
      v37 = a1[4];
      v38 = *(__int64 (__fastcall **)(__int64, __int64))(v36 + 48);
      if ( v38 == sub_14A30 )
        v39 = get_dword(v37);
      else
        v39 = v38((__int64)a1, v37);
      v40 = (int)(a1[7] - *((_DWORD *)a1 + 12)) >> 2;
      v41 = (v39 >> 7) | 0xFFE00000;
      v42 = *a1;
      if ( ((v39 >> 7) & 0x100000) == 0 )
        v41 = (v39 >> 7) & 0x1FFFFF;
      v43 = *(void (**)())(v42 + 16);
      if ( v43 != nullsub_2 )
      {
        ((void (__fastcall *)(_QWORD *, _QWORD, void (*)(), void (*)()))v43)(a1, v41, v43, nullsub_2);
        v42 = *a1;
      }
      v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v42 + 80);
      v34 = v39 & 0xF000007F;
      v35 = ((v41 + v40) << 7) & 0xFFFFFFF;
      goto LABEL_38;
    case 0x54:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 9;
      v44 = *a1;
      v45 = a1[4];
      v46 = *(__int64 (__fastcall **)(__int64, __int64))(v44 + 48);
      if ( v46 == sub_14A30 )
        v47 = get_dword(v45);
      else
        v47 = v46((__int64)a1, v45);
      v48 = v47 >> 7;
      v49 = *(void (**)())(*a1 + 16LL);
      if ( v49 != nullsub_2 )
        ((void (__fastcall *)(_QWORD *, _QWORD))v49)(a1, (unsigned __int16)v48);
      if ( v4 )
        *(_QWORD *)(a2 + 32) += (unsigned __int16)v48;
      else
        *(_QWORD *)(a2 + 24) += (unsigned __int16)v48;
      v50 = a1[7];
      if ( !v50 )
        return 1;
      v34 = v47 & 0xFF80007F;
      v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*a1 + 80LL);
      v35 = (unsigned __int16)(v48 + v50) << 7;
LABEL_38:
      v8 = a1[4];
      v7 = v34 | v35;
      if ( v9 == sub_149F0 )
        goto LABEL_39;
LABEL_10:
      v9((__int64)a1, v8, v7);
      break;
    case 0x55:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 7;
      v15 = *a1;
      v16 = a1[4];
      v17 = *(__int64 (__fastcall **)(__int64, __int64))(v15 + 48);
      if ( v17 == sub_14A30 )
        v18 = get_dword(v16);
      else
        v18 = v17((__int64)a1, v16);
      v19 = (int)(*(unsigned __int16 *)(a3 + 16) | (v18 >> 7 << 16));
      v20 = *(void (**)())(*a1 + 16LL);
      if ( v20 != nullsub_2 )
        ((void (__fastcall *)(_QWORD *, __int64))v20)(a1, v19);
      if ( v4 )
        *(_QWORD *)(a2 + 32) += v19;
      else
        *(_QWORD *)(a2 + 24) += v19;
      v21 = a1[7];
      if ( !v21 )
        return 1;
      v8 = a1[4];
      v22 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*a1 + 80LL);
      v7 = v18 & 0xFF80007F | ((unsigned int)(v19 + v21) >> 16 << 7);
      if ( v22 == sub_149F0 )
LABEL_39:
        put_dword(v8, v7);
      else
        v22((__int64)a1, a1[4], v7);
      break;
    default:
      (*(void (__fastcall **)(_QWORD *))*a1)(a1);
      return 0;
  }
  return 1;
}

