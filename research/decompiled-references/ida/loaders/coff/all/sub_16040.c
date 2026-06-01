__int64 __fastcall sub_16040(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64, __int64); // rax
  char v11; // al
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, __int64); // rax
  unsigned int dword; // eax
  __int64 v17; // r12
  __int64 v18; // rdi
  __int64 (__fastcall *v19)(__int64, __int64); // rax
  unsigned int v20; // eax
  __int64 v21; // r12
  __int64 v22; // rax
  unsigned int v23; // edx
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // rax
  __m128i si128; // xmm0
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdi

  v5 = *(unsigned __int16 *)(a3 + 12);
  switch ( (__int16)v5 )
  {
    case 1:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 12;
      v12 = *a1;
      v7 = a1[5];
      v8 = a1[4];
      v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v12 + 120);
      if ( v9 != sub_14A90 )
        goto LABEL_8;
      add_qword(v8, v7);
      return 1;
    case 2:
    case 11:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 4;
      v6 = *a1;
      v7 = a1[5];
      v8 = a1[4];
      v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v6 + 112);
      if ( v9 == sub_14A20 )
        goto LABEL_3;
      goto LABEL_8;
    case 3:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 4;
      v13 = *a1;
      v14 = a1[4];
      v15 = *(__int64 (__fastcall **)(__int64, __int64))(v13 + 48);
      if ( v15 == sub_14A30 )
        dword = get_dword(v14);
      else
        dword = v15((__int64)a1, v14);
      *(_QWORD *)(a2 + 32) = dword;
      v7 = a1[7];
      v8 = a1[4];
      v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*a1 + 112LL);
      if ( v9 != sub_14A20 )
        goto LABEL_8;
      goto LABEL_3;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      v11 = segtype(a1[4], v5, a3);
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 4;
      if ( v11 != 2 && (_DWORD)v5 == 4 )
      {
        v17 = a1[5];
        v18 = a1[4];
        v19 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 48LL);
        if ( v19 == sub_14A30 )
        {
          v20 = get_dword(v18);
        }
        else
        {
          v5 = a1[4];
          v20 = v19((__int64)a1, v5);
        }
        v21 = v17 + v20 - 4;
        *(_QWORD *)(a2 + 24) = v21;
        if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
        {
          v21 += *(_QWORD *)(a2 + 8);
        }
        else
        {
          v31 = *(_QWORD *)(a2 + 16);
          if ( v31 != -1 )
            v21 = 16 * sel2para(v31, v5) + *(_QWORD *)(a2 + 24);
        }
        v22 = getseg(v21);
        v23 = *(_DWORD *)(a2 + 4) & 0xFFFFFFFE;
        if ( v22 )
        {
          v24 = *(_QWORD *)(v22 + 48);
          *(_DWORD *)(a2 + 4) = v23;
          *(_QWORD *)(a2 + 8) = 0;
          *(_QWORD *)(a2 + 16) = v24;
          if ( v24 == -1 )
          {
            *(_QWORD *)(a2 + 24) = v21;
            v26 = a1[4];
          }
          else
          {
            v25 = sel2para(v24, v5);
            v23 = *(_DWORD *)(a2 + 4);
            v21 -= 16 * v25;
            *(_QWORD *)(a2 + 24) = v21;
            v26 = a1[4];
            if ( (v23 & 1) != 0 )
            {
              v27 = *(_QWORD *)(a2 + 8);
LABEL_26:
              *(_QWORD *)(a2 + 8) = v26;
              *(_DWORD *)(a2 + 4) = v23 | 1;
              *(_QWORD *)(a2 + 24) = v21 + v27 - v26;
              set_fixup(a1[4], a2);
              patch_fixup_value(a1[4], a2);
              return 1;
            }
          }
        }
        else
        {
          si128 = _mm_load_si128((const __m128i *)&xmmword_1E280);
          *(_DWORD *)(a2 + 4) = v23;
          *(_QWORD *)(a2 + 24) = v21;
          *(__m128i *)(a2 + 8) = si128;
          v26 = a1[4];
        }
        v29 = *(_QWORD *)(a2 + 16);
        v27 = 0;
        if ( v29 != -1 )
        {
          v30 = sel2para(v29, v5);
          v21 = *(_QWORD *)(a2 + 24);
          v23 = *(_DWORD *)(a2 + 4);
          v27 = 16 * v30;
        }
        goto LABEL_26;
      }
      v8 = a1[4];
      v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*a1 + 112LL);
      v7 = a1[5] - 4LL - v8 - ((int)v5 - 4);
      if ( v9 == sub_14A20 )
LABEL_3:
        add_dword(v8, v7);
      else
LABEL_8:
        v9((__int64)a1, v8, v7);
      return 1;
    case 13:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 4;
      v7 = a1[5];
      v8 = a1[4];
      v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*a1 + 80LL);
      if ( v9 != sub_149F0 )
        goto LABEL_8;
      put_dword(v8, v7);
      return 1;
    default:
      (*(void (__fastcall **)(_QWORD *))*a1)(a1);
      return 0;
  }
}

