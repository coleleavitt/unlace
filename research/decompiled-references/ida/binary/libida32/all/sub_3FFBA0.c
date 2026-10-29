__int64 __fastcall sub_3FFBA0(_DWORD a1, _QWORD *a2, __int64 a3, int a4, char a5, __int64 a6, char a7)
{
  char v8; // r12
  __int64 tinfo_property; // r13
  int v12; // ecx
  bool v13; // zf
  __int64 v14; // r14
  char v15; // al
  __int64 v16; // r15
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rdi
  int v20; // ecx
  int v21; // ecx
  __int64 v22; // r10
  __int64 v23; // r9
  __int64 v24; // rsi
  __int64 v25; // rsi
  char v26; // cl
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // rbp
  int v32; // ecx
  int v33; // ecx
  __int64 v34; // rsi
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r12
  __int64 v41; // r15
  int v42; // eax
  __int64 v43; // rbx
  __int64 v44; // rax
  __m128i v45; // xmm0
  __int64 v46; // rax
  int *v47; // r14
  int *v48; // r12
  int *v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  void (__fastcall *v52)(__m128i **, const __m128i **, int); // rcx
  __int64 v54; // rax
  __int64 v55; // rdx
  unsigned __int8 v56; // al
  __int64 v57; // rax
  unsigned __int8 v58; // al
  __int64 v59; // r15
  __int64 v60; // rbx
  int v61; // eax
  __int64 v62; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v63; // [rsp+10h] [rbp-98h] BYREF
  __int64 v64; // [rsp+18h] [rbp-90h] BYREF
  __int64 v65; // [rsp+20h] [rbp-88h] BYREF
  __int64 v66; // [rsp+28h] [rbp-80h] BYREF
  __int64 v67; // [rsp+30h] [rbp-78h] BYREF
  __int64 v68; // [rsp+38h] [rbp-70h] BYREF
  __int128 v69; // [rsp+40h] [rbp-68h] BYREF
  __m128i v70; // [rsp+50h] [rbp-58h]
  unsigned __int64 v71; // [rsp+68h] [rbp-40h]

  v8 = a5;
  v62 = a3;
  v71 = __readfsqword(0x28u);
  if ( (get_tinfo_property(*a2, 2) & 0x3F) != 0x2D )
    return -1;
  if ( a4 > 8 )
    return -1;
  tinfo_property = get_tinfo_property(*a2, 310);
  if ( !tinfo_property )
    return -1;
  v12 = 8 * a4;
  v13 = a5 == -1;
  v14 = -1;
  if ( v13 )
    v8 = a4 > 8;
  if ( (unsigned __int64)v12 <= 0x3F )
    v14 = (1LL << v12) - 1;
  v15 = *(_BYTE *)(tinfo_property + 52);
  v16 = v14 & v62;
  v62 &= v14;
  if ( (v15 & 0x10) == 0 )
  {
    v17 = *(_QWORD *)(tinfo_property + 8);
    if ( v17 )
    {
      v18 = v15 & 7;
      if ( v18 )
      {
        v19 = v16;
        v20 = 1 << (v18 - 1);
      }
      else
      {
        v56 = getinf(61);
        v17 = *(_QWORD *)(tinfo_property + 8);
        v19 = v62;
        v20 = v56;
      }
      v21 = 8 * v20;
      v22 = v16;
      if ( v21 <= 63 )
      {
        v22 = v16 | -(1LL << v21);
        v16 &= (1LL << v21) - 1;
      }
      v23 = *(_QWORD *)tinfo_property;
      v24 = -56;
      if ( v17 != -1 )
        v24 = 56 * v17;
      v25 = v23 + v24;
      if ( v23 != v25 )
      {
        v26 = v8;
        v27 = *(_QWORD *)tinfo_property;
        while ( 1 )
        {
          while ( 1 )
          {
            v28 = *(_QWORD *)(v27 + 48);
            if ( v22 == v28 || v16 == v28 )
              break;
            v27 += 56;
            if ( v25 == v27 )
              goto LABEL_23;
          }
          if ( !v26 )
            break;
          v27 += 56;
          --v26;
          if ( v25 == v27 )
            goto LABEL_23;
        }
        v54 = v27 - v23;
        v55 = 0x6DB6DB6DB6DB6DB7LL * (v54 >> 3);
        if ( v54 >= 0 )
          goto LABEL_56;
      }
    }
    else
    {
      v19 = v16;
    }
LABEL_23:
    v29 = extend_sign(v19, (unsigned int)a4, 1);
    v30 = *(_QWORD *)(tinfo_property + 8);
    v31 = v29;
    if ( v30 )
    {
      if ( (*(_BYTE *)(tinfo_property + 52) & 7) != 0 )
      {
        v32 = 1 << ((*(_BYTE *)(tinfo_property + 52) & 7) - 1);
      }
      else
      {
        v58 = getinf(61);
        v30 = *(_QWORD *)(tinfo_property + 8);
        v32 = v58;
      }
      v33 = 8 * v32;
      v34 = v31;
      if ( v33 <= 63 )
      {
        v34 = v31 | -(1LL << v33);
        v31 &= (1LL << v33) - 1;
      }
      v35 = *(_QWORD *)tinfo_property;
      v36 = *(_QWORD *)tinfo_property - 56LL;
      if ( v30 == -1 || (v36 = v35 + 56 * v30, v35 != v36) )
      {
        v37 = *(_QWORD *)tinfo_property;
        while ( 1 )
        {
          while ( 1 )
          {
            v38 = *(_QWORD *)(v37 + 48);
            if ( v34 == v38 || v31 == v38 )
              break;
            v37 += 56;
            if ( v36 == v37 )
              goto LABEL_36;
          }
          if ( !v8 )
            break;
          v37 += 56;
          --v8;
          if ( v36 == v37 )
            goto LABEL_36;
        }
        v57 = v37 - v35;
        v55 = 0x6DB6DB6DB6DB6DB7LL * (v57 >> 3);
        if ( v57 >= 0 )
        {
          v19 = v62;
LABEL_56:
          v13 = *(_QWORD *)(a6 + 16) == 0;
          v63 = v55;
          v64 = v19;
          v65 = -1;
          if ( v13 )
LABEL_74:
            std::__throw_bad_function_call();
          return (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64 *, __int64 *))(a6 + 24))(
                   a6,
                   tinfo_property,
                   &v63,
                   &v64,
                   &v65);
        }
      }
LABEL_36:
      if ( a7 )
      {
        v39 = v30 - 1;
        if ( v30 - 1 >= 0 )
        {
          while ( 1 )
          {
            v41 = *(_QWORD *)(v35 + 56 * v39 + 48) & v14;
            if ( v41 && (v41 & ~v62) == 0 )
            {
              v13 = *(_QWORD *)(a6 + 16) == 0;
              v66 = v39;
              v67 = v41;
              v68 = v41;
              if ( v13 )
                goto LABEL_74;
              v42 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64 *, __int64 *))(a6 + 24))(
                      a6,
                      tinfo_property,
                      &v66,
                      &v67,
                      &v68);
              if ( v42 )
                return v42;
              v62 &= ~v41;
              if ( !v62 )
                return 0;
            }
            if ( v39-- == 0 )
              return 0;
            v35 = *(_QWORD *)tinfo_property;
          }
        }
      }
    }
    return 0;
  }
  v70 = 0u;
  v69 = 0;
  v44 = operator new(0x28u);
  *(_QWORD *)v44 = tinfo_property;
  v45 = _mm_loadl_epi64((const __m128i *)&off_2AFDAD0);
  *(_QWORD *)(v44 + 8) = &v62;
  *(_BYTE *)(v44 + 16) = v8;
  *(_QWORD *)(v44 + 24) = a6;
  *(_QWORD *)(v44 + 32) = v14;
  *(_QWORD *)&v69 = v44;
  v46 = *(_QWORD *)(tinfo_property + 32);
  v70 = _mm_unpacklo_epi64(v45, (__m128i)(unsigned __int64)sub_3FF7C0);
  if ( v46 )
  {
    v47 = *(int **)(tinfo_property + 24);
    v48 = &v47[v46];
    if ( v47 != v48 )
    {
      v49 = *(int **)(tinfo_property + 24);
      v50 = 0;
      while ( 1 )
      {
        v51 = *v49;
        if ( !(_DWORD)v51 )
          break;
        ++v49;
        v50 += v51;
        if ( v48 == v49 )
        {
          if ( v50 != *(_QWORD *)(tinfo_property + 8) )
            break;
          v52 = (void (__fastcall *)(__m128i **, const __m128i **, int))sub_3FF290;
          v59 = 0;
          do
          {
            v60 = *v47;
            v68 = v59;
            LODWORD(v67) = v60;
            if ( !v52 )
              std::__throw_bad_function_call();
            v61 = ((__int64 (__fastcall *)(__int128 *, __int64 *, __int64 *))v70.m128i_i64[1])(&v69, &v68, &v67);
            v52 = (void (__fastcall *)(__m128i **, const __m128i **, int))v70.m128i_i64[0];
            if ( v61 )
            {
              v43 = v61;
              goto LABEL_68;
            }
            ++v47;
            v59 += v60;
          }
          while ( v48 != v47 );
          v43 = 0;
LABEL_68:
          if ( !v70.m128i_i64[0] )
            return v43;
          goto LABEL_53;
        }
      }
    }
  }
  v52 = (void (__fastcall *)(__m128i **, const __m128i **, int))sub_3FF290;
  v43 = 0;
LABEL_53:
  v52((__m128i **)&v69, (const __m128i **)&v69, 3);
  return v43;
}

