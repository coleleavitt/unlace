__int64 __fastcall sub_74C00(
        __int64 *a1,
        _QWORD **a2,
        unsigned int a3,
        unsigned __int64 *a4,
        _QWORD *a5,
        _QWORD *a6,
        void (__fastcall ***a7)(_QWORD, _QWORD, _QWORD, __int64),
        _QWORD *a8)
{
  char v12; // al
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  _DWORD *v15; // rax
  __int64 v16; // rdx
  __int64 (__fastcall *v17)(__int64, int); // rax
  __int64 v18; // rax
  int v19; // r15d
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 (__fastcall *v22)(__int64, int); // rax
  int v23; // eax
  __int64 (__fastcall *v24)(__int64, int, int); // rax
  int v25; // ecx
  _DWORD *v26; // rax
  __int64 v27; // rdx
  _DWORD *v28; // rax
  _DWORD *v29; // rdx
  unsigned __int64 v30; // rdx
  int v31; // ebx
  __int64 v32; // rax
  _DWORD *v33; // rdx
  int v34; // r14d
  __int64 (__fastcall *v35)(__int64, int); // rax
  int v36; // eax
  __int64 (__fastcall *v37)(__int64, int, int); // rax
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rdi
  unsigned int *v41; // r14
  unsigned int v42; // r9d
  unsigned int v43; // r15d
  __int64 v44; // rdi
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rsi
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // rdi
  unsigned __int64 v50; // xmm0_8
  __int64 v51; // rax
  __int64 v52; // rax
  size_t v53; // r15
  _DWORD *v54; // rax
  _DWORD *v55; // rsi
  __int64 (__fastcall *v56)(__int64); // rax
  unsigned __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 *v60; // rcx
  __int64 *v61; // rsi
  __int64 v62; // rdi
  __int64 v63; // rax
  int v64; // r14d
  __int64 (__fastcall *v65)(__int64, int); // rax
  int v66; // eax
  __int64 (__fastcall *v67)(__int64, int, int); // rax
  unsigned int v70; // [rsp+20h] [rbp-B0h]
  int v71; // [rsp+30h] [rbp-A0h]
  unsigned int v72; // [rsp+34h] [rbp-9Ch]
  int v73; // [rsp+38h] [rbp-98h]
  unsigned __int64 v74; // [rsp+38h] [rbp-98h]
  _DWORD *v75; // [rsp+40h] [rbp-90h] BYREF
  __int128 v76; // [rsp+48h] [rbp-88h]
  __int64 v77; // [rsp+60h] [rbp-70h] BYREF
  __int128 v78; // [rsp+68h] [rbp-68h]
  unsigned int *v79; // [rsp+80h] [rbp-50h] BYREF
  __int128 v80; // [rsp+88h] [rbp-48h]
  unsigned __int64 v81; // [rsp+98h] [rbp-38h]

  v81 = __readfsqword(0x28u);
  v12 = sub_700B0(a1, (__int64)a5, a3, a6);
  v13 = a6[1];
  if ( v12 )
  {
    v63 = 1;
    v64 = 1;
    if ( v13 > 1 )
    {
      do
      {
        (**a7)(a7, a3, *(unsigned int *)(*a6 + 4 * v63), 5);
        v63 = ++v64;
      }
      while ( (unsigned __int64)v64 < a6[1] );
    }
    return 5;
  }
  v75 = nullptr;
  v76 = 0;
  if ( v13 )
  {
    v53 = 4 * v13;
    v74 = v13;
    v54 = (_DWORD *)qalloc_or_throw(4 * v13);
    v55 = (_DWORD *)*a6;
    v75 = v54;
    *((_QWORD *)&v76 + 1) = v74;
    memcpy(v54, v55, v53);
    *(_QWORD *)&v76 = v74;
  }
  v73 = sub_71680((__int64)a1, a8, a3, (__int64 *)&v75, -1);
  v14 = a6[1];
  v15 = (_DWORD *)*a6;
  v16 = *a6 + 4 * v14;
  if ( *a6 != v16 )
  {
    while ( v73 != *v15 )
    {
      if ( (_DWORD *)v16 == ++v15 )
        goto LABEL_11;
    }
    if ( (_DWORD *)v16 != v15 )
    {
      v17 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96);
      if ( v17 == sub_64A90 )
      {
        if ( !a1[7] )
          goto LABEL_11;
        v66 = *(_DWORD *)(a1[6] + 24LL * v73 + 8);
      }
      else
      {
        v66 = v17((__int64)a1, v73);
      }
      if ( v66 == 1 )
      {
        v67 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112);
        if ( v67 == sub_64AD0 )
        {
          v14 = a6[1];
          v73 = **(_DWORD **)(a1[6] + 24LL * v73);
          goto LABEL_11;
        }
        v73 = v67((__int64)a1, v73, 0);
      }
      v14 = a6[1];
    }
  }
