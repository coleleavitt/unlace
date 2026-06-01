__int64 __fastcall sub_5225A0(
        __int64 *a1,
        unsigned __int64 *a2,
        __int64 a3,
        const char **a4,
        __int64 a5,
        __int64 a6,
        _BYTE *a7)
{
  _BYTE *v7; // r14
  const char *v8; // r13
  __int64 v11; // r12
  unsigned __int64 v12; // rcx
  unsigned __int8 v13; // al
  __int64 v14; // rsi
  unsigned __int8 v15; // bl
  __m128i *v16; // rbx
  void *v17; // rax
  __m128i v18; // xmm0
  int v19; // eax
  __int64 v21; // rbp
  int v22; // eax
  unsigned __int8 v23; // cl
  const char *v24; // rsi
  __int64 idati; // rax
  unsigned __int8 v27; // [rsp+0h] [rbp-F8h]
  __int64 v29; // [rsp+10h] [rbp-E8h]
  unsigned __int8 v30; // [rsp+1Fh] [rbp-D9h]
  void *ptr; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v32; // [rsp+28h] [rbp-D0h]
  int v33[2]; // [rsp+40h] [rbp-B8h] BYREF
  const char *v34; // [rsp+48h] [rbp-B0h]
  __int16 v35; // [rsp+50h] [rbp-A8h]
  __m128i v36; // [rsp+60h] [rbp-98h] BYREF
  __m128i v37; // [rsp+70h] [rbp-88h] BYREF
  __m128i v38; // [rsp+80h] [rbp-78h] BYREF
  __m128i v39; // [rsp+90h] [rbp-68h] BYREF
  void *v40[2]; // [rsp+A0h] [rbp-58h] BYREF
  unsigned __int64 v41; // [rsp+B8h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  v7 = a7;
  if ( !a4 )
    return 0;
  v8 = *a4;
  if ( !*a4 )
    return 0;
  v11 = a3;
  if ( !a3 )
    v11 = a1[1];
  v29 = *(_QWORD *)(*a1 + 1632);
  clear_tinfo_t(a2);
  v12 = *(unsigned __int8 *)v8;
  v13 = *v8 & 0xF;
  if ( v13 > 9u )
  {
    ptr = nullptr;
    v32 = 0;
    if ( v13 == 13 )
    {
      v30 = v12;
      if ( (unsigned __int8)sub_54DFE0(&ptr, a4) )
      {
        v23 = v30;
        if ( (unsigned __int64)v32 > 1 )
          goto LABEL_38;
        if ( (v30 & 0x3F) == 0x3D )
          goto LABEL_26;
        if ( (_QWORD)v32 )
        {
LABEL_38:
          v24 = (const char *)ptr;
          if ( *(_BYTE *)ptr != 35 )
            goto LABEL_39;
        }
        else
        {
          if ( byte_2CA12E1 != 35 )
            goto LABEL_51;
          v24 = (const char *)ptr;
        }
        if ( !(unsigned __int8)sub_6932A0(a1, v24, 0) )
          goto LABEL_26;
        v23 = v30;
        if ( (_QWORD)v32 )
        {
          v24 = (const char *)ptr;
LABEL_39:
          if ( v24 )
          {
            v34 = v24;
            v35 = 0;
            if ( !v11 )
            {
              v27 = v23;
              idati = get_idati(0, v24);
              v23 = v27;
              v11 = idati;
            }
            *(_QWORD *)v33 = v11;
            create_tinfo(a2, v23, 61, v33);
          }
          if ( *(_BYTE *)a2 )
          {
            if ( **a4 == -2 )
            {
              if ( ptr )
              {
                *(_QWORD *)&v32 = 0;
                qfree(ptr);
              }
              goto LABEL_23;
            }
LABEL_18:
            if ( ptr )
            {
              *(_QWORD *)&v32 = 0;
              qfree(ptr);
            }
            return 1;
          }
LABEL_26:
          if ( ptr )
          {
            *(_QWORD *)&v32 = 0;
            qfree(ptr);
          }
          return 0;
        }
LABEL_51:
        v24 = haystack;
        goto LABEL_39;
      }
    }
    v14 = *a1;
    v38 = 0;
    v39 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
    v40[0] = nullptr;
    v40[1] = nullptr;
    v36 = 0;
    v37 = 0;
    v15 = sub_522B20(&v36, v14, v11, a4, a5, a6);
    if ( !v15 )
    {
      sub_528890(&v36);
      goto LABEL_26;
    }
    if ( !*(_BYTE *)(v29 + 132) && (unsigned __int8)(BYTE6(v40[0]) - 10) <= 1u && !HIBYTE(v40[0]) && !v38.m128i_i64[1] )
    {
      v22 = sub_518D80(SBYTE6(v40[0]), (__int64)&v36);
      if ( v22 != 31 )
      {
        if ( !*(_DWORD *)(v29 + 128) )
        {
          sub_5223A0(v29, v22);
          copy_tinfo_t(a2);
        }
        *a2 |= v15 & 0xC0;
LABEL_17:
        sub_528890(&v36);
        goto LABEL_18;
      }
    }
    v16 = *(__m128i **)(*(_QWORD *)(v29 + 144) + 8 * sub_51B540(*a1, a2, v15));
    if ( v38.m128i_i64[0] )
      *a2 |= 0x100u;
    if ( a7 )
    {
      if ( *a7 == 6 )
      {
        WORD2(v40[0]) |= 0x2000u;
        v7 = a7 + 1;
      }
      qfree(v40[1]);
      if ( *v7 )
      {
        v17 = (void *)qstrdup(v7);
LABEL_16:
        v18 = _mm_load_si128(&v36);
        v40[1] = v17;
        *v16 = v18;
        v16[1] = _mm_load_si128(&v37);
        v16[2] = _mm_load_si128(&v38);
        v16[3] = _mm_load_si128(&v39);
        v16[4] = _mm_load_si128((const __m128i *)v40);
        v36 = 0;
        v37 = 0;
        v38 = 0;
        v39 = 0;
        *(_OWORD *)v40 = 0;
        v19 = v16[4].m128i_i32[0] + 1;
        v16[4].m128i_i32[0] = v19;
        if ( v19 != 1 )
        {
          if ( !under_debugger )
            interr(987);
          BUG();
        }
        goto LABEL_17;
      }
    }
    else
    {
      qfree(v40[1]);
    }
    v17 = nullptr;
    goto LABEL_16;
  }
  if ( !(_BYTE)v12 )
    return 0;
  ++*a4;
  *a2 = v12;
  if ( **a4 != -2 )
    return 1;
LABEL_23:
  v21 = sub_531B70(*a1, a2, 1);
  if ( (unsigned __int8)sub_51F860(a4, v33, (__int64 **)(v21 + 40)) )
  {
    *(_BYTE *)(v21 + 71) = v33[0] & 0xF;
    return 1;
  }
  return 0;
}

