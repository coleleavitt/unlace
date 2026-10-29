/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40C4C0
// Address: 0x000000000040C4C0

//----- (000000000040C4C0) ----------------------------------------------------
__int64 __fastcall sub_40C4C0(__int64 a1, __m128i **a2)
{
  __m128i *v3; // rdi
  __m128i *v4; // r12
  __m128i *i; // rbp
  __m128i *v6; // rbx
  void *v7; // rdi
  void *v8; // rdi
  int v9; // ebx
  size_t v10; // rax
  size_t v11; // r12
  int v12; // eax
  unsigned __int64 v13; // r12
  __int64 v14; // rbp
  const char *v15; // r14
  _BYTE *v16; // rsi
  unsigned int v17; // eax
  __int64 v18; // rdx
  FILE *v19; // rax
  FILE *v20; // rbp
  __int32 v21; // eax
  int v22; // r12d
  unsigned __int64 v23; // rdx
  size_t v24; // r8
  size_t v25; // r12
  _BYTE *v26; // rsi
  unsigned __int64 v27; // r12
  size_t v28; // r9
  size_t v29; // r8
  size_t v30; // r10
  _BYTE *v31; // rsi
  __int32 v32; // ebp
  const char *v33; // rbp
  size_t v34; // rax
  size_t v35; // r14
  size_t v36; // r12
  int v37; // eax
  unsigned int v38; // ebx
  size_t v40; // rbx
  __m128i *v41; // rax
  unsigned __int64 v42; // rbp
  __m128i *v43; // rcx
  __m128i *v44; // rax
  __int32 v45; // ecx
  __m128i v46; // xmm0
  __int32 v47; // ecx
  void *v48; // rdi
  size_t v49; // rbx
  unsigned __int64 v50; // rbp
  size_t v51; // r12
  _BYTE *v52; // rsi
  void *v53; // rdi
  unsigned __int64 v54; // r14
  size_t v55; // r12
  __m128i *v56; // rcx
  __m128i *v57; // rax
  __m128i *v58; // r14
  __m128i *v59; // rbp
  __int64 v60; // rbp
  __m128i *v61; // r12
  __int64 v62; // rbx
  __m128i v63; // xmm1
  __m128i *v64; // rbp
  __int64 v65; // rdx
  __m128i v66; // xmm0
  __int64 v67; // rdx
  __m128i v68; // xmm0
  void *v69; // rdi
  size_t v71; // r14
  size_t v72; // rbp
  size_t v73; // r14
  _BYTE *v74; // rsi
  void *v75; // [rsp+8h] [rbp-5530h]
  __pid_t v76; // [rsp+14h] [rbp-5524h]
  __m128i v77; // [rsp+18h] [rbp-5520h] BYREF
  __int64 v78; // [rsp+28h] [rbp-5510h]
  unsigned __int64 v79; // [rsp+30h] [rbp-5508h]
  size_t v80; // [rsp+38h] [rbp-5500h]
  __m128i *v81; // [rsp+40h] [rbp-54F8h]
  __m128i *v82; // [rsp+48h] [rbp-54F0h]
  void *ptr; // [rsp+50h] [rbp-54E8h] BYREF
  __int128 v84; // [rsp+58h] [rbp-54E0h]
  unsigned int v85; // [rsp+70h] [rbp-54C8h]
  void *dest; // [rsp+78h] [rbp-54C0h] BYREF
  size_t n[2]; // [rsp+80h] [rbp-54B8h]
  int v88; // [rsp+90h] [rbp-54A8h]
  void *src; // [rsp+98h] [rbp-54A0h] BYREF
  size_t v90[2]; // [rsp+A0h] [rbp-5498h]
  char v91[4]; // [rsp+B0h] [rbp-5488h] BYREF
  char nptr[8228]; // [rsp+B4h] [rbp-5484h] BYREF
  __int64 v93; // [rsp+20D8h] [rbp-3460h]
  int v94; // [rsp+20E4h] [rbp-3454h]
  char s[1024]; // [rsp+40F0h] [rbp-1448h] BYREF
  char v96[4104]; // [rsp+44F0h] [rbp-1048h] BYREF
  unsigned __int64 v97; // [rsp+54F8h] [rbp-40h]

  v78 = a1;
  v97 = __readfsqword(0x28u);
  v76 = getpid();
  v3 = *a2;
  if ( *a2 )
  {
    v4 = a2[1];
    if ( v4 )
    {
      for ( i = nullptr; i != v4; i = (__m128i *)((char *)i + 1) )
      {
        v6 = &v3[4 * (_QWORD)i];
        v7 = (void *)v6[2].m128i_i64[1];
        if ( v7 )
        {
          v6[3].m128i_i64[0] = 0;
          j__free(v7);
        }
        v8 = (void *)v6->m128i_i64[1];
        if ( v8 )
        {
          v6[1].m128i_i64[0] = 0;
          j__free(v8);
        }
        v3 = *a2;
      }
    }
    a2[1] = nullptr;
    j__free(v3);
    *a2 = nullptr;
    a2[2] = nullptr;
  }
  v93 = 0;
  v94 = 0;
  v9 = sub_4801D0("/proc/*", (__int64)v91, 0x4000);
  if ( !v9 )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)(nptr[0] - 48) > 9u )
        goto LABEL_46;
      dest = nullptr;
      *(_OWORD *)n = 0;
      src = nullptr;
      *(_OWORD *)v90 = 0;
      v85 = strtol(nptr, nullptr, 10);
      if ( v76 == v85
        || !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, char *, __int64))(*(_QWORD *)v78 + 624LL))(
              v78,
              v85,
              s,
              1024) )
      {
        if ( src )
        {
          v90[0] = 0;
          j__free(src);
        }
        if ( dest )
        {
          n[0] = 0;
          j__free(dest);
        }
        goto LABEL_46;
      }
      v10 = strlen(s);
      v11 = v10;
      if ( v10 )
      {
        v53 = dest;
        v54 = v10 + 1;
        if ( n[1] < v10 + 1 )
        {
          dest = sub_481540((__int64)&dest, dest, v54, 1u);
          v53 = dest;
        }
        n[0] = v54;
        memmove(v53, s, v11);
        *((_BYTE *)dest + v11) = 0;
      }
      else
      {
        n[0] = 0;
      }
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v78 + 632LL))(v78, v85);
      v88 = v12;
      if ( v12 == 4 )
      {
        v13 = 5;
        v14 = 4;
        v15 = "[32]";
      }
      else if ( v12 == 8 )
      {
        v13 = 5;
        v14 = 4;
        v15 = "[64]";
      }
      else
      {
        v13 = 4;
        v14 = 3;
        v15 = "[x]";
      }
      v16 = src;
      if ( v90[1] < v13 )
      {
        src = sub_481540((__int64)&src, src, v13, 1u);
        v16 = src;
      }
      v90[0] = v13;
      v17 = 0;
      do
      {
        v18 = v17++;
        v16[v18] = v15[v18];
      }
      while ( v17 < (unsigned int)v14 );
      *((_BYTE *)src + v14) = 0;
      v77.m128i_i64[0] = (__int64)v96;
      sub_485490(v96, 4096, "/proc/%u/cmdline", v85);
      v19 = sub_47F960(v96, "r");
      v20 = v19;
      if ( v19 )
      {
        v21 = sub_480BA0(v19, (void *)v77.m128i_i64[0], 4096);
        v77.m128i_i32[2] = v21;
        v22 = v21;
        if ( v21 )
          break;
      }
      v49 = v90[0];
      if ( v90[0] )
      {
        v50 = v90[0] + 1;
        v51 = v90[0];
        v49 = v90[0] - 1;
      }
      else
      {
        v50 = 2;
        v51 = 1;
      }
      v52 = src;
      if ( v90[1] < v50 )
      {
        src = sub_481540((__int64)&src, src, v50, 1u);
        v52 = src;
      }
      v90[0] = v50;
      v52[v51] = 0;
      *((_BYTE *)src + v49) = 32;
      v40 = n[0];
      if ( !n[0] )
      {
        v77.m128i_i64[1] = 0;
        LODWORD(v79) = v85;
        goto LABEL_53;
      }
      v55 = n[0] - 1;
      if ( n[0] != 1 )
      {
        v72 = v90[0];
        v73 = n[0] - 1;
        if ( v90[0] )
        {
          v72 = v90[0] - 1;
          v73 = v55 + v90[0] - 1;
          v40 = n[0] + v90[0] - 1;
        }
        v74 = src;
        if ( v90[1] < v40 )
        {
          src = sub_481540((__int64)&src, src, v40, 1u);
          v74 = src;
        }
        v90[0] = v40;
        v74[v73] = 0;
        memcpy((char *)src + v72, dest, v55);
        v40 = n[0];
LABEL_51:
        LODWORD(v79) = v85;
        if ( !v40 )
        {
          v77.m128i_i64[1] = 0;
          goto LABEL_53;
        }
        goto LABEL_73;
      }
      v40 = 1;
      LODWORD(v79) = v85;
