__int64 __fastcall sub_1A210(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  unsigned __int64 v4; // r13
  __int64 v5; // r14
  __int64 v7; // rbp
  unsigned __int16 v8; // ax
  __int64 result; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, __int64); // rax
  int word; // r13d
  __int64 v17; // rax
  void (*v18)(); // rdx
  __int64 (__fastcall *v19)(__int64, __int64, __int64); // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  unsigned int v22; // edx
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // r13
  __int16 v27; // ax
  __int64 v28; // rdi
  __m128i si128; // xmm0
  __int64 v30; // rdx

  v7 = a2;
  v8 = *(_WORD *)(a3 + 12);
  if ( v8 == 13 )
  {
LABEL_10:
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(a1 + 40);
    *(_BYTE *)(a1 + 100) = (*(_BYTE *)(a2 + 4) & 2) != 0;
    goto LABEL_5;
  }
  if ( v8 > 0xDu )
  {
    if ( v8 != 37 )
      goto LABEL_5;
    v13 = *(_DWORD *)(a1 + 96);
    if ( v13 == 4 || v13 == 13 )
    {
      v14 = *(_QWORD *)(a1 + 32);
      v15 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 40LL);
      if ( v15 == sub_14A40 )
        word = get_word(v14);
      else
        word = v15(a1, *(_QWORD *)(a1 + 32));
      v17 = *(_QWORD *)a1;
      v4 = *(_QWORD *)(a1 + 88) + *(__int16 *)(a1 + 56) + (word << 16);
      v18 = *(void (**)())(*(_QWORD *)a1 + 16LL);
      if ( v18 != nullsub_2 )
      {
        ((void (__fastcall *)(__int64, unsigned __int64))v18)(a1, v4);
        v17 = *(_QWORD *)a1;
      }
      v19 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v17 + 72);
      v20 = *(_QWORD *)(a1 + 32);
      a2 = v4 >> 16;
      v5 = (unsigned __int16)v4 & 0x8000;
      if ( (v4 & 0x8000) != 0 )
        LOWORD(a2) = WORD1(v4) + 1;
      a2 = (unsigned __int16)a2;
      if ( v19 == sub_14A50 )
      {
        put_word(v20, (unsigned __int16)a2);
LABEL_22:
        *(_QWORD *)(v7 + 24) = v4;
        if ( (*(_BYTE *)(v7 + 4) & 1) != 0 )
        {
          v4 += *(_QWORD *)(v7 + 8);
        }
        else
        {
          v28 = *(_QWORD *)(v7 + 16);
          if ( v28 != -1 )
            v4 = 16 * sel2para(v28, a2) + *(_QWORD *)(v7 + 24);
        }
        v21 = getseg(v4);
        v22 = *(_DWORD *)(v7 + 4) & 0xFFFFFFFE;
        if ( v21 )
        {
          v23 = *(_QWORD *)(v21 + 48);
          *(_DWORD *)(v7 + 4) = v22;
          *(_QWORD *)(v7 + 8) = 0;
          *(_QWORD *)(v7 + 16) = v23;
          if ( v23 == -1 )
          {
            *(_QWORD *)(v7 + 24) = v4;
            *(_QWORD *)(v7 + 32) = 0;
          }
          else
          {
            v24 = sel2para(v23, a2);
            v25 = *(_QWORD *)(v7 + 16);
            *(_QWORD *)(v7 + 32) = 0;
            *(_QWORD *)(v7 + 24) = v4 - 16 * v24;
            if ( v25 != -1 )
              *(_QWORD *)(v7 + 24) -= 16 * sel2para(v25, a2);
          }
        }
        else
        {
          si128 = _mm_load_si128((const __m128i *)&xmmword_1E280);
          *(_DWORD *)(v7 + 4) = v22;
          *(_QWORD *)(v7 + 24) = v4;
          *(_QWORD *)(v7 + 32) = 0;
          *(__m128i *)(v7 + 8) = si128;
        }
        v26 = *(_QWORD *)(a1 + 8);
        v27 = *(_WORD *)(v26 + 163);
        if ( v27 == (__int16)0x8000 )
        {
          *(_WORD *)(v26 + 163) = find_custom_fixup("MIPS_HA16");
          v27 = *(_WORD *)(*(_QWORD *)(a1 + 8) + 163LL);
        }
        *(_DWORD *)(v7 + 4) = 0;
        if ( !v27 )
          v27 = 7;
        *(_WORD *)v7 = v27;
        if ( *(_BYTE *)(a1 + 100) )
          *(_DWORD *)(v7 + 4) = 2;
        if ( !*(_WORD *)(*(_QWORD *)(a1 + 8) + 163LL) && v5 )
          *(_QWORD *)(v7 + 32) = &loc_10000;
        set_fixup(*(_QWORD *)(a1 + 32), v7);
        goto LABEL_5;
      }
    }
    else
    {
      if ( under_debugger )
        BUG();
      v20 = 20081;
      v19 = (__int64 (__fastcall *)(__int64, __int64, __int64))interr(20081);
    }
    v30 = a2;
    a2 = v20;
    v19(a1, v20, v30);
    goto LABEL_22;
  }
  if ( v8 != 3 )
  {
    if ( v8 != 4 )
      goto LABEL_5;
    goto LABEL_10;
  }
  v11 = *(_QWORD *)(a1 + 32);
  v12 = getseg(v11);
  if ( ((unsigned __int64)(v11 + 4 - get_segm_base(v12)) ^ (*(_QWORD *)(a1 + 40) >> 2)) > 0x3FFFFFF )
    sub_5A70((__int64)"fixup overflow at %a!", a4);
LABEL_5:
  result = sub_14BA0((_QWORD *)a1, v7, a3);
  if ( (_BYTE)result )
    *(_DWORD *)(a1 + 96) = *(unsigned __int16 *)(a3 + 12);
  return result;
}

