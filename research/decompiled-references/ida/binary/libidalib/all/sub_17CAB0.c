unsigned __int64 __fastcall sub_17CAB0(TView *this, int a2, int a3, const char *a4, __int64 a5)
{
  size_t v10; // rdx
  size_t v11; // r8
  __int64 v12; // r10
  size_t v13; // r9
  __int64 v14; // r15
  size_t v15; // rcx
  size_t v16; // rdi
  size_t v17; // rax
  char v18; // si
  size_t v19; // rcx
  __int64 v20; // r9
  int v21; // r10d
  __int64 v22; // rcx
  int v23; // eax
  unsigned int v24; // esi
  __int64 v25; // rdx
  __m128i v26; // xmm2
  __int64 v27; // rax
  size_t v29; // rsi
  TView *v30; // r12
  __int64 v31; // [rsp+0h] [rbp-68h] BYREF
  __int64 v32; // [rsp+8h] [rbp-60h]
  __m128i v33; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v34; // [rsp+28h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  v10 = strlen(a4);
  if ( v10 )
  {
    v12 = 0;
    v13 = 0;
    v11 = 0;
    v14 = TScreen::screenWidth - 6;
    while ( 1 )
    {
      if ( a4[v11] == 3 )
        ++v11;
      v15 = v11;
      v16 = v14 + v11;
      if ( v11 >= v10 )
      {
LABEL_17:
        if ( v16 >= v15 )
        {
          v17 = v15;
LABEL_46:
          v29 = v17 - v11;
          goto LABEL_36;
        }
        if ( v11 < v15 )
        {
          v19 = v15 - v11;
          if ( v13 < v19 )
            LODWORD(v13) = v19;
LABEL_21:
          v20 = (unsigned int)(v13 + 4);
          v21 = v12 + 4;
          goto LABEL_22;
        }
      }
      else
      {
        while ( 2 )
        {
          v17 = v15;
          while ( a4[v17] == 32 )
          {
            if ( v10 == ++v17 )
              goto LABEL_33;
          }
          if ( v17 < v10 )
          {
            while ( 1 )
            {
              v18 = a4[v17];
              if ( v18 == 32 || v18 == 10 )
                break;
              if ( v10 == ++v17 )
                goto LABEL_33;
            }
            if ( v17 < v16 && v18 != 10 )
            {
              v15 = v17;
              if ( v17 < v10 )
                continue;
              goto LABEL_17;
            }
          }
          break;
        }
LABEL_33:
        if ( v16 >= v17 )
          goto LABEL_46;
        if ( v11 < v15 )
        {
          v17 = v15;
          v29 = v15 - v11;
          goto LABEL_36;
        }
      }
      v29 = TScreen::screenWidth - 6;
      v17 = v14 + v11;
LABEL_36:
      if ( v13 < v29 )
        v13 = v29;
      if ( v17 >= v10 )
        goto LABEL_21;
      while ( a4[v17] == 32 )
      {
        if ( v10 == ++v17 )
          goto LABEL_21;
      }
      if ( v17 >= v10 )
        goto LABEL_21;
      if ( a4[v17] == 10 )
      {
        if ( v17 + 1 >= v10 )
          goto LABEL_21;
        if ( a4[v17 + 1] != 10 )
        {
          ++v17;
          goto LABEL_44;
        }
        v11 = v17 + 2;
        ++v12;
        if ( v17 + 2 >= v10 )
        {
          v20 = (unsigned int)(v13 + 4);
          v21 = v12 + 3;
          goto LABEL_22;
        }
      }
      else
      {
LABEL_44:
        ++v12;
        v11 = v17;
      }
    }
  }
  v21 = 3;
  v20 = 4;
LABEL_22:
  if ( a2 >= (int)v20 )
    v20 = (unsigned int)a2;
  v22 = (unsigned int)(TScreen::screenWidth - 2);
  v31 = 0x200000002LL;
  if ( (int)v20 <= TScreen::screenWidth - 2 )
    v22 = (unsigned int)v20;
  v23 = TScreen::screenHeight - 2;
  if ( a3 >= v21 )
    v21 = a3;
  LODWORD(v32) = v22 - 1;
  if ( v23 > v21 )
    v23 = v21;
  HIDWORD(v32) = v23 - 1;
  if ( a5 )
  {
    v24 = (*((_DWORD *)TProgram::deskTop + 5) - v23) / 2;
    v25 = (unsigned int)((*((_DWORD *)TProgram::deskTop + 4) - (int)v22) / 2);
    v26 = _mm_cvtsi32_si128(v24 + v23);
    v27 = *(_QWORD *)this;
    v33 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v25), _mm_cvtsi32_si128(v24)),
            _mm_unpacklo_epi32(_mm_cvtsi32_si128((int)v25 + (int)v22), v26));
    (*(void (__fastcall **)(TView *, __m128i *, __int64, __int64, size_t, __int64, __int64, __int64))(v27 + 56))(
      this,
      &v33,
      v25,
      v22,
      v11,
      v20,
      v31,
      v32);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a5 + 56LL))(a5, &v31);
    (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)a5 + 184LL))(a5, a4);
  }
  else
  {
    TView::growTo(this, v22, v23);
    v30 = (TView *)operator new(0x50u);
    TStaticText::TStaticText(v30, &v31, a4);
    TGroup::insert(this, v30);
  }
  return v34 - __readfsqword(0x28u);
}

