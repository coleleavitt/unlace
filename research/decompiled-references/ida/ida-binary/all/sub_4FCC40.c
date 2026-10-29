__int64 __fastcall sub_4FCC40(
        __int64 a1,
        unsigned __int64 p_endptr,
        __int64 a3,
        unsigned __int64 *a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14,
        __int64 a15)
{
  unsigned int v17; // r12d
  __int64 *v18; // rbp
  size_t v19; // r15
  void *v20; // rbx
  unsigned int v21; // ebp
  void *v24; // rax
  unsigned int v25; // eax
  const char *v26; // rbx
  __int64 (__fastcall *v27)(__int64, __int64 *, const char *); // rax
  const char *v28; // rdi
  char v29; // al
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  char *v35; // rax
  unsigned int v36; // edi
  int v37; // eax
  const char *v38; // rdi
  __int64 v39; // rbx
  const char *v40; // rdi
  int v41; // edx
  void *v42; // rdi
  __int64 v43; // rax
  int v44; // ebx
  const char *v45; // rax
  unsigned __int64 v46; // rax
  char v47; // al
  __int64 v48; // rax
  unsigned int v49; // [rsp+Ch] [rbp-6Ch]
  int v50; // [rsp+Ch] [rbp-6Ch]
  unsigned int v51; // [rsp+Ch] [rbp-6Ch]
  char *endptr; // [rsp+18h] [rbp-60h] BYREF
  void *src; // [rsp+20h] [rbp-58h] BYREF
  __int128 v54; // [rsp+28h] [rbp-50h]
  unsigned __int64 v55; // [rsp+38h] [rbp-40h]

  v17 = a6;
  v18 = (__int64 *)p_endptr;
  v19 = a4[1];
  v55 = __readfsqword(0x28u);
  v54 = 0;
  src = nullptr;
  if ( v19 )
  {
    v49 = a5;
    v24 = (void *)qalloc_or_throw(v19);
    p_endptr = *a4;
    *((_QWORD *)&v54 + 1) = v19;
    src = v24;
    memcpy(v24, (const void *)p_endptr, v19);
    a5 = v49;
    *(_QWORD *)&v54 = v19;
    switch ( (char)v49 )
    {
      case '$':
        v26 = (const char *)src;
LABEL_18:
        v27 = *(__int64 (__fastcall **)(__int64, __int64 *, const char *))(*(_QWORD *)a1 + 440LL);
        if ( (char *)v27 == (char *)sub_4F88D0 )
        {
          p_endptr = (unsigned __int64)"%a";
          if ( (unsigned int)qsscanf(v26, "%a", &endptr) == 1 )
          {
            v30 = (unsigned __int64)endptr;
            goto LABEL_50;
          }
        }
        else
        {
          p_endptr = (unsigned __int64)v18;
          v21 = v27(a1, v18, v26);
          if ( (_BYTE)v21 )
          {
            v20 = src;
            goto LABEL_9;
          }
        }
        if ( (_BYTE)v17 )
          goto LABEL_21;
        p_endptr = (unsigned __int64)v26;
        sub_17CE30(99, v26);
        v20 = src;
        v21 = v17;
        goto LABEL_9;
      case 'A':
      case 'F':
      case 'X':
      case 'f':
        goto LABEL_4;
      case 'D':
      case 'H':
      case 'N':
      case 'O':
      case 'Y':
      case 'n':
      case 'o':
      case 's':
      case 'u':
LABEL_13:
        p_endptr = (unsigned __int64)v18;
        v25 = sub_4FCA10(
                a1,
                v18,
                (__int64)&src,
                v17,
                0,
                a15,
                0.0,
                a8,
                a9,
                a10,
                *(double *)a11.m128_u64,
                *(double *)a12.m128_u64,
                a13,
                a14);
        goto LABEL_14;
      case 'L':
      case 'l':
        v38 = (const char *)src;
        v47 = *(_BYTE *)src;
        if ( (_BYTE)v49 != 108 )
        {
          if ( v47 == 48 )
            goto LABEL_34;
LABEL_63:
          v30 = strtoull(v38, &endptr, 10);
          p_endptr = (unsigned __int64)endptr;
          if ( *endptr )
            goto LABEL_27;
          goto LABEL_50;
        }
        if ( v47 == 45 )
        {
          if ( *((_BYTE *)src + 1) == 48 )
          {
            v38 = (char *)src + 1;
            v39 = -1;
            goto LABEL_35;
          }
          v39 = -1;
          v30 = strtoull((const char *)src + 1, &endptr, 10);
          p_endptr = (unsigned __int64)endptr;
          if ( !*endptr )
            goto LABEL_69;
          goto LABEL_27;
        }
        v39 = 1;
        if ( v47 == 48 )
          goto LABEL_35;
LABEL_68:
        v39 = 1;
        v30 = strtoull(v38, &endptr, 10);
        p_endptr = (unsigned __int64)endptr;
        if ( *endptr )
          goto LABEL_27;
        goto LABEL_69;
      case 'M':
        v35 = (char *)src;
LABEL_30:
        v36 = *v35;
        v50 = a5;
        if ( v36 > 0x7F )
          goto LABEL_39;
        v37 = isxdigit(v36);
        LODWORD(a5) = v50;
        if ( !v37 )
          goto LABEL_39;
        if ( v19 )
        {
          v38 = (const char *)src;
          if ( *(_BYTE *)src == 48 )
          {
LABEL_34:
            v39 = 1;
LABEL_35:
            if ( (v38[1] & 0xDF) == 0x58 )
            {
              v40 = v38 + 2;
              v41 = 16;
            }
            else
            {
              v40 = v38 + 1;
              v41 = 8;
            }
            v51 = a5;
            v30 = strtoull(v40, &endptr, v41);
            p_endptr = (unsigned __int64)endptr;
            v33 = v51;
            if ( *endptr )
            {
              if ( (_BYTE)v51 != 77 )
                goto LABEL_27;
LABEL_39:
              p_endptr = (unsigned __int64)v18;
              v25 = sub_4FCA10(
                      a1,
                      v18,
                      (__int64)&src,
                      v17,
                      1,
                      a15,
                      0.0,
                      a8,
                      a9,
                      a10,
                      *(double *)a11.m128_u64,
                      *(double *)a12.m128_u64,
                      a13,
                      a14);
LABEL_14:
              v20 = src;
              v21 = v25;
              goto LABEL_9;
            }
            if ( (_BYTE)v51 != 77 && (_BYTE)v51 != 76 )
            {
LABEL_69:
              *v18 = v30 * v39;
              goto LABEL_8;
            }
LABEL_50:
            *v18 = v30;
LABEL_8:
            v20 = src;
            v21 = 1;
LABEL_9:
            if ( v20 )
            {
              *(_QWORD *)&v54 = 0;
              qfree(v20, (const char *)p_endptr);
            }
            return v21;
          }
        }
        else
        {
          v38 = &s1;
        }
        p_endptr = (unsigned __int64)&endptr;
        v30 = strtoull(v38, &endptr, 16);
        if ( !*endptr )
          goto LABEL_50;
        goto LABEL_39;
      case 'T':
LABEL_3:
        sub_4FBEE0((__int64 *)&src, (const char *)&qword_20);
LABEL_4:
        if ( !a3 )
          goto LABEL_53;
        p_endptr = (unsigned __int64)&s1;
        if ( (_QWORD)v54 )
          p_endptr = (unsigned __int64)src;
        qstrncpy(v18, p_endptr, a3);
        goto LABEL_8;
      case 'm':
        v28 = (const char *)src;
        v29 = *(_BYTE *)src;
        if ( *(_DWORD *)(a15 + 48) != 1 )
          goto LABEL_23;
        if ( v29 == 43 )
        {
          v44 = 1;
        }
        else
        {
          if ( v29 != 45 )
          {
LABEL_23:
            if ( v29 == 48 && (*((_BYTE *)src + 1) & 0xDF) == 0x58 )
              v28 = (char *)src + 2;
LABEL_26:
            v30 = strtoull(v28, &endptr, 16);
            p_endptr = (unsigned __int64)endptr;
            if ( !*endptr )
              goto LABEL_50;
LABEL_27:
            if ( !(_BYTE)v17 )
              sub_169630(
                (int)"extra characters on line: %s",
                p_endptr,
                v31,
                v32,
                v33,
                v34,
                (__m128)0LL,
                a8,
                a9,
                a10,
                a11,
                a12,
                a13,
                a14,
                a15);
LABEL_21:
            v20 = src;
            v21 = 0;
            goto LABEL_9;
          }
          v44 = -1;
        }
        v45 = (const char *)skip_spaces((char *)src + 1);
        v46 = strtoull(v45, &endptr, 10);
        p_endptr = (unsigned __int64)endptr;
        v31 = v46;
        if ( !*endptr )
        {
          if ( v44 == -1 )
            v30 = *v18 - v46;
          else
            v30 = v46 + *v18;
          goto LABEL_50;
        }
        goto LABEL_27;
      case 'p':
      case 'q':
        v20 = src;
        goto LABEL_41;
      case 'y':
LABEL_15:
        p_endptr = 32;
        sub_4FBEE0((__int64 *)&src, (const char *)&qword_20);
        v19 = v54;
        v20 = src;
        if ( !(_QWORD)v54 )
          goto LABEL_16;
LABEL_41:
        if ( v19 == 1 )
        {
LABEL_16:
          v18[1] = 0;
          v21 = 1;
          goto LABEL_9;
        }
        v42 = (void *)*v18;
        if ( v18[2] < v19 )
        {
          v48 = qvector_reserve(v18, *v18, v19, 1);
          *v18 = v48;
          v42 = (void *)v48;
        }
        v18[1] = v19;
        memmove(v42, v20, v19 - 1);
        *(_BYTE *)(*v18 + v19 - 1) = 0;
        p_endptr = *(_QWORD *)(a15 + 64);
        if ( p_endptr )
        {
          v43 = v18[1];
          if ( v43 )
          {
            if ( p_endptr < v43 - 1 )
              sub_3AF8C0(v18, --p_endptr);
          }
        }
        goto LABEL_8;
      default:
LABEL_51:
        if ( under_debugger )
          BUG();
        interr(40344, p_endptr, a3, a4, 0.0);
LABEL_53:
        p_endptr = *(unsigned int *)(a15 + 56);
        sub_169630(
          (int)"Bad WIDTH subfield for the field with id %d. For type %c it should be non-zero",
          p_endptr,
          (unsigned int)*(char *)(a15 + 52),
          (__int64)a4,
          a5,
          a6,
          (__m128)0LL,
          a8,
          a9,
          a10,
          a11,
          a12,
          a13,
          a14,
          a15);
        goto LABEL_21;
    }
  }
  switch ( (char)a5 )
  {
    case '$':
      v26 = &s1;
      goto LABEL_18;
    case 'A':
    case 'F':
    case 'X':
    case 'f':
      goto LABEL_4;
    case 'D':
    case 'H':
    case 'N':
    case 'O':
    case 'Y':
    case 'n':
    case 'o':
    case 's':
    case 'u':
      goto LABEL_13;
    case 'L':
    case 'l':
      v38 = &s1;
      if ( (_BYTE)a5 != 108 )
        goto LABEL_63;
      goto LABEL_68;
    case 'M':
      v35 = &byte_8CBC80;
      goto LABEL_30;
    case 'T':
      goto LABEL_3;
    case 'm':
      v28 = &s1;
      goto LABEL_26;
    case 'p':
    case 'q':
      *(_QWORD *)(p_endptr + 8) = 0;
      v21 = 1;
      break;
    case 'y':
      goto LABEL_15;
    default:
      goto LABEL_51;
  }
  return v21;
}
