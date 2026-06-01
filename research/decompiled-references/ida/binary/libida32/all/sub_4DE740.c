__int64 __fastcall sub_4DE740(_QWORD *a1, unsigned __int64 *a2, __int64 *a3, unsigned int a4)
{
  int flags; // ebx
  unsigned int not_tail; // eax
  __int64 v11; // rdi
  unsigned int v12; // ebx
  __int64 v13; // rax
  __int64 (*v14)(); // rdx
  unsigned __int64 (__fastcall *v15)(__int64, int); // rax
  __int64 v16; // xmm0_8
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  char v23; // r15
  __int64 (*v24)(); // rdx
  unsigned __int8 v25; // al
  char v26; // dl
  char v27; // r15
  char v28; // al
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // rsi
  unsigned int *v33; // rax
  unsigned __int8 v34; // al
  char v35; // al
  int v36; // r8d
  unsigned int v37; // eax
  __int64 v38; // rdi
  __int64 (*v39)(); // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // r12
  unsigned __int64 v42; // r13
  unsigned __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // r14
  __int64 *v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rsi
  bool v54; // cf
  __int64 v55; // rax
  unsigned __int64 v56; // r9
  __int64 v57; // rcx
  unsigned __int64 v58; // rax
  __int64 *v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rsi
  unsigned int *v63; // rax
  __int64 v64; // rax
  unsigned __int64 v65; // rbx
  __int64 *v66; // rdi
  __int64 v67; // rax
  unsigned __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rax
  void *v71; // rdi
  __int64 v72; // rcx
  __int64 v73; // rdx
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // r9
  __int64 *v76; // rsi
  __int64 v77; // rax
  __int64 v78; // rdi
  __int64 v79; // rax
  __int64 *v80; // rdi
  unsigned __int64 v81; // r14
  __int64 v82; // rdx
  __int64 *v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rsi
  int v86; // [rsp+0h] [rbp-58h]
  unsigned __int64 v87; // [rsp+0h] [rbp-58h]
  unsigned __int64 v88; // [rsp+0h] [rbp-58h]
  unsigned __int64 v89; // [rsp+0h] [rbp-58h]
  unsigned __int64 v90; // [rsp+0h] [rbp-58h]
  unsigned __int64 v91; // [rsp+8h] [rbp-50h]
  unsigned __int64 v92; // [rsp+8h] [rbp-50h]
  _QWORD v93[9]; // [rsp+10h] [rbp-48h] BYREF

  v93[1] = __readfsqword(0x28u);
  flags = get_flags_ex(a4, 4);
  if ( (flags & 0x1000) != 0 )
  {
    v20 = a3[1];
    v21 = *a3;
    if ( a3[2] < (unsigned __int64)(v20 + 1) )
    {
      v22 = qvector_reserve(a3, v21, v20 + 1, 4);
      *a3 = v22;
      v21 = v22;
      v20 = a3[1];
    }
    *(_DWORD *)(v21 + 4 * v20) = a4;
    ++a3[1];
  }
  if ( (flags & 0x10000) == 0 )
    return 0;
  not_tail = prev_not_tail(a4);
  v11 = a1[3];
  v12 = not_tail;
  if ( !v11 )
  {
    if ( !get_fchunk(not_tail) )
      goto LABEL_6;
    return 0;
  }
  if ( (int)get_func_chunknum(v11, not_tail) < 0 )
    return 0;
LABEL_6:
  v13 = *a1;
  v14 = *(__int64 (**)())(*a1 + 24LL);
  if ( v14 != sub_4DC6C0 )
  {
    v23 = ((__int64 (__fastcall *)(_QWORD *, _QWORD))v14)(a1, a4);
    v13 = *a1;
    v24 = *(__int64 (**)())(*a1 + 24LL);
    if ( v24 != sub_4DC6C0 )
    {
      v25 = ((__int64 (__fastcall *)(_QWORD *, _QWORD))v24)(a1, v12);
      v26 = v25 >> 4;
      if ( v25 >> 4 != 1 )
      {
        v27 = v23 & 0xF;
        v28 = v25 & 0xF;
        if ( v27 != v28 && v28 != 14 )
        {
          if ( v26 != 2 )
          {
            v29 = a2[1];
            v30 = *a2;
            v93[0] = v12 | 0xFFFFFFFF00000000LL;
            v31 = a2[2];
            v32 = v29 + 1;
            if ( (unsigned __int64)v93 < v30 || (unsigned __int64)v93 >= v30 + 8 * v31 )
            {
              if ( v31 < v32 )
              {
                v87 = a2[2];
                v55 = qvector_reserve(a2, 0, v29 + 1, 8);
                v56 = a2[2];
                v57 = v55;
                v58 = a2[1];
                v59 = (__int64 *)*a2;
                a2[2] = v87;
                v60 = v58 - 1;
                if ( v60 >= 0 )
                {
                  v61 = v57;
                  do
                  {
                    v62 = *v59;
                    v61 += 8;
                    ++v59;
                    *(_QWORD *)(v61 - 8) = v62;
                    v54 = v60-- == 0;
                  }
                  while ( !v54 );
                  v59 = (__int64 *)*a2;
                }
                v91 = v56;
                v88 = v57;
                qfree(v59);
                v30 = v88;
                v29 = a2[1];
                *a2 = v88;
                a2[2] = v91;
              }
              *(_QWORD *)(v30 + 8 * v29) = v93[0];
            }
            else
            {
              if ( v31 < v32 )
              {
                v89 = a2[2];
                v70 = qvector_reserve(a2, 0, v29 + 1, 8);
                v71 = (void *)*a2;
                v72 = v70;
                v73 = v70;
                v74 = a2[1];
                v75 = a2[2];
                v76 = (__int64 *)*a2;
                a2[2] = v89;
                v77 = v74 - 1;
                if ( v77 >= 0 )
                {
                  do
                  {
                    v78 = *v76;
                    v73 += 8;
                    ++v76;
                    *(_QWORD *)(v73 - 8) = v78;
                    v54 = v77-- == 0;
                  }
                  while ( !v54 );
                  v71 = (void *)*a2;
                }
                v92 = v75;
                v90 = v72;
                qfree(v71);
                v30 = v90;
                v29 = a2[1];
                *a2 = v90;
                a2[2] = v92;
              }
              v33 = (unsigned int *)(v30 + 8 * v29);
              *v33 = v12;
              v33[1] = -1;
            }
            ++a2[1];
          }
          while ( 1 )
          {
            v36 = get_flags_ex(v12, 4);
            if ( (v36 & 0x1000) != 0 )
            {
              v44 = a3[1];
              v45 = *a3;
              if ( a3[2] < (unsigned __int64)(v44 + 1) )
              {
                v86 = v36;
                v46 = qvector_reserve(a3, v45, v44 + 1, 4);
                v36 = v86;
                *a3 = v46;
                v45 = v46;
                v44 = a3[1];
              }
              *(_DWORD *)(v45 + 4 * v44) = v12;
              ++a3[1];
            }
            if ( (v36 & 0x10000) == 0 )
              break;
            v37 = prev_not_tail(v12);
            v38 = a1[3];
            v12 = v37;
            if ( v38 )
            {
              if ( (int)get_func_chunknum(v38, v37) < 0 )
                return 1;
            }
            else if ( get_fchunk(v37) )
            {
              return 1;
            }
            v39 = *(__int64 (**)())(*a1 + 24LL);
            if ( v39 != sub_4DC6C0 )
            {
              v34 = ((__int64 (__fastcall *)(_QWORD *, _QWORD))v39)(a1, v12);
              if ( v34 >> 4 != 1 )
              {
                v35 = v34 & 0xF;
                if ( v27 != v35 && v35 != 14 )
                  continue;
              }
            }
            v40 = a2[1];
            v41 = *a2;
            v93[0] = v12 | 0xFFFFFFFF00000000LL;
            v42 = a2[2];
            v43 = v40 + 1;
            if ( (unsigned __int64)v93 >= v41 && (unsigned __int64)v93 < v41 + 8 * v42 )
            {
              if ( v42 < v43 )
              {
                v79 = qvector_reserve(a2, 0, v40 + 1, 8);
                v80 = (__int64 *)*a2;
                v81 = a2[2];
                a2[2] = v42;
                v41 = v79;
                v82 = v79;
                v83 = v80;
                v84 = a2[1] - 1;
                if ( v84 >= 0 )
                {
                  do
                  {
                    v85 = *v83;
                    v82 += 8;
                    ++v83;
                    *(_QWORD *)(v82 - 8) = v85;
                    v54 = v84-- == 0;
                  }
                  while ( !v54 );
                  v80 = (__int64 *)*a2;
                }
                qfree(v80);
                *a2 = v41;
                v40 = a2[1];
                a2[2] = v81;
              }
              v63 = (unsigned int *)(v41 + 8 * v40);
              *v63 = v12;
              v63[1] = -1;
            }
            else
            {
              if ( v42 < v43 )
              {
                v64 = qvector_reserve(a2, 0, v40 + 1, 8);
                v65 = a2[2];
                v66 = (__int64 *)*a2;
                a2[2] = v42;
                v41 = v64;
                v67 = a2[1] - 1;
                if ( v67 >= 0 )
                {
                  v68 = v41;
                  do
                  {
                    v69 = *v66;
                    v68 += 8LL;
                    ++v66;
                    *(_QWORD *)(v68 - 8) = v69;
                    v54 = v67-- == 0;
                  }
                  while ( !v54 );
                  v66 = (__int64 *)*a2;
                }
                qfree(v66);
                *a2 = v41;
                v40 = a2[1];
                a2[2] = v65;
              }
              *(_QWORD *)(v41 + 8 * v40) = v93[0];
            }
            ++a2[1];
            return 1;
          }
          return 1;
        }
      }
      v13 = *a1;
    }
  }
  v15 = *(unsigned __int64 (__fastcall **)(__int64, int))(v13 + 16);
  if ( v15 == sub_4DC6B0 )
    v16 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v12), _mm_cvtsi32_si128(0xFFFFFFFF)).m128i_u64[0];
  else
    v16 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, __int64))v15)(a1, v12, 21);
  v17 = a2[1];
  v18 = a2[2];
  if ( v18 < v17 + 1 )
  {
    v47 = qvector_reserve(a2, 0, v17 + 1, 8);
    v48 = a2[1];
    v49 = a2[2];
    a2[2] = v18;
    v50 = (__int64 *)*a2;
    v19 = v47;
    v51 = v48 - 1;
    if ( v51 >= 0 )
    {
      v52 = v47;
      do
      {
        v53 = *v50;
        v52 += 8;
        ++v50;
        *(_QWORD *)(v52 - 8) = v53;
        v54 = v51-- == 0;
      }
      while ( !v54 );
      v50 = (__int64 *)*a2;
    }
    qfree(v50);
    *a2 = v19;
    v17 = a2[1];
    a2[2] = v49;
  }
  else
  {
    v19 = *a2;
  }
  *(_QWORD *)(v19 + 8 * v17) = v16;
  ++a2[1];
  return 1;
}

