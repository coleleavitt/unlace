__int64 __fastcall sub_32FE70(__int64 a1, __int64 *a2, __int64 a3, char a4, double a5, __m128 a6)
{
  int v9; // ecx
  __int64 v10; // rsi
  __int64 v11; // rdx
  signed __int64 v12; // rax
  char v13; // al
  __int64 result; // rax
  int tinfo_size; // eax
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int8 *i; // rax
  __int64 v19; // rdx
  char v20; // al
  __int64 v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  _DWORD *v25; // rax
  int v26; // ecx
  void *v27; // rax
  const void *v28; // rsi
  __m128 v29; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v30[24]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v31; // [rsp+28h] [rbp-30h]

  v31 = __readfsqword(0x28u);
  v9 = *(_DWORD *)(a1 + 284);
  if ( v9 == 4 )
  {
    v10 = 8;
  }
  else
  {
    if ( v9 != 3 )
    {
      v10 = 1;
      if ( (unsigned int)(v9 - 34) <= 4 )
      {
        tinfo_size = get_tinfo_size();
        v9 = *(_DWORD *)(a1 + 284);
        v10 = tinfo_size;
      }
      switch ( v9 )
      {
        case 2:
        case 3:
        case 4:
        case 5:
        case 34:
        case 35:
          if ( *(_QWORD *)(a1 + 32) != 3 )
            goto LABEL_45;
          if ( (_DWORD)v10 != -1 )
            goto LABEL_23;
          goto LABEL_24;
        case 6:
        case 8:
        case 36:
        case 38:
          if ( *(_QWORD *)(a1 + 32) == 2 )
          {
            v11 = *(_QWORD *)(a1 + 24);
            if ( *(_BYTE *)v11 == 10 )
            {
              v12 = -1;
              if ( (_DWORD)v10 != -1 && (v9 == 6 || v9 == 36) )
              {
                v12 = sub_32F220((char *)(v11 + 80), v10);
                v11 = *(_QWORD *)(a1 + 24);
              }
              v10 = *(_QWORD *)(v11 + 8);
              v13 = sub_3293B0(a2, v10, v12, a4, *(_QWORD *)(a3 + 64) + 208LL);
              goto LABEL_12;
            }
LABEL_24:
            if ( (a4 & 1) == 0 )
              return 0;
            goto LABEL_25;
          }
          if ( !under_debugger )
            sub_383060(50664);
          return result;
        case 19:
          return 1;
        case 20:
        case 21:
        case 22:
          v24 = sub_32FA00(a1);
          if ( v24 <= 0 )
            return 0;
          return sub_3293B0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL), v24, a4, 0);
        case 23:
          if ( (a4 & 1) == 0 || a4 >= 0 )
            return sub_329A90(a2, *(_QWORD *)(a1 + 24), a4);
          return 0;
        case 24:
        case 25:
        case 26:
          return sub_329A90(a2, *(_QWORD *)(a1 + 24), a4);
        default:
          return 0;
      }
LABEL_51:
      BUG();
    }
    v10 = 4;
  }
  if ( *(_QWORD *)(a1 + 32) != 3 )
  {
LABEL_45:
    if ( !under_debugger )
      sub_383060(50665);
    goto LABEL_51;
  }
LABEL_23:
  v16 = *(_QWORD *)(a1 + 24);
  if ( *(_BYTE *)v16 != 10 )
    goto LABEL_24;
  v26 = v10;
  v10 = *(_QWORD *)(v16 + 8);
  v13 = sub_329540(a2, v10, (char *)(v16 + 160), v26, a4, *(_QWORD *)(a3 + 64) + 208LL);
LABEL_12:
  if ( v13 )
    return 1;
  if ( (a4 & 1) == 0 || !*(_QWORD *)(a1 + 32) )
    return 0;
LABEL_25:
  v17 = *(_QWORD *)(a1 + 24);
  for ( i = (unsigned __int8 *)v17; ; i = (unsigned __int8 *)(v25 + 8) )
  {
    v19 = *i;
    if ( (_BYTE)v19 != 4 )
      break;
    v25 = *((_DWORD **)i + 1);
    v19 = (unsigned int)(*v25 - 12);
    if ( (unsigned int)v19 > 1 )
      goto LABEL_19;
  }
  if ( (_BYTE)v19 != 10 )
    goto LABEL_19;
  v20 = **((_BYTE **)i + 1);
  if ( v20 != 5 )
  {
    if ( v20 == 6 )
    {
      v21 = *(_QWORD *)(a1 + 224);
      memset(v30, 0, sizeof(v30));
      if ( v21 )
      {
        v27 = (void *)qalloc_or_throw(16 * v21, v10, v19, v17);
        v28 = *(const void **)(a1 + 216);
        *(_QWORD *)&v30[16] = v21;
        *(_QWORD *)v30 = v27;
        memcpy(v27, v28, 16 * v21);
        *(_QWORD *)&v30[8] = v21;
      }
      v29 = _mm_loadh_ps((const double *)(*(_QWORD *)(a3 + 64) + 128LL));
      sub_317BD0((__int64 *)v30, (__m128i *)&v29);
      sub_316CB0(a2 + 2, (__int64 **)v30, v22, v23);
      if ( *(_QWORD *)v30 )
      {
        *(_QWORD *)&v30[8] = 0;
        qfree(*(__int64 *)v30);
      }
      return 1;
    }
LABEL_19:
    sub_316CB0(a2 + 2, (__int64 **)(a1 + 216), v19, v17);
    return 1;
  }
  if ( *(_BYTE *)v17 != 4 || **(_DWORD **)(v17 + 8) != 13 )
    goto LABEL_19;
  *(__m128 *)v30 = _mm_loadh_ps((const double *)(*(_QWORD *)(a3 + 64) + 128LL));
  sub_316BB0(a2 + 2, (__m128i *)v30, *(double *)v30, a6);
  return 1;
}
