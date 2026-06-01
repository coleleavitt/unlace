__int64 __fastcall sub_53A720(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  __int64 *v4; // rax
  _QWORD *v5; // r15
  __int64 *v6; // rbx
  unsigned int v7; // eax
  unsigned int v8; // r14d
  __int64 v10; // r12
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r15
  int v13; // eax
  __int64 v14; // rcx
  int tinfo_udt_member; // eax
  int v16; // r8d
  size_t v17; // r9
  const void *v18; // r8
  void *v19; // rdi
  size_t v20; // r15
  const void *v21; // r9
  void *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  size_t v25; // r9
  size_t v26; // r12
  char *v27; // r9
  __m128i v28; // xmm0
  __int64 v29; // rax
  __m128i v30; // xmm0
  __int64 v31; // rax
  __int64 v32; // rbx
  void *v33; // r12
  __int64 v34; // [rsp+10h] [rbp-170h]
  const void *v35; // [rsp+10h] [rbp-170h]
  int v36; // [rsp+10h] [rbp-170h]
  size_t v37; // [rsp+10h] [rbp-170h]
  int v38; // [rsp+10h] [rbp-170h]
  int srca; // [rsp+18h] [rbp-168h]
  void *srcb; // [rsp+18h] [rbp-168h]
  const void *src; // [rsp+18h] [rbp-168h]
  int srcd; // [rsp+18h] [rbp-168h]
  char *srcc; // [rsp+18h] [rbp-168h]
  __int64 v44; // [rsp+20h] [rbp-160h]
  __int64 v45; // [rsp+28h] [rbp-158h]
  unsigned __int64 v46; // [rsp+28h] [rbp-158h]
  unsigned __int64 v47; // [rsp+28h] [rbp-158h]
  int v48; // [rsp+28h] [rbp-158h]
  char *v49; // [rsp+28h] [rbp-158h]
  size_t n; // [rsp+30h] [rbp-150h]
  size_t na; // [rsp+30h] [rbp-150h]
  size_t nb; // [rsp+30h] [rbp-150h]
  _QWORD *v53; // [rsp+38h] [rbp-148h]
  int v54; // [rsp+40h] [rbp-140h]
  int v55; // [rsp+44h] [rbp-13Ch] BYREF
  unsigned __int64 v56; // [rsp+48h] [rbp-138h]
  int v57[2]; // [rsp+58h] [rbp-128h] BYREF
  __int64 v58; // [rsp+60h] [rbp-120h] BYREF
  __int64 v59; // [rsp+68h] [rbp-118h] BYREF
  __int128 v60; // [rsp+70h] [rbp-110h] BYREF
  __int64 v61; // [rsp+80h] [rbp-100h] BYREF
  int v62; // [rsp+88h] [rbp-F8h]
  __int16 v63; // [rsp+8Ch] [rbp-F4h]
  _QWORD v64[2]; // [rsp+90h] [rbp-F0h] BYREF
  _QWORD v65[2]; // [rsp+A0h] [rbp-E0h] BYREF
  _QWORD v66[2]; // [rsp+B0h] [rbp-D0h] BYREF
  __int64 v67; // [rsp+C0h] [rbp-C0h] BYREF
  __int64 v68; // [rsp+C8h] [rbp-B8h] BYREF
  void *v69; // [rsp+D0h] [rbp-B0h]
  __int128 v70; // [rsp+D8h] [rbp-A8h]
  void *ptr; // [rsp+E8h] [rbp-98h]
  __int128 v72; // [rsp+F0h] [rbp-90h]
  __int128 v73; // [rsp+100h] [rbp-80h] BYREF
  __m128i v74; // [rsp+118h] [rbp-68h] BYREF
  int v75; // [rsp+128h] [rbp-58h]
  __int64 v76; // [rsp+130h] [rbp-50h]
  char v77; // [rsp+138h] [rbp-48h]
  unsigned __int64 v78; // [rsp+148h] [rbp-38h]

  v56 = a3;
  v55 = a4;
  v78 = __readfsqword(0x28u);
  v4 = (__int64 *)sub_5242C0(*(__int64 **)(*(_QWORD *)a1 + 1632LL), a3);
  if ( v4
    && (v5 = (_QWORD *)*v4,
        v6 = v4,
        v53 = (_QWORD *)*v4,
        v7 = sub_539EC0(a1, (unsigned __int64 *)a2, (unsigned __int64 *)v57, &v55, *v4),
        v8 = v7,
        v7 != -1) )
  {
    v44 = (__int64)(int)v7 << 7;
    v10 = *v5 + v44;
    *(_QWORD *)a2 = *(_QWORD *)v10;
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(v10 + 8);
    n = a2 + 16;
    if ( a2 + 16 != v10 + 16 )
    {
      v11 = *(_QWORD *)(v10 + 24);
      if ( !v11 || (v20 = v11 - 1, v11 == 1) )
      {
        *(_QWORD *)(a2 + 24) = 0;
      }
      else
      {
        v21 = *(const void **)(v10 + 16);
        v22 = *(void **)(a2 + 16);
        if ( *(_QWORD *)(a2 + 32) < v11 )
        {
          srcb = *(void **)(v10 + 16);
          v47 = *(_QWORD *)(v10 + 24);
          v24 = qvector_reserve(n, *(_QWORD *)(a2 + 16), v47, 1);
          v21 = srcb;
          v11 = v47;
          *(_QWORD *)(a2 + 16) = v24;
          v22 = (void *)v24;
        }
        *(_QWORD *)(a2 + 24) = v11;
        v46 = v11;
        memmove(v22, v21, v20);
        *(_BYTE *)(*(_QWORD *)(a2 + 16) + v46 - 1) = 0;
      }
    }
    v45 = a2 + 40;
    if ( a2 + 40 != v10 + 40 )
    {
      v12 = *(_QWORD *)(v10 + 48);
      if ( !v12 || (v17 = v12 - 1, v12 == 1) )
      {
        *(_QWORD *)(a2 + 48) = 0;
      }
      else
      {
        v18 = *(const void **)(v10 + 40);
        v19 = *(void **)(a2 + 40);
        if ( *(_QWORD *)(a2 + 56) < v12 )
        {
          v35 = *(const void **)(v10 + 40);
          v23 = qvector_reserve(v45, *(_QWORD *)(a2 + 40), *(_QWORD *)(v10 + 48), 1);
          v18 = v35;
          v17 = v12 - 1;
          *(_QWORD *)(a2 + 40) = v23;
          v19 = (void *)v23;
        }
        *(_QWORD *)(a2 + 48) = v12;
        memmove(v19, v18, v17);
        *(_BYTE *)(*(_QWORD *)(a2 + 40) + v12 - 1) = 0;
      }
    }
    copy_tinfo_t(a2 + 64);
    *(__m128i *)(a2 + 72) = _mm_loadu_si128((const __m128i *)(v10 + 72));
    *(__m128i *)(a2 + 88) = _mm_loadu_si128((const __m128i *)(v10 + 88));
    *(_DWORD *)(a2 + 104) = *(_DWORD *)(v10 + 104);
    *(_DWORD *)(a2 + 112) = *(_DWORD *)(v10 + 112);
    v13 = *(_DWORD *)(v10 + 116);
    *(_DWORD *)(a2 + 116) = v13;
    *(_BYTE *)(a2 + 120) = *(_BYTE *)(v10 + 120);
    if ( (v13 & 0x20) != 0 && (v55 & 0x1000000F) == 0x10000000 )
    {
      v77 = 0;
      v73 = 0;
      v14 = *(_QWORD *)v57 - *(_QWORD *)a2;
      v68 = 0;
      v69 = nullptr;
      ptr = nullptr;
      v74.m128i_i64[1] = 1;
      v75 = -1;
      v76 = 0;
      *(_QWORD *)v57 = v14;
      v67 = v14;
      v34 = v14;
      srca = v55;
      v70 = 0;
      v72 = 0;
      tinfo_udt_member = find_tinfo_udt_member((int)&v67);
      v16 = srca;
      if ( tinfo_udt_member != -1 && (v76 & 0x10000000000LL) != 0 && v34 == v67 )
      {
        v25 = v70;
        *(__m128 *)a2 = _mm_loadh_ps((const double *)&v68);
        if ( v25 && (v26 = v25 - 1, v25 != 1) )
        {
          src = v69;
          if ( *(_QWORD *)(a2 + 32) < v25 )
          {
            v54 = v16;
            v37 = v25;
            *(_QWORD *)(a2 + 16) = qvector_reserve(n, *(_QWORD *)(a2 + 16), v25, 1);
            v16 = v54;
            v25 = v37;
          }
          *(_QWORD *)(a2 + 24) = v25;
          v36 = v16;
          nb = v25;
          memmove(*(void **)(a2 + 16), src, v26);
          v16 = v36;
          *(_BYTE *)(*(_QWORD *)(a2 + 16) + nb - 1) = 0;
        }
        else
        {
          *(_QWORD *)(a2 + 24) = 0;
        }
        v27 = (char *)v72;
        if ( (_QWORD)v72 && (na = v72 - 1, (_QWORD)v72 != 1) )
        {
          v33 = ptr;
          if ( *(_QWORD *)(a2 + 56) < (unsigned __int64)v72 )
          {
            v38 = v16;
            srcc = (char *)v72;
            *(_QWORD *)(a2 + 40) = qvector_reserve(v45, *(_QWORD *)(a2 + 40), v72, 1);
            v16 = v38;
            v27 = srcc;
          }
          *(_QWORD *)(a2 + 48) = v27;
          srcd = v16;
          v49 = v27;
          memmove(*(void **)(a2 + 40), v33, na);
          v16 = srcd;
          v49[*(_QWORD *)(a2 + 40) - 1] = 0;
        }
        else
        {
          *(_QWORD *)(a2 + 48) = 0;
        }
        v48 = v16;
        copy_tinfo_t(a2 + 64);
        v28 = _mm_loadu_si128((const __m128i *)((char *)&v73 + 8));
        *(_DWORD *)(a2 + 104) = v75;
        v29 = v76;
        *(__m128i *)(a2 + 72) = v28;
        v30 = _mm_loadu_si128(&v74);
        *(_QWORD *)(a2 + 112) = v29;
        LOBYTE(v29) = v77;
        *(__m128i *)(a2 + 88) = v30;
        *(_BYTE *)(a2 + 120) = v29;
        v31 = *(_QWORD *)(*v53 + v44) + *(_QWORD *)a2;
        *(_QWORD *)a2 = v31;
        if ( v48 >= 0 )
        {
          v32 = *(_QWORD *)v6[4];
          v64[1] = v31;
          v64[0] = off_2B04170;
          v65[0] = 0;
          v65[1] = 0;
          v66[0] = 0;
          copy_tinfo_t(v66);
          if ( (unsigned __int8)sub_53B800((int)a2 + 64, 0, v32, (unsigned int)v64, *(_QWORD *)a2, (int)a2 + 64, 1) )
          {
            v58 = 0;
            v59 = 0;
            v60 = 0;
            copy_tinfo_t((char *)&v60 + 8);
            v61 = 0;
            copy_tinfo_t(&v61);
            v63 = 0;
            v62 = 0;
            clear_tinfo_t(&v59);
            clear_tinfo_t(&v58);
            copy_tinfo_t(&v60);
            create_tinfo(a2 + 64, 10, 10, &v60);
            clear_tinfo_t(&v61);
            clear_tinfo_t((char *)&v60 + 8);
            clear_tinfo_t(&v60);
          }
          v64[0] = off_2B04170;
          clear_tinfo_t(v66);
          clear_tinfo_t(v65);
        }
      }
      clear_tinfo_t(&v73);
      if ( ptr )
      {
        *(_QWORD *)&v72 = 0;
        qfree(ptr);
      }
      if ( v69 )
      {
        *(_QWORD *)&v70 = 0;
        qfree(v69);
      }
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return v8;
}

