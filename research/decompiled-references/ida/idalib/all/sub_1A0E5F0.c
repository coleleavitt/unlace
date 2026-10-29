__int64 __fastcall sub_1A0E5F0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        unsigned __int64 a8,
        __int64 a9,
        __int64 a10,
        unsigned __int64 a11,
        _DWORD *a12,
        char a13)
{
  unsigned __int64 v16; // r14
  unsigned int v17; // r13d
  char v18; // r14
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rsi
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  char v26; // r10
  int v27; // r13d
  int v28; // r11d
  __int64 v29; // rcx
  char v30; // al
  unsigned __int64 v31; // rcx
  __int64 result; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // r10
  char v35; // al
  __int64 v36; // r15
  bool v37; // cf
  bool v38; // zf
  __int32 v39; // eax
  char v40; // al
  char v41; // al
  __int64 v42; // r12
  char *v43; // rcx
  unsigned int v44; // r12d
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // r15
  int v47; // r14d
  __int64 v48; // rcx
  __int64 v49; // rdx
  unsigned __int64 v50; // rax
  char v51; // al
  char v52; // al
  char v53; // al
  int v54; // edx
  int v55; // ebp
  unsigned __int64 v56; // rax
  unsigned __int16 v58; // [rsp+Ch] [rbp-17Ch]
  int v59; // [rsp+Ch] [rbp-17Ch]
  __int64 v61; // [rsp+10h] [rbp-178h]
  bool v62; // [rsp+18h] [rbp-170h]
  unsigned __int64 v63; // [rsp+20h] [rbp-168h]
  int v64; // [rsp+20h] [rbp-168h]
  int v65; // [rsp+20h] [rbp-168h]
  unsigned __int64 v66; // [rsp+28h] [rbp-160h]
  unsigned __int64 v67; // [rsp+28h] [rbp-160h]
  unsigned __int64 v68; // [rsp+28h] [rbp-160h]
  char v69; // [rsp+38h] [rbp-150h]
  int v70; // [rsp+38h] [rbp-150h]
  int v71; // [rsp+38h] [rbp-150h]
  char v72; // [rsp+38h] [rbp-150h]
  char v73; // [rsp+3Fh] [rbp-149h]
  int v74; // [rsp+4Ch] [rbp-13Ch] BYREF
  __m128i v75; // [rsp+50h] [rbp-138h] BYREF
  __int64 v76; // [rsp+90h] [rbp-F8h]
  __m128i v77; // [rsp+B0h] [rbp-D8h] BYREF
  __int64 v78; // [rsp+C0h] [rbp-C8h] BYREF

  v16 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF0LL;
  v63 = a8;
  v66 = a11;
  v17 = sub_EEB7E0(a4, a2, *(double *)a7.m128_u64);
  v18 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v16 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  v62 = v18 != 43;
  v21 = v17;
  v58 = sub_C0EB40(a4, a1[31], nullptr, v19, v20);
  v22 = sub_1BE5E80(a1, v17, a5, a9, &v74);
  v26 = 1;
  v27 = v22;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a6 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25 > 1 )
  {
    if ( v18 != 43 )
    {
      v28 = 0;
      goto LABEL_24;
    }
    v26 = 0;
  }
  if ( !v58 && ((*(_BYTE *)(a4 + 1) >> 3) & 7) != 1 )
  {
    v69 = v26;
    v40 = sub_BFF660((_WORD *)a4, v21, v23, v24, v25);
    v26 = v69;
    if ( !v40 )
    {
      v23 = *(unsigned __int8 *)(a4 + 1);
      if ( ((*(_BYTE *)(a4 + 1) >> 3) & 7) != 5 && (v27 == 2 || *(_BYTE *)(a3 + 1) > 3u && v27 == 1) )
      {
        v41 = v74;
        v42 = (__int64)(a12 + 2);
        if ( (v74 & 0x18) != 0 )
        {
          if ( (v74 & 1) != 0 )
          {
            v55 = ((unsigned __int8)v23 >> 1) & 3;
            v56 = sub_A70F20(a1[31], a10, a8);
            sub_1A0B930((__int64)a12, v56, v55);
            v41 = v74;
          }
          if ( (v41 & 8) != 0 )
            v77.m128i_i32[0] = 3;
          else
            v77.m128i_i32[0] = 24;
          v77.m128i_i64[1] = a5;
          sub_1A0C040(v42, &v77);
        }
        else if ( (v74 & 1) != 0 )
        {
          sub_1A0B930((__int64)a12, a5, ((unsigned __int8)v23 >> 1) & 3);
        }
        else if ( (v74 & 4) != 0 )
        {
          v77.m128i_i32[0] = 12;
          v77.m128i_i64[1] = a5;
          sub_1A0C040((__int64)(a12 + 2), &v77);
        }
        v77.m128i_i32[0] = 4;
        v77.m128i_i64[1] = a5;
        return (__int64)sub_1A0C040(v42, &v77);
      }
    }
  }
  v28 = 0;
  if ( v27
    || (v28 = 0,
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a10 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 48) )
  {
LABEL_5:
    if ( v18 != 43 )
      goto LABEL_41;
    goto LABEL_6;
  }
  if ( v18 != 43 )
  {
    v28 = 0;
    if ( !v58 )
      goto LABEL_19;
    if ( (*(_BYTE *)(a1[29] + 1LL) & 8) == 0 )
    {
      v28 = 1;
LABEL_19:
      if ( v26 )
      {
LABEL_20:
        result = sub_1A0C170((__int64)a1, a2, a3, a4, 1, v18 == 43, a7, (__int64)a12);
        if ( (_DWORD)result )
        {
          *a12 = 0;
          a12[46] = 13;
          a12[47] = result;
        }
        return result;
      }
      goto LABEL_27;
    }
    goto LABEL_118;
  }
  v28 = 1;
  if ( (*(_BYTE *)(a1[29] + 1LL) & 8) != 0 )
  {
LABEL_118:
    v72 = v26;
    v21 = a2;
    result = sub_1A0C170((__int64)a1, a2, a3, a4, v18 != 43, v18 == 43, a7, (__int64)a12);
    v28 = result;
    if ( !(_DWORD)result )
      return result;
    v26 = v72;
    if ( (_DWORD)result != 1 )
    {
      *a12 = 0;
      a12[46] = 13;
      a12[47] = result;
    }
    goto LABEL_5;
  }
