__int64 __fastcall sub_2271AB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v7; // rax
  char v8; // cl
  __int64 result; // rax
  __int64 v10; // rax
  int v11; // edx
  unsigned int v12; // r13d
  char *v13; // r12
  char *i; // r9
  char *v15; // rsi
  char v16; // al
  char *v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rdi
  size_t v20; // r15
  unsigned __int64 v21; // rdx
  char *v22; // r9
  __int64 v23; // rax
  size_t v24; // r15
  unsigned __int64 v25; // rdx
  __int64 v26; // r15
  char *v27; // rdx
  unsigned __int64 v28; // rdx
  _BYTE *v29; // rsi
  char *v30; // rdi
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int64 v36; // rax
  char *v37; // rax
  char *v38; // r12
  bool v39; // zf
  char *v40; // r15
  char *v41; // rcx
  size_t v42; // rbp
  unsigned __int64 v43; // rax
  char *v44; // rdx
  char *v45; // rsi
  unsigned __int64 v46; // r11
  __int64 v47; // r8
  unsigned __int64 v48; // r8
  __int64 v49; // r11
  char *v50; // rax
  unsigned __int64 v51; // rdx
  char *v52; // rcx
  __int64 v53; // rdi
  unsigned __int8 v54; // dl
  char *v55; // [rsp+8h] [rbp-1E0h]
  bool v56; // [rsp+16h] [rbp-1D2h]
  unsigned __int8 v57; // [rsp+16h] [rbp-1D2h]
  unsigned __int8 v58; // [rsp+17h] [rbp-1D1h]
  __int64 v59; // [rsp+18h] [rbp-1D0h]
  char v60; // [rsp+26h] [rbp-1C2h] BYREF
  unsigned __int8 v61; // [rsp+27h] [rbp-1C1h] BYREF
  unsigned int v62; // [rsp+28h] [rbp-1C0h] BYREF
  unsigned int n; // [rsp+2Ch] [rbp-1BCh] BYREF
  void *n_4[2]; // [rsp+30h] [rbp-1B8h] BYREF
  _BYTE v65[16]; // [rsp+40h] [rbp-1A8h] BYREF
  int v66; // [rsp+50h] [rbp-198h] BYREF
  __int64 v67; // [rsp+58h] [rbp-190h]
  __int64 v68; // [rsp+60h] [rbp-188h]
  void *v69[2]; // [rsp+68h] [rbp-180h] BYREF
  _BYTE v70[24]; // [rsp+78h] [rbp-170h] BYREF
  void *ptr; // [rsp+90h] [rbp-158h] BYREF
  __m128i si128; // [rsp+98h] [rbp-150h]
  _BYTE v73[320]; // [rsp+A8h] [rbp-140h] BYREF

  v7 = *(char **)(a1 + 40);
  v61 = 0;
  if ( v7 == *(char **)(a1 + 48) )
  {
    v56 = 0;
  }
  else
  {
    v8 = *v7;
    v56 = v8 == 62 || v8 == 124;
    if ( v56 )
    {
      ++*(_DWORD *)(a1 + 60);
      *(_QWORD *)(a1 + 40) = v7 + 1;
      v56 = v8 == 62;
    }
  }
  v58 = sub_2271760(a1, &v60, &v62, &v61, a5, a6);
  if ( !v58 )
    return 0;
  result = v61;
  if ( v61 )
    return result;
  v10 = *(_QWORD *)(a1 + 40);
  v11 = *(_DWORD *)(a1 + 56);
  v12 = 0;
  n = 0;
  v59 = v10;
  if ( v11 >= 0 )
    v12 = *(_DWORD *)(a1 + 56);
  if ( v62 )
  {
    ptr = v73;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    goto LABEL_10;
  }
  if ( !(unsigned __int8)sub_226EC40(a1, &v62, v12, (__int64)&n, &v61) )
    return 0;
  ptr = v73;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  if ( !v61 )
  {
    while ( 1 )
    {
LABEL_10:
      result = sub_226EDA0(a1, v62, v12);
      if ( !(_BYTE)result )
        goto LABEL_41;
      v13 = *(char **)(a1 + 40);
      if ( v61 )
      {
        v40 = *(char **)(a1 + 40);
        v27 = *(char **)(a1 + 48);
        v18 = n;
        goto LABEL_60;
      }
      for ( i = *(char **)(a1 + 40); ; i = v37 )
      {
        v15 = *(char **)(a1 + 48);
        if ( i == v15 )
          break;
        v16 = *i;
        if ( (unsigned __int8)(*i - 32) <= 0x5Eu || v16 == 9 )
        {
          v37 = i + 1;
        }
        else
        {
          if ( v16 >= 0 )
            break;
          v36 = sub_226DDA0(i, v15 - i);
          if ( !HIDWORD(v36)
            || (_DWORD)v36 == 65279
            || (unsigned int)(v36 - 160) > 0xD75F
            && (_DWORD)v36 != 133
            && (unsigned int)(v36 - 57344) > 0x1FFD
            && (unsigned int)(v36 - (_DWORD)&stru_10000) > 0xFFFFF )
          {
            break;
          }
          v37 = &i[HIDWORD(v36)];
        }
        if ( i == v37 )
          break;
      }
      v17 = &i[-*(_QWORD *)(a1 + 40)];
      *(_QWORD *)(a1 + 40) = i;
      *(_DWORD *)(a1 + 60) += (_DWORD)v17;
      v18 = n;
      if ( i != v13 )
        break;
LABEL_27:
      v27 = *(char **)(a1 + 48);
      if ( v27 == i )
        goto LABEL_61;
      if ( *i != 13 )
      {
        if ( *i != 10 )
          goto LABEL_30;
        v38 = i + 1;
LABEL_57:
        if ( v38 == i )
          goto LABEL_30;
        goto LABEL_58;
      }
      v38 = i + 1;
      if ( v27 != i + 1 )
      {
        if ( i[1] == 10 )
          v38 = i + 2;
        goto LABEL_57;
      }
LABEL_58:
      ++v18;
      ++*(_DWORD *)(a1 + 64);
      v39 = v61 == 0;
      *(_DWORD *)(a1 + 60) = 0;
      *(_QWORD *)(a1 + 40) = v38;
      n = v18;
      if ( !v39 )
      {
        v40 = v38;
        goto LABEL_60;
      }
    }
    v19 = si128.m128i_i64[0];
    if ( !n || !v56 )
    {
LABEL_20:
      v20 = v18;
      v21 = v18 + v19;
      if ( v21 <= si128.m128i_i64[1] )
      {
LABEL_21:
        if ( !v20 )
        {
LABEL_22:
          v22 = *(char **)(a1 + 40);
          v23 = v20 + v19;
          si128.m128i_i64[0] = v23;
          v24 = v22 - v13;
          v25 = v22 - v13 + v23;
          if ( v25 > si128.m128i_i64[1] )
          {
            v55 = v22;
            sub_2236E10((__int64)&ptr, v73, v25, 1);
            v23 = si128.m128i_i64[0];
            v22 = v55;
          }
          if ( v22 != v13 )
          {
            memcpy((char *)ptr + v23, v13, v24);
            v23 = si128.m128i_i64[0];
          }
          v26 = v23 + v24;
          n = 0;
          i = *(char **)(a1 + 40);
          v18 = 0;
          si128.m128i_i64[0] = v26;
          goto LABEL_27;
        }
        v41 = (char *)ptr;
LABEL_64:
        memset(&v41[v19], 10, v20);
        v19 = si128.m128i_i64[0];
        goto LABEL_22;
      }
LABEL_68:
      sub_2236E10((__int64)&ptr, v73, v21, 1);
      v19 = si128.m128i_i64[0];
      goto LABEL_21;
    }
    v41 = (char *)ptr;
    v44 = (char *)ptr;
    if ( ptr != (char *)ptr + si128.m128i_i64[0] )
    {
      v45 = *(char **)(a1 + 48);
      if ( ptr == v45
        || (v46 = *(unsigned __int8 *)ptr, (unsigned __int8)v46 > 0x20u)
        || (v47 = 0x100002600LL, !_bittest64(&v47, v46)) )
      {
LABEL_79:
        if ( n == 1 )
        {
          if ( v45 != v13 )
          {
            v50 = v13 + 1;
            do
            {
              v51 = (unsigned __int8)*(v50 - 1);
              v52 = v50;
              if ( (unsigned __int8)v51 > 0x20u )
                break;
              v53 = 0x100002600LL;
              if ( !_bittest64(&v53, v51) )
                break;
              if ( v50 == i )
              {
                v54 = 10;
                goto LABEL_102;
              }
              ++v50;
            }
            while ( v45 != v52 );
          }
          v54 = 32;
LABEL_102:
          sub_226F640(&ptr, 1u, v54);
          v18 = n;
          v19 = si128.m128i_i64[0];
        }
        n = --v18;
        goto LABEL_20;
      }
      while ( ++v44 != (char *)ptr + si128.m128i_i64[0] )
      {
        if ( v44 != v45 )
        {
          v48 = (unsigned __int8)*v44;
          if ( (unsigned __int8)v48 <= 0x20u )
          {
            v49 = 0x100002600LL;
            if ( _bittest64(&v49, v48) )
              continue;
          }
        }
        goto LABEL_79;
      }
    }
    v20 = n;
    v21 = n + si128.m128i_i64[0];
    if ( si128.m128i_i64[1] >= v21 )
      goto LABEL_64;
    goto LABEL_68;
  }
  v40 = *(char **)(a1 + 40);
  v27 = *(char **)(a1 + 48);
  v18 = n;
