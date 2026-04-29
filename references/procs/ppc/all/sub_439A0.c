__int64 __fastcall sub_439A0(__int64 a1, _QWORD *a2, _DWORD *a3, __int64 *a4, __int16 a5, double a6)
{
  char tinfo_property; // al
  unsigned int v11; // r12d
  char v13; // r15
  char v14; // al
  unsigned __int64 tinfo_size; // rax
  __int64 v16; // rax
  int v17; // r12d
  __int64 v18; // rdi
  __int64 v19; // rax
  int v20; // r12d
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rdx
  _QWORD *v24; // rdi
  __int64 *v25; // r14
  _QWORD *v26; // r10
  _QWORD *v27; // r15
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  int v34; // eax
  int v35; // r8d
  int v36; // r9d
  __int64 v37; // r13
  __int64 v38; // rbp
  _QWORD *v39; // rbx
  __int64 v40; // rdi
  __int64 v41; // rdi
  __int16 v42; // dx
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdi
  __int64 v49; // r12
  __int64 v50; // rbp
  __int64 v51; // rax
  __int64 v52; // rdx
  struct _Unwind_Exception *v53; // rbx
  __int64 *v54; // [rsp+0h] [rbp-A8h]
  unsigned __int16 v55; // [rsp+8h] [rbp-A0h]
  int v56; // [rsp+8h] [rbp-A0h]
  __int64 v57; // [rsp+8h] [rbp-A0h]
  int v58; // [rsp+10h] [rbp-98h]
  unsigned int v59; // [rsp+10h] [rbp-98h]
  char v60; // [rsp+1Bh] [rbp-8Dh]
  int v61; // [rsp+1Ch] [rbp-8Ch]
  _QWORD *v62; // [rsp+20h] [rbp-88h]
  int v63; // [rsp+28h] [rbp-80h]
  __int16 v64; // [rsp+2Eh] [rbp-7Ah]
  _QWORD *v65; // [rsp+30h] [rbp-78h] BYREF
  __int128 v66; // [rsp+38h] [rbp-70h]
  __int128 v67; // [rsp+48h] [rbp-60h]
  __int64 v68; // [rsp+58h] [rbp-50h]
  int v69; // [rsp+60h] [rbp-48h]
  unsigned __int64 v70; // [rsp+68h] [rbp-40h]

  v70 = __readfsqword(0x28u);
  if ( __PAIR128__((unsigned __int64)a4, (unsigned __int64)a3) == 0 )
  {
    if ( !under_debugger )
    {
      v53 = (struct _Unwind_Exception *)interr(10431);
      sub_42BB0(v54, (__int64)a2, v52, a6);
      _Unwind_Resume(v53);
    }
    BUG();
  }
  tinfo_property = get_tinfo_property(*a2, 2);
  if ( (tinfo_property & 0x3E) == 0 )
    return (unsigned int)-1;
  v13 = tinfo_property & 0xF;
  if ( (tinfo_property & 0xFu) <= 9 )
  {
    tinfo_size = get_tinfo_size(0, *a2, 0);
    if ( tinfo_size == -1 )
      return 0;
    if ( v13 == 9 )
    {
      if ( *(_QWORD *)(a1 + 72) < tinfo_size )
        return 0;
      v19 = *(unsigned __int8 *)(a1 + 87);
      if ( (unsigned __int8)v19 >= *(_BYTE *)(a1 + 85) )
        return 0;
      v20 = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4 * v19);
      cleanup_argloc(a3);
      *a3 = 3;
      a3[2] = v20;
      ++*(_BYTE *)(a1 + 87);
      return 1;
    }
LABEL_12:
    if ( *(_QWORD *)(a1 + 64) < tinfo_size )
      return 0;
    v16 = *(unsigned __int8 *)(a1 + 86);
    if ( (unsigned __int8)v16 >= *(_BYTE *)(a1 + 84) )
      return 0;
    v17 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * v16);
    cleanup_argloc(a3);
    *a3 = 3;
    a3[2] = v17;
    ++*(_BYTE *)(a1 + 86);
    return 1;
  }
  v14 = tinfo_property & 0x3F;
  if ( v14 == 45 || ((v13 - 10) & 0xFD) == 0 )
  {
    tinfo_size = get_tinfo_size(0, *a2, 0);
    if ( tinfo_size == -1 )
      return 0;
    goto LABEL_12;
  }
  if ( v14 == 13 )
  {
    v21 = *a2;
    v22 = 13;
    v65 = nullptr;
    v68 = 0;
    v69 = 1;
    v66 = 0;
    v67 = 0;
    get_tinfo_details(v21, 13, &v65);
    if ( !(_QWORD)v66 )
    {
      v24 = v65;
      v11 = -1;
      if ( !v65 )
        return v11;
      goto LABEL_59;
    }
    v64 = *(_WORD *)(a1 + 86);
    if ( a4 )
    {
      v24 = v65;
      v25 = a4;
      v26 = v65;
      v62 = &v65[18 * v66];
      if ( v65 == v62 )
        goto LABEL_43;
    }
    else
    {
      v47 = qalloc_or_throw(24);
      *(_QWORD *)v47 = 0;
      v25 = (__int64 *)v47;
      *(_OWORD *)(v47 + 8) = 0;
      v26 = v65;
      v62 = &v65[18 * v66];
      if ( v62 == v65 )
      {
LABEL_65:
        cleanup_argloc(a3);
        if ( v25 )
        {
          *a3 = 2;
          v24 = v65;
          *((_QWORD *)a3 + 1) = v25;
LABEL_43:
          v11 = 1;
LABEL_44:
          if ( !v24 )
            return v11;
          v37 = v66;
          if ( (_QWORD)v66 )
          {
            v38 = 0;
            do
            {
              v39 = &v24[18 * v38];
              clear_tinfo_t(v39 + 8);
              v40 = v39[5];
              if ( v40 )
              {
                v39[6] = 0;
                qfree(v40, v22, v23, 0.0);
              }
              v41 = v39[2];
              if ( v41 )
              {
                v39[3] = 0;
                qfree(v41, v22, v23, 0.0);
              }
              ++v38;
              v24 = v65;
            }
            while ( v37 != v38 );
          }
LABEL_59:
          *(_QWORD *)&v66 = 0;
          qfree(v24, v22, v23, 0.0);
          return v11;
        }
LABEL_42:
        v24 = v65;
        goto LABEL_43;
      }
    }
    v60 = 0;
    v27 = v26;
    do
    {
      v55 = a5 + (*v27 >> 3);
      if ( (get_tinfo_property(v27[8], 2) & 0x3F) == 0xD )
      {
        v32 = 0;
      }
      else
      {
        v28 = v25[1];
        v29 = *v25;
        if ( v25[2] < (unsigned __int64)(v28 + 1) )
        {
          v46 = qvector_reserve(v25, v29, v28 + 1, 24);
          *v25 = v46;
          v28 = v25[1];
          v29 = v46;
        }
        v30 = v29 + 24 * v28;
        *(_QWORD *)v30 = 0;
        *(_QWORD *)(v30 + 8) = 0;
        *(_DWORD *)(v30 + 16) = 0xFFFF;
        v31 = v25[1] + 1;
        v25[1] = v31;
        v32 = *v25 + 24 * v31 - 24;
        *(_WORD *)(v32 + 16) = v55;
        *(_WORD *)(v32 + 18) = v27[1] >> 3;
      }
      v22 = (__int64)(v27 + 8);
      if ( (unsigned int)sub_439A0(a1, v27 + 8, v32, v25, v55) != 1 )
        goto LABEL_61;
      if ( !v60 )
      {
        v33 = *(_QWORD *)(a1 + 64);
        v22 = (unsigned int)(v33 - 1);
        v34 = -*(_DWORD *)(a1 + 64);
        v23 = *((_QWORD *)&v67 + 1) + (int)v22;
        v35 = v23 & v34;
        v36 = v67 - (v23 & v34);
        if ( v36 > 0 )
        {
          v22 = (unsigned int)(v36 + v22);
          v23 = (unsigned int)((int)(v22 & v34) / v33) + *(unsigned __int8 *)(a1 + 86);
          if ( (int)v23 < *(unsigned __int8 *)(a1 + 84) )
          {
            do
            {
              v45 = v25[1];
              v22 = *v25;
              if ( v25[2] < (unsigned __int64)(v45 + 1) )
              {
                v58 = v35;
                v56 = v36;
                v22 = qvector_reserve(v25, v22, v45 + 1, 24);
                v35 = v58;
                v36 = v56;
                *v25 = v22;
                v45 = v25[1];
              }
              v42 = v36;
              v63 = v35;
              v43 = v22 + 24 * v45;
              v61 = v36;
              *(_DWORD *)(v43 + 16) = 0xFFFF;
              *(_QWORD *)v43 = 0;
              *(_QWORD *)(v43 + 8) = 0;
              ++v25[1];
              *(_WORD *)(v43 + 16) = v35;
              v57 = v43;
              if ( (unsigned __int64)v36 > *(_QWORD *)(a1 + 64) )
                v42 = *(_QWORD *)(a1 + 64);
              *(_WORD *)(v43 + 18) = v42;
              v59 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL * *(unsigned __int8 *)(a1 + 86));
              cleanup_argloc(v43);
              v23 = v59;
              *(_DWORD *)v57 = 3;
              *(_DWORD *)(v57 + 8) = v59;
              ++*(_BYTE *)(a1 + 86);
              v44 = *(unsigned __int16 *)(v57 + 18);
              v36 = v61 - v44;
              v35 = v44 + v63;
            }
            while ( v61 - v44 > 0 );
          }
          else
          {
            v60 = 1;
          }
        }
      }
      v27 += 18;
    }
    while ( v62 != v27 );
    if ( v60 )
    {
LABEL_61:
      if ( !a4 && v25 )
      {
        v48 = *v25;
        if ( *v25 )
        {
          v49 = v25[1];
          v50 = 0;
          if ( v49 )
          {
            do
            {
              v51 = 3 * v50++;
              cleanup_argloc(v48 + 8 * v51);
              v48 = *v25;
            }
            while ( v49 != v50 );
          }
          v25[1] = 0;
          qfree(v48, v22, v23, 0.0);
        }
        qfree(v25, v22, v23, 0.0);
      }
      v24 = v65;
      v11 = 0;
      *(_WORD *)(a1 + 86) = v64;
      goto LABEL_44;
    }
    if ( !a4 )
      goto LABEL_65;
    goto LABEL_42;
  }
  if ( v13 != 11 )
    return (unsigned int)-1;
  v18 = *a2;
  v65 = nullptr;
  *(_QWORD *)&v66 = 0;
  get_tinfo_details(v18, 11, &v65);
  if ( DWORD1(v66) > 1 )
  {
    v11 = 0;
  }
  else
  {
    v11 = -1;
    if ( DWORD1(v66) )
      v11 = sub_439A0(a1, &v65, a3, 0, 0);
  }
  clear_tinfo_t(&v65);
  return v11;
}
