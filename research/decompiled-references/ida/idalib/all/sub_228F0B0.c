__int64 __fastcall sub_228F0B0(_QWORD *a1, unsigned __int8 a2, unsigned int a3)
{
  unsigned int v3; // r14d
  __int128 v4; // rdi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rax
  char v8; // r12
  char *v9; // rbp
  unsigned int v10; // ebx
  size_t v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r8
  _BYTE *v14; // r9
  __int64 v15; // rcx
  __int128 v16; // rax
  bool v17; // zf
  int v18; // ebx
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  _QWORD *v21; // rax
  char *v22; // rdi
  _BYTE *v23; // r13
  int v24; // eax
  __m128i si128; // xmm0
  unsigned __int64 v27; // rax
  char *v28; // rdx
  char *v29; // r14
  char *v30; // rbx
  __int64 v31; // rdi
  const void *v32; // r15
  size_t v33; // r13
  _QWORD *v34; // rax
  char *s1; // [rsp+10h] [rbp-298h]
  unsigned __int64 v38; // [rsp+20h] [rbp-288h]
  _BYTE *v39; // [rsp+20h] [rbp-288h]
  _BYTE *v40; // [rsp+28h] [rbp-280h]
  __int128 v41; // [rsp+30h] [rbp-278h] BYREF
  void *ptr; // [rsp+40h] [rbp-268h] BYREF
  __int64 v43; // [rsp+48h] [rbp-260h]
  _BYTE v44[256]; // [rsp+50h] [rbp-258h] BYREF
  void *s2; // [rsp+150h] [rbp-158h] BYREF
  __m128i v46; // [rsp+158h] [rbp-150h]
  _BYTE v47[320]; // [rsp+168h] [rbp-140h] BYREF

  v3 = a3;
  if ( !a3 )
    v3 = 1;
  v4 = *(_OWORD *)a1;
  ptr = v44;
  v41 = v4;
  v43 = 0x1000000000LL;
  s1 = sub_2289830(v4, v3);
  v6 = v5;
  v7 = *((_QWORD *)&v4 + 1);
  if ( v5 )
  {
    if ( *((_QWORD *)&v41 + 1) < v5 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
      v41 = (unsigned __int64)(*((_QWORD *)&v41 + 1) + v41);
      v8 = 92;
      v22 = v47;
      if ( v3 != 3 )
        v8 = 47;
      s2 = v47;
      v10 = 0;
      v46 = si128;
      if ( v5 <= 0x100 )
        goto LABEL_53;
LABEL_52:
      sub_2236E10((__int64)&s2, v47, v6, 1);
      v22 = (char *)s2 + v46.m128i_i64[0];
      goto LABEL_53;
    }
    v7 = *((_QWORD *)&v41 + 1) - v5;
    *(_QWORD *)&v41 = v5 + v41;
    *((_QWORD *)&v41 + 1) -= v5;
  }
  v8 = 92;
  v9 = "/";
  if ( v3 != 1 )
    v9 = "\\/";
  if ( v3 != 3 )
    v8 = 47;
  v10 = 0;
  if ( v7 )
  {
    while ( 1 )
    {
      v11 = strlen(v9);
      v12 = sub_2246EC0((__int64 *)&v41, (unsigned __int8 *)v9, v11, 0);
      if ( v12 == -1 )
        break;
      v13 = v12;
      v14 = (_BYTE *)v41;
      if ( v12 >= *((_QWORD *)&v41 + 1) )
        v13 = *((_QWORD *)&v41 + 1);
      if ( v12 > *((_QWORD *)&v41 + 1) )
      {
        v41 = (unsigned __int64)(v41 + *((_QWORD *)&v41 + 1));
LABEL_16:
        if ( !v13 )
        {
          v10 = 1;
          goto LABEL_36;
        }
        v15 = 0;
        goto LABEL_18;
      }
      *((_QWORD *)&v16 + 1) = *((_QWORD *)&v41 + 1) - v12;
      *(_QWORD *)&v16 = v41 + v12;
      if ( *((_QWORD *)&v16 + 1) == -1 )
      {
        *(_QWORD *)&v41 = v16;
        v15 = -2;
        *((_QWORD *)&v41 + 1) = -1;
        v17 = *(_BYTE *)v16 == (unsigned __int8)v8;
        *((_QWORD *)&v41 + 1) = -2;
        BYTE8(v16) = !v17;
        *(_QWORD *)&v41 = v16 + 1;
        v10 |= DWORD2(v16);
        if ( v13 )
          goto LABEL_18;
        v10 = 1;
      }
      else
      {
LABEL_27:
        v41 = v16;
        if ( !*((_QWORD *)&v16 + 1) )
          goto LABEL_16;
        v15 = --*((_QWORD *)&v16 + 1);
        BYTE8(v16) = *((_QWORD *)&v16 + 1) == 0;
        v18 = DWORD2(v16) | v10;
        v17 = *(_BYTE *)v16 == (unsigned __int8)v8;
        *((_QWORD *)&v41 + 1) = v15;
        BYTE8(v16) = !v17;
        *(_QWORD *)&v41 = v16 + 1;
        v10 = DWORD2(v16) | v18;
        if ( !v13 )
          goto LABEL_20;
LABEL_18:
        if ( v13 == 1 )
        {
          if ( *v14 != 46 )
          {
            v19 = (unsigned int)v43;
            v20 = (unsigned int)v43 + 1LL;
            if ( v20 <= HIDWORD(v43) )
              goto LABEL_34;
            goto LABEL_58;
          }
LABEL_20:
          v10 = 1;
          goto LABEL_21;
        }
        v19 = (unsigned int)v43;
        if ( !a2 || v13 != 2 || *(_WORD *)v14 != 11822 )
        {
          v20 = (unsigned int)v43 + 1LL;
          if ( v20 <= HIDWORD(v43) )
          {
LABEL_34:
            v21 = (char *)ptr + 16 * v19;
            *v21 = v14;
            v21[1] = v13;
            v15 = *((_QWORD *)&v41 + 1);
            LODWORD(v43) = v43 + 1;
            goto LABEL_21;
          }
LABEL_58:
          v40 = v14;
          v38 = v13;
          sub_2237220((__int64)&ptr, v44, v20, 16);
          v19 = (unsigned int)v43;
          v14 = v40;
          v13 = v38;
          goto LABEL_34;
        }
        if ( !(_DWORD)v43
          || (v28 = (char *)ptr + 16 * (unsigned int)v43 - 16, *((_QWORD *)v28 + 1) == 2) && **(_WORD **)v28 == 11822 )
        {
          if ( !v6 )
          {
            if ( (unsigned __int64)(unsigned int)v43 + 1 > HIDWORD(v43) )
            {
              v39 = v14;
              sub_2237220((__int64)&ptr, v44, (unsigned int)v43 + 1LL, 16);
              v19 = (unsigned int)v43;
              v14 = v39;
            }
            v34 = (char *)ptr + 16 * v19;
            v10 = a2;
            *v34 = v14;
            v34[1] = 2;
            v15 = *((_QWORD *)&v41 + 1);
            LODWORD(v43) = v43 + 1;
            goto LABEL_21;
          }
        }
        else
        {
          LODWORD(v43) = v43 - 1;
        }
        v10 = a2;
LABEL_21:
        if ( !v15 )
          goto LABEL_36;
      }
    }
    v13 = *((_QWORD *)&v41 + 1);
    v14 = (_BYTE *)v41;
    v16 = (unsigned __int64)(v41 + *((_QWORD *)&v41 + 1));
    goto LABEL_27;
  }
LABEL_36:
  v22 = v47;
  s2 = v47;
  v46 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  if ( v6 > 0x100 )
    goto LABEL_52;
  if ( !v6 )
  {
    v46.m128i_i64[0] = 0;
    if ( v3 == 1 )
      goto LABEL_39;
    goto LABEL_73;
  }
LABEL_53:
  memcpy(v22, s1, v6);
  v27 = v6 + v46.m128i_i64[0];
  v46.m128i_i64[0] += v6;
  if ( v3 == 1 )
  {
    if ( v6 == v27 )
      goto LABEL_39;
LABEL_55:
    if ( !(_DWORD)v43 )
      goto LABEL_43;
    goto LABEL_64;
  }
LABEL_73:
  sub_228EF50((char **)&s2, v3);
  if ( v6 != v46.m128i_i64[0] )
    goto LABEL_55;
LABEL_39:
  v23 = s2;
  if ( v6 )
  {
    v24 = memcmp(s1, s2, v6);
    LOBYTE(v24) = v24 != 0;
    v10 |= v24;
  }
  if ( (_BYTE)v10 )
  {
    if ( !(_DWORD)v43 )
    {
LABEL_43:
      v10 = 1;
      sub_228E730(a1, &s2);
      v23 = s2;
      goto LABEL_44;
    }
LABEL_64:
    sub_A1FE50(&s2, *(_BYTE **)ptr, (_BYTE *)(*(_QWORD *)ptr + *((_QWORD *)ptr + 1)));
    v29 = (char *)ptr + 16;
    v30 = (char *)ptr + 16 * (unsigned int)v43;
    if ( v30 != (char *)ptr + 16 )
    {
      v31 = v46.m128i_i64[0];
      do
      {
        while ( 1 )
        {
          v32 = *(const void **)v29;
          v33 = *((_QWORD *)v29 + 1);
          if ( (unsigned __int64)(v31 + 1) > v46.m128i_i64[1] )
          {
            sub_2236E10((__int64)&s2, v47, v31 + 1, 1);
            v31 = v46.m128i_i64[0];
          }
          *((_BYTE *)s2 + v31) = v8;
          v31 = v46.m128i_i64[0] + 1;
          v46.m128i_i64[0] = v31;
          if ( v33 + v31 > v46.m128i_i64[1] )
          {
            sub_2236E10((__int64)&s2, v47, v33 + v31, 1);
            v31 = v46.m128i_i64[0];
          }
          if ( !v33 )
            break;
          v29 += 16;
          memcpy((char *)s2 + v31, v32, v33);
          v31 = v33 + v46.m128i_i64[0];
          v46.m128i_i64[0] += v33;
          if ( v30 == v29 )
            goto LABEL_43;
        }
        v29 += 16;
        v46.m128i_i64[0] = v31;
      }
      while ( v30 != v29 );
    }
    goto LABEL_43;
  }
LABEL_44:
  if ( v23 != v47 )
    free(v23);
  if ( ptr != v44 )
    free(ptr);
  return v10;
}
