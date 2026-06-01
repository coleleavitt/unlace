__int64 __fastcall sub_54C8A0(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 *a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v8; // rax
  __int16 v10; // dx
  __int64 result; // rax
  __int64 v15; // rdx
  __m128i v16; // xmm0
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int16 v20; // ax
  __int16 v21; // dx
  __int64 v22; // rax
  char v23; // al
  void (__fastcall *v24)(__int128 *, unsigned __int64, __int64); // rax
  __int64 v25; // r8
  bool v26; // zf
  int v27; // ebp
  char v28; // al
  void (__fastcall *v29)(__int128 *, unsigned __int64, __int64); // rax
  __int64 v30; // r8
  __int64 v31; // rbp
  unsigned __int64 v32; // rsi
  void (__fastcall *v33)(__int128 *, unsigned __int64, __int64); // rax
  __int64 v34; // r8
  __int64 v35; // r12
  char v36; // dl
  __int64 v37; // rax
  int v38; // [rsp-8h] [rbp-90h]
  int v39; // [rsp+0h] [rbp-88h]
  int v40; // [rsp+8h] [rbp-80h]
  __int64 v41; // [rsp+8h] [rbp-80h]
  __int64 v42; // [rsp+8h] [rbp-80h]
  __int64 v43; // [rsp+8h] [rbp-80h]
  int v44; // [rsp+10h] [rbp-78h]
  __int64 v45; // [rsp+18h] [rbp-70h] BYREF
  __int128 v46; // [rsp+20h] [rbp-68h] BYREF
  __m128i v47; // [rsp+30h] [rbp-58h]
  __int64 v48; // [rsp+40h] [rbp-48h]
  unsigned __int64 v49; // [rsp+48h] [rbp-40h]

  v8 = a3;
  v10 = *(_WORD *)(a1 + 68);
  v49 = __readfsqword(0x28u);
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
      return (unsigned __int8)sub_570BB0(
                                0,
                                0,
                                0,
                                *(_QWORD *)a1,
                                0,
                                0,
                                (unsigned int)a5 | 2,
                                v38,
                                v39,
                                v40,
                                v44,
                                v45,
                                v46,
                                SDWORD2(v46),
                                v47.m128i_i64[0],
                                (void *)v47.m128i_i64[1],
                                v48);
    case 3LL:
      if ( (*(_BYTE *)(a1 + 70) & 0x2F) != 0xD || !a5 || !*(_QWORD *)(a5 + 8) )
        return 0;
      v15 = *(_QWORD *)(a1 + 8);
      if ( v15 )
      {
        v16 = _mm_loadu_si128((const __m128i *)(v15 + 8));
        v17 = *(_QWORD *)v15;
        v18 = *(_QWORD *)(a1 + 8);
      }
      else
      {
        v18 = qalloc_or_throw(24);
        v16 = 0;
        v17 = 0;
        *(_QWORD *)v18 = 0;
        v15 = v18;
        *(_OWORD *)(v18 + 8) = 0;
      }
      *(_QWORD *)v18 = *(_QWORD *)a5;
      *(_QWORD *)(v18 + 8) = *(_QWORD *)(a5 + 8);
      *(_QWORD *)(v18 + 16) = *(_QWORD *)(a5 + 16);
      *(_QWORD *)a5 = v17;
      *(__m128i *)(a5 + 8) = v16;
      *(_QWORD *)(a1 + 8) = v15;
      return 1;
    case 5LL:
      qfree(*(void **)(a1 + 72));
      v19 = 0;
      if ( a5 && *(_BYTE *)a5 )
        v19 = qstrdup(a5);
      *(_QWORD *)(a1 + 72) = v19;
      v20 = *(_WORD *)(a1 + 68);
      v21 = v20;
      HIBYTE(v20) &= ~0x20u;
      HIBYTE(v21) |= 0x20u;
      if ( a6 )
        v20 = v21;
      *(_WORD *)(a1 + 68) = v20;
      if ( (a7 & 1) != 0 || !*(_QWORD *)(a1 + 32) )
        return 0;
      return (int)sub_54C810(a1, *(void ***)(a2 + 1672), a4, 0);
    case 6LL:
      v22 = *(unsigned __int8 *)(a1 + 70);
      if ( (a5 & v22) == 0 )
        return 1;
      if ( *(_QWORD *)(a1 + 32) )
        return 0;
      *(_BYTE *)(a1 + 70) = ~(_BYTE)a5 & v22;
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
        v28 = *(_BYTE *)(a1 + 70);
        if ( !v28 || (v28 & 0xFu) <= 0xC )
          return 0;
      }
      else
      {
        v28 = *(_BYTE *)(a1 + 70);
      }
      if ( (v28 & 0x2F) != 0xD )
        return 0;
      v29 = *(void (__fastcall **)(__int128 *, unsigned __int64, __int64))(a5 + 16);
      v30 = *(_QWORD *)a1;
      v47 = 0u;
      v46 = 0;
      if ( v29 )
      {
        v42 = v30;
        v29(&v46, a5, 2);
        v26 = *(_QWORD *)(a5 + 16) == 0;
        v45 = v42;
        v47 = _mm_loadu_si128((const __m128i *)(a5 + 16));
        if ( !v26 )
        {
          v27 = ((__int64 (__fastcall *)(__int128 *, __int64 *))v47.m128i_i64[1])(&v46, &v45);
          if ( !v47.m128i_i64[0] )
            goto LABEL_45;
          goto LABEL_44;
        }
      }
      else
      {
        v45 = v30;
      }
      std::__throw_bad_function_call();
    case 42LL:
      if ( *(_QWORD *)(a1 + 32) )
      {
        if ( (v10 & 0x200) != 0 && (v10 & 0x40) == 0 )
          return 0;
        v23 = *(_BYTE *)(a1 + 70);
        if ( !v23 || (v23 & 0xFu) <= 0xC )
          return 0;
      }
      else
      {
        v23 = *(_BYTE *)(a1 + 70);
      }
      if ( (v23 & 0x3F) != 0x2D )
        return 0;
      v24 = *(void (__fastcall **)(__int128 *, unsigned __int64, __int64))(a5 + 16);
      v25 = *(_QWORD *)a1;
      v47 = 0u;
      v46 = 0;
      if ( v24 )
      {
        v41 = v25;
        v24(&v46, a5, 2);
        v26 = *(_QWORD *)(a5 + 16) == 0;
        v45 = v41;
        v47 = _mm_loadu_si128((const __m128i *)(a5 + 16));
        if ( !v26 )
        {
          v27 = ((__int64 (__fastcall *)(__int128 *, __int64 *))v47.m128i_i64[1])(&v46, &v45);
          if ( !v47.m128i_i64[0] )
            goto LABEL_45;
          goto LABEL_44;
        }
      }
      else
      {
        v45 = v25;
      }
      std::__throw_bad_function_call();
    case 43LL:
      if ( *(_QWORD *)(a1 + 32) || (*(_BYTE *)(a1 + 70) & 0xF) != 0xC )
        return 0;
      v33 = *(void (__fastcall **)(__int128 *, unsigned __int64, __int64))(a5 + 16);
      v34 = *(_QWORD *)a1;
      v47 = 0u;
      v46 = 0;
      if ( !v33 )
      {
        v45 = v34;
        goto LABEL_87;
      }
      v43 = v34;
      v33(&v46, a5, 2);
      v26 = *(_QWORD *)(a5 + 16) == 0;
      v45 = v43;
      v47 = _mm_loadu_si128((const __m128i *)(a5 + 16));
      if ( v26 )
