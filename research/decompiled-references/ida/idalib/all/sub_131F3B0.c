int *__fastcall sub_131F3B0(int *a1, __int64 a2, __int64 a3, unsigned int a4, void *a5, size_t a6)
{
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v9; // rbp
  __int64 v10; // r12
  size_t v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  __int64 v16; // r12
  const void *v17; // rdi
  volatile signed __int32 *v18; // rbp
  _QWORD *v19; // rax
  int *v20; // rsi
  int *v21; // rbx
  __m128i v22; // xmm1
  const char **v24; // rax
  char *v25; // r12
  size_t v26; // rax
  _BYTE *v27; // rdi
  unsigned __int64 v28; // rdx
  _QWORD *v29; // rax
  unsigned __int64 v30; // rsi
  __int64 v31; // r8
  __int64 v32; // rdx
  _BYTE *v33; // rdi
  unsigned __int64 v34; // rdx
  _QWORD *v35; // rax
  unsigned __int64 v36; // rsi
  __int64 v37; // r8
  __int64 v38; // rdx
  size_t v39; // rdx
  int v40; // ecx
  __int64 v41; // rcx
  void **v42; // rdx
  signed __int32 v43; // eax
  size_t v44; // rdx
  int v45; // edx
  __int64 v46; // rdx
  signed __int32 v47; // eax
  int v48; // ecx
  __int64 v49; // rcx
  void **v50; // rdx
  signed __int32 v51; // eax
  int *v52; // rbx
  volatile signed __int32 *v53; // rdi
  _QWORD *v54; // [rsp+8h] [rbp-160h]
  void **v55; // [rsp+18h] [rbp-150h] BYREF
  int (**v56)(pthread_key_t *, void (*)(void *)); // [rsp+20h] [rbp-148h]
  unsigned int v57; // [rsp+2Ch] [rbp-13Ch]
  int *v58; // [rsp+30h] [rbp-138h]
  void *s2; // [rsp+38h] [rbp-130h]
  __int64 v60; // [rsp+40h] [rbp-128h]
  __int64 v61; // [rsp+48h] [rbp-120h]
  __int64 v62; // [rsp+50h] [rbp-118h] BYREF
  unsigned __int64 v63; // [rsp+58h] [rbp-110h]
  void *v64; // [rsp+60h] [rbp-108h] BYREF
  signed __int64 v65; // [rsp+68h] [rbp-100h]
  _BYTE v66[16]; // [rsp+70h] [rbp-F8h] BYREF
  void *v67; // [rsp+80h] [rbp-E8h] BYREF
  signed __int64 v68; // [rsp+88h] [rbp-E0h]
  __int64 v69; // [rsp+90h] [rbp-D8h] BYREF
  int v70; // [rsp+A0h] [rbp-C8h]
  void *dest; // [rsp+A8h] [rbp-C0h] BYREF
  __m128 v72; // [rsp+B0h] [rbp-B8h] BYREF
  __m128i v73; // [rsp+C8h] [rbp-A0h] BYREF
  void *v74; // [rsp+E0h] [rbp-88h] BYREF
  size_t n; // [rsp+E8h] [rbp-80h]
  _QWORD v76[15]; // [rsp+F0h] [rbp-78h] BYREF

  v6 = *(_QWORD **)(a3 + 8);
  v58 = a1;
  dest = &v72.m128_u16[4];
  v7 = *(unsigned int *)(a3 + 16);
  v60 = a2;
  v61 = a3;
  v57 = a4;
  s2 = a5;
  v70 = 0;
  v72.m128_u64[0] = 0;
  v72.m128_i8[8] = 0;
  v73 = 0u;
  v54 = &v6[v7];
  if ( v54 == v6 )
  {
LABEL_31:
    v20 = v58;
    *v58 = v70;
    *((_QWORD *)v20 + 1) = v20 + 6;
    if ( dest == &v72.m128_u16[4] )
    {
      v21 = v20;
      *(__m128i *)(v20 + 6) = _mm_loadu_si128((const __m128i *)&v72.m128_u16[4]);
    }
    else
    {
      *((_QWORD *)v20 + 1) = dest;
      v21 = v20;
      *((_QWORD *)v20 + 3) = v72.m128_u64[1];
    }
    v22 = _mm_loadu_si128(&v73);
    *((_QWORD *)v21 + 2) = v72.m128_u64[0];
    *(__m128i *)(v21 + 10) = v22;
    return v58;
  }
  if ( *v6 )
    goto LABEL_3;
  do
  {
    if ( v54 == ++v6 )
      goto LABEL_31;
  }
  while ( !*v6 );
LABEL_3:
  while ( 1 )
  {
    v9 = *v6;
    if ( !(unsigned __int8)sub_21B9810(*v6, 3235) )
      break;
    v10 = **(_QWORD **)(v9 + 48);
    v62 = v10;
    if ( v10 )
    {
      v11 = strlen((const char *)v10);
      v63 = v11;
      if ( v11 == a6 )
      {
        if ( !a6 || !memcmp((const void *)v10, s2, a6) )
        {
LABEL_51:
          v70 = 1;
          goto LABEL_52;
        }
        v11 = a6;
      }
      if ( v11 == 10 && *(_QWORD *)v10 == 0x6968747972657665LL && *(_WORD *)(v10 + 8) == 26478 )
      {
        v70 = 2;
LABEL_52:
        v74 = v76;
        sub_12FAAE0(&v74, ".*", (__int64)"");
        v33 = dest;
        if ( v74 == v76 )
        {
          v39 = n;
          if ( n )
          {
            if ( n == 1 )
              *(_BYTE *)dest = v76[0];
            else
              memcpy(dest, v76, n);
            v39 = n;
            v33 = dest;
          }
          v72.m128_u64[0] = v39;
          v33[v39] = 0;
          v33 = v74;
        }
        else
        {
          if ( dest == &v72.m128_u16[4] )
          {
            v55 = (void **)v76[0];
            dest = v74;
            v72 = _mm_loadh_ps((const double *)&v55);
          }
          else
          {
            v55 = (void **)v76[0];
            v34 = v72.m128_u64[1];
            dest = v74;
            v72 = _mm_loadh_ps((const double *)&v55);
            if ( v33 )
            {
              v74 = v33;
              v76[0] = v34;
              goto LABEL_56;
            }
          }
          v74 = v76;
          v33 = v76;
        }
LABEL_56:
        n = 0;
        *v33 = 0;
        if ( v74 != v76 )
          operator delete(v74);
        v66[0] = 0;
        v65 = 0;
        v64 = v66;
        v35 = (_QWORD *)operator new(0x20u);
        v35[1] = 0x100000001LL;
        v36 = (unsigned __int64)dest;
        v56 = (int (**)(pthread_key_t *, void (*)(void *)))v35;
        *v35 = off_2C051B8;
        v55 = (void **)(v35 + 2);
        sub_2233940(v35 + 2, v36, v72.m128_u64[0], 0);
        v37 = (__int64)v55;
        v38 = v73.m128i_i64[1];
        v55 = (void **)v56;
        v73 = (__m128i)_mm_loadh_ps((const double *)&v55);
        if ( v38 )
        {
          if ( &_pthread_key_create )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v38 + 8), 0xFFFFFFFF) != 1 )
              goto LABEL_61;
LABEL_78:
            v41 = *(_QWORD *)v38;
            v56 = &_pthread_key_create;
            v55 = (void **)v38;
            (*(void (__fastcall **)(__int64, unsigned __int64, __int64, __int64, __int64))(v41 + 16))(
              v38,
              v36,
              v38,
              v41,
              v37);
            v42 = v55;
            if ( v56 )
            {
              v43 = _InterlockedExchangeAdd((volatile signed __int32 *)v55 + 3, 0xFFFFFFFF);
            }
            else
            {
              v43 = *((_DWORD *)v55 + 3);
              *((_DWORD *)v55 + 3) = v43 - 1;
            }
            if ( v43 == 1 )
              (*((void (__fastcall **)(void **))*v42 + 3))(v42);
          }
          else
          {
            v40 = *(_DWORD *)(v38 + 8);
            v36 = (unsigned int)(v40 - 1);
            *(_DWORD *)(v38 + 8) = v36;
            if ( v40 == 1 )
              goto LABEL_78;
          }
LABEL_61:
          v37 = v73.m128i_i64[0];
        }
        if ( !(unsigned __int8)sub_2233C80(v37, &v64) )
        {
          sub_FC70B0((__int64)&v74, v60, 0, 455);
          sub_AEC220((unsigned __int8 **)&v74, v64, v65);
          v55 = &v67;
          sub_21B5FF0(&v67, v9, v61);
          sub_AEC220((unsigned __int8 **)&v74, v67, v68);
          if ( v67 != v55 + 2 )
            operator delete(v67);
          sub_AEA040((__int64)&v74);
        }
