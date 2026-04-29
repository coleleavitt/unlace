__int64 __fastcall sub_3D3880(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rbx
  const char *v7; // rdx
  const char *v8; // rsi
  const char *v9; // rsi
  unsigned int v10; // eax
  unsigned int v11; // r13d
  void *i; // rax
  __int64 v13; // rbx
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // r15
  void *v17; // rsi
  __int64 v18; // r15
  bool v19; // dl
  char *v20; // rax
  _BYTE *v21; // r10
  _BYTE *v22; // rbx
  __int64 *v23; // rdi
  __int64 v24; // r12
  __int64 v25; // rbx
  __int64 *v26; // rbp
  __int64 v27; // rdi
  __int64 v29; // r9
  size_t v30; // rbx
  size_t v31; // r11
  __int64 v32; // rsi
  size_t v33; // rdx
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // r9
  __int64 *v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v48; // rax
  unsigned __int8 v49; // dl
  _BYTE *v50; // rbp
  char *v51; // rdx
  __int64 v52; // rdx
  __int64 *v53; // rbx
  __int64 v54; // rdi
  signed __int64 v55; // rdx
  char *v56; // rax
  signed __int64 v57; // rbx
  size_t v58; // r15
  __m128i v59; // xmm1
  __int64 *v60; // rax
  __m128i v61; // xmm0
  int v62; // [rsp+Ch] [rbp-12Ch]
  __int64 v64; // [rsp+20h] [rbp-118h]
  __int64 v65; // [rsp+20h] [rbp-118h]
  size_t v66; // [rsp+20h] [rbp-118h]
  size_t v67; // [rsp+28h] [rbp-110h]
  _BYTE *v68; // [rsp+30h] [rbp-108h]
  __int64 v69; // [rsp+38h] [rbp-100h]
  __int64 v70; // [rsp+48h] [rbp-F0h] BYREF
  void *src[2]; // [rsp+50h] [rbp-E8h] BYREF
  __int64 *v72; // [rsp+60h] [rbp-D8h] BYREF
  __m128i v73; // [rsp+68h] [rbp-D0h] BYREF
  char *v74; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v75; // [rsp+88h] [rbp-B0h]
  __int64 v76; // [rsp+A0h] [rbp-98h] BYREF
  __int128 v77; // [rsp+A8h] [rbp-90h]
  unsigned __int64 v78; // [rsp+C0h] [rbp-78h] BYREF
  __int128 v79; // [rsp+C8h] [rbp-70h]
  void *dest; // [rsp+E0h] [rbp-58h] BYREF
  __int128 v81; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v82; // [rsp+F8h] [rbp-40h]

  v5 = a3;
  v82 = __readfsqword(0x28u);
  v73 = 0;
  v72 = nullptr;
  v74 = nullptr;
  v75 = 0;
  v74 = (char *)qvector_reserve(&v74, 0, 16, 1);
  *(_QWORD *)&v75 = 16;
  strcpy(v74, "$ mbui.comments");
  switch ( v5 )
  {
    case 0LL:
      v7 = "MMAT_ZERO";
      break;
    case 1LL:
      v7 = "MMAT_GENERATED";
      break;
    case 2LL:
      v7 = "MMAT_PREOPTIMIZED";
      break;
    case 3LL:
      v7 = "MMAT_LOCOPT";
      break;
    case 4LL:
      v7 = "MMAT_CALLS";
      break;
    case 5LL:
      v7 = "MMAT_GLBOPT1";
      break;
    case 6LL:
      v7 = "MMAT_GLBOPT2";
      break;
    case 7LL:
      v7 = "MMAT_GLBOPT3";
      break;
    case 8LL:
      v7 = "MMAT_LVARS";
      break;
    case 9LL:
      v7 = "MMAT_FINAL";
      break;
    default:
      v7 = "???";
      break;
  }
  sub_F4410((__int64 *)&v74, (__int64)".%s", v7);
  v8 = s1;
  if ( (_QWORD)v75 )
    v8 = v74;
  netnode_check(&dest, v8, 0, 0);
  if ( dest == (void *)-1LL )
  {
    v11 = 1;
  }
  else
  {
    v9 = s1;
    if ( (_QWORD)v75 )
      v9 = v74;
    netnode_check(&v70, v9, 0, 0);
    v76 = 0;
    v77 = 0;
    if ( netnode_qsupstr(v70, &v76, a2, 339) <= 0 )
    {
      v11 = 0;
    }
    else
    {
      v78 = 0;
      v79 = 0;
      LOBYTE(v10) = sub_3C9F70((__int64 *)&v78, &v76);
      v11 = v10;
      if ( (_BYTE)v10 )
      {
        *(__m128i *)src = _mm_unpacklo_epi64((__m128i)v78, (__m128i)(v78 + (unsigned __int64)v79));
        v62 = unpack_dd(src);
        if ( (unsigned int)(v62 - 1) <= 1 )
        {
LABEL_11:
          for ( i = src[1]; ; i = src[1] )
          {
LABEL_12:
            if ( src[0] >= i )
            {
              v59 = _mm_loadu_si128(&v73);
              v60 = *(__int64 **)a1;
              v61 = _mm_loadu_si128((const __m128i *)(a1 + 8));
              *(_QWORD *)a1 = v72;
              *(__m128i *)(a1 + 8) = v59;
              v72 = v60;
              v73 = v61;
              goto LABEL_24;
            }
            v13 = operator new(0x38u);
            v14 = v73.m128i_u64[1];
            *(_QWORD *)v13 = 0;
            *(_QWORD *)(v13 + 24) = -1;
            *(_DWORD *)(v13 + 32) = 0;
            *(_OWORD *)(v13 + 8) = 0;
            *(_BYTE *)(v13 + 48) = 0;
            *(_QWORD *)(v13 + 36) = 0xFFFFFFFF00000000LL;
            v15 = v73.m128i_i64[0];
            if ( v14 < v73.m128i_i64[0] + 1 )
            {
              v64 = v14;
              v16 = qvector_reserve(&v72, 0, v73.m128i_i64[0] + 1, 8);
              v42 = v73.m128i_i64[1];
              v43 = v72;
              v73.m128i_i64[1] = v64;
              v44 = v73.m128i_i64[0] - 1;
              if ( v73.m128i_i64[0] - 1 >= 0 )
              {
                v45 = v16;
                do
                {
                  v46 = *v43;
                  v45 += 8;
                  ++v43;
                  *(_QWORD *)(v45 - 8) = v46;
                }
                while ( v44-- != 0 );
                v43 = v72;
              }
              v65 = v42;
              qfree(v43);
              v15 = v73.m128i_i64[0];
              v72 = (__int64 *)v16;
              v73.m128i_i64[1] = v65;
            }
            else
            {
              v16 = (__int64)v72;
            }
            *(_QWORD *)(v16 + 8 * v15) = v13;
            v17 = src[1];
            v18 = v72[v73.m128i_i64[0]++];
            v19 = 0;
            v20 = (char *)src[0];
            if ( src[0] < src[1] )
            {
              v19 = *(_BYTE *)src[0] == 1;
              v20 = (char *)src[0] + 1;
            }
            src[0] = v20;
            *(_BYTE *)(v18 + 48) = v19;
            if ( v62 == 2 )
              break;
            v34 = unpack_dq(src, v17);
            v35 = unpack_dq(src, src[1]);
            *(_QWORD *)(v18 + 24) = v35;
            v36 = v35;
            *(_DWORD *)(v18 + 40) = -1;
            v37 = *(unsigned int *)(a4 + 64);
            if ( (int)v37 <= 0 )
              goto LABEL_23;
            v38 = *(_QWORD *)(a4 + 528);
            v39 = (unsigned int)(v37 - 1);
            v40 = 0;
            while ( *(_QWORD *)(*(_QWORD *)(v38 + 8 * v40) + 32LL) != v34 )
            {
              if ( v39 == v40 )
                goto LABEL_23;
              if ( v37 == ++v40 )
                sub_3C7700(0.0, v39, v38);
            }
            *(_DWORD *)(v18 + 40) = v40;
            if ( v36 != -1 )
            {
              if ( src[0] < src[1] )
              {
                v49 = *(_BYTE *)src[0]++;
                *(_DWORD *)(v18 + 32) = v49;
                if ( v49 > 0x48u )
                  goto LABEL_23;
              }
              else
              {
                *(_DWORD *)(v18 + 32) = 0;
              }
              v41 = unpack_dd(src);
              if ( v41 <= 0 )
                goto LABEL_23;
              *(_DWORD *)(v18 + 36) = v41 - 1;
              goto LABEL_20;
            }
            unpack_dd(src);
            unpack_dd(src);
            v50 = src[0];
            i = src[1];
            dest = nullptr;
            v81 = 0;
            v51 = (char *)src[0];
            do
            {
              if ( v51 >= src[1] )
                goto LABEL_79;
              ++v51;
            }
            while ( *(v51 - 1) );
            src[0] = v51;
            if ( !v50 )
            {
LABEL_79:
              v52 = v73.m128i_i64[0];
              if ( !v73.m128i_i64[0] )
                goto LABEL_12;
LABEL_80:
              v73.m128i_i64[0] = v52 - 1;
              v53 = (__int64 *)v72[v52 - 1];
              if ( v53 )
              {
                v54 = *v53;
                if ( *v53 )
                {
                  v53[1] = 0;
                  qfree(v54);
                }
                operator delete(v53, 0x38u);
              }
              goto LABEL_84;
            }
            v55 = v51 - v50;
            v56 = nullptr;
            v57 = v55;
            v58 = v55 - 1;
            if ( v55 )
            {
              v56 = (char *)qvector_reserve(&dest, 0, v55, 1);
              dest = v56;
            }
            *(_QWORD *)&v81 = v57;
            v56[v57 - 1] = 0;
            memmove(dest, v50, v58);
            v52 = v73.m128i_i64[0];
            if ( v73.m128i_i64[0] )
              goto LABEL_80;
LABEL_84:
            if ( !dest )
              goto LABEL_11;
            *(_QWORD *)&v81 = 0;
            qfree(dest);
          }
          sub_783D0(v18 + 24, (__int64)src, a2);
          if ( *(_QWORD *)(v18 + 24) == -1 || *(int *)(v18 + 32) > 72 )
            goto LABEL_23;
LABEL_20:
          v21 = src[0];
          v22 = src[0];
          while ( v22 < src[1] )
          {
            if ( !*v22++ )
            {
              src[0] = v22;
              if ( v21 )
              {
                v29 = *(_QWORD *)(v18 + 8);
                v30 = v22 - v21 - 1;
                v31 = v30;
                if ( v29 )
                {
                  --v29;
                  v31 = v30 + v29;
                }
                v32 = *(_QWORD *)v18;
                v33 = v31 + 1;
                if ( *(_QWORD *)(v18 + 16) < v31 + 1 )
                {
                  v69 = v29;
                  v68 = v21;
                  v67 = v31;
                  v66 = v31 + 1;
                  v48 = qvector_reserve(v18, v32, v33, 1);
                  v29 = v69;
                  v21 = v68;
                  *(_QWORD *)v18 = v48;
                  v32 = v48;
                  v31 = v67;
                  v33 = v66;
                }
                *(_QWORD *)(v18 + 8) = v33;
                *(_BYTE *)(v32 + v31) = 0;
                memmove((void *)(v29 + *(_QWORD *)v18), v21, v30);
                if ( *(_QWORD *)(v18 + 8) > 1u )
                  goto LABEL_11;
              }
              break;
            }
          }
        }
      }
LABEL_23:
      v11 = 0;
LABEL_24:
      if ( v78 )
      {
        *(_QWORD *)&v79 = 0;
        qfree(v78);
      }
    }
    if ( v76 )
    {
      *(_QWORD *)&v77 = 0;
      qfree(v76);
    }
  }
  if ( v74 )
  {
    *(_QWORD *)&v75 = 0;
    qfree(v74);
  }
  v23 = v72;
  if ( v72 )
  {
    v24 = v73.m128i_i64[0];
    if ( v73.m128i_i64[0] )
    {
      v25 = 0;
      do
      {
        v26 = (__int64 *)v23[v25];
        if ( v26 )
        {
          v27 = *v26;
          if ( *v26 )
          {
            v26[1] = 0;
            qfree(v27);
          }
          operator delete(v26, 0x38u);
          v23 = v72;
        }
        ++v25;
      }
      while ( v24 != v25 );
    }
    v73.m128i_i64[0] = 0;
    qfree(v23);
  }
  return v11;
}