LABEL_60:
  if ( v40 == v27 )
  {
LABEL_61:
    if ( !v18 )
    {
      n = 1;
      v18 = 1;
    }
  }
LABEL_30:
  v28 = si128.m128i_i64[0];
  if ( v60 != 45 )
  {
    if ( v60 == 43 )
    {
      v42 = v18;
      v43 = si128.m128i_i64[0] + v18;
      if ( v43 <= si128.m128i_i64[1] )
        goto LABEL_70;
      v28 = v43;
    }
    else
    {
      if ( !si128.m128i_i64[0] )
      {
        v29 = ptr;
        v30 = (char *)ptr;
        goto LABEL_34;
      }
      if ( (unsigned __int64)(si128.m128i_i64[0] + 1) <= si128.m128i_i64[1] )
      {
        v42 = 1;
        v30 = (char *)ptr + si128.m128i_i64[0];
LABEL_71:
        memset(v30, 10, v42);
        v29 = ptr;
        v28 = v42 + si128.m128i_i64[0];
        v30 = (char *)ptr + v42 + si128.m128i_i64[0];
        goto LABEL_34;
      }
      v28 = si128.m128i_i64[0] + 1;
      v42 = 1;
    }
LABEL_93:
    sub_2236E10((__int64)&ptr, v73, v28, 1);
    v28 = si128.m128i_i64[0];
LABEL_70:
    v29 = ptr;
    v30 = (char *)ptr + v28;
    if ( !v42 )
      goto LABEL_34;
    goto LABEL_71;
  }
  if ( si128.m128i_i64[0] > (unsigned __int64)si128.m128i_i64[1] )
  {
    v42 = 0;
    goto LABEL_93;
  }
  v29 = ptr;
  v30 = (char *)ptr + si128.m128i_i64[0];
LABEL_34:
  v31 = *(_DWORD *)(a1 + 68);
  si128.m128i_i64[0] = v28;
  if ( !v31 )
    *(_BYTE *)(a1 + 73) = 1;
  *(_BYTE *)(a1 + 74) = 0;
  v69[1] = nullptr;
  v69[0] = v70;
  v32 = *(_QWORD *)(a1 + 40);
  v67 = v59;
  v70[0] = 0;
  v68 = v32 - v59;
  v66 = 19;
  n_4[0] = v65;
  sub_226E150(n_4, v29, (__int64)v30);
  sub_A0AAD0((__int64)v69, n_4);
  if ( n_4[0] != v65 )
    operator delete(n_4[0]);
  sub_2270C60((__int64 *)(a1 + 80), (unsigned __int64 *)(a1 + 176), &v66, v33, v34, v35);
  if ( v69[0] != v70 )
    operator delete(v69[0]);
  result = v58;
LABEL_41:
  if ( ptr != v73 )
  {
    v57 = result;
    free(ptr);
    return v57;
  }
  return result;
}