LABEL_48:
        if ( v64 != v66 )
          operator delete(v64);
        goto LABEL_25;
      }
    }
    else
    {
      v63 = 0;
      if ( !a6 )
        goto LABEL_51;
    }
    LOBYTE(v74) = 45;
    v12 = sub_2246AB0(&v62, &v74, 1, 0);
    if ( v12 == -1 )
    {
      v12 = v63;
      v16 = v62;
      v15 = 0;
      v17 = nullptr;
      v13 = v63;
    }
    else
    {
      v13 = v63;
      v14 = v12 + 1;
      if ( v12 + 1 > v63 )
      {
        v14 = v63;
        v15 = 0;
      }
      else
      {
        v15 = v63 - v14;
      }
      v16 = v62;
      v17 = (const void *)(v62 + v14);
      if ( v12 > v63 )
        v12 = v63;
    }
    if ( v12 == 2 && *(_WORD *)v16 == 28526 && a6 == v15 && (!a6 || !memcmp(v17, s2, a6)) )
    {
      v70 = 3;
    }
    else
    {
      if ( v13 != 13
        || *(_QWORD *)v16 != 0x79726576652D6F6ELL
        || *(_DWORD *)(v16 + 8) != 1852401780
        || *(_BYTE *)(v16 + 12) != 103 )
      {
        goto LABEL_25;
      }
      v70 = 4;
    }
    sub_99BDC0(&dest, 0, v72.m128_u64[0], &byte_22F0C30, 0);
    v18 = (volatile signed __int32 *)v73.m128i_i64[1];
    v73 = 0;
    if ( !v18 )
      goto LABEL_25;
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) != 1 )
        goto LABEL_25;
    }
    else
    {
      v45 = *((_DWORD *)v18 + 2);
      *((_DWORD *)v18 + 2) = v45 - 1;
      if ( v45 != 1 )
        goto LABEL_25;
    }
    v46 = *(_QWORD *)v18;
    v55 = (void **)&_pthread_key_create;
    (*(void (__fastcall **)(volatile signed __int32 *))(v46 + 16))(v18);
    if ( v55 )
    {
      v47 = _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF);
    }
    else
    {
      v47 = *((_DWORD *)v18 + 3);
      *((_DWORD *)v18 + 3) = v47 - 1;
    }
    if ( v47 == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 24LL))(v18);
