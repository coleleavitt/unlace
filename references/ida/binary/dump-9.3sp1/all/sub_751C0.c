__int64 __fastcall sub_751C0(
        __int64 *a1,
        _QWORD **a2,
        unsigned int a3,
        unsigned __int64 *a4,
        _QWORD *a5,
        _QWORD *a6,
        void (__fastcall ***a7)(_QWORD, _QWORD, _QWORD, __int64),
        __int64 *a8)
{
  char v13; // al
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  _DWORD *v17; // rax
  __int64 v18; // rdx
  __int64 (__fastcall *v19)(__int64, int); // rax
  __int64 v20; // rax
  int v21; // r15d
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 (__fastcall *v24)(__int64, int); // rax
  int v25; // eax
  __int64 (__fastcall *v26)(__int64, int, int); // rax
  int v27; // ecx
  _DWORD *v28; // rax
  __int64 v29; // rdx
  _DWORD *v30; // rax
  _DWORD *v31; // rdx
  unsigned __int64 v32; // rdx
  int v33; // ebx
  __int64 v34; // rax
  _DWORD *v35; // rdx
  int v36; // r14d
  __int64 (__fastcall *v37)(__int64, int); // rax
  int v38; // eax
  __int64 (__fastcall *v39)(__int64, int, int); // rax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rdi
  unsigned int *v43; // r14
  unsigned int v44; // r9d
  unsigned int v45; // r15d
  __int64 v46; // rdi
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rsi
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rdi
  unsigned __int64 v52; // xmm0_8
  __int64 v53; // rax
  __int64 v54; // rax
  size_t v55; // r15
  _DWORD *v56; // rax
  _DWORD *v57; // rsi
  __int64 (__fastcall *v58)(__int64); // rax
  unsigned __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 *v62; // rcx
  __int64 *v63; // rsi
  __int64 v64; // rdi
  __int64 v65; // rax
  int v66; // r14d
  __int64 (__fastcall *v67)(__int64, int); // rax
  int v68; // eax
  __int64 (__fastcall *v69)(__int64, int, int); // rax
  unsigned int v72; // [rsp+20h] [rbp-B0h]
  int v73; // [rsp+30h] [rbp-A0h]
  unsigned int v74; // [rsp+34h] [rbp-9Ch]
  int v75; // [rsp+38h] [rbp-98h]
  unsigned __int64 v76; // [rsp+38h] [rbp-98h]
  _DWORD *v77; // [rsp+40h] [rbp-90h] BYREF
  __int128 v78; // [rsp+48h] [rbp-88h]
  __int64 v79; // [rsp+60h] [rbp-70h] BYREF
  __int128 v80; // [rsp+68h] [rbp-68h]
  unsigned int *v81; // [rsp+80h] [rbp-50h] BYREF
  __int128 v82; // [rsp+88h] [rbp-48h]
  unsigned __int64 v83; // [rsp+98h] [rbp-38h]

  v83 = __readfsqword(0x28u);
  v13 = sub_70670(a1, (__int64)a5, a3, a6);
  v15 = a6[1];
  if ( v13 )
  {
    v65 = 1;
    v66 = 1;
    if ( v15 > 1 )
    {
      do
      {
        (**a7)(a7, a3, *(unsigned int *)(*a6 + 4 * v65), 5);
        v65 = ++v66;
      }
      while ( (unsigned __int64)v66 < a6[1] );
    }
    return 5;
  }
  v77 = nullptr;
  v78 = 0;
  if ( v15 )
  {
    v55 = 4 * v15;
    v76 = v15;
    v56 = (_DWORD *)qalloc_or_throw(4 * v15, (__int64)a5, v14, v15);
    v57 = (_DWORD *)*a6;
    v77 = v56;
    *((_QWORD *)&v78 + 1) = v76;
    memcpy(v56, v57, v55);
    *(_QWORD *)&v78 = v76;
  }
  v75 = sub_71C40((__int64)a1, a8, a3, (__int64 *)&v77, -1);
  v16 = a6[1];
  v17 = (_DWORD *)*a6;
  v18 = *a6 + 4 * v16;
  if ( *a6 != v18 )
  {
    while ( v75 != *v17 )
    {
      if ( (_DWORD *)v18 == ++v17 )
        goto LABEL_11;
    }
    if ( (_DWORD *)v18 != v17 )
    {
      v19 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96);
      if ( v19 == sub_65090 )
      {
        if ( !a1[7] )
          goto LABEL_11;
        v68 = *(_DWORD *)(a1[6] + 24LL * v75 + 8);
      }
      else
      {
        v68 = v19((__int64)a1, v75);
      }
      if ( v68 == 1 )
      {
        v69 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112);
        if ( v69 == sub_650D0 )
        {
          v16 = a6[1];
          v75 = **(_DWORD **)(a1[6] + 24LL * v75);
          goto LABEL_11;
        }
        v75 = v69((__int64)a1, v75, 0);
      }
      v16 = a6[1];
    }
  }
