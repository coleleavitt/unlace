unsigned __int64 __fastcall sub_544100(__int64 a1)
{
  int v1; // ecx
  __int64 *v3; // rdi
  unsigned __int8 v4; // al
  __int64 tinfo_size; // rax
  __int64 v6; // rbp
  char v7; // al
  char *v8; // r14
  char v9; // dl
  __int64 v10; // rbp
  unsigned __int64 v12; // rdx
  __int64 v13; // rbp
  char v14; // dl
  int v15; // eax
  __int64 v16; // r13
  _QWORD *v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // rax
  int *v20; // rcx
  int *v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rax
  void (__fastcall *v24)(__m128i **, const __m128i **, int); // rax
  int v25; // ecx
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // rdx
  int v30; // r8d
  int v31; // r9d
  int v32; // eax
  int *v33; // r14
  char *v34; // r15
  __int64 v35; // rbp
  int v36; // edx
  char v37; // [rsp+0h] [rbp-A8h]
  int *v38; // [rsp+0h] [rbp-A8h]
  int v39; // [rsp+14h] [rbp-94h] BYREF
  __int64 v40; // [rsp+18h] [rbp-90h] BYREF
  void *ptr; // [rsp+20h] [rbp-88h] BYREF
  __int128 v42; // [rsp+28h] [rbp-80h]
  __int128 v43; // [rsp+40h] [rbp-68h] BYREF
  __m128i v44; // [rsp+50h] [rbp-58h]
  char v45; // [rsp+64h] [rbp-44h] BYREF
  unsigned __int64 v46; // [rsp+68h] [rbp-40h]

  v1 = *(_DWORD *)(a1 + 336);
  v46 = __readfsqword(0x28u);
  if ( !v1 )
    return v46 - __readfsqword(0x28u);
  v3 = *(__int64 **)(a1 + 248);
  v45 = 0;
  v40 = 0xFFFFFFFFLL;
  if ( v3 )
  {
    if ( *((_DWORD *)v3 + 24) )
      return v46 - __readfsqword(0x28u);
    v4 = *((_BYTE *)v3 + 100);
    if ( v4 == 45 )
    {
      if ( !*((_BYTE *)v3 + 102) )
      {
        v13 = *v3;
        if ( !*v3 )
          sub_53CC80();
        v14 = *(_BYTE *)(v13 + 52);
        if ( (v14 & 7) != 0 )
        {
          v15 = 1 << ((*(_BYTE *)(v13 + 52) & 7) - 1);
        }
        else
        {
          LOBYTE(v15) = getinf(61);
          v14 = *(_BYTE *)(v13 + 52);
          v15 = (unsigned __int8)v15;
        }
        if ( (v14 & 0x10) != 0 )
        {
          v16 = *(_QWORD *)(a1 + 240);
          if ( v16 == -2 )
          {
            v16 = 0;
          }
          else if ( v16 == -1 )
          {
            v16 = *(_QWORD *)(v13 + 8) - 1LL;
          }
          v44 = 0u;
          v43 = 0;
          v17 = (_QWORD *)operator new(0x18u);
          *v17 = v13;
          v18 = _mm_loadl_epi64((const __m128i *)&off_2B04708);
          v17[1] = v16;
          v17[2] = &v40;
          *(_QWORD *)&v43 = v17;
          v19 = *(_QWORD *)(v13 + 32);
          v44 = _mm_unpacklo_epi64(v18, (__m128i)(unsigned __int64)sub_53CA20);
          if ( v19 )
          {
            v20 = *(int **)(v13 + 24);
            v38 = &v20[v19];
            if ( v20 != v38 )
            {
              v21 = *(int **)(v13 + 24);
              v22 = 0;
              while ( 1 )
              {
                v23 = *v21;
                if ( !(_DWORD)v23 )
                  break;
                v22 += v23;
                if ( v38 == ++v21 )
                {
                  if ( *(_QWORD *)(v13 + 8) != v22 )
                    break;
                  v33 = *(int **)(v13 + 24);
                  v24 = (void (__fastcall *)(__m128i **, const __m128i **, int))sub_53CCF0;
                  v34 = nullptr;
                  do
                  {
                    v35 = *v33;
                    ptr = v34;
                    v39 = v35;
                    if ( !v24 )
                      std::__throw_bad_function_call();
                    v36 = ((__int64 (__fastcall *)(__int128 *, void **, int *))v44.m128i_i64[1])(&v43, &ptr, &v39);
                    v24 = (void (__fastcall *)(__m128i **, const __m128i **, int))v44.m128i_i64[0];
                    if ( v36 )
                      break;
                    v34 += v35;
                    ++v33;
                  }
                  while ( v38 != v33 );
                  if ( !v44.m128i_i64[0] )
                    goto LABEL_10;
                  goto LABEL_37;
                }
              }
            }
          }
          v24 = (void (__fastcall *)(__m128i **, const __m128i **, int))sub_53CCF0;
LABEL_37:
          v24((__m128i **)&v43, (const __m128i **)&v43, 3);
        }
        else
        {
          if ( 2 * v15 > 8 )
          {
            v26 = 0xFFFFFFFFLL;
          }
          else
          {
            v25 = 8 * v15;
            v26 = -1;
            if ( v25 <= 63 )
              v26 = (1LL << v25) - 1;
          }
          v40 = v26;
        }
      }
      goto LABEL_10;
    }
    if ( v4 > 0x2Du )
    {
      if ( v4 != 61 )
        return v46 - __readfsqword(0x28u);
      tinfo_size = get_tinfo_size(0, v3[11], 0);
      if ( tinfo_size == -1 )
        tinfo_size = 0xFFFFFFFFLL;
      v40 = tinfo_size;
      goto LABEL_10;
    }
    if ( (v4 & 0xEF) != 0xD )
      return v46 - __readfsqword(0x28u);
    if ( !*((_BYTE *)v3 + 102) )
    {
      v40 = 0;
      v12 = 0;
      if ( v4 != 13 )
      {
LABEL_22:
        v40 = v12;
        goto LABEL_10;
      }
      v27 = *(_QWORD *)(a1 + 240);
      if ( v27 <= 0xFFFFFFFFFFFFFFFDLL )
      {
        v40 = sub_540330(v3, (int *)&ptr, *(_QWORD *)(a1 + 240), nullptr);
        v29 = v40;
        if ( (_DWORD)ptr != -1 )
        {
          v32 = qsnprintf((int)&v45, 4, (int)".%d", (int)ptr, v30, v31, v37);
          v29 = v40;
          *(_DWORD *)(a1 + 144) |= 0x200000u;
          *(_DWORD *)(a1 + 340) = v32;
        }
      }
      else
      {
        if ( v27 != -1 )
          goto LABEL_22;
        if ( *v3 )
        {
          v28 = 0;
          if ( *(__int64 *)(*v3 + 24) >= 0 )
            v28 = *(_QWORD *)(*v3 + 24);
          v29 = 8 * v28;
        }
        else
        {
          v29 = 0;
        }
      }
      v12 = v29 >> 3;
      goto LABEL_22;
    }
  }
LABEL_10:
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 208) + 72LL))(*(_QWORD *)(a1 + 208));
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 208) + 80LL))(*(_QWORD *)(a1 + 208));
  if ( v6 && v7 == 1 )
  {
    ptr = nullptr;
    v8 = "+";
    v42 = 0;
    if ( (int)v40 - *(_DWORD *)(v6 + 20) < 0 )
      v8 = "-";
    ptr = (void *)qvector_reserve(&ptr, 0, 2, 1);
    v9 = *v8;
    *(_QWORD *)&v42 = 2;
    *((_BYTE *)ptr + 1) = 0;
    *(_BYTE *)ptr = v9;
    get_func_bitness(v6);
    sub_357520((__int64 *)&ptr);
    v10 = a1 + 216;
    sub_3573A0((char **)(a1 + 216));
    if ( ptr )
    {
      *(_QWORD *)&v42 = 0;
      qfree(ptr);
    }
  }
  else
  {
    v10 = a1 + 216;
    sub_3573A0((char **)(a1 + 216));
  }
  tag_addr(v10, *(unsigned int *)(a1 + 256), 0);
  return v46 - __readfsqword(0x28u);
}

