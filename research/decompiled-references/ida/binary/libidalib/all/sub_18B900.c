__int64 __fastcall sub_18B900(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6, __int64 a7)
{
  __int64 v7; // r10
  char v11; // r12
  size_t v12; // rbx
  __int64 v13; // r9
  void *v15; // rax
  const void *v16; // rsi
  unsigned int v17; // eax
  char *v18; // rbp
  unsigned int v19; // ebx
  __int64 v21; // rbx
  size_t v22; // rbp
  _BYTE *v23; // rsi
  char *v24; // rdi
  __int64 v25; // rax
  const char *v26; // rdi
  char v27; // al
  __int64 v28; // rbx
  const char *v29; // rax
  unsigned __int64 v30; // rax
  char *v31; // rsi
  size_t v32; // r12
  char *v33; // rdx
  _BYTE *v34; // rax
  size_t v35; // r14
  char *v36; // rsi
  void *v37; // rdi
  unsigned __int64 v38; // rsi
  __int64 v39; // rax
  _BYTE *v40; // rdi
  size_t v41; // rbp
  char *v42; // rdx
  _BYTE *v43; // rax
  size_t v44; // r12
  _BYTE *v45; // rsi
  char *v46; // rax
  __int64 v47; // rbp
  const unsigned __int16 **v48; // rax
  const char *v49; // rdi
  int v50; // edx
  const char *v51; // rbp
  __int64 (__fastcall *v52)(__int64, __int64 *, const char *, __int64, __int64, __int64); // rax
  const char *v53; // rdi
  char v54; // al
  int v55; // ebx
  const char *v56; // rax
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rbx
  size_t v60; // r12
  _BYTE *v61; // rsi
  __int64 v62; // rax
  __int64 v63; // [rsp+0h] [rbp-78h]
  __int64 v64; // [rsp+0h] [rbp-78h]
  __int64 v65; // [rsp+0h] [rbp-78h]
  __int64 v66; // [rsp+0h] [rbp-78h]
  __int64 v67; // [rsp+0h] [rbp-78h]
  __int64 v68; // [rsp+0h] [rbp-78h]
  __int64 v69; // [rsp+0h] [rbp-78h]
  __int64 v70; // [rsp+0h] [rbp-78h]
  __int64 v71; // [rsp+0h] [rbp-78h]
  __int64 v72; // [rsp+0h] [rbp-78h]
  __int64 v73; // [rsp+0h] [rbp-78h]
  __int64 v74; // [rsp+0h] [rbp-78h]
  __int64 v75; // [rsp+0h] [rbp-78h]
  __int64 v76; // [rsp+8h] [rbp-70h]
  __int64 v77; // [rsp+8h] [rbp-70h]
  __int64 v78; // [rsp+8h] [rbp-70h]
  char *endptr; // [rsp+18h] [rbp-60h] BYREF
  void *dest; // [rsp+20h] [rbp-58h] BYREF
  __int128 v81; // [rsp+28h] [rbp-50h]
  unsigned __int64 v82; // [rsp+38h] [rbp-40h]

  v7 = a1;
  v11 = a5;
  v12 = *(_QWORD *)(a4 + 8);
  v82 = __readfsqword(0x28u);
  v13 = a7;
  v81 = 0;
  dest = nullptr;
  if ( !v12 )
  {
    switch ( (char)a5 )
    {
      case '$':
        v51 = s1;
        goto LABEL_79;
      case 'A':
      case 'F':
      case 'T':
      case 'X':
      case 'f':
        goto LABEL_14;
      case 'D':
      case 'H':
      case 'N':
      case 'O':
      case 'Y':
      case 'n':
      case 'o':
      case 's':
      case 'u':
        goto LABEL_4;
      case 'L':
      case 'l':
        if ( (_BYTE)a5 == 108 )
        {
          v29 = s1;
          v28 = 1;
          goto LABEL_21;
        }
        v26 = s1;
        break;
      case 'M':
        v46 = &byte_252100;
        goto LABEL_67;
      case 'm':
        v53 = s1;
        goto LABEL_87;
      case 'p':
      case 'q':
      case 'y':
        v18 = nullptr;
        goto LABEL_93;
      default:
        goto LABEL_94;
    }
LABEL_100:
    v30 = strtoull(v26, &endptr, 10);
    v31 = endptr;
    if ( *endptr )
    {
LABEL_75:
      if ( !(_BYTE)a6 )
        sub_92200((__int64)"extra characters on line: %s", v31);
      goto LABEL_65;
    }
    goto LABEL_98;
  }
  v15 = (void *)qalloc_or_throw();
  v16 = *(const void **)a4;
  *((_QWORD *)&v81 + 1) = v12;
  dest = v15;
  memcpy(v15, v16, v12);
  *(_QWORD *)&v81 = v12;
  v7 = a1;
  v13 = a7;
  switch ( v11 )
  {
    case '$':
      v51 = (const char *)dest;
LABEL_79:
      v52 = *(__int64 (__fastcall **)(__int64, __int64 *, const char *, __int64, __int64, __int64))(*(_QWORD *)v7 + 232LL);
      if ( (char *)v52 == (char *)sub_184710 )
      {
        if ( (unsigned int)qsscanf() == 1 )
        {
          v30 = (unsigned __int64)endptr;
          goto LABEL_98;
        }
      }
      else
      {
        v19 = v52(v7, a2, v51, a4, a5, v13);
        if ( (_BYTE)v19 )
        {
          v18 = (char *)dest;
          goto LABEL_6;
        }
      }
      if ( (_BYTE)a6 )
        goto LABEL_65;
      sub_F9540(99, v51);
      v18 = (char *)dest;
      v19 = a6;
      goto LABEL_6;
    case 'A':
    case 'F':
    case 'X':
    case 'f':
      goto LABEL_14;
    case 'D':
    case 'H':
    case 'N':
    case 'O':
    case 'Y':
    case 'n':
    case 'o':
    case 's':
    case 'u':
LABEL_4:
      v17 = sub_18B6E0(v7, a2, (__int64)&dest, a6, 0, v13);
      goto LABEL_5;
    case 'L':
    case 'l':
      v26 = (const char *)dest;
      v27 = *(_BYTE *)dest;
      if ( v11 != 108 )
      {
        v28 = 1;
        if ( v27 == 48 )
          goto LABEL_71;
        goto LABEL_100;
      }
      if ( v27 == 45 )
      {
        v29 = (char *)dest + 1;
        v28 = -1;
        if ( *((_BYTE *)dest + 1) == 48 )
        {
          v26 = (char *)dest + 1;
          v28 = -1;
          goto LABEL_71;
        }
      }
      else
      {
        v28 = 1;
        if ( v27 == 48 )
          goto LABEL_71;
        v29 = (const char *)dest;
      }
LABEL_21:
      v30 = strtoull(v29, &endptr, 10);
      v31 = endptr;
      if ( *endptr )
        goto LABEL_75;
      goto LABEL_22;
    case 'M':
      v46 = (char *)dest;
LABEL_67:
      v47 = *v46;
      if ( (unsigned int)v47 > 0x7F )
        goto LABEL_77;
      v76 = v13;
      v65 = v7;
      v48 = __ctype_b_loc();
      v7 = v65;
      v13 = v76;
      if ( ((*v48)[v47] & 0x1000) == 0 )
        goto LABEL_77;
      if ( v12 )
      {
        v26 = (const char *)dest;
        v28 = 1;
        if ( *(_BYTE *)dest == 48 )
        {
LABEL_71:
          if ( (v26[1] & 0xDF) == 0x58 )
          {
            v49 = v26 + 2;
            v50 = 16;
          }
          else
          {
            v49 = v26 + 1;
            v50 = 8;
          }
          v77 = v13;
          v66 = v7;
          v30 = strtoull(v49, &endptr, v50);
          v31 = endptr;
          if ( *endptr )
          {
            v7 = v66;
            v13 = v77;
            if ( v11 != 77 )
              goto LABEL_75;
LABEL_77:
            v17 = sub_18B6E0(v7, a2, (__int64)&dest, a6, 1, v13);
LABEL_5:
            v18 = (char *)dest;
            v19 = v17;
            goto LABEL_6;
          }
          if ( v11 != 77 && v11 != 76 )
          {
LABEL_22:
            *a2 = v30 * v28;
            goto LABEL_16;
          }
LABEL_98:
          *a2 = v30;
LABEL_16:
          v18 = (char *)dest;
          v19 = 1;
          goto LABEL_6;
        }
      }
      else
      {
LABEL_96:
        v26 = s1;
      }
      v78 = v13;
      v68 = v7;
      v30 = strtoull(v26, &endptr, 16);
      v7 = v68;
      v13 = v78;
      if ( !*endptr )
        goto LABEL_98;
      goto LABEL_77;
    case 'T':
      if ( v12 == 1 )
        goto LABEL_14;
      v40 = dest;
      v41 = v12 - 1;
      v42 = (char *)dest + v12 - 1;
      v43 = v42;
      if ( dest >= v42 )
        goto LABEL_53;
      while ( *(v43 - 1) == 32 )
      {
        if ( dest == --v43 )
          goto LABEL_124;
      }
      v41 = v43 - (_BYTE *)dest;
      if ( v43 == dest )
      {
LABEL_124:
        if ( !dest )
          goto LABEL_59;
        v81 = 0u;
        qfree();
        dest = nullptr;
        v13 = a7;
      }
      else
      {
LABEL_53:
        v44 = v41 + 1;
        if ( v12 < v41 + 1 )
        {
          if ( *((_QWORD *)&v81 + 1) < v44 )
          {
            dest = (void *)qvector_reserve();
            v12 = v81;
            v40 = dest;
            v13 = a7;
          }
          v72 = v13;
          memset(&v40[v12], 0, v44 - v12);
          *(_QWORD *)&v81 = v41 + 1;
          v13 = v72;
          v43 = (char *)dest + v41;
        }
        else if ( v12 != v41 + 1 )
        {
          *(_QWORD *)&v81 = v41 + 1;
        }
        *v43 = 0;
      }
      if ( (unsigned __int64)v81 <= 1 )
        goto LABEL_14;
      v40 = dest;
      v42 = (char *)dest + v81 - 1;
      if ( dest >= v42 )
      {
LABEL_63:
        if ( a3 )
          goto LABEL_15;
        goto LABEL_64;
      }
LABEL_59:
      v45 = v40;
      while ( *v45 == 32 )
      {
        if ( ++v45 == v42 )
        {
          if ( v40 >= v45 )
            goto LABEL_63;
          *v40 = *v45;
          v24 = (char *)dest;
          goto LABEL_122;
        }
      }
      if ( v40 >= v45 )
        goto LABEL_63;
      v63 = v13;
      v21 = v42 - v45;
      v22 = v42 - v45 + 1;
      memmove(v40, v45, v22);
      v23 = dest;
      v13 = v63;
      v24 = (char *)dest;
      if ( v21 )
      {
        v25 = v81;
        if ( (unsigned __int64)v81 < v22 )
        {
          if ( *((_QWORD *)&v81 + 1) < v22 )
          {
            dest = (void *)qvector_reserve();
            v24 = (char *)dest;
            v13 = v63;
            v25 = v81;
          }
          v73 = v13;
          memset(&v24[v25], 0, v22 - v25);
          *(_QWORD *)&v81 = v22;
          v23 = dest;
          v13 = v73;
        }
        else if ( v22 != (_QWORD)v81 )
        {
          *(_QWORD *)&v81 = v22;
        }
        v23[v21] = 0;
        goto LABEL_14;
      }
LABEL_122:
      if ( v24 )
      {
        v69 = v13;
        v81 = 0u;
        qfree();
        dest = nullptr;
        v13 = v69;
      }
LABEL_14:
      if ( a3 )
      {
LABEL_15:
        qstrncpy();
        goto LABEL_16;
      }
LABEL_64:
      sub_92200(
        (__int64)"Bad WIDTH subfield for the field with id %d. For type %c it should be non-zero",
        *(_DWORD *)(v13 + 56),
        (unsigned int)*(char *)(v13 + 52));
LABEL_65:
      v18 = (char *)dest;
      v19 = 0;
LABEL_6:
      if ( v18 )
      {
        *(_QWORD *)&v81 = 0;
        qfree();
      }
      return v19;
    case 'm':
      v53 = (const char *)dest;
      v54 = *(_BYTE *)dest;
      if ( *(_DWORD *)(a7 + 48) != 1 )
        goto LABEL_84;
      if ( v54 == 43 )
      {
        v55 = 1;
      }
      else
      {
        if ( v54 != 45 )
        {
LABEL_84:
          if ( v54 == 48 && (*((_BYTE *)dest + 1) & 0xDF) == 0x58 )
            v53 = (char *)dest + 2;
LABEL_87:
          v30 = strtoull(v53, &endptr, 16);
          v31 = endptr;
          if ( *endptr )
            goto LABEL_75;
          goto LABEL_98;
        }
        v55 = -1;
      }
      v56 = (const char *)skip_spaces();
      v57 = strtoull(v56, &endptr, 10);
      v31 = endptr;
      if ( *endptr )
        goto LABEL_75;
      if ( v55 == -1 )
        v30 = *a2 - v57;
      else
        v30 = v57 + *a2;
      goto LABEL_98;
    case 'p':
    case 'q':
      v18 = (char *)dest;
      goto LABEL_40;
    case 'y':
      v18 = (char *)dest;
      if ( v12 == 1 )
        goto LABEL_93;
      v32 = v12 - 1;
      v33 = (char *)dest + v12 - 1;
      v34 = v33;
      if ( dest >= v33 )
        goto LABEL_29;
      while ( *(v34 - 1) == 32 )
      {
        if ( --v34 == dest )
          goto LABEL_126;
      }
      v32 = v34 - (_BYTE *)dest;
      if ( v34 == dest )
      {
LABEL_126:
        if ( !dest )
          goto LABEL_35;
        v81 = 0u;
        qfree();
        dest = nullptr;
        v13 = a7;
        v18 = nullptr;
      }
      else
      {
LABEL_29:
        v35 = v32 + 1;
        if ( v12 < v32 + 1 )
        {
          if ( *((_QWORD *)&v81 + 1) < v35 )
          {
            dest = (void *)qvector_reserve();
            v12 = v81;
            v18 = (char *)dest;
            v13 = a7;
          }
          v71 = v13;
          memset(&v18[v12], 0, v35 - v12);
          *(_QWORD *)&v81 = v32 + 1;
          v13 = v71;
          v34 = (char *)dest + v32;
        }
        else if ( v12 != v32 + 1 )
        {
          *(_QWORD *)&v81 = v32 + 1;
        }
        *v34 = 0;
        v18 = (char *)dest;
      }
      v12 = v81;
      if ( (unsigned __int64)v81 <= 1 )
        goto LABEL_93;
      v33 = &v18[v81 - 1];
      if ( v18 >= v33 )
      {
LABEL_40:
        if ( v12 != 1 )
        {
          v37 = (void *)*a2;
          if ( a2[2] < v12 )
          {
            v70 = v13;
            v58 = qvector_reserve();
            *a2 = v58;
            v13 = v70;
            v37 = (void *)v58;
          }
          a2[1] = v12;
          v64 = v13;
          memmove(v37, v18, v12 - 1);
          *(_BYTE *)(*a2 + v12 - 1) = 0;
          v38 = *(_QWORD *)(v64 + 64);
          if ( v38 )
          {
            v39 = a2[1];
            if ( v39 )
            {
              if ( v38 < v39 - 1 )
                sub_188300(a2, v38 - 1);
            }
          }
          goto LABEL_16;
        }
LABEL_93:
        a2[1] = 0;
        v19 = 1;
        goto LABEL_6;
      }
LABEL_35:
      v36 = v18;
      while ( *v36 == 32 )
      {
        if ( ++v36 == v33 )
        {
          *v18 = *v36;
          v18 = (char *)dest;
LABEL_90:
          if ( v18 )
          {
            v67 = v13;
            v81 = 0u;
            qfree();
            dest = nullptr;
            v12 = 0;
            v18 = nullptr;
            v13 = v67;
          }
          else
          {
            v12 = v81;
          }
          goto LABEL_92;
        }
      }
      if ( v18 >= v36 )
      {
        v12 = v81;
        goto LABEL_40;
      }
      v74 = v13;
      v59 = v33 - v36;
      v60 = v33 - v36 + 1;
      memmove(v18, v36, v60);
      v18 = (char *)dest;
      v13 = v74;
      v61 = dest;
      if ( !v59 )
        goto LABEL_90;
      v62 = v81;
      if ( (unsigned __int64)v81 < v60 )
      {
        if ( *((_QWORD *)&v81 + 1) < v60 )
        {
          dest = (void *)qvector_reserve();
          v18 = (char *)dest;
          v13 = v74;
          v62 = v81;
        }
        v75 = v13;
        memset(&v18[v62], 0, v60 - v62);
        *(_QWORD *)&v81 = v60;
        v61 = dest;
        v13 = v75;
      }
      else if ( v60 != (_QWORD)v81 )
      {
        *(_QWORD *)&v81 = v60;
      }
      v61[v59] = 0;
      v12 = v81;
      v18 = (char *)dest;
LABEL_92:
      if ( !v12 )
        goto LABEL_93;
      goto LABEL_40;
    default:
LABEL_94:
      if ( under_debugger )
        BUG();
      interr();
      goto LABEL_96;
  }
}