LABEL_73:
      v77.m128i_i64[1] = (__int64)sub_4814F0(v40);
      memcpy((void *)v77.m128i_i64[1], dest, v40);
LABEL_53:
      v75 = nullptr;
      LODWORD(v80) = v88;
      v77.m128i_i64[0] = v90[0];
      if ( v90[0] )
      {
        v71 = v90[0];
        v75 = sub_4814F0(v90[0]);
        memcpy(v75, src, v71);
      }
      v41 = a2[1];
      v42 = (unsigned __int64)a2[2];
      if ( v42 < (unsigned __int64)v41->m128i_u64 + 1 )
      {
        v56 = (__m128i *)sub_481540((__int64)a2, nullptr, (unsigned __int64)v41->m128i_u64 + 1, 0x40u);
        v57 = a2[2];
        v58 = *a2;
        a2[2] = (__m128i *)v42;
        v59 = a2[1];
        v81 = v57;
        v60 = (__int64)&v59[-1].m128i_i64[1] + 7;
        if ( v60 >= 0 )
        {
          v82 = (__m128i *)v40;
          v61 = v56;
          v62 = v60;
          v63 = 0;
          v64 = v56;
          do
          {
            v61->m128i_i32[0] = v58->m128i_i32[0];
            v65 = v58->m128i_i64[1];
            v66 = _mm_loadu_si128(v58 + 1);
            v58->m128i_i64[1] = 0;
            v61->m128i_i64[1] = v65;
            v61[1] = v66;
            LODWORD(v65) = v58[2].m128i_i32[0];
            v58[1] = v63;
            v61[2].m128i_i32[0] = v65;
            v67 = v58[2].m128i_i64[1];
            v68 = _mm_loadu_si128(v58 + 3);
            v58[2].m128i_i64[1] = 0;
            v61[2].m128i_i64[1] = v67;
            v61[3] = v68;
            v69 = (void *)v58->m128i_i64[1];
            v58[3].m128i_i64[1] = 0;
            if ( v69 )
            {
              v58[1].m128i_i64[0] = 0;
              j__free(v69);
              v63 = 0;
            }
            v58 += 4;
            v61 += 4;
          }
          while ( v62-- != 0 );
          v40 = (size_t)v82;
          v58 = *a2;
          v56 = v64;
        }
        v82 = v56;
        j__free(v58);
        v43 = v82;
        a2[2] = v81;
        v41 = a2[1];
        *a2 = v43;
      }
      else
      {
        v43 = *a2;
      }
      v44 = &v43[4 * (_QWORD)v41];
      v45 = v79;
      v44[1] = _mm_unpacklo_epi64((__m128i)v40, (__m128i)v40);
      v46 = _mm_loadl_epi64(&v77);
      v44->m128i_i32[0] = v45;
      v44->m128i_i64[1] = v77.m128i_i64[1];
      v47 = v80;
      v44[3] = _mm_unpacklo_epi64(v46, v46);
      v44[2].m128i_i32[0] = v47;
      v44[2].m128i_i64[1] = (__int64)v75;
      v48 = src;
      a2[1] = (__m128i *)((char *)a2[1] + 1);
      if ( v48 )
      {
        v90[0] = 0;
        j__free(v48);
      }
      if ( dest )
      {
        n[0] = 0;
        j__free(dest);
        v37 = sub_480140((__int64)v91);
        goto LABEL_47;
      }