LABEL_6:
  v23 = a1[31];
  if ( (a8 & 1) == 0 || (a8 & 4) != 0 )
  {
LABEL_7:
    v29 = *(_QWORD *)&byte_8[a10 & 0xFFFFFFFFFFFFFFF0LL];
    v30 = v29 | a10;
    v31 = v29 & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(v23 + 19080) == (v31 | v30 & 7) )
    {
      *a12 = 0;
      a12[46] = 12;
      return (__int64)a12;
    }
    else if ( v28 && ((v25 = (unsigned int)a12[50], (_DWORD)v25) || (a12[764] & 0x3FFFFFFF) != 0) )
    {
      *a12 = 0;
      a12[46] = 13;
      a12[47] = v28;
      return (__int64)a12;
    }
    else if ( v58 )
    {
      if ( (unsigned int)a11 >> 9 == (unsigned int)a8 >> 9
        || (v53 = sub_F56A30((unsigned int)a8 >> 9, (unsigned int)a11 >> 9, v23), v54 = 20, v53) )
      {
        v54 = 14;
      }
      *a12 = 0;
      a12[46] = v54;
      return (__int64)a12;
    }
    else
    {
      result = 20;
      if ( v27 != 1 )
      {
        if ( v27 )
        {
          if ( v27 == 2 )
          {
            result = 15;
            v33 = (*(_BYTE *)(a4 + 1) >> 3) & 7;
            if ( (_BYTE)v33 != 1 )
              result = (unsigned int)(sub_BFF660((_WORD *)a4, v21, v33, v31, v25) == 0) + 16;
          }
        }
        else
        {
          result = 18;
        }
      }
      *a12 = 0;
      a12[46] = result;
    }
    return result;
  }
  v21 = (unsigned int)a11 >> 9;
  if ( (_DWORD)v21 != (unsigned int)a8 >> 9 )
  {
    v73 = v26;
    v71 = v28;
    v52 = sub_F56A30((unsigned int)a8 >> 9, v21, v23);
    v28 = v71;
    v26 = v73;
    if ( !v52 )
    {
      v23 = a1[31];
      goto LABEL_7;
    }
  }
