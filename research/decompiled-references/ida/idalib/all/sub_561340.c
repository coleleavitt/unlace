bool __fastcall sub_561340(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r13d
  _QWORD *v5; // rax
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // r13
  unsigned __int8 v9; // al
  _QWORD *v10; // rdx
  char v11; // cl
  int v12; // eax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // rax
  _QWORD *v18; // r13
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  _QWORD *v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  __int64 v31; // rbp
  unsigned __int64 v32; // r13
  unsigned __int64 v33; // r13
  __int64 v34; // rbp
  unsigned __int64 v35; // r12
  unsigned __int64 v36; // r12
  const void *v37; // r15
  void *v38; // rax
  const void *v39; // r15
  void *v40; // rax
  const void *v41; // r14
  const void *v42; // r14
  _QWORD v43[9]; // [rsp+0h] [rbp-48h] BYREF

  v43[1] = __readfsqword(0x28u);
  sub_558C90(a2);
  *(_DWORD *)(a2 + 24) = *((_DWORD *)a1 + 3);
  *(_QWORD *)(a2 + 16) = a1[2];
  *(_BYTE *)(a2 + 28) = *(_WORD *)(a3 + 112);
  *(_BYTE *)(a2 + 28) &= 1u;
  v4 = *((_DWORD *)a1 + 3);
  v5 = (_QWORD *)sub_559D40(*(_QWORD *)(qword_2CCB598 + 1656), (__int64 *)a3);
  v6 = sub_55F9A0(v5, (__int64 *)a3, v4, 1);
  if ( !v6 )
    return 0;
  v7 = v6 + 88;
  v8 = v6;
  copy_tinfo_t(a2 + 8);
  *(_BYTE *)(a2 + 29) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a3 + 56LL))(a3, v7);
  v9 = *(_BYTE *)(v8 + 100);
  *(_BYTE *)(a2 + 31) = v9;
  if ( *(_BYTE *)(v8 + 102) )
  {
    *(_BYTE *)(a2 + 30) = 1;
    return 1;
  }
  if ( v9 == 45 )
  {
    v28 = *(_QWORD **)v8;
    if ( !*(_QWORD *)v8 )
      sub_555E00();
    v29 = v28[1];
    *(_QWORD *)(a2 + 40) = v29;
    v30 = a1[2];
    if ( v30 < v29 )
    {
      v31 = *v28 + 56 * v30;
      if ( v31 != a2 + 240 )
      {
        v32 = *(_QWORD *)(v31 + 8);
        if ( v32 > 1 )
        {
          v37 = *(const void **)v31;
          v38 = *(void **)(a2 + 240);
          if ( *(_QWORD *)(a2 + 256) < v32 )
          {
            v38 = (void *)qvector_reserve(a2 + 240, *(_QWORD *)(a2 + 240), *(_QWORD *)(v31 + 8), 1);
            *(_QWORD *)(a2 + 240) = v38;
          }
          *(_QWORD *)(a2 + 248) = v32;
          memmove(v38, v37, v32 - 1);
          *(_BYTE *)(*(_QWORD *)(a2 + 240) + v32 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(a2 + 248) = 0;
        }
      }
      if ( a2 + 264 != v31 + 24 )
      {
        v33 = *(_QWORD *)(v31 + 32);
        if ( v33 > 1 )
        {
          v39 = *(const void **)(v31 + 24);
          v40 = *(void **)(a2 + 264);
          if ( *(_QWORD *)(a2 + 280) < v33 )
          {
            v40 = (void *)qvector_reserve(a2 + 264, *(_QWORD *)(a2 + 264), *(_QWORD *)(v31 + 32), 1);
            *(_QWORD *)(a2 + 264) = v40;
          }
          *(_QWORD *)(a2 + 272) = v33;
          memmove(v40, v39, v33 - 1);
          *(_BYTE *)(*(_QWORD *)(a2 + 264) + v33 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(a2 + 272) = 0;
        }
      }
      *(_QWORD *)(a2 + 288) = *(_QWORD *)(v31 + 48);
      *(_QWORD *)(a2 + 32) = a1[2];
    }
    return 1;
  }
  if ( v9 <= 0x2Du )
  {
    if ( (v9 & 0xEF) == 0xD )
    {
      v18 = *(_QWORD **)v8;
      if ( !v18 )
        sub_555DE0();
      v19 = v18[3];
      *(_QWORD *)(a2 + 192) = v19;
      *(_QWORD *)(a2 + 200) = v18[4];
      *(_QWORD *)(a2 + 40) = v18[1];
      v20 = a1[2];
      if ( v20 > 0xFFFFFFFFFFFFFFFDLL )
      {
        if ( v20 == -1 )
          *(_QWORD *)(a2 + 232) = 8 * v19;
      }
      else
      {
        v21 = *a1;
        v43[0] = -1;
        v22 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD *, __int64))(v21 + 176))(a1, a3, v43, a2 + 224);
        v23 = *(int *)(a2 + 224);
        *(_QWORD *)(a2 + 216) = v22;
        v24 = v23;
        v25 = v22 + v23;
        if ( v24 > 0 )
          v22 = v25;
        v26 = v43[0];
        *(_QWORD *)(a2 + 232) = v22;
        v27 = v18[1];
        if ( v26 >= 0 && v26 < v27 )
        {
          *(_QWORD *)(a2 + 32) = v26;
          v34 = *v18 + 144 * v26;
          *(_QWORD *)(a2 + 48) = *(_QWORD *)v34;
          *(_QWORD *)(a2 + 56) = *(_QWORD *)(v34 + 8);
          if ( a2 + 64 != v34 + 16 )
          {
            v35 = *(_QWORD *)(v34 + 24);
            if ( v35 > 1 )
            {
              v41 = *(const void **)(v34 + 16);
              if ( *(_QWORD *)(a2 + 80) < v35 )
                *(_QWORD *)(a2 + 64) = qvector_reserve(a2 + 64, *(_QWORD *)(a2 + 64), *(_QWORD *)(v34 + 24), 1);
              *(_QWORD *)(a2 + 72) = v35;
              memmove(*(void **)(a2 + 64), v41, v35 - 1);
              *(_BYTE *)(*(_QWORD *)(a2 + 64) + v35 - 1) = 0;
            }
            else
            {
              *(_QWORD *)(a2 + 72) = 0;
            }
          }
          if ( a2 + 88 != v34 + 40 )
          {
            v36 = *(_QWORD *)(v34 + 48);
            if ( v36 > 1 )
            {
              v42 = *(const void **)(v34 + 40);
              if ( *(_QWORD *)(a2 + 104) < v36 )
                *(_QWORD *)(a2 + 88) = qvector_reserve(a2 + 88, *(_QWORD *)(a2 + 88), *(_QWORD *)(v34 + 48), 1);
              *(_QWORD *)(a2 + 96) = v36;
              memmove(*(void **)(a2 + 88), v42, v36 - 1);
              *(_BYTE *)(*(_QWORD *)(a2 + 88) + v36 - 1) = 0;
            }
            else
            {
              *(_QWORD *)(a2 + 96) = 0;
            }
          }
          copy_tinfo_t(a2 + 112);
          *(__m128i *)(a2 + 120) = _mm_loadu_si128((const __m128i *)(v34 + 72));
          *(__m128i *)(a2 + 136) = _mm_loadu_si128((const __m128i *)(v34 + 88));
          *(__m128i *)(a2 + 152) = _mm_loadu_si128((const __m128i *)(v34 + 104));
          *(_DWORD *)(a2 + 168) = *(_DWORD *)(v34 + 120);
          *(_DWORD *)(a2 + 176) = *(_DWORD *)(v34 + 128);
          *(_DWORD *)(a2 + 180) = *(_DWORD *)(v34 + 132);
          *(_BYTE *)(a2 + 184) = *(_BYTE *)(v34 + 136);
          v27 = v18[1];
        }
        if ( v27 )
          *(_QWORD *)(a2 + 208) = *(_QWORD *)(*v18 + 144 * v27 - 144);
      }
      return 1;
    }
    if ( v9 == 12 )
    {
      v10 = *(_QWORD **)v8;
      if ( !*(_QWORD *)v8 )
        goto LABEL_63;
      v11 = *((_BYTE *)v10 + 88);
      v12 = v11 & 0xF0;
      if ( (v11 & 0xF0) == 0xC0 )
        v12 = *((_DWORD *)v10 + 7);
      if ( v12 == 64 || v12 == 208 )
      {
        v13 = v10[1] + 1LL;
      }
      else
      {
        if ( v12 == 32 )
        {
          *(_QWORD *)(a2 + 40) = 0;
          return 1;
        }
        v13 = v10[1];
      }
      *(_QWORD *)(a2 + 40) = v13;
      v14 = a1[2];
      if ( v14 < v13 )
      {
        v15 = *(_QWORD **)v8;
        if ( *(_QWORD *)v8 )
        {
          v16 = 0;
          if ( v14 < v15[1] )
            v16 = *v15 + 80 * v14;
          *(_QWORD *)(a2 + 296) = v16;
          *(_QWORD *)(a2 + 32) = a1[2];
          return 1;
        }
LABEL_63:
        sub_555E20(a3, v7);
      }
      return 1;
    }
    return 0;
  }
  return v9 == 61;
}