LABEL_46:
      v37 = sub_480140((__int64)v91);
LABEL_47:
      v9 = v37;
      if ( v37 )
        goto LABEL_48;
    }
    v96[v21] = 0;
    sub_480D70(v20);
    if ( v22 > 0 )
    {
      do
      {
        ptr = nullptr;
        v84 = 0;
        v33 = (const char *)(v77.m128i_i64[0] + v9);
        v34 = strlen(v33);
        v35 = v34 + 1;
        v36 = v34;
        ptr = sub_481540((__int64)&ptr, nullptr, v34 + 1, 1u);
        *(_QWORD *)&v84 = v35;
        memmove(ptr, v33, v36);
        *((_BYTE *)ptr + v36) = 0;
        sub_4777B0((__int64)&ptr);
        v25 = v90[0];
        if ( v90[0] )
        {
          v23 = v90[0] + 1;
          v24 = v90[0];
          v25 = v90[0] - 1;
        }
        else
        {
          v23 = 2;
          v24 = 1;
        }
        v26 = src;
        if ( v90[1] < v23 )
        {
          v80 = v24;
          v79 = v23;
          src = sub_481540((__int64)&src, src, v23, 1u);
          v24 = v80;
          v26 = src;
          v23 = v79;
        }
        v90[0] = v23;
        v26[v24] = 0;
        *((_BYTE *)src + v25) = 32;
        v27 = v84;
        if ( (_QWORD)v84 )
        {
          v28 = v84 - 1;
          if ( (_QWORD)v84 != 1 )
          {
            v29 = v90[0];
            v30 = v84 - 1;
            if ( v90[0] )
            {
              v29 = v90[0] - 1;
              v30 = v28 + v90[0] - 1;
              v27 = v84 + v90[0] - 1;
            }
            v31 = src;
            if ( v90[1] < v27 )
            {
              v81 = (__m128i *)v30;
              v80 = v29;
              v79 = v84 - 1;
              src = sub_481540((__int64)&src, src, v27, 1u);
              v30 = (size_t)v81;
              v31 = src;
              v29 = v80;
              v28 = v79;
            }
            v90[0] = v27;
            v31[v30] = 0;
            memcpy((char *)src + v29, ptr, v28);
          }
        }
        v32 = v9 + strlen(v33) + 1;
        v9 = v32;
        if ( ptr )
        {
          *(_QWORD *)&v84 = 0;
          j__free(ptr);
        }
      }
      while ( v77.m128i_i32[2] > v32 );
    }
    v40 = n[0];
    goto LABEL_51;
  }
LABEL_48:
  v38 = *((_DWORD *)a2 + 2);
  sub_480220((__int64)v91);
  return v38;
}
// 40C6B5: conditional instruction was optimized away because ebp.4 is in (3..4)
