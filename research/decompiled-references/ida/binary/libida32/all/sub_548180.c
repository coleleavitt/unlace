bool __fastcall sub_548180(__int64 *a1, __int64 a2, __int64 a3)
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
  _QWORD *v34; // rdx
  _QWORD *v35; // rbp
  unsigned __int64 v36; // r12
  unsigned __int64 v37; // r12
  const void *v38; // r15
  void *v39; // rax
  const void *v40; // r15
  void *v41; // rax
  const void *v42; // r14
  const void *v43; // r14
  _QWORD v44[9]; // [rsp+0h] [rbp-48h] BYREF

  v44[1] = __readfsqword(0x28u);
  sub_53FB00(a2);
  *(_DWORD *)(a2 + 24) = *((_DWORD *)a1 + 3);
  *(_QWORD *)(a2 + 16) = a1[2];
  *(_BYTE *)(a2 + 28) = *(_WORD *)(a3 + 112);
  *(_BYTE *)(a2 + 28) &= 1u;
  v4 = *((_DWORD *)a1 + 3);
  v5 = (_QWORD *)sub_540BA0(*(_QWORD *)(qword_2CA1698 + 1464), (__int64 *)a3);
  v6 = sub_5467E0(v5, (__int64 *)a3, v4, 1);
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
      sub_53CC80();
    v29 = v28[1];
    *(_QWORD *)(a2 + 40) = v29;
    v30 = a1[2];
    if ( v30 < v29 )
    {
      v31 = *v28 + 56 * v30;
      if ( v31 != a2 + 224 )
      {
        v32 = *(_QWORD *)(v31 + 8);
        if ( v32 > 1 )
        {
          v38 = *(const void **)v31;
          v39 = *(void **)(a2 + 224);
          if ( *(_QWORD *)(a2 + 240) < v32 )
          {
            v39 = (void *)qvector_reserve(a2 + 224, *(_QWORD *)(a2 + 224), *(_QWORD *)(v31 + 8), 1);
            *(_QWORD *)(a2 + 224) = v39;
          }
          *(_QWORD *)(a2 + 232) = v32;
          memmove(v39, v38, v32 - 1);
          *(_BYTE *)(*(_QWORD *)(a2 + 224) + v32 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(a2 + 232) = 0;
        }
      }
      if ( a2 + 248 != v31 + 24 )
      {
        v33 = *(_QWORD *)(v31 + 32);
        if ( v33 > 1 )
        {
          v40 = *(const void **)(v31 + 24);
          v41 = *(void **)(a2 + 248);
          if ( *(_QWORD *)(a2 + 264) < v33 )
          {
            v41 = (void *)qvector_reserve(a2 + 248, *(_QWORD *)(a2 + 248), *(_QWORD *)(v31 + 32), 1);
            *(_QWORD *)(a2 + 248) = v41;
          }
          *(_QWORD *)(a2 + 256) = v33;
          memmove(v41, v40, v33 - 1);
          *(_BYTE *)(*(_QWORD *)(a2 + 248) + v33 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(a2 + 256) = 0;
        }
      }
      *(_QWORD *)(a2 + 272) = *(_QWORD *)(v31 + 48);
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
        sub_53CC60();
      v19 = v18[3];
      *(_QWORD *)(a2 + 176) = v19;
      *(_QWORD *)(a2 + 184) = v18[4];
      *(_QWORD *)(a2 + 40) = v18[1];
      v20 = a1[2];
      if ( v20 > 0xFFFFFFFFFFFFFFFDLL )
      {
        if ( v20 == -1 )
          *(_QWORD *)(a2 + 216) = 8 * v19;
      }
      else
      {
        v21 = *a1;
        v44[0] = -1;
        v22 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD *, __int64))(v21 + 176))(a1, a3, v44, a2 + 208);
        v23 = *(int *)(a2 + 208);
        *(_QWORD *)(a2 + 200) = v22;
        v24 = v23;
        v25 = v22 + v23;
        if ( v24 > 0 )
          v22 = v25;
        v26 = v44[0];
        *(_QWORD *)(a2 + 216) = v22;
        v27 = v18[1];
        if ( v26 >= 0 && v26 < v27 )
        {
          *(_QWORD *)(a2 + 32) = v26;
          v34 = (_QWORD *)(*v18 + (v26 << 7));
          v35 = v34;
          *(_QWORD *)(a2 + 48) = *v34;
          *(_QWORD *)(a2 + 56) = v34[1];
          if ( (_QWORD *)(a2 + 64) != v34 + 2 )
          {
            v36 = v34[3];
            if ( v36 > 1 )
            {
              v42 = (const void *)v34[2];
              if ( *(_QWORD *)(a2 + 80) < v36 )
                *(_QWORD *)(a2 + 64) = qvector_reserve(a2 + 64, *(_QWORD *)(a2 + 64), v34[3], 1);
              *(_QWORD *)(a2 + 72) = v36;
              memmove(*(void **)(a2 + 64), v42, v36 - 1);
              *(_BYTE *)(*(_QWORD *)(a2 + 64) + v36 - 1) = 0;
            }
            else
            {
              *(_QWORD *)(a2 + 72) = 0;
            }
          }
          if ( (_QWORD *)(a2 + 88) != v35 + 5 )
          {
            v37 = v35[6];
            if ( v37 > 1 )
            {
              v43 = (const void *)v35[5];
              if ( *(_QWORD *)(a2 + 104) < v37 )
                *(_QWORD *)(a2 + 88) = qvector_reserve(a2 + 88, *(_QWORD *)(a2 + 88), v35[6], 1);
              *(_QWORD *)(a2 + 96) = v37;
              memmove(*(void **)(a2 + 88), v43, v37 - 1);
              *(_BYTE *)(*(_QWORD *)(a2 + 88) + v37 - 1) = 0;
            }
            else
            {
              *(_QWORD *)(a2 + 96) = 0;
            }
          }
          copy_tinfo_t(a2 + 112);
          *(__m128i *)(a2 + 120) = _mm_loadu_si128((const __m128i *)(v35 + 9));
          *(__m128i *)(a2 + 136) = _mm_loadu_si128((const __m128i *)(v35 + 11));
          *(_DWORD *)(a2 + 152) = *((_DWORD *)v35 + 26);
          *(_DWORD *)(a2 + 160) = *((_DWORD *)v35 + 28);
          *(_DWORD *)(a2 + 164) = *((_DWORD *)v35 + 29);
          *(_BYTE *)(a2 + 168) = *((_BYTE *)v35 + 120);
          v27 = v18[1];
        }
        if ( v27 )
          *(_QWORD *)(a2 + 192) = *(_QWORD *)(*v18 + (v27 << 7) - 128);
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
          *(_QWORD *)(a2 + 280) = v16;
          *(_QWORD *)(a2 + 32) = a1[2];
          return 1;
        }
LABEL_63:
        sub_53CCA0(a3, v7);
      }
      return 1;
    }
    return 0;
  }
  return v9 == 61;
}