LABEL_11:
  if ( v14 <= 1 )
  {
    if ( !a4[1] )
      goto LABEL_59;
LABEL_74:
    v56 = *(__int64 (__fastcall **)(__int64))(*a1 + 56);
    if ( v56 != sub_64A40 )
      v56((__int64)a1);
    v57 = a4[1] >> 1;
    if ( v57 )
    {
      v58 = 8 * a4[1] - 8;
      v59 = 0;
      do
      {
        v60 = (__int64 *)(*a4 + v58);
        v61 = (__int64 *)(*a4 + 8 * v59++);
        v58 -= 8;
        v62 = *v61;
        *v61 = *v60;
        *v60 = v62;
      }
      while ( v57 != v59 );
    }
    goto LABEL_59;
  }
  v18 = 1;
  v71 = 1;
  do
  {
    v19 = 0;
    v20 = *(int *)(*a6 + 4 * v18);
    v72 = v20;
    v21 = 24 * v20;
    while ( 1 )
    {
      v22 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96);
      if ( v22 == sub_64A90 )
        break;
      if ( v19 >= (int)v22((__int64)a1, v72) )
        goto LABEL_36;
LABEL_18:
      v24 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112);
      if ( v24 == sub_64AD0 )
        v25 = *(_DWORD *)(*(_QWORD *)(a1[6] + v21) + 4LL * v19);
      else
        v25 = v24((__int64)a1, v72, v19);
      if ( v25 == v73 )
        goto LABEL_27;
      v26 = (_DWORD *)*a6;
      v27 = *a6 + 4LL * a6[1];
      if ( *a6 != v27 )
      {
        while ( v25 != *v26 )
        {
          if ( (_DWORD *)v27 == ++v26 )
            goto LABEL_28;
        }
        if ( (_DWORD *)v27 != v26 )
        {
LABEL_26:
          v70 = v25;
          if ( sub_703B0(a1, a5, v72, v25, 0) )
          {
            v46 = a4[1];
            v47 = *a4;
            v48 = a4[2];
            v49 = v46 + 1;
            v50 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v72), _mm_cvtsi32_si128(v70)).m128i_u64[0];
            v79 = (unsigned int *)v50;
            if ( (unsigned __int64)&v79 < v47 || (unsigned __int64)&v79 >= v47 + 8 * v48 )
            {
              if ( v48 < v49 )
              {
                v51 = qvector_reserve(a4, v47, v46 + 1, 8);
                *a4 = v51;
                v47 = v51;
                v46 = a4[1];
              }
              *(_QWORD *)(v47 + 8 * v46) = v79;
            }
            else
            {
              if ( v48 < v49 )
              {
                v52 = qvector_reserve(a4, v47, v46 + 1, 8);
                *a4 = v52;
                v47 = v52;
                v46 = a4[1];
              }
              *(_QWORD *)(v47 + 8 * v46) = v50;
            }
            ++a4[1];
          }
          goto LABEL_27;
        }
      }
LABEL_28:
      v28 = v75;
      v29 = &v75[v76];
      if ( v75 == v29 )
        goto LABEL_26;
      while ( v25 != *v28 )
      {
        if ( v29 == ++v28 )
          goto LABEL_26;
      }
      if ( v29 == v28 )
        goto LABEL_26;
LABEL_27:
      ++v19;
    }
    v23 = 0;
    if ( a1[7] )
      v23 = *(_DWORD *)(a1[6] + v21 + 8);
    if ( v19 < v23 )
      goto LABEL_18;
LABEL_36:
    ++v71;
    v30 = a6[1];
    v18 = v71;
  }
  while ( v71 < v30 );
  if ( a4[1] )
    goto LABEL_74;
  if ( v30 <= 1 )
  {
LABEL_59:
    v43 = 0;
    goto LABEL_60;
  }
  v31 = 1;
  v32 = 1;
  while ( 1 )
  {
    v33 = (_DWORD *)*a6;
    v77 = 0;
    v78 = 0;
    v34 = v33[v32];
    v35 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96);
    if ( v35 == sub_64A90 )
    {
      if ( !a1[7] || !*(_DWORD *)(a1[6] + 24LL * v34 + 8) )
        goto LABEL_58;
    }
    else
    {
      if ( !(unsigned int)v35((__int64)a1, v34) )
        goto LABEL_80;
      v65 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96);
      if ( v65 != sub_64A90 )
      {
        v36 = v65((__int64)a1, v34);
        goto LABEL_45;
      }
    }
    if ( !a1[7] )
      goto LABEL_49;
    v36 = *(_DWORD *)(a1[6] + 24LL * v34 + 8);
LABEL_45:
    if ( v36 == 1 )
    {
      v37 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112);
      v38 = v37 == sub_64AD0 ? **(_DWORD **)(a1[6] + 24LL * v34) : v37((__int64)a1, v34, 0);
      if ( v38 == v73 )
      {
LABEL_80:
        v44 = v77;
        if ( !v77 )
          goto LABEL_58;
        goto LABEL_57;
      }
    }
LABEL_49:
    sub_71680((__int64)a1, a8, v34, &v77, v73);
    v79 = nullptr;
    v80 = 0;
    sub_6FBE0((__int64)a1, &v77, (__int64 *)&v79);
    v39 = v80;
    v40 = (__int64)v79;
    v41 = v79;
    if ( 8LL * (_QWORD)v80 )
      break;
LABEL_54:
    if ( v40 )
    {
      *(_QWORD *)&v80 = 0;
      qfree(v40);
    }
    v44 = v77;
    if ( !v77 )
      goto LABEL_58;
LABEL_57:
    *(_QWORD *)&v78 = 0;
    qfree(v44);
LABEL_58:
    v32 = ++v31;
    if ( (unsigned __int64)v31 >= a6[1] )
      goto LABEL_59;
  }
  while ( 1 )
  {
    v42 = v41[1];
    if ( v42 != v73 )
      break;
LABEL_53:
    v41 += 2;
    if ( v41 == (unsigned int *)(v40 + 8 * v39) )
      goto LABEL_54;
  }
  v43 = sub_74AA0(a1, a2, a5, (__int64)a6, *v41, v42, 0);
  v40 = (__int64)v79;
  if ( !v43 )
  {
    v39 = v80;
    goto LABEL_53;
  }
  if ( v79 )
  {
    *(_QWORD *)&v80 = 0;
    qfree(v79);
  }
  if ( v77 )
  {
    *(_QWORD *)&v78 = 0;
    qfree(v77);
  }
LABEL_60:
  if ( v75 )
  {
    *(_QWORD *)&v76 = 0;
    qfree(v75);
  }
  return v43;
}
