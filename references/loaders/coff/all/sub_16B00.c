__int64 __fastcall sub_16B00(_QWORD *a1, __int64 a2, __int64 a3, double a4)
{
  unsigned __int16 v4; // dx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  __int64 v11; // r12
  unsigned __int8 byte; // al
  __int64 v13; // rbp
  void (*v14)(); // rax
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 (__fastcall *v17)(__int64, __int64, __int64); // rax
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 (__fastcall *v20)(__int64, __int64); // rax
  __int16 word; // bp
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // r12
  __int64 v25; // r13
  void (*v26)(); // rax
  __int64 v27; // rax
  __int64 v28; // r12
  __int64 (__fastcall *v29)(__int64, __int64, __int64); // rax
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 (__fastcall *v32)(__int64, __int64); // rax
  __int64 v33; // r12
  unsigned __int16 v34; // r13
  __int64 v35; // rcx
  __int64 (__fastcall *v36)(__int64, __int64); // rax
  __int16 v37; // r14
  unsigned int v38; // eax
  __int64 v39; // rdx
  void (*v40)(); // rcx
  __int64 v41; // rbp
  __int64 (__fastcall *v42)(__int64, __int64, __int64); // rcx
  __int64 v43; // rbp
  unsigned __int16 v44; // ax
  unsigned __int16 v45; // bp

  v4 = *(_WORD *)(a3 + 12);
  switch ( v4 )
  {
    case 0u:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 13;
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, _QWORD, __int64))(*a1 + 8LL))(
        a1,
        a1[4],
        a1[7],
        7,
        0,
        1);
      goto LABEL_5;
    case 1u:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 1;
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, _QWORD, __int64))(*a1 + 8LL))(
        a1,
        a1[4],
        a1[7],
        15,
        0,
        1);
      goto LABEL_5;
    case 2u:
    case 0xBu:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 4;
      v7 = a1[7];
      v8 = a1[4];
      goto LABEL_4;
    case 3u:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 4;
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, __int64, __int64))(*a1 + 8LL))(
        a1,
        a1[4],
        (a1[5] - a1[4]) >> 2,
        23,
        1,
        1);
      goto LABEL_5;
    case 6u:
      *(_DWORD *)(a2 + 4) = 1;
      *(_WORD *)a2 = 4;
      v8 = a1[4];
      v7 = a1[5] - v8;
LABEL_4:
      (*(void (__fastcall **)(_QWORD *, __int64, __int64, __int64, _QWORD, __int64))(*a1 + 8LL))(a1, v8, v7, 31, 0, 1);
      goto LABEL_5;
    case 0xCu:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 13;
      v9 = a1[4];
      v10 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 32LL);
      v11 = a1[5] - v9;
      if ( v10 == sub_14A80 )
        byte = get_byte(v9);
      else
        byte = v10((__int64)a1, v9);
      v13 = byte;
      v14 = *(void (**)())(*a1 + 16LL);
      if ( v14 != nullsub_2 )
        ((void (__fastcall *)(_QWORD *, __int64))v14)(a1, v13);
      v15 = v11 + 2 * v13;
      v16 = v15 >> 1;
      if ( v15 > 255 || v16 < 0 && (~v16 & 0xFFFFFFFFFFFFFF80LL) != 0 )
        sub_5A70((__int64)"fixup overflow at %a!", a4);
      v17 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*a1 + 64LL);
      if ( v17 == sub_14A70 )
        put_byte(a1[4], (unsigned __int8)v16);
      else
        v17((__int64)a1, a1[4], (unsigned __int8)v16);
      goto LABEL_5;
    case 0xDu:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 1;
      v18 = *a1;
      v19 = a1[4];
      v20 = *(__int64 (__fastcall **)(__int64, __int64))(v18 + 40);
      if ( v20 == sub_14A40 )
        word = get_word(v19);
      else
        word = v20((__int64)a1, v19);
      v22 = a1[4];
      LOWORD(v23) = word & 0x7FF;
      v24 = a1[5] - v22;
      if ( (word & 0x400) != 0 )
      {
        v23 |= 0xFFFFFFFFFFFFF800LL;
        v25 = v23;
      }
      else
      {
        v25 = (unsigned __int16)v23;
        v23 = (unsigned __int16)v23;
      }
      v26 = *(void (**)())(*a1 + 16LL);
      if ( v26 != nullsub_2 )
      {
        ((void (__fastcall *)(_QWORD *, __int64))v26)(a1, v23);
        v22 = a1[4];
      }
      v27 = v24 + 2 * v25;
      v28 = v27 >> 1;
      if ( v27 > 2047 || v28 < 0 && (~v28 & 0xFFFFFFFFFFFFFC00LL) != 0 )
      {
        sub_5A70((__int64)"fixup overflow at %a!", a4);
        v22 = a1[4];
      }
      v29 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*a1 + 72LL);
      v30 = (unsigned __int16)(v28 & 0x7FF | word & 0xF800);
      if ( v29 != sub_14A50 )
        goto LABEL_27;
      goto LABEL_39;
    case 0xEu:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 1;
      v31 = a1[4];
      v32 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 40LL);
      v33 = a1[5] - v31;
      if ( v32 == sub_14A40 )
        v34 = get_word(v31);
      else
        v34 = v32((__int64)a1, v31);
      v35 = a1[4];
      v36 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 40LL);
      if ( v36 == sub_14A40 )
        v37 = get_word(v35 + 2);
      else
        v37 = v36((__int64)a1, v35 + 2);
      v38 = v34 & 0x7FF;
      if ( (v34 & 0x400) != 0 )
        v38 = v34 | 0xFFFFF800;
      v39 = *a1;
      v40 = *(void (**)())(*a1 + 16LL);
      v41 = (int)(2 * (v37 & 0x7FF | (v38 << 11)));
      if ( v40 != nullsub_2 )
      {
        ((void (__fastcall *)(_QWORD *, __int64))v40)(a1, v41);
        v39 = *a1;
      }
      v42 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v39 + 72);
      v43 = v41 + v33;
      v44 = v34 & 0xF800 | (v43 >> 12) & 0x7FF;
      v45 = v37 & 0xF800 | (v43 >> 1) & 0x7FF;
      if ( v42 == sub_14A50 )
        put_word(a1[4], v44);
      else
        v42((__int64)a1, a1[4], v44);
      v30 = v45;
      v29 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*a1 + 72LL);
      v22 = a1[4] + 2LL;
      if ( v29 == sub_14A50 )
LABEL_39:
        put_word(v22, v30);
      else
LABEL_27:
        v29((__int64)a1, v22, v30);
LABEL_5:
      result = 1;
      break;
    default:
      (*(void (__fastcall **)(_QWORD *, _QWORD))*a1)(a1, v4);
      result = 0;
      break;
  }
  return result;
}