LABEL_25:
    v19 = v6 + 1;
    if ( v54 == v6 + 1 )
      goto LABEL_31;
    if ( !v6[1] )
    {
      v19 = v6 + 2;
      if ( v54 == v6 + 2 )
        goto LABEL_31;
      while ( !*v19 )
      {
        if ( v54 == ++v19 )
          goto LABEL_31;
      }
    }
    v6 = v19;
  }
  if ( !(unsigned __int8)sub_21B9810(v9, v57) )
    goto LABEL_25;
  v70 = 5;
  v24 = *(const char ***)(v9 + 48);
  v25 = (char *)*v24;
  if ( !*v24 )
  {
    v74 = v76;
    v27 = dest;
    v44 = 0;
    LOBYTE(v76[0]) = 0;
LABEL_83:
    v72.m128_u64[0] = v44;
    v27[v44] = 0;
    v27 = v74;
    goto LABEL_41;
  }
  v26 = strlen(*v24);
  v74 = v76;
  sub_12FAAE0(&v74, v25, (__int64)&v25[v26]);
  v27 = dest;
  if ( v74 == v76 )
  {
    v44 = n;
    if ( n )
    {
      if ( n == 1 )
        *(_BYTE *)dest = v76[0];
      else
        memcpy(dest, v76, n);
      v44 = n;
      v27 = dest;
    }
    goto LABEL_83;
  }
  if ( dest == &v72.m128_u16[4] )
  {
    v55 = (void **)v76[0];
    dest = v74;
    v72 = _mm_loadh_ps((const double *)&v55);
  }
  else
  {
    v55 = (void **)v76[0];
    v28 = v72.m128_u64[1];
    dest = v74;
    v72 = _mm_loadh_ps((const double *)&v55);
    if ( v27 )
    {
      v74 = v27;
      v76[0] = v28;
      goto LABEL_41;
    }
  }
  v74 = v76;
  v27 = v76;
