__int64 **__fastcall sub_50B560(_QWORD *a1, const void *a2, const void *a3)
{
  const void **v4; // rax
  const void **v5; // r12
  _QWORD *v6; // r13
  void *v7; // rax
  __int64 v8; // r14
  __int64 (__fastcall *v9)(__int64, __int64, _QWORD *); // rax
  __int64 **v10; // rbx
  unsigned int *v11; // rax
  _DWORD *v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // ebp
  unsigned int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // ecx
  _QWORD *v18; // r14
  unsigned int v19; // eax
  __int64 v20; // rdx
  unsigned int v21; // ecx
  _QWORD *v22; // rdx
  _QWORD *v23; // r15
  __m128i v24; // xmm0
  __int64 v25; // rax
  _DWORD *v26; // rsi
  size_t v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // rax
  __m128i v30; // xmm0
  __int64 v31; // rax
  _DWORD *v32; // rsi
  size_t v33; // rdx
  unsigned int i; // ebp
  unsigned int v35; // eax
  __int64 v36; // rdx
  unsigned int v37; // ecx
  _QWORD *v38; // r15
  unsigned int v39; // eax
  __int64 v40; // rdx
  unsigned int v41; // esi
  _QWORD *v42; // rdx
  _QWORD *v43; // r12
  __m128i v44; // xmm0
  __int64 v45; // rax
  _DWORD *v46; // rsi
  size_t v47; // rdx
  __int64 v48; // rdi
  __int64 v49; // rax
  __m128i v50; // xmm0
  __int64 v51; // rax
  _DWORD *v52; // rsi
  size_t v53; // rdx
  unsigned int *v54; // rbp
  int *v55; // r12
  unsigned int v56; // r15d
  int v57; // r13d
  unsigned int v58; // edx
  __int64 v59; // rax
  unsigned int v60; // ecx
  unsigned int v61; // r13d
  unsigned int v62; // edx
  unsigned int v63; // esi
  __int64 *v64; // rdi
  unsigned int v65; // edx
  __int64 v66; // rsi
  unsigned int v67; // ecx
  __int64 v68; // rdx
  unsigned int v69; // ecx
  __int64 v70; // rsi
  __int64 v71; // rdi
  unsigned int v72; // r8d
  __int64 v73; // rsi
  __int64 (__fastcall *v74)(__int64, unsigned int, __int64 *); // rcx
  int v75; // edx
  __int64 v78; // rax
  unsigned int v79; // edx
  unsigned int v80; // [rsp+0h] [rbp-88h]
  int v81; // [rsp+8h] [rbp-80h]
  __int64 *v82; // [rsp+10h] [rbp-78h]
  int v83; // [rsp+1Ch] [rbp-6Ch]
  unsigned int *v84; // [rsp+20h] [rbp-68h]
  int *v85; // [rsp+28h] [rbp-60h]
  char v86; // [rsp+3Fh] [rbp-49h] BYREF
  __int64 v87; // [rsp+40h] [rbp-48h] BYREF
  __int64 v88[8]; // [rsp+48h] [rbp-40h] BYREF

  v4 = (const void **)__dynamic_cast(
                        a2,
                        (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                        (const struct __class_type_info *)&`typeinfo for'datalog::bound_relation,
                        0);
  if ( !v4
    || (v5 = v4,
        (v6 = __dynamic_cast(
                a3,
                (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                (const struct __class_type_info *)&`typeinfo for'datalog::bound_relation,
                0)) == nullptr)
    || (v7 = __dynamic_cast(
               v5[1],
               (const struct __class_type_info *)&`typeinfo for'datalog::relation_plugin,
               (const struct __class_type_info *)&`typeinfo for'datalog::bound_relation_plugin,
               0),
        (v8 = (__int64)v7) == 0) )
  {
    __cxa_bad_cast();
  }
  v9 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v7 + 64LL);
  if ( v9 == sub_505450 )
  {
    v10 = (__int64 **)sub_186B270(0x88u);
    sub_504C90((__int64)v10, v8, a1 + 1, 0);
LABEL_6:
    v10 = (__int64 **)__dynamic_cast(
                        v10,
                        (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                        (const struct __class_type_info *)&`typeinfo for'datalog::bound_relation,
                        0);
    goto LABEL_7;
  }
  v10 = (__int64 **)v9(v8, 0, a1 + 1);
  if ( v10 )
    goto LABEL_6;
LABEL_7:
  v85 = (int *)a1[3];
  v11 = (unsigned int *)a1[2];
  v84 = v11;
  if ( v11 )
    v83 = *(v11 - 1);
  else
    v83 = 0;
  if ( (*((unsigned __int8 (__fastcall **)(const void **))*v5 + 3))(v5)
    || (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6) )
  {
    *((_BYTE *)v10 + 56) = 1;
    return v10;
  }
  v12 = v5[2];
  v13 = v6[2];
  if ( v12 )
  {
    v80 = *(v12 - 1);
    if ( v13 )
    {
      v81 = *(_DWORD *)(v13 - 4);
      if ( v80 )
        goto LABEL_14;
LABEL_34:
      if ( v81 )
      {
        for ( i = 0; i != v81; ++i )
        {
          v35 = i;
          do
          {
            v36 = v35;
            v37 = v35;
            v35 = *(_DWORD *)(*(_QWORD *)(v6[15] + 16LL) + 4LL * v35);
          }
          while ( v37 != v35 );
          v38 = (_QWORD *)(*(_QWORD *)v6[6] + 16 * v36);
          v39 = i + v80;
          do
          {
            v40 = v39;
            v41 = v39;
            v39 = *(_DWORD *)(v10[15][2] + 4LL * v39);
          }
          while ( v41 != v39 );
          v42 = (_QWORD *)(*v10[6] + 16 * v40);
          v43 = v42;
          if ( v42 != v38 )
          {
            if ( *v42 )
              sub_186B220((void *)(*v42 - 8LL));
            if ( *v38 )
            {
              v44 = _mm_loadl_epi64((const __m128i *)(*v38 - 8LL));
              v45 = sub_186B270(4LL * (unsigned int)_mm_cvtsi128_si32(v44) + 8);
              *(_QWORD *)v45 = v44.m128i_i64[0];
              *v43 = v45 + 8;
              v46 = (_DWORD *)*v38;
              if ( *v38 )
              {
                v47 = 4LL * (unsigned int)*(v46 - 1);
                if ( v47 <= 4 )
                {
                  if ( v47 == 4 )
                    *(_DWORD *)(v45 + 8) = *v46;
                }
                else
                {
                  memmove((void *)(v45 + 8), v46, v47);
                }
              }
            }
            else
            {
              *v43 = 0;
            }
          }
          if ( v43 + 1 != v38 + 1 )
          {
            v48 = v43[1];
            if ( v48 )
              sub_186B220((void *)(v48 - 8));
            v49 = v38[1];
            if ( v49 )
            {
              v50 = _mm_loadl_epi64((const __m128i *)(v49 - 8));
              v51 = sub_186B270(4LL * (unsigned int)_mm_cvtsi128_si32(v50) + 8);
              *(_QWORD *)v51 = v50.m128i_i64[0];
              v43[1] = v51 + 8;
              v52 = (_DWORD *)v38[1];
              if ( v52 )
              {
                v53 = 4LL * (unsigned int)*(v52 - 1);
                if ( v53 <= 4 )
                {
                  if ( v53 == 4 )
                    *(_DWORD *)(v51 + 8) = *v52;
                }
                else
                {
                  memmove((void *)(v51 + 8), v52, v53);
                }
              }
            }
            else
            {
              v43[1] = 0;
            }
          }
        }
      }
      goto LABEL_55;
    }
    v81 = 0;
    if ( *(v12 - 1) )
    {
LABEL_14:
      v14 = 0;
      do
      {
        v15 = v14;
        do
        {
          v16 = v15;
          v17 = v15;
          v15 = *(_DWORD *)(*((_QWORD *)v5[15] + 2) + 4LL * v15);
        }
        while ( v17 != v15 );
        v18 = (_QWORD *)(*(_QWORD *)v5[6] + 16 * v16);
        v19 = v14;
        do
        {
          v20 = v19;
          v21 = v19;
          v19 = *(_DWORD *)(v10[15][2] + 4LL * v19);
        }
        while ( v21 != v19 );
        v22 = (_QWORD *)(*v10[6] + 16 * v20);
        v23 = v22;
        if ( v22 != v18 )
        {
          if ( *v22 )
            sub_186B220((void *)(*v22 - 8LL));
          if ( *v18 )
          {
            v24 = _mm_loadl_epi64((const __m128i *)(*v18 - 8LL));
            v25 = sub_186B270(4LL * (unsigned int)_mm_cvtsi128_si32(v24) + 8);
            *(_QWORD *)v25 = v24.m128i_i64[0];
            *v23 = v25 + 8;
            v26 = (_DWORD *)*v18;
            if ( *v18 )
            {
              v27 = 4LL * (unsigned int)*(v26 - 1);
              if ( v27 <= 4 )
              {
                if ( v27 == 4 )
                  *(_DWORD *)(v25 + 8) = *v26;
              }
              else
              {
                memmove((void *)(v25 + 8), v26, v27);
              }
            }
          }
          else
          {
            *v23 = 0;
          }
        }
        if ( v23 + 1 != v18 + 1 )
        {
          v28 = v23[1];
          if ( v28 )
            sub_186B220((void *)(v28 - 8));
          v29 = v18[1];
          if ( v29 )
          {
            v30 = _mm_loadl_epi64((const __m128i *)(v29 - 8));
            v31 = sub_186B270(4LL * (unsigned int)_mm_cvtsi128_si32(v30) + 8);
            *(_QWORD *)v31 = v30.m128i_i64[0];
            v23[1] = v31 + 8;
            v32 = (_DWORD *)v18[1];
            if ( v32 )
            {
              v33 = 4LL * (unsigned int)*(v32 - 1);
              if ( v33 <= 4 )
              {
                if ( v33 == 4 )
                  *(_DWORD *)(v31 + 8) = *v32;
              }
              else
              {
                memmove((void *)(v31 + 8), v32, v33);
              }
            }
          }
          else
          {
            v23[1] = 0;
          }
        }
        ++v14;
      }
      while ( v14 < v80 );
      goto LABEL_34;
    }
  }
  else
  {
    if ( v13 )
    {
      v80 = 0;
      v81 = *(_DWORD *)(v13 - 4);
      goto LABEL_34;
    }
    v80 = 0;
  }
LABEL_55:
  if ( v83 )
  {
    v54 = v84;
    v55 = v85;
    do
    {
      v56 = *v54;
      v57 = *v55;
      if ( !((unsigned __int8 (__fastcall *)(__int64 **))(*v10)[3])(v10) )
      {
        v58 = v56;
        v59 = v10[15][2];
        do
        {
          v60 = v58;
          v58 = *(_DWORD *)(v59 + 4LL * v58);
        }
        while ( v60 != v58 );
        v61 = v80 + v57;
        v62 = v61;
        do
        {
          v63 = v62;
          v62 = *(_DWORD *)(v59 + 4LL * v62);
        }
        while ( v63 != v62 );
        if ( v60 != v62 )
        {
          v64 = v10[6];
          v65 = v61;
          do
          {
            v66 = v65;
            v67 = v65;
            v65 = *(_DWORD *)(v59 + 4LL * v65);
          }
          while ( v67 != v65 );
          v68 = *v64;
          v69 = v56;
          v70 = *v64 + 16 * v66;
          do
          {
            v71 = v69;
            v72 = v69;
            v69 = *(_DWORD *)(v59 + 4LL * v69);
          }
          while ( v72 != v69 );
          ((void (__fastcall *)(__int64 *, __int64 **, __int64, __int64, char *))(*v10)[21])(
            &v87,
            v10,
            16 * v71 + v68,
            v70,
            &v86);
          if ( v86 )
            goto LABEL_73;
          LODWORD(v73) = v56;
          v74 = (__int64 (__fastcall *)(__int64, unsigned int, __int64 *))(*v10)[26];
          do
          {
            v75 = v73;
            v73 = *(unsigned int *)(v10[15][2] + 4LL * (unsigned int)v73);
          }
          while ( v75 != (_DWORD)v73 );
          if ( v74 == sub_4FF230 ? sub_4FF230((__int64)v10, v73, &v87) : (unsigned __int8)v74((__int64)v10, v73, &v87) )
          {
LABEL_73:
            *((_BYTE *)v10 + 56) = 1;
          }
          else
          {
            sub_4F9300(v10[15], v56, v61);
            do
            {
              v78 = v56;
              v79 = v56;
              v56 = *(_DWORD *)(v10[15][2] + 4LL * v56);
            }
            while ( v79 != v56 );
            v82 = (__int64 *)(*v10[6] + 16 * v78);
            sub_4FF560(v82, &v87);
            sub_4FF560(v82 + 1, v88);
          }
          if ( v88[0] )
            sub_186B220((void *)(v88[0] - 8));
          if ( v87 )
            sub_186B220((void *)(v87 - 8));
        }
      }
      ++v54;
      ++v55;
    }
    while ( v54 != &v84[v83] );
  }
  return v10;
}