LABEL_41:
  if ( v26 )
    goto LABEL_27;
LABEL_24:
  if ( v27 != 2 && (*(_BYTE *)(a3 + 1) <= 3u || v27 != 1) )
    goto LABEL_27;
  if ( v58 != 1 )
  {
    v34 = a10 & 0xFFFFFFFFFFFFFFF0LL;
    v35 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a10 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                   + 16LL);
    if ( v58 <= 1u )
    {
LABEL_28:
      if ( v35 == 48 )
      {
        if ( v27 )
        {
          result = (__int64)a12;
          *a12 = 0;
          if ( v58 == 0 && v62 && v27 == 2 )
            a12[46] = 19;
          else
            a12[46] = 20;
          return result;
        }
        goto LABEL_20;
      }
LABEL_29:
      v36 = a5;
      if ( (a8 & 0xFFFFFE00) != 0 )
      {
        v68 = v34;
        v65 = v28;
        v50 = sub_A70F20(a1[31], a6, a8 & 0xFFFFFFFF000001FFLL);
        v34 = v68;
        v28 = v65;
        v36 = v50;
      }
      v67 = v34;
      v64 = v28;
      v37 = *(_BYTE *)(a3 + 1) < 3u;
      v38 = *(_BYTE *)(a3 + 1) == 3;
      v76 = v36;
      sub_1BFA460((unsigned int)&v77, (_DWORD)a1, a4, v36, 0, 0, 0, !v37 && !v38, 0);
      v39 = v77.m128i_i32[0];
      if ( (v77.m128i_i32[0] & 0x7FFFFFFF) == 5 )
      {
        if ( v64 && (a12[50] || (a12[764] & 0x3FFFFFFF) != 0) )
        {
          *a12 = 0;
          a12[46] = 13;
          a12[47] = v64;
        }
        else
        {
          v38 = (*(_QWORD *)(v67 + 8) & 0xFFFFFFFFFFFFFFF8LL
               | ((unsigned __int8)*(_QWORD *)(v67 + 8) | (unsigned __int8)a10) & 7) == *(_QWORD *)(a1[31] + 19080LL);
          *a12 = 0;
          if ( v38 )
            a12[46] = 12;
          else
            a12[46] = 22;
        }
      }
      else
      {
        sub_1A0BA10((__int64)a12, &v77, v76, a13);
        if ( v27 == 1
          && ((((unsigned __int8)a11 | (unsigned __int8)a8) & 7) != (a8 & 7)
           || (unsigned int)a11 >> 9 != (unsigned int)a8 >> 9
           && !sub_F56A30((unsigned int)a8 >> 9, (unsigned int)a11 >> 9, a1[31])) )
        {
          *a12 = 0;
          a12[46] = 20;
          v39 = v77.m128i_i32[0];
          goto LABEL_60;
        }
        if ( v58 != 0 || !v62 || v27 <= 0 )
        {
          v75.m128i_i64[1] = v36;
          v75.m128i_i32[0] = 5;
          sub_1A0C040((__int64)(a12 + 2), &v75);
          if ( (a8 & 0xFFFFFE00) != 0 )
          {
            if ( (unsigned int)a8 >> 9 && !sub_F56A30((unsigned int)a8 >> 9, 0, a1[31]) )
            {
              *a12 = 0;
              a12[46] = 21;
              v39 = v77.m128i_i32[0];
              goto LABEL_60;
            }
            sub_1A0B930((__int64)a12, a5, (v18 != 43) + 1);
          }
          v39 = v77.m128i_i32[0];
          goto LABEL_60;
        }
        *a12 = 0;
        a12[46] = 19;
        v39 = v77.m128i_i32[0];
      }
LABEL_60:
      result = v39 & 0x7FFFFFFF;
      if ( (_DWORD)result == 3 )
        return sub_1BD22E0(&v78);
      return result;
    }
    v43 = (char *)a1[29];
    if ( (v43[1] & 0x40) != 0 )
    {
      v61 = (__int64)(a12 + 2);
      if ( v35 != 48 )
        goto LABEL_127;
    }
    else
    {
      if ( v35 != 48 )
      {
        if ( (unsigned __int8)(v35 - 2) > 4u )
          goto LABEL_29;
        v59 = 0;
        v61 = (__int64)(a12 + 2);
        goto LABEL_68;
      }
      v61 = (__int64)(a12 + 2);
    }
    if ( (v43[1] & 0x10) != 0 )
    {
      sub_1A0DFC0(a1, (_DWORD *)a2, a4, *(double *)a7.m128_u64);
      v59 = 0;
      goto LABEL_68;
    }
    if ( *v43 >= 0 )
    {
      v77.m128i_i32[0] = 6;
      v77.m128i_i64[1] = a9;
      sub_1A0C040(v61, &v77);
      v59 = 0;
      goto LABEL_68;
    }