LABEL_87:
        std::__throw_bad_function_call();
      v27 = ((__int64 (__fastcall *)(__int128 *, __int64 *))v47.m128i_i64[1])(&v46, &v45);
      if ( v47.m128i_i64[0] )
LABEL_44:
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v47.m128i_i64[0])(&v46, &v46, 3);
LABEL_45:
      result = v27;
      if ( v27 )
      {
        v35 = (a6 >> 30) & 1;
        if ( v27 == 1 )
          return v35;
        return result;
      }
      if ( (*(_BYTE *)(a1 + 70) & 0x2F) == 0xD && (v31 = *(_QWORD *)a1, (*(_BYTE *)(*(_QWORD *)a1 + 45LL) & 4) != 0) )
      {
        v36 = sub_541EB0(a1, *(_DWORD *)(v31 + 24));
        v37 = *(_QWORD *)(v31 + 24);
        if ( v36 )
          *(_DWORD *)(v31 + 40) = v37;
        *(_QWORD *)(a1 + 48) = v37;
        *(_DWORD *)(a1 + 56) = *(_DWORD *)(v31 + 40);
      }
      else
      {
        *(_WORD *)(a1 + 68) &= ~2u;
      }
      v32 = *a4;
      if ( *a4 > 0xFF )
      {
        sub_53EAE0(*(_QWORD *)(a2 + 1824), v32);
        goto LABEL_51;
      }
      if ( (v32 & 0xF) > 9 )
      {
        if ( !under_debugger )
          interr(933);
        goto LABEL_83;
      }
LABEL_51:
      if ( (a6 & 1) != 0 )
        return 0;
      if ( *(_QWORD *)(a1 + 32) )
        return (int)sub_54C810(a1, *(void ***)(a2 + 1672), a4, a8);
      if ( (*(_BYTE *)(a1 + 69) & 0x40) == 0 )
        return 0;
      if ( *(_QWORD *)(a1 + 16) != -1 )
        return (int)sub_54C810(a1, *(void ***)(a2 + 1672), a4, a8);
      return 0;
    default:
      if ( !under_debugger )
        interr(970);
      goto LABEL_83;
  }
}