LABEL_11:
  if ( v16 <= 1 )
  {
    if ( !a4[1] )
      goto LABEL_59;
LABEL_74:
    v58 = *(__int64 (__fastcall **)(__int64))(*a1 + 56);
    if ( v58 != sub_65040 )
      v58((__int64)a1);
    v59 = a4[1] >> 1;
    if ( v59 )
    {
      v60 = 8 * a4[1] - 8;
      v61 = 0;
      do
      {
        v62 = (__int64 *)(*a4 + v60);
        v63 = (__int64 *)(*a4 + 8 * v61++);
        v60 -= 8;
        v64 = *v63;
        *v63 = *v62;
        *v62 = v64;
      }
      while ( v59 != v61 );
    }
    goto LABEL_59;
  }
  v20 = 1;
  v73 = 1;
  do
  {
    v21 = 0;
    v22 = *(int *)(*a6 + 4 * v20);
    v74 = v22;
    v23 = 24 * v22;
    while ( 1 )
    {
      v24 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96);
      if ( v24 == sub_65090 )
        break;
      if ( v21 >= (int)v24((__int64)a1, v74) )
        goto LABEL_36;
LABEL_18:
      v26 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112);
      if ( v26 == sub_650D0 )
        v27 = *(_DWORD *)(*(_QWORD *)(a1[6] + v23) + 4LL * v21);
      else
        v27 = v26((__int64)a1, v74, v21);
      if ( v27 == v75 )
        goto LABEL_27;
      v28 = (_DWORD *)*a6;
      v29 = *a6 + 4LL * a6[1];
      if ( *a6 != v29 )
      {
        while ( v27 != *v28 )
        {
          if ( (_DWORD *)v29 == ++v28 )
            goto LABEL_28;
        }
        if ( (_DWORD *)v29 != v28 )
        {
LABEL_26:
          v72 = v27;
          if ( sub_70970(a1, a5, v74, v27, 0) )
          {
            v48 = a4[1];
            v49 = *a4;
            v50 = a4[2];
            v51 = v48 + 1;
            v52 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v74), _mm_cvtsi32_si128(v72)).m128i_u64[0];
            v81 = (unsigned int *)v52;
            if ( (unsigned __int64)&v81 < v49 || (unsigned __int64)&v81 >= v49 + 8 * v50 )
            {
              if ( v50 < v51 )
              {
                v53 = qvector_reserve((__int64)a4, v49, v48 + 1, 8);
                *a4 = v53;
                v49 = v53;
                v48 = a4[1];
              }
              *(_QWORD *)(v49 + 8 * v48) = v81;
            }
            else
            {
              if ( v50 < v51 )
              {
                v54 = qvector_reserve((__int64)a4, v49, v48 + 1, 8);
                *a4 = v54;
                v49 = v54;
                v48 = a4[1];
              }
              *(_QWORD *)(v49 + 8 * v48) = v52;
            }
            ++a4[1];
          }
          goto LABEL_27;
        }
      }
