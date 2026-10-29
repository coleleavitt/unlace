__int64 __fastcall sub_19E7980(__int64 a1, _WORD *a2, __int64 a3, __int64 a4, __int64 a5, __m128i a6, double a7)
{
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rbx
  int v11; // rax^4
  unsigned __int64 v12; // r15
  __int16 v13; // ax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r10
  __int64 v16; // rax
  unsigned int v17; // eax
  unsigned int v18; // r12d
  __int64 v19; // rdi
  __int64 (__fastcall *v20)(unsigned __int64, unsigned __int64, __int64, _QWORD, _QWORD); // r12
  unsigned __int64 v21; // rax
  unsigned __int64 v23; // rax
  int v24; // edx
  int v25; // eax
  __int64 v26; // rsi
  __int64 v27; // rsi
  __int64 v28; // rsi
  void *v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rsi
  void *v32; // rax
  void *v33; // rdi
  __int64 v34; // rsi
  void *v35; // rdi
  unsigned int v36; // [rsp+8h] [rbp-B0h]
  int v37; // [rsp+18h] [rbp-A0h]
  bool v38; // [rsp+1Fh] [rbp-99h]
  __int64 v39; // [rsp+40h] [rbp-78h] BYREF
  int v40; // [rsp+48h] [rbp-70h]
  __int64 v41; // [rsp+4Ch] [rbp-6Ch]
  int v42; // [rsp+54h] [rbp-64h]
  void *v43; // [rsp+58h] [rbp-60h]
  __int64 v44; // [rsp+60h] [rbp-58h]
  __m128i v45; // [rsp+68h] [rbp-50h] BYREF
  char v46; // [rsp+78h] [rbp-40h]

  if ( !a2 )
    return 0;
  v9 = *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
     | ((unsigned __int8)*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)a3) & 7;
  v10 = *(_QWORD *)&byte_8[a4 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)*(_QWORD *)&byte_8[a4 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)a4) & 7;
  v36 = sub_EEC8C0((unsigned __int64)a2, (__int64)a2, *(double *)a6.m128i_i64);
  v11 = (unsigned __int64)sub_EEC8C0((unsigned __int64)a2, (__int64)a2, *(double *)a6.m128i_i64) >> 32;
  v37 = sub_15F0EF0(a5, v11, 0, a6, a7);
  v12 = sub_BFB840((__int64)a2);
  v13 = *(_WORD *)v12 & 0x1FF;
  if ( ((v13 + 417) & 0x1FFu) <= 0x1C )
  {
    v14 = (0x100C0CABuLL >> (*(_BYTE *)v12 - 95)) & 1;
  }
  else if ( ((v13 + 481) & 0x1FFu) > 0x3E )
  {
    LOBYTE(v14) = 0;
  }
  else
  {
    v14 = (0x7FFF010000000007uLL >> (*(_BYTE *)v12 - 31)) & 1;
  }
  v38 = (*(_WORD *)v12 & 0x1BF) != 0x2E
     && !(_BYTE)v14
     && (*(_WORD *)v12 & 0x1F7) != 4
     && (*(_WORD *)v12 & 0x1FF) != 19
     && (*a2 & 0x1FF) != 20;
  v15 = v9 & 0xFFFFFFFFFFFFFFF0LL;
  v16 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v16 + 16) == 42 )
  {
    v17 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64, __int64, _QWORD, __int64))(a1 + 32))(
            *(_QWORD *)&byte_8[*(_QWORD *)(v16 + 32) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)&byte_8[*(_QWORD *)(v16 + 32) & 0xFFFFFFFFFFFFFFF0LL]
           | (unsigned __int8)*(_QWORD *)(v16 + 32))
          & 7,
            v10,
            a5,
            v36,
            1);
    v15 = v9 & 0xFFFFFFFFFFFFFFF0LL;
    v18 = v17;
    if ( (_BYTE)v17 )
    {
      v23 = sub_BFD550(v12);
      if ( !(unsigned int)sub_BFE6E0(v23, *(_QWORD *)(a5 + 248), 2, *(double *)a6.m128i_i64) )
      {
        if ( (*(_WORD *)v12 & 0x1FF) == 4 )
        {
          v24 = 1;
          if ( *(_BYTE *)(v12 + 2) >> 3 == 4 )
          {
            LOBYTE(v42) = 0;
            v45.m128i_i8[0] = 0;
            v34 = *(_QWORD *)(a1 + 8);
            v41 = 0;
            v43 = &v45;
            v44 = 0;
            v46 = 0;
            LODWORD(v39) = v36;
            HIDWORD(v39) = v36;
            LOBYTE(v40) = 1;
            if ( v34 == *(_QWORD *)(a1 + 16) )
            {
              sub_19E7680((char **)a1, v34, (__int64)&v39);
              if ( v43 != &v45 )
                operator delete(v43);
            }
            else
            {
              *(_QWORD *)v34 = v39;
              *(_DWORD *)(v34 + 8) = v40;
              *(_QWORD *)(v34 + 12) = v41;
              *(_DWORD *)(v34 + 20) = v42;
              *(_QWORD *)(v34 + 24) = v34 + 40;
              if ( v43 == &v45 )
              {
                *(__m128i *)(v34 + 40) = _mm_loadu_si128(&v45);
              }
              else
              {
                *(_QWORD *)(v34 + 24) = v43;
                *(_QWORD *)(v34 + 40) = v45.m128i_i64[0];
              }
              *(_QWORD *)(v34 + 32) = v44;
              *(_BYTE *)(v34 + 56) = v46;
              *(_QWORD *)(a1 + 8) += 64LL;
            }
            v24 = 4;
          }
          goto LABEL_21;
        }
        LOBYTE(v42) = 0;
        v41 = 0;
        if ( v38 )
        {
          v46 = 0;
          LOBYTE(v40) = 0;
          v27 = *(_QWORD *)(a1 + 8);
          v43 = &v45;
          LODWORD(v39) = v36;
          HIDWORD(v39) = v36;
          strcpy(v45.m128i_i8, "*(");
          v44 = 2;
          if ( v27 == *(_QWORD *)(a1 + 16) )
          {
            sub_19E7680((char **)a1, v27, (__int64)&v39);
            if ( v43 != &v45 )
              operator delete(v43);
          }
          else
          {
            *(_QWORD *)v27 = v39;
            *(_DWORD *)(v27 + 8) = v40;
            *(_QWORD *)(v27 + 12) = v41;
            *(_DWORD *)(v27 + 20) = v42;
            *(_QWORD *)(v27 + 24) = v27 + 40;
            if ( v43 == &v45 )
            {
              *(__m128i *)(v27 + 40) = _mm_loadu_si128(&v45);
            }
            else
            {
              *(_QWORD *)(v27 + 24) = v43;
              *(_QWORD *)(v27 + 40) = v45.m128i_i64[0];
            }
            *(_QWORD *)(v27 + 32) = v44;
            *(_BYTE *)(v27 + 56) = v46;
            *(_QWORD *)(a1 + 8) += 64LL;
          }
          v41 = 0;
          LOBYTE(v42) = 0;
          v28 = *(_QWORD *)(a1 + 8);
          v43 = &v45;
          v46 = 0;
          LODWORD(v39) = v37;
          HIDWORD(v39) = v37;
          LOBYTE(v40) = 0;
          v44 = 1;
          v45.m128i_i16[0] = 41;
          if ( v28 != *(_QWORD *)(a1 + 16) )
          {
            *(_QWORD *)v28 = v39;
            *(_DWORD *)(v28 + 8) = v40;
            *(_QWORD *)(v28 + 12) = v41;
            *(_DWORD *)(v28 + 20) = v42;
            *(_QWORD *)(v28 + 24) = v28 + 40;
            v29 = v43;
            if ( v43 != &v45 )
            {
LABEL_37:
              *(_QWORD *)(v28 + 24) = v29;
              *(_QWORD *)(v28 + 40) = v45.m128i_i64[0];
LABEL_38:
              *(_QWORD *)(v28 + 32) = v44;
              *(_BYTE *)(v28 + 56) = v46;
              *(_QWORD *)(a1 + 8) += 64LL;
LABEL_39:
              v24 = 1;
              goto LABEL_21;
            }
LABEL_45:
            *(__m128i *)(v28 + 40) = _mm_loadu_si128(&v45);
            goto LABEL_38;
          }
          sub_19E7680((char **)a1, v28, (__int64)&v39);
          v33 = v43;
          if ( v43 == &v45 )
            goto LABEL_39;
        }
        else
        {
          v46 = 0;
          LOBYTE(v40) = 0;
          v28 = *(_QWORD *)(a1 + 8);
          v43 = &v45;
          LODWORD(v39) = v36;
          HIDWORD(v39) = v36;
          v44 = 1;
          v45.m128i_i16[0] = 42;
          if ( v28 != *(_QWORD *)(a1 + 16) )
          {
            *(_QWORD *)v28 = v39;
            *(_DWORD *)(v28 + 8) = v40;
            *(_QWORD *)(v28 + 12) = v41;
            *(_DWORD *)(v28 + 20) = v42;
            *(_QWORD *)(v28 + 24) = v28 + 40;
            v29 = v43;
            if ( v43 != &v45 )
              goto LABEL_37;
            goto LABEL_45;
          }
          sub_19E7680((char **)a1, v28, (__int64)&v39);
          v33 = v43;
          if ( v43 == &v45 )
            goto LABEL_39;
        }
        operator delete(v33);
        goto LABEL_39;
      }
      return 0;
    }
  }
  v19 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v19 + 16) != 42
    || ((*(_BYTE *)(v12 + 1) >> 1) & 3) != 1
    || (*(_BYTE *)(v12 + 1) & 0x38) != 0
    || *(_BYTE *)(*(_QWORD *)v15 + 16LL) == 42 && sub_F67340(v19) )
  {
    return 0;
  }
  v20 = *(__int64 (__fastcall **)(unsigned __int64, unsigned __int64, __int64, _QWORD, _QWORD))(a1 + 32);
  v21 = sub_A70010(*(_QWORD *)(a5 + 248), v9);
  v18 = v20(v21, v10, a5, v36, 0);
  if ( !(_BYTE)v18 )
    return 0;
  if ( (*(_WORD *)v12 & 0x1FF) == 4 )
  {
    v24 = 2;
    if ( *(_BYTE *)(v12 + 2) >> 3 == 5 )
    {
      LOBYTE(v42) = 0;
      v45.m128i_i8[0] = 0;
      v26 = *(_QWORD *)(a1 + 8);
      v41 = 0;
      v43 = &v45;
      v44 = 0;
      v46 = 0;
      LODWORD(v39) = v36;
      HIDWORD(v39) = v36;
      LOBYTE(v40) = 1;
      if ( v26 == *(_QWORD *)(a1 + 16) )
      {
        sub_19E7680((char **)a1, v26, (__int64)&v39);
        if ( v43 != &v45 )
          operator delete(v43);
      }
      else
      {
        *(_QWORD *)v26 = v39;
        *(_DWORD *)(v26 + 8) = v40;
        *(_QWORD *)(v26 + 12) = v41;
        *(_DWORD *)(v26 + 20) = v42;
        *(_QWORD *)(v26 + 24) = v26 + 40;
        if ( v43 == &v45 )
        {
          *(__m128i *)(v26 + 40) = _mm_loadu_si128(&v45);
        }
        else
        {
          *(_QWORD *)(v26 + 24) = v43;
          *(_QWORD *)(v26 + 40) = v45.m128i_i64[0];
        }
        *(_QWORD *)(v26 + 32) = v44;
        *(_BYTE *)(v26 + 56) = v46;
        *(_QWORD *)(a1 + 8) += 64LL;
      }
      v24 = 3;
    }
    goto LABEL_21;
  }
  LOBYTE(v42) = 0;
  v41 = 0;
  if ( !v38 )
  {
    v46 = 0;
    LOBYTE(v40) = 0;
    v31 = *(_QWORD *)(a1 + 8);
    LODWORD(v39) = v36;
    HIDWORD(v39) = v36;
    v43 = &v45;
    v44 = 1;
    v45.m128i_i16[0] = 38;
    if ( v31 != *(_QWORD *)(a1 + 16) )
    {
      *(_QWORD *)v31 = v39;
      *(_DWORD *)(v31 + 8) = v40;
      *(_QWORD *)(v31 + 12) = v41;
      *(_DWORD *)(v31 + 20) = v42;
      *(_QWORD *)(v31 + 24) = v31 + 40;
      v32 = v43;
      if ( v43 != &v45 )
        goto LABEL_53;
LABEL_69:
      *(__m128i *)(v31 + 40) = _mm_loadu_si128(&v45);
      goto LABEL_54;
    }
    sub_19E7680((char **)a1, v31, (__int64)&v39);
    v35 = v43;
    if ( v43 == &v45 )
      goto LABEL_55;
LABEL_75:
    operator delete(v35);
    goto LABEL_55;
  }
  strcpy(v45.m128i_i8, "&(");
  v30 = *(_QWORD *)(a1 + 8);
  v43 = &v45;
  v46 = 0;
  LODWORD(v39) = v36;
  HIDWORD(v39) = v36;
  LOBYTE(v40) = 0;
  v44 = 2;
  if ( v30 == *(_QWORD *)(a1 + 16) )
  {
    sub_19E7680((char **)a1, v30, (__int64)&v39);
    if ( v43 != &v45 )
      operator delete(v43);
  }
  else
  {
    *(_QWORD *)v30 = v39;
    *(_DWORD *)(v30 + 8) = v40;
    *(_QWORD *)(v30 + 12) = v41;
    *(_DWORD *)(v30 + 20) = v42;
    *(_QWORD *)(v30 + 24) = v30 + 40;
    if ( v43 == &v45 )
    {
      *(__m128i *)(v30 + 40) = _mm_loadu_si128(&v45);
    }
    else
    {
      *(_QWORD *)(v30 + 24) = v43;
      *(_QWORD *)(v30 + 40) = v45.m128i_i64[0];
    }
    *(_QWORD *)(v30 + 32) = v44;
    *(_BYTE *)(v30 + 56) = v46;
    *(_QWORD *)(a1 + 8) += 64LL;
  }
  v41 = 0;
  LOBYTE(v42) = 0;
  v31 = *(_QWORD *)(a1 + 8);
  v43 = &v45;
  v46 = 0;
  LODWORD(v39) = v37;
  HIDWORD(v39) = v37;
  LOBYTE(v40) = 0;
  v44 = 1;
  v45.m128i_i16[0] = 41;
  if ( v31 == *(_QWORD *)(a1 + 16) )
  {
    sub_19E7680((char **)a1, v31, (__int64)&v39);
    v35 = v43;
    if ( v43 == &v45 )
      goto LABEL_55;
    goto LABEL_75;
  }
  *(_QWORD *)v31 = v39;
  *(_DWORD *)(v31 + 8) = v40;
  *(_QWORD *)(v31 + 12) = v41;
  *(_DWORD *)(v31 + 20) = v42;
  *(_QWORD *)(v31 + 24) = v31 + 40;
  v32 = v43;
  if ( v43 == &v45 )
    goto LABEL_69;
LABEL_53:
  *(_QWORD *)(v31 + 24) = v32;
  *(_QWORD *)(v31 + 40) = v45.m128i_i64[0];
LABEL_54:
  *(_QWORD *)(v31 + 32) = v44;
  *(_BYTE *)(v31 + 56) = v46;
  *(_QWORD *)(a1 + 8) += 64LL;
LABEL_55:
  v24 = 2;
LABEL_21:
  v25 = *(_DWORD *)(a1 + 24) + 1;
  *(_DWORD *)(a1 + 24) = v25;
  if ( v25 == 1 )
    *(_DWORD *)(a1 + 28) = v24;
  else
    return 1;
  return v18;
}
