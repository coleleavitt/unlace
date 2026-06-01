/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44ED20
// Address: 0x000000000044ED20

//----- (000000000044ED20) ----------------------------------------------------
__int64 __fastcall sub_44ED20(__int64 a1, __int64 a2)
{
  char *v3; // rax
  char v4; // dl
  __int64 v5; // rdx
  char *v6; // rax
  unsigned int v7; // eax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r14
  const char *v10; // rax
  __int64 v11; // r12
  __int64 result; // rax
  __int16 v13; // dx
  char *v14; // rbp
  unsigned __int64 v15; // r12
  __int64 v16; // r15
  int v17; // edx
  unsigned __int64 v18; // r14
  bool v19; // r9
  unsigned __int16 v20; // ax
  char *v21; // rax
  unsigned __int64 v22; // r12
  size_t v23; // r10
  __int64 v24; // r15
  size_t v25; // r11
  char *v26; // rsi
  char *v27; // rax
  int v28; // eax
  unsigned int v29; // [rsp+0h] [rbp-A8h]
  unsigned int v30; // [rsp+0h] [rbp-A8h]
  unsigned int v31; // [rsp+0h] [rbp-A8h]
  bool v32; // [rsp+Fh] [rbp-99h]
  bool v33; // [rsp+Fh] [rbp-99h]
  bool v34; // [rsp+Fh] [rbp-99h]
  bool v35; // [rsp+Fh] [rbp-99h]
  size_t v36; // [rsp+10h] [rbp-98h]
  size_t v37; // [rsp+18h] [rbp-90h]
  void *ptr; // [rsp+20h] [rbp-88h] BYREF
  __int128 v39; // [rsp+28h] [rbp-80h]
  __int64 v40; // [rsp+38h] [rbp-70h]
  __int64 v41; // [rsp+40h] [rbp-68h]
  __int64 v42; // [rsp+48h] [rbp-60h]
  __int128 v43; // [rsp+50h] [rbp-58h]
  unsigned __int64 v44; // [rsp+68h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  v32 = 0;
  ptr = nullptr;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v39 = 0;
  v43 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v3 = *(char **)(a1 + 8);
        v4 = *v3;
        if ( *v3 != 32 && (unsigned __int8)(v4 - 9) > 1u )
          break;
        *(_QWORD *)(a1 + 8) = v3 + 1;
      }
      if ( v4 )
        break;
      if ( *(_QWORD *)(a1 + 64) <= 1u )
        goto LABEL_6;
      sub_4495F0(a1);
    }
    if ( v4 != 35 || v3[1] != 35 )
      goto LABEL_6;
    v13 = *(_WORD *)(a2 + 24);
    if ( (unsigned __int16)(v13 - 7) <= 1u || v13 == 3 )
    {
      v14 = *(char **)(a1 + 32);
      *(_QWORD *)(a1 + 32) = 0;
      v15 = *(_QWORD *)(a1 + 40);
      v16 = *(_QWORD *)(a1 + 48);
      *(_OWORD *)(a1 + 40) = 0;
    }
    else
    {
      v16 = 0;
      v15 = 0;
      v14 = nullptr;
    }
    v17 = *(_DWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 8) = v3 + 2;
    v18 = *(_QWORD *)(a1 + 16);
    result = sub_44DDC0(a1, (__int64)&ptr, v17, nullptr);
    if ( (_DWORD)result )
      goto LABEL_49;
    if ( (_WORD)v40 == 1 )
      goto LABEL_54;
    if ( (_WORD)v40 == 47 )
    {
      if ( *(_WORD *)(a2 + 24) == 47 && (*(_BYTE *)(a1 + 652) & 4) != 0 )
      {
LABEL_46:
        while ( *(_QWORD *)(a1 + 64) )
        {
          v30 = result;
          sub_4495F0(a1);
          result = v30;
        }
        *(_WORD *)(a2 + 24) = 1;
LABEL_49:
        if ( !v14 )
          goto LABEL_15;
LABEL_50:
        v31 = result;
        j__free(v14);
        result = v31;
        goto LABEL_15;
      }
    }
    else if ( (_WORD)v40 == 59 && (*(_BYTE *)(a1 + 652) & 8) != 0 )
    {
      goto LABEL_46;
    }
    v19 = sub_449980(a1, (__int64)&ptr, *(const void **)(a1 + 24));
    if ( !v19 )
    {
      *(__m128i *)(a1 + 8) = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(a1 + 24)), (__m128i)v18);
