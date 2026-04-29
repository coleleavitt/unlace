unsigned __int64 __fastcall sub_19B30(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        char a6,
        double a7,
        double a8)
{
  int v8; // r14d
  __int64 (*v12)(void); // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rbx
  __int64 (__fastcall *v22)(__int64, __int64, __int64); // rax
  __int64 (*v24)(void); // rax
  unsigned __int16 word; // ax
  unsigned __int16 v26; // dx
  __int64 (*v27)(void); // rax
  __int64 (*v28)(void); // rax
  int dword; // eax
  int v30; // edx
  __int64 (*v31)(void); // rax
  int v32; // eax
  int v33; // edx
  __int64 (*v34)(void); // rax
  __int64 (*v35)(void); // rax
  int v36; // eax
  __int64 qword; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v43; // [rsp+8h] [rbp-40h]

  v8 = a4 + 1;
  switch ( a4 )
  {
    case 7:
      v12 = *(__int64 (**)(void))(*a1 + 32LL);
      if ( (char *)v12 == (char *)sub_14A80 )
        LOBYTE(v13) = get_byte(a2);
      else
        LOBYTE(v13) = v12();
      if ( (v13 & 0x80u) == 0LL )
      {
        if ( a6 )
        {
          v13 = (unsigned __int8)v13;
          goto LABEL_6;
        }
      }
      else
      {
        v13 = (unsigned int)v13 | 0xFFFFFF80;
        if ( a6 )
        {
LABEL_6:
          v14 = 4294967168LL;
          v15 = 0;
          v16 = 4294967040LL;
          v17 = 255;
          v18 = 255;
          v19 = 128;
          goto LABEL_7;
        }
      }
      v14 = 4294967168LL;
      v15 = 0;
      v16 = 4294967040LL;
      v17 = 255;
      v18 = 255;
      v19 = 128;
      goto LABEL_9;
    case 13:
      v24 = *(__int64 (**)(void))(*a1 + 40LL);
      if ( (char *)v24 == (char *)sub_14A40 )
        word = get_word(a2);
      else
        word = v24();
      v26 = word & 0x3FFF;
      v15 = word & 0xC000;
      if ( (word & 0x2000) != 0 )
      {
        if ( a6 )
        {
          v13 = v26 | 0xFFFFE000;
LABEL_24:
          v14 = 4294959104LL;
          v16 = 4294950912LL;
          v19 = 0x2000;
          v17 = 0x3FFF;
          v18 = 0x3FFF;
          goto LABEL_8;
        }
      }
      else
      {
        v13 = v26;
        if ( a6 )
          goto LABEL_24;
      }
      v14 = 4294959104LL;
      v16 = 4294950912LL;
      v19 = 0x2000;
      v17 = 0x3FFF;
      v18 = 0x3FFF;
      goto LABEL_9;
    case 15:
      v27 = *(__int64 (**)(void))(*a1 + 40LL);
      if ( (char *)v27 == (char *)sub_14A40 )
        LOWORD(v13) = get_word(a2);
      else
        LOWORD(v13) = v27();
      if ( (v13 & 0x8000u) == 0LL )
      {
        v13 = (unsigned __int16)v13;
        if ( a6 )
          goto LABEL_32;
      }
      else if ( a6 )
      {
        v13 = (unsigned int)v13 | 0xFFFF8000;
LABEL_32:
        v14 = 4294934528LL;
        v15 = 0;
        v16 = 4294901760LL;
        v17 = 0xFFFF;
        v18 = 0xFFFF;
        v19 = 0x8000;
        goto LABEL_7;
      }
      v14 = 4294934528LL;
      v15 = 0;
      v16 = 4294901760LL;
      v17 = 0xFFFF;
      v18 = 0xFFFF;
      v19 = 0x8000;
      goto LABEL_9;
    case 20:
      v28 = *(__int64 (**)(void))(*a1 + 48LL);
      if ( (char *)v28 == (char *)sub_14A30 )
        dword = get_dword(a2);
      else
        dword = v28();
      v30 = dword;
      v13 = dword & 0x1FFFFF;
      v15 = v30 & 0xFFE00000;
      if ( (v30 & 0x100000) != 0 )
      {
        if ( a6 )
        {
          v13 = (unsigned int)v13 | 0xFFF00000;
          v14 = 4293918720LL;
          v16 = 4292870144LL;
          v17 = 0x1FFFFF;
          v18 = 0x1FFFFF;
          v19 = 0x100000;
          goto LABEL_8;
        }
        v14 = 4293918720LL;
        v16 = 4292870144LL;
        v19 = 0x100000;
        v17 = 0x1FFFFF;
        v18 = 0x1FFFFF;
        goto LABEL_9;
      }
      v14 = 4293918720LL;
      v16 = 4292870144LL;
      v17 = 0x1FFFFF;
      v18 = 0x1FFFFF;
      v19 = 0x100000;
      if ( !a6 )
        goto LABEL_9;
      goto LABEL_8;
    case 23:
      v31 = *(__int64 (**)(void))(*a1 + 48LL);
      if ( (char *)v31 == (char *)sub_14A30 )
        v32 = get_dword(a2);
      else
        v32 = v31();
      v33 = v32;
      v13 = v32 & 0xFFFFFF;
      v15 = v33 & 0xFF000000;
      if ( (v33 & 0x800000) != 0 )
      {
        if ( a6 )
        {
          v13 = (unsigned int)v13 | 0xFF800000;
          v14 = 4286578688LL;
          v16 = 4278190080LL;
          v17 = 0xFFFFFF;
          v18 = 0xFFFFFF;
          v19 = 0x800000;
          goto LABEL_7;
        }
        v14 = 4286578688LL;
        v16 = 4278190080LL;
        v19 = 0x800000;
        v17 = 0xFFFFFF;
        v18 = 0xFFFFFF;
        goto LABEL_9;
      }
      v14 = 4286578688LL;
      v16 = 4278190080LL;
      v17 = 0xFFFFFF;
      v18 = 0xFFFFFF;
      v19 = 0x800000;
      if ( !a6 )
        goto LABEL_9;
      goto LABEL_7;
    case 25:
      v35 = *(__int64 (**)(void))(*a1 + 48LL);
      if ( (char *)v35 == (char *)sub_14A30 )
        v36 = get_dword(a2);
      else
        v36 = v35();
      v15 = v36 & 0xFC000003;
      if ( (v36 & 0x2000000) != 0 )
      {
        if ( a6 )
        {
          v13 = v36 & 0x1FFFFFC | 0xFE000000;
          goto LABEL_72;
        }
LABEL_55:
        v14 = 4261412864LL;
        v16 = 4227858435LL;
        v19 = 0x2000000;
        v17 = 67108860;
        v18 = 67108860;
        goto LABEL_9;
      }
      if ( !a6 )
        goto LABEL_55;
      v13 = v36 & 0x3FFFFFC;
LABEL_72:
      v14 = 4261412864LL;
      v16 = 4227858435LL;
      v19 = 0x2000000;
      v17 = 67108860;
      v18 = 67108860;
LABEL_8:
      a3 += v13;
LABEL_9:
      if ( a5 && (a3 & v19) != 0 )
      {
        if ( (v14 & ~a3) == 0 )
          goto LABEL_13;
        goto LABEL_12;
      }
      if ( (a3 & v16) != 0 )
      {
LABEL_12:
        v43 = v17;
        sub_5A70((__int64)"fixup overflow at %a! (x=%a, bits=%d, mask=%x)", a7, a8, a2, a3);
        v17 = v43;
      }
LABEL_13:
      v20 = (_QWORD *)*a1;
      v21 = v15 | v17 & a3;
      if ( v8 == 8 )
      {
        v22 = (__int64 (__fastcall *)(__int64, __int64, __int64))v20[8];
        if ( v22 == sub_14A70 )
          return put_byte(a2, v21);
      }
      else if ( v8 > 16 )
      {
        v22 = (__int64 (__fastcall *)(__int64, __int64, __int64))v20[10];
        if ( v22 == sub_149F0 )
          return put_dword(a2, v21);
      }
      else
      {
        v22 = (__int64 (__fastcall *)(__int64, __int64, __int64))v20[9];
        if ( v22 == sub_14A50 )
          return put_word(a2, v21);
      }
      return ((__int64 (__fastcall *)(_QWORD *, __int64, __int64, __int64, __int64))v22)(a1, a2, v21, v19, v18);
    case 31:
      v34 = *(__int64 (**)(void))(*a1 + 48LL);
      if ( (char *)v34 == (char *)sub_14A30 )
        LODWORD(v13) = get_dword(a2);
      else
        LODWORD(v13) = v34();
      if ( !a6 )
      {
        v14 = 0x80000000LL;
        v15 = 0;
        v16 = 0;
        v17 = 0xFFFFFFFFLL;
        v18 = 0xFFFFFFFFLL;
        v19 = 0x80000000LL;
        goto LABEL_9;
      }
      v13 = (unsigned int)v13;
      v14 = 0x80000000LL;
      v15 = 0;
      v16 = 0;
      v17 = 0xFFFFFFFFLL;
      v18 = 0xFFFFFFFFLL;
      v19 = 0x80000000LL;
LABEL_7:
      if ( (v17 & (v13 + a1[4] + (v8 >> 3))) != 0 )
        goto LABEL_8;
      goto LABEL_9;
    case 63:
      qword = get_qword(a2);
      return put_qword(a2, a3 + qword, v38, v39, v40, v41);
    default:
      return sub_59A0((__int64)"Strange COFF relocation length");
  }
}
