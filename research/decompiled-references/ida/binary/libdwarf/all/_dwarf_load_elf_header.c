__int64 __fastcall dwarf_load_elf_header(__int64 a1, int *a2)
{
  int v3; // eax
  unsigned int v4; // r13d
  int v6; // edi
  __m128i *v7; // rax
  __int64 *v8; // rbp
  __m128i v9; // xmm0
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  int v13; // edi
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rax
  int v17; // edi
  __m128i *v18; // rax
  __m128i v19; // xmm0
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  int v23; // r10d
  int v24; // eax
  __int64 v25; // rax
  __m128i v26; // xmm0
  __m128i si128; // [rsp+0h] [rbp-78h] BYREF
  __m128i v28; // [rsp+10h] [rbp-68h] BYREF
  __m128i v29; // [rsp+20h] [rbp-58h] BYREF
  __m128i v30; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v31; // [rsp+48h] [rbp-30h]

  v3 = *(unsigned __int8 *)(a1 + 56);
  v31 = __readfsqword(0x28u);
  if ( v3 == 32 )
  {
    v17 = *(_DWORD *)(a1 + 16);
    si128 = _mm_load_si128((const __m128i *)&xmmword_946A0);
    v30.m128i_i32[0] = 0;
    v28 = _mm_load_si128((const __m128i *)&xmmword_946B0);
    v29 = _mm_load_si128((const __m128i *)&xmmword_946C0);
    v4 = _dwarf_object_read_random(v17, &si128);
    if ( v4 )
      return v4;
    v18 = (__m128i *)calloc(1u, 0x88u);
    v8 = (__int64 *)v18;
    if ( v18 )
    {
      v19 = _mm_load_si128(&si128);
      v18[1].m128i_i64[0] = 0;
      *v18 = v19;
      (*(void (__fastcall **)(__m128i *, __m128i *, __int64))(a1 + 96))(v18 + 1, &v28, 2);
      v8[3] = 0;
      (*(void (__fastcall **)(__int64 *, __int8 *, __int64))(a1 + 96))(v8 + 3, &v28.m128i_i8[2], 2);
      v8[4] = 0;
      (*(void (__fastcall **)(__int64 *, __int8 *, __int64))(a1 + 96))(v8 + 4, &v28.m128i_i8[4], 4);
      v8[5] = 0;
      (*(void (__fastcall **)(__int64 *, __int8 *, __int64))(a1 + 96))(v8 + 5, &v28.m128i_i8[8], 4);
      v8[6] = 0;
      (*(void (__fastcall **)(__int64 *, __int8 *, __int64))(a1 + 96))(v8 + 6, &v28.m128i_i8[12], 4);
      v8[7] = 0;
      (*(void (__fastcall **)(__int64 *, __m128i *, __int64))(a1 + 96))(v8 + 7, &v29, 4);
      v8[8] = 0;
      (*(void (__fastcall **)(__int64 *, __int8 *, __int64))(a1 + 96))(v8 + 8, &v29.m128i_i8[4], 4);
      v8[9] = 0;
      (*(void (__fastcall **)(__int64 *, __int8 *, __int64))(a1 + 96))(v8 + 9, &v29.m128i_i8[8], 2);
      v8[10] = 0;
      (*(void (__fastcall **)(__int64 *, __int8 *, __int64))(a1 + 96))(v8 + 10, &v29.m128i_i8[10], 2);
      v8[11] = 0;
      (*(void (__fastcall **)(__int64 *, __int8 *, __int64))(a1 + 96))(v8 + 11, &v29.m128i_i8[12], 2);
      v8[12] = 0;
      (*(void (__fastcall **)(__int64 *, __int8 *, __int64))(a1 + 96))(v8 + 12, &v29.m128i_i8[14], 2);
      v8[13] = 0;
      (*(void (__fastcall **)(__int64 *, __m128i *, __int64))(a1 + 96))(v8 + 13, &v30, 2);
      v8[15] = 0;
      (*(void (__fastcall **)(__int64 *, __int8 *, __int64))(a1 + 96))(v8 + 15, &v30.m128i_i8[2], 2);
      v20 = v8[7];
      if ( v20 )
      {
        if ( v20 <= 0x33 )
          goto LABEL_26;
        v21 = v8[15];
        if ( v21 == 0xFFFF )
        {
          *((_DWORD *)v8 + 33) = 1;
        }
        else
        {
          *((_DWORD *)v8 + 32) = 1;
          if ( !v21 )
            goto LABEL_25;
        }
        v22 = v8[13];
        if ( v22 )
        {
          *((_DWORD *)v8 + 28) = 1;
          if ( v22 <= 2 )
            goto LABEL_26;
          if ( *((_DWORD *)v8 + 32) && v21 >= v22 )
            goto LABEL_25;
        }
        else
        {
          v23 = *((_DWORD *)v8 + 28);
          *((_DWORD *)v8 + 29) = 1;
          if ( v23 && *((_DWORD *)v8 + 32) )
            goto LABEL_25;
        }
        v25 = v8[2];
        v26 = _mm_load_si128((const __m128i *)&xmmword_94810);
        *(_QWORD *)(a1 + 144) = v8;
        *(_DWORD *)(a1 + 60) = v25;
        *(_QWORD *)(a1 + 104) = "Elf File Header";
        v16 = 52;
        *(__m128i *)(a1 + 112) = v26;
        goto LABEL_15;
      }
LABEL_29:
      v4 = -1;
      goto LABEL_28;
    }
LABEL_40:
    *a2 = 62;
    return 1;
  }
  if ( v3 == 64 )
  {
    v6 = *(_DWORD *)(a1 + 16);
    si128 = _mm_load_si128((const __m128i *)&xmmword_94660);
    v28 = _mm_load_si128((const __m128i *)&xmmword_94670);
    v29 = _mm_load_si128((const __m128i *)&xmmword_94680);
    v30 = _mm_load_si128((const __m128i *)&xmmword_94690);
    v4 = _dwarf_object_read_random(v6, &si128);
    if ( v4 )
      return v4;
    v7 = (__m128i *)calloc(1u, 0x88u);
    v8 = (__int64 *)v7;
    if ( v7 )
    {
      v9 = _mm_load_si128(&si128);
      v7[1].m128i_i64[0] = 0;
      *v7 = v9;
      (*(void (__fastcall **)(__m128i *, __m128i *, __int64))(a1 + 96))(v7 + 1, &v28, 2);
      v8[3] = 0;
      (*(void (__fastcall **)(__int64 *, __int8 *, __int64))(a1 + 96))(v8 + 3, &v28.m128i_i8[2], 2);
      v8[4] = 0;
      (*(void (__fastcall **)(__int64 *, __int8 *, __int64))(a1 + 96))(v8 + 4, &v28.m128i_i8[4], 4);
      v8[5] = 0;
      (*(void (__fastcall **)(__int64 *, __int8 *, __int64))(a1 + 96))(v8 + 5, &v28.m128i_i8[8], 8);
      v8[6] = 0;
      (*(void (__fastcall **)(__int64 *, __m128i *, __int64))(a1 + 96))(v8 + 6, &v29, 8);
      v8[7] = 0;
      (*(void (__fastcall **)(__int64 *, __int8 *, __int64))(a1 + 96))(v8 + 7, &v29.m128i_i8[8], 8);
      v8[8] = 0;
      (*(void (__fastcall **)(__int64 *, __m128i *, __int64))(a1 + 96))(v8 + 8, &v30, 4);
      v8[9] = 0;
      (*(void (__fastcall **)(__int64 *, __int8 *, __int64))(a1 + 96))(v8 + 9, &v30.m128i_i8[4], 2);
      v8[10] = 0;
      (*(void (__fastcall **)(__int64 *, __int8 *, __int64))(a1 + 96))(v8 + 10, &v30.m128i_i8[6], 2);
      v8[11] = 0;
      (*(void (__fastcall **)(__int64 *, __int8 *, __int64))(a1 + 96))(v8 + 11, &v30.m128i_i8[8], 2);
      v8[12] = 0;
      (*(void (__fastcall **)(__int64 *, __int8 *, __int64))(a1 + 96))(v8 + 12, &v30.m128i_i8[10], 2);
      v8[13] = 0;
      (*(void (__fastcall **)(__int64 *, __int8 *, __int64))(a1 + 96))(v8 + 13, &v30.m128i_i8[12], 2);
      v8[15] = 0;
      (*(void (__fastcall **)(__int64 *, __int8 *, __int64))(a1 + 96))(v8 + 15, &v30.m128i_i8[14], 2);
      v10 = v8[7];
      if ( v10 )
      {
        if ( v10 <= 0x3F )
          goto LABEL_26;
        v11 = v8[15];
        if ( v11 == 0xFFFF )
        {
          *((_DWORD *)v8 + 33) = 1;
LABEL_11:
          v12 = v8[13];
          if ( !v12 )
          {
            v13 = *((_DWORD *)v8 + 28);
            *((_DWORD *)v8 + 29) = 1;
            if ( !v13 || !*((_DWORD *)v8 + 32) )
            {
LABEL_14:
              v14 = v8[2];
              v15 = _mm_load_si128((const __m128i *)&xmmword_94810);
              *(_QWORD *)(a1 + 144) = v8;
              *(_DWORD *)(a1 + 60) = v14;
              *(_QWORD *)(a1 + 104) = "Elf File Header";
              v16 = 64;
              *(__m128i *)(a1 + 112) = v15;
LABEL_15:
              *(__m128i *)(a1 + 128) = _mm_unpacklo_epi64(
                                         (__m128i)(unsigned __int64)v16,
                                         (__m128i)(unsigned __int64)v16);
              *(_DWORD *)(a1 + 20) = v8[3];
              *(_QWORD *)(a1 + 48) = v8[8];
              return v4;
            }
            goto LABEL_25;
          }
          *((_DWORD *)v8 + 28) = 1;
          if ( v12 > 2 )
          {
            if ( !*((_DWORD *)v8 + 32) || v11 < v12 )
              goto LABEL_14;
            goto LABEL_25;
          }
LABEL_26:
          v24 = 494;
          goto LABEL_27;
        }
        *((_DWORD *)v8 + 32) = 1;
        if ( v11 )
          goto LABEL_11;
LABEL_25:
        v24 = 493;
LABEL_27:
        *a2 = v24;
        v4 = 1;
LABEL_28:
        free(v8);
        return v4;
      }
      goto LABEL_29;
    }
    goto LABEL_40;
  }
  *a2 = 415;
  return 1;
}

