__int64 __fastcall sub_E3F3A0(__int64 a1, void *a2, void *a3, unsigned __int8 a4)
{
  unsigned __int8 v5; // r14
  int v7; // ebp
  __int64 v8; // r13
  int v9; // ebp
  int v10; // eax
  const void *v11; // rcx
  void *v12; // r9
  unsigned int v13; // r8d
  bool v14; // r10
  int i; // r11d
  __int64 v16; // r12
  const void *v17; // rsi
  int v18; // eax
  bool v19; // al
  __int64 v20; // rdi
  _BYTE *v21; // rax
  __int64 result; // rax
  int j; // edx
  unsigned int v24; // eax
  char *v25; // rax
  size_t v26; // rbp
  unsigned __int64 v27; // r12
  char *v28; // r12
  __int64 v29; // rdi
  _BYTE *v30; // rax
  __int64 v31; // rdi
  _BYTE *v32; // rax
  __int64 v33; // rax
  void *v34; // rdi
  __int64 v35; // r13
  unsigned int v36; // eax
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // eax
  int v41; // esi
  __int64 v42; // r8
  bool v43; // zf
  unsigned int v44; // eax
  const void *v45; // [rsp+0h] [rbp-B8h]
  void *v46; // [rsp+8h] [rbp-B0h]
  unsigned int v47; // [rsp+14h] [rbp-A4h]
  bool v48; // [rsp+1Bh] [rbp-9Dh]
  int v49; // [rsp+1Ch] [rbp-9Ch]
  void *s1[2]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v51; // [rsp+30h] [rbp-88h] BYREF
  __int64 v52; // [rsp+38h] [rbp-80h] BYREF
  __m128i si128; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v54; // [rsp+50h] [rbp-68h]
  _QWORD v55[11]; // [rsp+60h] [rbp-58h] BYREF

  v5 = a4;
  v7 = *(_DWORD *)(a1 + 272);
  v8 = *(_QWORD *)(a1 + 256);
  s1[0] = a2;
  s1[1] = a3;
  if ( !v7 )
  {
LABEL_20:
    LOBYTE(v55[0]) = 46;
    v25 = (char *)sub_2246E40(s1, v55, 1);
    if ( v25 == (char *)-1LL )
    {
      v28 = (char *)s1[0];
      v26 = (size_t)s1[1];
    }
    else
    {
      v26 = (size_t)s1[1];
      v27 = (unsigned __int64)(v25 + 1);
      if ( v25 + 1 > s1[1] )
      {
        v28 = (char *)s1[0];
        if ( v25 <= s1[1] )
          v26 = (size_t)v25;
      }
      else
      {
        if ( v25 > s1[1] )
          v25 = (char *)s1[1];
        v26 = (size_t)s1[1] - v27;
        if ( s1[1] == (void *)v27 )
        {
          v28 = (char *)s1[0];
          v26 = (size_t)v25;
        }
        else
        {
          v28 = (char *)s1[0] + v27;
          v55[0] = s1[0];
          v55[1] = v25;
          v5 = 0;
          sub_E3F3A0(a1, s1[0], v25, a4);
        }
      }
    }
    v29 = *(_QWORD *)(a1 + 8);
    v30 = *(_BYTE **)(v29 + 32);
    if ( (unsigned __int64)v30 >= *(_QWORD *)(v29 + 24) )
    {
      sub_227BA10(v29, 87);
    }
    else
    {
      *(_QWORD *)(v29 + 32) = v30 + 1;
      *v30 = 87;
    }
    v31 = *(_QWORD *)(a1 + 8);
    if ( v5 )
    {
      v32 = *(_BYTE **)(v31 + 32);
      if ( (unsigned __int64)v32 >= *(_QWORD *)(v31 + 24) )
      {
        sub_227BA10(v31, 80);
      }
      else
      {
        *(_QWORD *)(v31 + 32) = v32 + 1;
        *v32 = 80;
      }
      v31 = *(_QWORD *)(a1 + 8);
    }
    v33 = sub_227B910(v31, v26);
    v34 = *(void **)(v33 + 32);
    v35 = v33;
    if ( v26 > *(_QWORD *)(v33 + 24) - (_QWORD)v34 )
    {
      sub_227BF10(v33, v28, v26);
    }
    else if ( v26 )
    {
      memcpy(v34, v28, v26);
      *(_QWORD *)(v35 + 32) += v26;
    }
    v36 = *(_DWORD *)(a1 + 40);
    si128 = _mm_load_si128((const __m128i *)s1);
    *(_DWORD *)(a1 + 40) = v36 + 1;
    v54 = v36;
    result = sub_E3CF00((__int64 *)(a1 + 256), &si128, &v51);
    if ( (_BYTE)result )
      return result;
    v38 = *(unsigned int *)(a1 + 272);
    v39 = v51;
    v40 = *(_DWORD *)(a1 + 264) + 1;
    v41 = 2 * v38;
    v42 = (unsigned int)(4 * v40);
    v52 = v51;
    if ( (unsigned int)v42 < 3 * (int)v38 )
    {
      if ( (int)v38 - *(_DWORD *)(a1 + 268) - v40 > (unsigned int)v38 >> 3 )
      {
LABEL_38:
        v43 = *(_QWORD *)v39 == -1;
        *(_DWORD *)(a1 + 264) = v40;
        if ( !v43 )
          --*(_DWORD *)(a1 + 268);
        result = v54;
        *(__m128i *)v39 = _mm_load_si128(&si128);
        *(_DWORD *)(v39 + 16) = result;
        return result;
      }
      v41 = v38;
    }
    sub_E3EFE0(a1 + 256, v41, v38, v51, v42, v37);
    sub_E3CF00((__int64 *)(a1 + 256), &si128, &v52);
    v39 = v52;
    v40 = *(_DWORD *)(a1 + 264) + 1;
    goto LABEL_38;
  }
  v9 = v7 - 1;
  v10 = sub_2248890(a2, a3);
  v11 = s1[0];
  v12 = s1[1];
  v13 = v9 & v10;
  v14 = s1[0] == (void *)-2LL;
  if ( s1[1] )
  {
    for ( i = 1; ; ++i )
    {
      v16 = v8 + 24LL * v13;
      v17 = *(const void **)v16;
      if ( *(_QWORD *)v16 == -1 )
        goto LABEL_19;
      if ( v17 == (const void *)-2LL )
      {
        v19 = v14;
      }
      else
      {
        if ( v12 != *(void **)(v16 + 8) )
          goto LABEL_51;
        v49 = i;
        v48 = v14;
        v47 = v13;
        v46 = v12;
        v45 = v11;
        v18 = memcmp(v11, v17, (size_t)v12);
        v11 = v45;
        v12 = v46;
        v13 = v47;
        v14 = v48;
        i = v49;
        v19 = v18 == 0;
      }
      if ( v19 )
        goto LABEL_9;
LABEL_51:
      v44 = i + v13;
      v13 = v9 & v44;
    }
  }
  for ( j = 1; ; ++j )
  {
    v16 = v8 + 24LL * v13;
    if ( *(_QWORD *)v16 == -1 )
      break;
    if ( *(_QWORD *)v16 == -2 )
    {
      if ( s1[0] == (void *)-2LL )
        goto LABEL_9;
    }
    else if ( !*(_QWORD *)(v16 + 8) )
    {
      goto LABEL_9;
    }
    v24 = v13 + j;
    v13 = v9 & v24;
  }
LABEL_19:
  if ( v11 != (const void *)-1LL )
    goto LABEL_20;
LABEL_9:
  if ( *(_QWORD *)(a1 + 256) + 24LL * *(unsigned int *)(a1 + 272) == v16 )
    goto LABEL_20;
  v20 = *(_QWORD *)(a1 + 8);
  v21 = *(_BYTE **)(v20 + 32);
  if ( (unsigned __int64)v21 >= *(_QWORD *)(v20 + 24) )
  {
    sub_227BA10(v20, 83);
  }
  else
  {
    *(_QWORD *)(v20 + 32) = v21 + 1;
    *v21 = 83;
  }
  return (__int64)sub_E38850((__int64 *)(a1 + 8), *(_DWORD *)(v16 + 16));
}