LABEL_127:
    v59 = 0;
    goto LABEL_68;
  }
  if ( ((*(_BYTE *)(a4 + 1) >> 3) & 7) == 1
    || (v70 = v28, v51 = sub_BFF660((_WORD *)a4, v21, v23, v24, v25), v28 = v70, v51)
    || ((*(_BYTE *)(a4 + 1) >> 3) & 7) == 5 )
  {
LABEL_27:
    v34 = a10 & 0xFFFFFFFFFFFFFFF0LL;
    v35 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a10 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                   + 16LL);
    goto LABEL_28;
  }
  v59 = 2;
  v61 = (__int64)(a12 + 2);
LABEL_68:
  v44 = (unsigned int)a8 >> 9;
  if ( (unsigned int)a11 >> 9 != (unsigned int)a8 >> 9 )
  {
    v63 = a8 & 0xFFFFFFFF000001FFLL;
    v66 = a11 & 0xFFFFFFFF000001FFLL;
  }
  v45 = sub_A70F20(a1[31], a9, v63);
  v46 = v45;
  if ( v63 != v66 )
    sub_1A0B930((__int64)a12, v45, v59);
  v77.m128i_i64[1] = v46;
  v77.m128i_i32[0] = (v59 == 0) + 4;
  result = (__int64)sub_1A0C040(v61, &v77);
  v47 = (v18 != 43) + 1;
  if ( (unsigned int)a11 >> 9 != v44 )
  {
    v48 = 0;
    v49 = *(_QWORD *)&byte_8[v46 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v49 & 8) != 0 )
      v48 = *(__int64 *)((char *)&qword_18 + (v49 & 0xFFFFFFFFFFFFFFF0LL));
    v46 = sub_A70F20(
            a1[31],
            a10,
            (v44 << 9) | v48 & 0xFFFFFFFF000001FFLL | ((unsigned __int8)v46 | (unsigned __int8)v49) & 7);
    result = (__int64)sub_1A0B930((__int64)a12, v46, v47);
  }
  if ( (v74 & 8) != 0 )
    return (__int64)sub_1A0B840((__int64)a12, a5, v47);
  if ( (v74 & 0x10) != 0 )
  {
    v77.m128i_i32[0] = 24;
    v77.m128i_i64[1] = a5;
    return (__int64)sub_1A0C040(v61, &v77);
  }
  else if ( (v74 & 1) != 0 )
  {
    result = *(_QWORD *)&byte_8[a5 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
           | ((unsigned __int8)*(_QWORD *)&byte_8[a5 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)a5) & 7;
    if ( (*(_QWORD *)&byte_8[v46 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)&byte_8[v46 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v46) & 7) != result )
      return (__int64)sub_1A0B930((__int64)a12, a5, v47);
  }
  return result;
}
