__int64 __fastcall sub_784DF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v7; // rax
  char v8; // dl
  __int64 v9; // rdx
  char *v10; // rax
  unsigned int v11; // eax
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // r14
  const char *v14; // rax
  __int64 v15; // r12
  __int64 result; // rax
  __int16 v17; // dx
  char *v18; // rbp
  unsigned __int64 v19; // r12
  __int64 v20; // r15
  int v21; // edx
  unsigned __int64 v22; // r14
  unsigned int v23; // eax
  unsigned __int16 v24; // ax
  char *v25; // rax
  unsigned __int64 v26; // r12
  size_t v27; // r10
  __int64 v28; // r15
  size_t v29; // r11
  __int64 v30; // rsi
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned int v35; // [rsp+0h] [rbp-98h]
  unsigned int v36; // [rsp+0h] [rbp-98h]
  unsigned int v37; // [rsp+0h] [rbp-98h]
  char v38; // [rsp+Fh] [rbp-89h]
  unsigned __int8 v39; // [rsp+Fh] [rbp-89h]
  unsigned __int8 v40; // [rsp+Fh] [rbp-89h]
  char v41; // [rsp+Fh] [rbp-89h]
  size_t v42; // [rsp+10h] [rbp-88h]
  size_t v43; // [rsp+18h] [rbp-80h]
  void *src; // [rsp+20h] [rbp-78h] BYREF
  __int128 v45; // [rsp+28h] [rbp-70h]
  __int64 v46; // [rsp+38h] [rbp-60h]
  __int64 v47; // [rsp+40h] [rbp-58h]
  __int128 v48; // [rsp+48h] [rbp-50h]
  unsigned __int64 v49; // [rsp+58h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  v38 = 0;
  src = nullptr;
  v46 = 0;
  v47 = 0;
  v45 = 0;
  v48 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = *(char **)(a1 + 8);
        v8 = *v7;
        if ( *v7 != 32 && (unsigned __int8)(v8 - 9) > 1u )
          break;
        *(_QWORD *)(a1 + 8) = v7 + 1;
      }
      if ( v8 )
        break;
      if ( *(_QWORD *)(a1 + 64) <= 1u )
        goto LABEL_6;
      sub_77EF90(a1);
    }
    if ( v8 != 35 || v7[1] != 35 )
      goto LABEL_6;
    v17 = *(_WORD *)(a2 + 24);
    if ( (unsigned __int16)(v17 - 7) <= 1u || v17 == 3 )
    {
      v18 = *(char **)(a1 + 32);
      *(_QWORD *)(a1 + 32) = 0;
      v19 = *(_QWORD *)(a1 + 40);
      v20 = *(_QWORD *)(a1 + 48);
      *(_OWORD *)(a1 + 40) = 0;
    }
    else
    {
      v20 = 0;
      v19 = 0;
      v18 = nullptr;
    }
    v21 = *(_DWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 8) = v7 + 2;
    v22 = *(_QWORD *)(a1 + 16);
    result = sub_783E80(a1, (__int64)&src, v21, nullptr, a5, a6);
    if ( (_DWORD)result )
      goto LABEL_49;
    if ( (_WORD)v46 == 1 )
      goto LABEL_54;
    if ( (_WORD)v46 == 47 )
    {
      if ( *(_WORD *)(a2 + 24) == 47 && (*(_BYTE *)(a1 + 652) & 4) != 0 )
      {
LABEL_46:
        while ( *(_QWORD *)(a1 + 64) )
        {
          v36 = result;
          sub_77EF90(a1);
          result = v36;
        }
        *(_WORD *)(a2 + 24) = 1;
LABEL_49:
        if ( !v18 )
          goto LABEL_15;
LABEL_50:
        v37 = result;
        qfree(v18);
        result = v37;
        goto LABEL_15;
      }
    }
    else if ( (_WORD)v46 == 59 && (*(_BYTE *)(a1 + 652) & 8) != 0 )
    {
      goto LABEL_46;
    }
    LOBYTE(v23) = sub_77F3C0(a1, (__int64)&src, *(const void **)(a1 + 24));
    a6 = v23;
    if ( !(_BYTE)v23 )
    {
      *(__m128i *)(a1 + 8) = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(a1 + 24)), (__m128i)v22);
