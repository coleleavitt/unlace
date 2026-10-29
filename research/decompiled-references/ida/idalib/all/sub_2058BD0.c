__int64 __fastcall sub_2058BD0(_QWORD *a1, char **a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v6; // rbx
  char **v8; // rbp
  char **v9; // rax
  __int64 v10; // r13
  char **v11; // rax
  char **v12; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  char *v17; // rdi
  size_t v18; // rax
  char **v19; // r14
  unsigned __int64 v20; // rcx
  _QWORD *v21; // r13
  __int64 v22; // rdi
  unsigned __int8 v23; // al
  char *v24; // rax
  char **v25; // r13
  __int16 v26; // si
  void *v27; // rdi
  char *v28; // rax
  char **v29; // r13
  _QWORD *v30; // rsi
  char *v31; // rdi
  char **v32; // r13
  _QWORD *v33; // rax
  char *v34; // rax
  char **v35; // r13
  __int64 v36; // rsi
  char *v37; // rax
  char **v38; // r13
  _QWORD *v39; // rsi
  __int64 v40; // rax
  size_t v41; // rbp
  char *v42; // r12
  __int64 v43; // rax
  __int64 **v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  char *v48; // rax
  char **v49; // r13
  int v50; // esi
  __int64 v51; // rax
  size_t v52; // rbp
  char *v53; // r13
  __int64 v54; // rax
  __int64 **v55; // rax
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  __int64 v60; // rbp
  char *v61; // r13
  __int64 v62; // rax
  size_t v63; // r12
  __int64 **v64; // rax
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  char *v68; // rsi
  __int64 v69; // rdx
  __int64 v70; // rax
  void *v71; // [rsp+0h] [rbp-D8h] BYREF
  unsigned int v72; // [rsp+8h] [rbp-D0h]
  void *ptr; // [rsp+10h] [rbp-C8h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-C0h] BYREF
  _BYTE v75[176]; // [rsp+28h] [rbp-B0h] BYREF

  if ( !a3 )
    return sub_2056DA0(a1, (__int64)a2, a3, a4, a5, a6);
  v6 = *a2;
  v8 = &a2[a3];
  if ( **a2 != 1 )
  {
    if ( (unsigned __int8)**a2 <= 1u )
    {
      if ( v8 != a2 )
      {
LABEL_5:
        v9 = a2;
        while ( v8 != ++v9 )
        {
          if ( v6 != *v9 )
          {
            if ( sub_20510E0(*a2, (__int64)a2) )
              goto LABEL_16;
            goto LABEL_23;
          }
        }
      }
      return sub_2057E60(a1, (__int64)a2, a3, a4, a5, a6);
    }
    if ( !sub_20510E0(*a2, (__int64)a2) )
      goto LABEL_23;
    if ( v8 != a2 )
    {
LABEL_16:
      if ( v6 == *a2 )
      {
        v12 = a2;
        do
        {
          if ( v8 == ++v12 )
            return sub_2056DA0(a1, (__int64)a2, a3, a4, a5, a6);
        }
        while ( v6 == *v12 );
      }
LABEL_23:
      v10 = 0;
      v14 = *((_QWORD *)v6 + 1);
      if ( !sub_2051E40(v14) )
        return v10;
      if ( *v6 == 5 )
      {
        if ( (unsigned __int8)sub_20C2F40(v14, 8) )
        {
          v17 = *a2;
          ptr = v75;
          *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
          if ( v8 != a2 )
          {
            if ( *v17 != 5 )
              return v10;
            v18 = 0;
            v19 = a2 + 1;
            v20 = 16;
            v21 = *((_QWORD **)v17 + 3);
            if ( *((_DWORD *)v17 + 8) <= 0x40u )
              goto LABEL_30;
LABEL_29:
            v21 = (_QWORD *)*v21;
            while ( 1 )
            {
LABEL_30:
              if ( v18 + 1 > v20 )
              {
                sub_2236E10(&ptr, v75, v18 + 1, 1);
                v18 = n[0];
              }
              *((_BYTE *)ptr + v18) = (_BYTE)v21;
              v18 = ++n[0];
              if ( v8 == v19 )
                break;
              v22 = (__int64)*v19++;
              if ( *(_BYTE *)v22 != 5 )
                goto LABEL_49;
              v20 = n[1];
              v21 = *(_QWORD **)(v22 + 24);
              if ( *(_DWORD *)(v22 + 32) > 0x40u )
                goto LABEL_29;
            }
            v17 = *a2;
          }
          v40 = sub_20CB0D0(v17);
          v41 = n[0];
          v42 = (char *)ptr;
          v43 = sub_20C4330(v40, 8);
          v44 = (__int64 **)sub_20C3520(v43, v41);
          v10 = sub_2056F70(v42, v41, v44, v45, v46, v47);
          goto LABEL_50;
        }
        if ( !(unsigned __int8)sub_20C2F40(*((_QWORD *)v6 + 1), 16) )
        {
          if ( (unsigned __int8)sub_20C2F40(*((_QWORD *)v6 + 1), 32) )
          {
            ptr = &n[1];
            n[0] = 0x1000000000LL;
            v28 = *a2;
            if ( v8 != a2 )
            {
              if ( *v28 != 5 )
                return v10;
              v29 = a2;
              while ( 1 )
              {
                v30 = *((_QWORD **)v28 + 3);
                if ( *((_DWORD *)v28 + 8) > 0x40u )
                  v30 = (_QWORD *)*v30;
                ++v29;
                sub_9B7040((__int64)&ptr, (int)v30);
                if ( v8 == v29 )
                  break;
                v28 = *v29;
                if ( **v29 != 5 )
                  goto LABEL_62;
              }
            }
            v59 = sub_20CB0D0(*a2);
            v60 = LODWORD(n[0]);
            v61 = (char *)ptr;
            v62 = sub_20C4330(v59, 32);
            v63 = 4 * v60;
            goto LABEL_114;
          }
          if ( (unsigned __int8)sub_20C2F40(*((_QWORD *)v6 + 1), 64) )
          {
            ptr = &n[1];
            n[0] = 0x1000000000LL;
            v37 = *a2;
            if ( v8 != a2 )
            {
              if ( *v37 != 5 )
                return v10;
              v38 = a2;
              while ( 1 )
              {
                v39 = *((_QWORD **)v37 + 3);
                if ( *((_DWORD *)v37 + 8) > 0x40u )
                  v39 = (_QWORD *)*v39;
                ++v38;
                sub_9B9C90((__int64)&ptr, (__int64)v39);
                if ( v8 == v38 )
                  break;
                v37 = *v38;
                if ( **v38 != 5 )
                  goto LABEL_62;
              }
            }
            v70 = sub_20CB0D0(*a2);
            v60 = LODWORD(n[0]);
            v61 = (char *)ptr;
            v62 = sub_20C4330(v70, 64);
            v63 = 8 * v60;
LABEL_114:
            v64 = (__int64 **)sub_20C3520(v62, v60);
            v10 = sub_2056F70(v61, v63, v64, v65, v66, v67);
LABEL_63:
            v27 = ptr;
            if ( ptr == &n[1] )
              return v10;
            goto LABEL_51;
          }
          return 0;
        }
        v31 = *a2;
        ptr = v75;
        *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
        if ( v8 != a2 )
        {
          if ( *v31 != 5 )
            return v10;
          v32 = a2;
          while ( 1 )
          {
            v33 = *((_QWORD **)v31 + 3);
            if ( *((_DWORD *)v31 + 8) > 0x40u )
              v33 = (_QWORD *)*v33;
            ++v32;
            sub_2053F70(&ptr, (__int16)v33);
            if ( v8 == v32 )
              break;
            v31 = *v32;
            if ( **v32 != 5 )
              goto LABEL_49;
          }
          v31 = *a2;
        }
        v51 = sub_20CB0D0(v31);
        v52 = n[0];
        v53 = (char *)ptr;
        v54 = sub_20C4330(v51, 16);
        v55 = (__int64 **)sub_20C3520(v54, v52);
        v10 = sub_2056F70(v53, 2 * v52, v55, v56, v57, v58);
      }
      else
      {
        if ( *v6 != 6 )
          return 0;
        v23 = *(_BYTE *)(v16 + 8);
        if ( v23 > 1u )
        {
          if ( v23 == 2 )
          {
            ptr = &n[1];
            n[0] = 0x1000000000LL;
            if ( v8 != a2 )
            {
              v48 = *a2;
              if ( **a2 != 6 )
                return v10;
              v49 = a2;
              while ( 1 )
              {
                sub_1F6DD40((__int64)&v71, (_QWORD *)v48 + 3, v15);
                v50 = -1;
                if ( !sub_9EC640((__int64)&v71, 0xFFFFFFFFFFFFFFFFLL) )
                {
                  v50 = (int)v71;
                  if ( v72 > 0x40 )
                    v50 = *(_DWORD *)v71;
                }
                sub_9B7040((__int64)&ptr, v50);
                if ( v72 > 0x40 && v71 )
                  operator delete[](v71);
                if ( v8 == ++v49 )
                  break;
                v48 = *v49;
                if ( **v49 != 6 )
                {
LABEL_62:
                  v10 = 0;
                  goto LABEL_63;
                }
              }
            }
            v10 = sub_20573D0(*((_QWORD *)*a2 + 1), (char *)ptr, LODWORD(n[0]));
            goto LABEL_63;
          }
          if ( v23 == 3 )
          {
            ptr = &n[1];
            n[0] = 0x1000000000LL;
            if ( v8 != a2 )
            {
              v34 = *a2;
              if ( **a2 != 6 )
                return v10;
              v35 = a2;
              while ( 1 )
              {
                sub_1F6DD40((__int64)&v71, (_QWORD *)v34 + 3, v15);
                v36 = -1;
                if ( !sub_9EC640((__int64)&v71, 0xFFFFFFFFFFFFFFFFLL) )
                {
                  v36 = (__int64)v71;
                  if ( v72 > 0x40 )
                    v36 = *(_QWORD *)v71;
                }
                sub_9B9C90((__int64)&ptr, v36);
                if ( v72 > 0x40 && v71 )
                  operator delete[](v71);
                if ( v8 == ++v35 )
                  break;
                v34 = *v35;
                if ( **v35 != 6 )
                  goto LABEL_62;
              }
            }
            v10 = sub_20573A0(*((_QWORD *)*a2 + 1), (char *)ptr, LODWORD(n[0]));
            goto LABEL_63;
          }
          return 0;
        }
        ptr = v75;
        *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
        if ( v8 == a2 )
        {
          v69 = 0;
          v68 = v75;
        }
        else
        {
          v24 = *a2;
          if ( **a2 != 6 )
            return v10;
          v25 = a2;
          while ( 1 )
          {
            sub_1F6DD40((__int64)&v71, (_QWORD *)v24 + 3, v15);
            v26 = -1;
            if ( !sub_9EC640((__int64)&v71, 0xFFFFFFFFFFFFFFFFLL) )
            {
              if ( v72 <= 0x40 )
                v26 = (__int16)v71;
              else
                v26 = *(_WORD *)v71;
            }
            sub_2053F70(&ptr, v26);
            if ( v72 > 0x40 && v71 )
              operator delete[](v71);
            if ( v8 == ++v25 )
              break;
            v24 = *v25;
            if ( **v25 != 6 )
            {
LABEL_49:
              v10 = 0;
              goto LABEL_50;
            }
          }
          v68 = (char *)ptr;
          v69 = n[0];
        }
        v10 = sub_2057400(*((_QWORD *)*a2 + 1), v68, v69);
      }
LABEL_50:
      v27 = ptr;
      if ( ptr == v75 )
        return v10;
LABEL_51:
      free(v27);
      return v10;
    }
    return sub_2056DA0(a1, (__int64)a2, a3, a4, a5, a6);
  }
  if ( v8 != a2 )
  {
    v11 = a2;
    while ( ++v11 != v8 )
    {
      if ( v6 != *v11 )
        goto LABEL_5;
    }
  }
  return sub_2058290(a1, (__int64)a2, a3, a4, a5, a6);
}