LABEL_28:
      v30 = v77;
      v31 = &v77[v78];
      if ( v77 == v31 )
        goto LABEL_26;
      while ( v27 != *v30 )
      {
        if ( v31 == ++v30 )
          goto LABEL_26;
      }
      if ( v31 == v30 )
        goto LABEL_26;
LABEL_27:
      ++v21;
    }
    v25 = 0;
    if ( a1[7] )
      v25 = *(_DWORD *)(a1[6] + v23 + 8);
    if ( v21 < v25 )
      goto LABEL_18;
LABEL_36:
    ++v73;
    v32 = a6[1];
    v20 = v73;
  }
  while ( v73 < v32 );
  if ( a4[1] )
    goto LABEL_74;
  if ( v32 <= 1 )
  {
LABEL_59:
    v45 = 0;
    goto LABEL_60;
  }
  v33 = 1;
  v34 = 1;
  while ( 1 )
  {
    v35 = (_DWORD *)*a6;
    v79 = 0;
    v80 = 0;
    v36 = v35[v34];
    v37 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96);
    if ( v37 == sub_65090 )
    {
      if ( !a1[7] || !*(_DWORD *)(a1[6] + 24LL * v36 + 8) )
        goto LABEL_58;
    }
    else
    {
      if ( !(unsigned int)v37((__int64)a1, v36) )
        goto LABEL_80;
      v67 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96);
      if ( v67 != sub_65090 )
      {
        v38 = v67((__int64)a1, v36);
        goto LABEL_45;
      }
    }
    if ( !a1[7] )
      goto LABEL_49;
    v38 = *(_DWORD *)(a1[6] + 24LL * v36 + 8);
LABEL_45:
    if ( v38 == 1 )
    {
      v39 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112);
      v40 = v39 == sub_650D0 ? **(_DWORD **)(a1[6] + 24LL * v36) : v39((__int64)a1, v36, 0);
      if ( v40 == v75 )
      {
LABEL_80:
        v46 = v79;
        if ( !v79 )
          goto LABEL_58;
        goto LABEL_57;
      }
    }
LABEL_49:
    sub_71C40((__int64)a1, a8, v36, &v79, v75);
    v81 = nullptr;
    v82 = 0;
    sub_701A0((__int64)a1, &v79, (__int64 *)&v81);
    v41 = v82;
    v42 = (__int64)v81;
    v43 = v81;
    if ( 8LL * (_QWORD)v82 )
      break;
LABEL_54:
    if ( v42 )
    {
      *(_QWORD *)&v82 = 0;
      qfree(v42);
    }
    v46 = v79;
    if ( !v79 )
      goto LABEL_58;
LABEL_57:
    *(_QWORD *)&v80 = 0;
    qfree(v46);
LABEL_58:
    v34 = ++v33;
    if ( (unsigned __int64)v33 >= a6[1] )
      goto LABEL_59;
  }
  while ( 1 )
  {
    v44 = v43[1];
    if ( v44 != v75 )
      break;
LABEL_53:
    v43 += 2;
    if ( v43 == (unsigned int *)(v42 + 8 * v41) )
      goto LABEL_54;
  }
  v45 = sub_75060(a1, a2, a5, (__int64)a6, *v43, v44, 0);
  v42 = (__int64)v81;
  if ( !v45 )
  {
    v41 = v82;
    goto LABEL_53;
  }
  if ( v81 )
  {
    *(_QWORD *)&v82 = 0;
    qfree((__int64)v81);
  }
  if ( v79 )
  {
    *(_QWORD *)&v80 = 0;
    qfree(v79);
  }
LABEL_60:
  if ( v77 )
  {
    *(_QWORD *)&v78 = 0;
    qfree((__int64)v77);
  }
  return v45;
}