LABEL_54:
      if ( v18 )
      {
        qfree(v18);
        if ( !v38 )
          goto LABEL_56;
      }
      else
      {
LABEL_6:
        if ( !v38 )
          goto LABEL_56;
      }
      v9 = *(_QWORD *)(a2 + 8);
      v10 = &byte_2CA12E1;
      if ( v9 )
        v10 = *(char **)a2;
      v11 = *v10;
      if ( v11 <= 0x7F && (v11 - 48 <= 9 || (_BYTE)v11 == 46) )
      {
        v12 = *(_QWORD *)a1;
        v13 = *(_QWORD *)(a1 + 8);
        v14 = haystack;
        v15 = *(_QWORD *)(a1 + 16);
        if ( v9 )
          v14 = *(const char **)a2;
        *(__m128i *)a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v14, (__m128i)(unsigned __int64)v14);
        result = sub_783E80(a1, a2, 0, nullptr, a5, a6);
        *(_QWORD *)(a1 + 16) = v15;
        *(__m128i *)a1 = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v13);
        goto LABEL_15;
      }
      v32 = sub_783AC0((__m128i *)a1, 1, a2);
      if ( v32 == -1 )
      {
        result = get_qerrno(a1);
        goto LABEL_15;
      }
      if ( v32 == 1 )
      {
        result = sub_783E80(a1, a2, 0, nullptr, v33, v34);
        if ( *(_QWORD *)(a1 + 64) && !(_DWORD)result )
          result = sub_784DF0(a1, a2);
        goto LABEL_15;
      }
LABEL_56:
      result = 0;
      goto LABEL_15;
    }
    v24 = *(_WORD *)(a2 + 24);
    if ( v24 != 2 && v24 <= 0x7Fu )
      break;
LABEL_34:
    v26 = v45;
    if ( (_QWORD)v45 )
    {
      v27 = v45 - 1;
      if ( (_QWORD)v45 != 1 )
      {
        v28 = *(_QWORD *)(a2 + 8);
        v29 = v45 - 1;
        if ( v28 )
        {
          --v28;
          v29 = v27 + v28;
          v26 = v45 + v28;
        }
        v30 = *(_QWORD *)a2;
        if ( *(_QWORD *)(a2 + 16) < v26 )
        {
          v43 = v29;
          v42 = v45 - 1;
          v41 = a6;
          v31 = qvector_reserve(a2, v30, v26, 1);
          v29 = v43;
          v27 = v42;
          *(_QWORD *)a2 = v31;
          v30 = v31;
          LOBYTE(a6) = v41;
        }
        *(_QWORD *)(a2 + 8) = v26;
        *(_BYTE *)(v30 + v29) = 0;
        v39 = a6;
        memcpy((void *)(v28 + *(_QWORD *)a2), src, v27);
        a6 = v39;
      }
    }
    *(_QWORD *)(a1 + 16) = v22;
    if ( v18 )
    {
      v40 = a6;
      qfree(v18);
      a6 = v40;
    }
    v38 = a6;
  }
  if ( v19 > 1 )
  {
    v25 = *(char **)a2;
    *(_QWORD *)(a2 + 8) = v19;
    *(_QWORD *)(a2 + 16) = v20;
    *(_QWORD *)a2 = v18;
    v18 = v25;
    goto LABEL_34;
  }
  result = set_qerrno(29, &src);
  if ( v18 )
    goto LABEL_50;
LABEL_15:
  if ( src )
  {
    v35 = result;
    *(_QWORD *)&v45 = 0;
    qfree(src);
    return v35;
  }
  return result;
}

