__int64 __fastcall sub_533810(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 *a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        char a7,
        const char *a8)
{
  __int64 v8; // rax
  __int16 v10; // dx
  const char *v11; // rsi
  __int64 result; // rax
  __int64 v16; // rdx
  __m128i v17; // xmm0
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int16 v21; // ax
  __int16 v22; // dx
  __int64 v23; // rax
  char v24; // al
  void (__fastcall *v25)(__int128 *, unsigned __int64, __int64); // rax
  __int64 v26; // r8
  bool v27; // zf
  int v28; // ebp
  char v29; // al
  void (__fastcall *v30)(__int128 *, unsigned __int64, __int64); // rax
  __int64 v31; // r8
  __int64 v32; // rbp
  unsigned __int64 v33; // rsi
  void (__fastcall *v34)(__int128 *, unsigned __int64, __int64); // rax
  __int64 v35; // r8
  __int64 v36; // r12
  char v37; // dl
  __int64 v38; // rax
  int v39; // [rsp-8h] [rbp-90h]
  int v40; // [rsp+0h] [rbp-88h]
  int v41; // [rsp+8h] [rbp-80h]
  __int64 v42; // [rsp+8h] [rbp-80h]
  __int64 v43; // [rsp+8h] [rbp-80h]
  __int64 v44; // [rsp+8h] [rbp-80h]
  int v45; // [rsp+10h] [rbp-78h]
  __int64 v46; // [rsp+18h] [rbp-70h] BYREF
  __int128 v47; // [rsp+20h] [rbp-68h] BYREF
  __m128i v48; // [rsp+30h] [rbp-58h]
  __int64 v49; // [rsp+40h] [rbp-48h]
  unsigned __int64 v50; // [rsp+48h] [rbp-40h]

  v8 = a3;
  v10 = *(_WORD *)(a1 + 68);
  v50 = __readfsqword(0x28u);
  v11 = (const char *)(~(_BYTE)v10 & 0x70);
  if ( (~(_BYTE)v10 & 0x70) == 0 )
  {
    if ( !under_debugger )
      interr(2981);
LABEL_83:
    BUG();
  }
  switch ( v8 )
  {
    case 2LL:
      if ( (*(_BYTE *)(a1 + 70) & 0x2F) != 0xD )
        return 0;
      return (unsigned __int8)sub_557100(
                                0,
                                0,
                                0,
                                *(_QWORD *)a1,
                                0,
                                0,
                                (unsigned int)a5 | 2,
                                v39,
                                v40,
                                v41,
                                v45,
                                v46,
                                v47,
                                SDWORD2(v47),
                                v48.m128i_i64[0],
                                (void *)v48.m128i_i64[1],
                                v49);
    case 3LL:
      if ( (*(_BYTE *)(a1 + 70) & 0x2F) != 0xD || !a5 || !*(_QWORD *)(a5 + 8) )
        return 0;
      v16 = *(_QWORD *)(a1 + 8);
      if ( v16 )
      {
        v17 = _mm_loadu_si128((const __m128i *)(v16 + 8));
        v18 = *(_QWORD *)v16;
        v19 = *(_QWORD *)(a1 + 8);
      }
      else
      {
        v19 = qalloc_or_throw(24, v11);
        v17 = 0;
        v18 = 0;
        *(_QWORD *)v19 = 0;
        v16 = v19;
        *(_OWORD *)(v19 + 8) = 0;
      }
      *(_QWORD *)v19 = *(_QWORD *)a5;
      *(_QWORD *)(v19 + 8) = *(_QWORD *)(a5 + 8);
      *(_QWORD *)(v19 + 16) = *(_QWORD *)(a5 + 16);
      *(_QWORD *)a5 = v18;
      *(__m128i *)(a5 + 8) = v17;
      *(_QWORD *)(a1 + 8) = v16;
      return 1;
    case 5LL:
      qfree(*(void **)(a1 + 72));
      v20 = 0;
      if ( a5 && *(_BYTE *)a5 )
        v20 = qstrdup(a5);
      *(_QWORD *)(a1 + 72) = v20;
      v21 = *(_WORD *)(a1 + 68);
      v22 = v21;
      HIBYTE(v21) &= ~0x20u;
      HIBYTE(v22) |= 0x20u;
      if ( a6 )
        v21 = v22;
      *(_WORD *)(a1 + 68) = v21;
      if ( (a7 & 1) != 0 || !*(_QWORD *)(a1 + 32) )
        return 0;
      return (int)sub_533780(a1, *(void ***)(a2 + 1480), a4, nullptr);
    case 6LL:
      v23 = *(unsigned __int8 *)(a1 + 70);
      if ( (a5 & v23) == 0 )
        return 1;
      if ( *(_QWORD *)(a1 + 32) )
        return 0;
      *(_BYTE *)(a1 + 70) = ~(_BYTE)a5 & v23;
      *a4 &= ~a5;
      return 1;
    case 25LL:
      if ( (v10 & 8) == 0 )
        return 0;
      return (unsigned __int8)set_type_alias(
                                **(_QWORD **)(a1 + 32),
                                *(unsigned int *)(*(_QWORD *)(a1 + 32) + 8LL),
                                (unsigned int)a5);
    case 41LL:
      if ( *(_QWORD *)(a1 + 32) )
      {
        if ( (v10 & 0x200) != 0 && (v10 & 0x40) == 0 )
          return 0;
        v29 = *(_BYTE *)(a1 + 70);
        if ( !v29 || (v29 & 0xFu) <= 0xC )
          return 0;
      }
      else
      {
        v29 = *(_BYTE *)(a1 + 70);
      }
      if ( (v29 & 0x2F) != 0xD )
        return 0;
      v30 = *(void (__fastcall **)(__int128 *, unsigned __int64, __int64))(a5 + 16);
      v31 = *(_QWORD *)a1;
      v48 = 0u;
      v47 = 0;
      if ( v30 )
      {
        v43 = v31;
        v30(&v47, a5, 2);
        v27 = *(_QWORD *)(a5 + 16) == 0;
        v46 = v43;
        v48 = _mm_loadu_si128((const __m128i *)(a5 + 16));
        if ( !v27 )
        {
          v28 = ((__int64 (__fastcall *)(__int128 *, __int64 *))v48.m128i_i64[1])(&v47, &v46);
          if ( !v48.m128i_i64[0] )
            goto LABEL_45;
          goto LABEL_44;
        }
      }
      else
      {
        v46 = v31;
      }
      std::__throw_bad_function_call();
    case 42LL:
      if ( *(_QWORD *)(a1 + 32) )
      {
        if ( (v10 & 0x200) != 0 && (v10 & 0x40) == 0 )
          return 0;
        v24 = *(_BYTE *)(a1 + 70);
        if ( !v24 || (v24 & 0xFu) <= 0xC )
          return 0;
      }
      else
      {
        v24 = *(_BYTE *)(a1 + 70);
      }
      if ( (v24 & 0x3F) != 0x2D )
        return 0;
      v25 = *(void (__fastcall **)(__int128 *, unsigned __int64, __int64))(a5 + 16);
      v26 = *(_QWORD *)a1;
      v48 = 0u;
      v47 = 0;
      if ( v25 )
      {
        v42 = v26;
        v25(&v47, a5, 2);
        v27 = *(_QWORD *)(a5 + 16) == 0;
        v46 = v42;
        v48 = _mm_loadu_si128((const __m128i *)(a5 + 16));
        if ( !v27 )
        {
          v28 = ((__int64 (__fastcall *)(__int128 *, __int64 *))v48.m128i_i64[1])(&v47, &v46);
          if ( !v48.m128i_i64[0] )
            goto LABEL_45;
          goto LABEL_44;
        }
      }
      else
      {
        v46 = v26;
      }
      std::__throw_bad_function_call();
    case 43LL:
      if ( *(_QWORD *)(a1 + 32) || (*(_BYTE *)(a1 + 70) & 0xF) != 0xC )
        return 0;
      v34 = *(void (__fastcall **)(__int128 *, unsigned __int64, __int64))(a5 + 16);
      v35 = *(_QWORD *)a1;
      v48 = 0u;
      v47 = 0;
      if ( !v34 )
      {
        v46 = v35;
        goto LABEL_87;
      }
      v44 = v35;
      v34(&v47, a5, 2);
      v27 = *(_QWORD *)(a5 + 16) == 0;
      v46 = v44;
      v48 = _mm_loadu_si128((const __m128i *)(a5 + 16));
      if ( v27 )
LABEL_87:
        std::__throw_bad_function_call();
      v28 = ((__int64 (__fastcall *)(__int128 *, __int64 *))v48.m128i_i64[1])(&v47, &v46);
      if ( v48.m128i_i64[0] )
LABEL_44:
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v48.m128i_i64[0])(&v47, &v47, 3);
LABEL_45:
      result = v28;
      if ( v28 )
      {
        v36 = (a6 >> 30) & 1;
        if ( v28 == 1 )
          return v36;
        return result;
      }
      if ( (*(_BYTE *)(a1 + 70) & 0x2F) == 0xD && (v32 = *(_QWORD *)a1, (*(_BYTE *)(*(_QWORD *)a1 + 45LL) & 4) != 0) )
      {
        v37 = sub_5291B0(a1, *(_DWORD *)(v32 + 24));
        v38 = *(_QWORD *)(v32 + 24);
        if ( v37 )
          *(_DWORD *)(v32 + 40) = v38;
        *(_QWORD *)(a1 + 48) = v38;
        *(_DWORD *)(a1 + 56) = *(_DWORD *)(v32 + 40);
      }
      else
      {
        *(_WORD *)(a1 + 68) &= ~2u;
      }
      v33 = *a4;
      if ( *a4 > 0xFF )
      {
        sub_525DE0(*(_QWORD *)(a2 + 1632), v33);
        goto LABEL_51;
      }
      if ( (v33 & 0xF) > 9 )
      {
        if ( !under_debugger )
          interr(933);
        goto LABEL_83;
      }
LABEL_51:
      if ( (a6 & 1) != 0 )
        return 0;
      if ( *(_QWORD *)(a1 + 32) )
        return (int)sub_533780(a1, *(void ***)(a2 + 1480), a4, a8);
      if ( (*(_BYTE *)(a1 + 69) & 0x40) == 0 )
        return 0;
      if ( *(_DWORD *)(a1 + 16) != -1 )
        return (int)sub_533780(a1, *(void ***)(a2 + 1480), a4, a8);
      return 0;
    default:
      if ( !under_debugger )
        interr(970);
      goto LABEL_83;
  }
}