LABEL_54:
      if ( v14 )
      {
        j__free(v14);
        if ( !v32 )
          goto LABEL_56;
      }
      else
      {
LABEL_6:
        if ( !v32 )
          goto LABEL_56;
      }
      v5 = *(_QWORD *)(a2 + 8);
      v6 = &byte_4C8075;
      if ( v5 )
        v6 = *(char **)a2;
      v7 = *v6;
      if ( v7 <= 0x7F && (v7 - 48 <= 9 || (_BYTE)v7 == 46) )
      {
        v8 = *(_QWORD *)a1;
        v9 = *(_QWORD *)(a1 + 8);
        v10 = s1;
        v11 = *(_QWORD *)(a1 + 16);
        if ( v5 )
          v10 = *(const char **)a2;
        *(__m128i *)a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v10, (__m128i)(unsigned __int64)v10);
        result = sub_44DDC0(a1, a2, 0, nullptr);
        *(_QWORD *)(a1 + 16) = v11;
        *(__m128i *)a1 = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v9);
        goto LABEL_15;
      }
      v28 = sub_44DA00((__m128i *)a1, 1, a2);
      if ( v28 == -1 )
      {
        result = sub_479E90();
        goto LABEL_15;
      }
      if ( v28 == 1 )
      {
        result = sub_44DDC0(a1, a2, 0, nullptr);
        if ( *(_QWORD *)(a1 + 64) && !(_DWORD)result )
          result = sub_44ED20(a1, a2);
        goto LABEL_15;
      }
LABEL_56:
      result = 0;
      goto LABEL_15;
    }
    v20 = *(_WORD *)(a2 + 24);
    if ( v20 != 2 && v20 <= 0x7Fu )
      break;
LABEL_34:
    v22 = v39;
    if ( (_QWORD)v39 )
    {
      v23 = v39 - 1;
      if ( (_QWORD)v39 != 1 )
      {
        v24 = *(_QWORD *)(a2 + 8);
        v25 = v39 - 1;
        if ( v24 )
        {
          --v24;
          v25 = v23 + v24;
          v22 = v39 + v24;
        }
        v26 = *(char **)a2;
        if ( *(_QWORD *)(a2 + 16) < v22 )
        {
          v37 = v25;
          v36 = v39 - 1;
          v35 = v19;
          v27 = (char *)sub_481540(a2, v26, v22, 1u);
          v25 = v37;
          v23 = v36;
          *(_QWORD *)a2 = v27;
          v26 = v27;
          v19 = v35;
        }
        *(_QWORD *)(a2 + 8) = v22;
        v26[v25] = 0;
        v33 = v19;
        memcpy((void *)(v24 + *(_QWORD *)a2), ptr, v23);
        v19 = v33;
      }
    }
    *(_QWORD *)(a1 + 16) = v18;
    if ( v14 )
    {
      v34 = v19;
      j__free(v14);
      v19 = v34;
    }
    v32 = v19;
  }
  if ( v15 > 1 )
  {
    v21 = *(char **)a2;
    *(_QWORD *)(a2 + 8) = v15;
    *(_QWORD *)(a2 + 16) = v16;
    *(_QWORD *)a2 = v14;
    v14 = v21;
    goto LABEL_34;
  }
  result = sub_479EB0(0x1Du);
  if ( v14 )
    goto LABEL_50;
LABEL_15:
  if ( ptr )
  {
    v29 = result;
    *(_QWORD *)&v39 = 0;
    j__free(ptr);
    return v29;
  }
  return result;
}
// 4C8075: using guessed type char byte_4C8075;