LABEL_41:
  n = 0;
  *v27 = 0;
  if ( v74 != v76 )
    operator delete(v74);
  v66[0] = 0;
  v65 = 0;
  v64 = v66;
  v29 = (_QWORD *)operator new(0x20u);
  v30 = (unsigned __int64)dest;
  v29[1] = 0x100000001LL;
  v56 = (int (**)(pthread_key_t *, void (*)(void *)))v29;
  *v29 = off_2C051B8;
  v55 = (void **)(v29 + 2);
  sub_2233940(v29 + 2, v30, v72.m128_u64[0], 0);
  v31 = (__int64)v55;
  v32 = v73.m128i_i64[1];
  v55 = (void **)v56;
  v73 = (__m128i)_mm_loadh_ps((const double *)&v55);
  if ( v32 )
  {
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v32 + 8), 0xFFFFFFFF) != 1 )
      {
LABEL_46:
        v31 = v73.m128i_i64[0];
        goto LABEL_47;
      }
    }
    else
    {
      v48 = *(_DWORD *)(v32 + 8);
      v30 = (unsigned int)(v48 - 1);
      *(_DWORD *)(v32 + 8) = v30;
      if ( v48 != 1 )
        goto LABEL_46;
    }
    v49 = *(_QWORD *)v32;
    v56 = &_pthread_key_create;
    v55 = (void **)v32;
    (*(void (__fastcall **)(__int64, unsigned __int64, __int64, __int64, __int64))(v49 + 16))(v32, v30, v32, v49, v31);
    v50 = v55;
    if ( v56 )
    {
      v51 = _InterlockedExchangeAdd((volatile signed __int32 *)v55 + 3, 0xFFFFFFFF);
    }
    else
    {
      v51 = *((_DWORD *)v55 + 3);
      *((_DWORD *)v55 + 3) = v51 - 1;
    }
    if ( v51 == 1 )
      (*((void (__fastcall **)(void **))*v50 + 3))(v50);
    goto LABEL_46;
  }
LABEL_47:
  if ( (unsigned __int8)sub_2233C80(v31, &v64) )
    goto LABEL_48;
  sub_FC70B0((__int64)&v74, v60, 0, 455);
  sub_AEC220((unsigned __int8 **)&v74, v64, v65);
  sub_21B5FF0(&v67, v9, v61);
  sub_AEC220((unsigned __int8 **)&v74, v67, v68);
  if ( v67 != &v69 )
    operator delete(v67);
  sub_AEA040((__int64)&v74);
  if ( v64 != v66 )
    operator delete(v64);
  v52 = v58;
  v53 = (volatile signed __int32 *)v73.m128i_i64[1];
  *(_OWORD *)v58 = 0;
  *((_OWORD *)v52 + 1) = 0;
  *((_OWORD *)v52 + 2) = 0;
  *((_QWORD *)v52 + 1) = v52 + 6;
  *((_BYTE *)v52 + 24) = 0;
  *(_OWORD *)(v52 + 10) = 0;
  if ( v53 )
    sub_4343A0(v53);
  if ( dest != &v72.m128_u16[4] )
    operator delete(dest);
  return v58;
}
