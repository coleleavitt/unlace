__int64 __fastcall sub_5DCA20(__int64 a1, __int64 a2, __int64 a3, __m128i a4)
{
  char **exception; // r14
  char **v5; // r14
  unsigned __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rbx
  unsigned __int64 *v10; // rcx
  int v11; // edx
  _QWORD *v12; // r12
  unsigned int v13; // eax
  unsigned int v14; // r15d
  size_t v15; // rsi
  unsigned int *v16; // rax
  __int64 v17; // rdx
  __int64 *v18; // r14
  __int64 v19; // rsi
  __int64 *v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  int v23; // r8d
  unsigned int v24; // edx
  __int64 *v25; // rdi
  __int64 v26; // rdx
  __int64 *v27; // r9
  __int64 *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rbx
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  __int64 result; // rax
  __int64 *v35; // rbx
  unsigned __int64 v36; // r14
  __int64 v37; // rsi
  bool v38; // zf
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rdi
  unsigned int v41; // r15d
  __int64 v42; // rax
  unsigned __int64 v43; // rbx
  unsigned int v44; // eax
  __int64 v45; // rdx
  unsigned __int64 v46; // rsi
  int v47; // eax
  unsigned __int64 *v48; // rdx
  unsigned __int64 v49; // rdi
  _QWORD *v50; // rbx
  void *v51; // rdi
  __int64 *v52; // rbx
  unsigned __int64 v53; // r15
  __int64 v54; // rsi
  unsigned __int64 v55; // rdi
  __int64 *v56; // rbx
  unsigned __int64 v57; // r15
  __int64 v58; // rsi
  unsigned __int64 v59; // rdi
  __int64 *v60; // rbx
  unsigned __int64 v61; // r15
  __int64 v62; // rsi
  __int64 v63; // rdi
  __int64 v64; // rax
  unsigned int v65; // edi
  unsigned int v66; // edx
  unsigned int *v67; // rax
  __int64 v68; // rdx
  _QWORD *v69; // r12
  __int64 v70; // [rsp+8h] [rbp-148h]
  unsigned int v72; // [rsp+1Ch] [rbp-134h]
  unsigned __int64 v74; // [rsp+30h] [rbp-120h]
  unsigned int v75; // [rsp+38h] [rbp-118h]
  unsigned int v76; // [rsp+3Ch] [rbp-114h]
  unsigned __int64 v77; // [rsp+48h] [rbp-108h]
  __int64 v78; // [rsp+48h] [rbp-108h]
  __m128 v79; // [rsp+60h] [rbp-F0h] BYREF
  __int64 v80[4]; // [rsp+70h] [rbp-E0h] BYREF
  __m128i v81; // [rsp+90h] [rbp-C0h] BYREF
  __int64 *v82; // [rsp+A0h] [rbp-B0h]
  unsigned __int64 v83; // [rsp+A8h] [rbp-A8h]
  __int64 *v84; // [rsp+B0h] [rbp-A0h]
  __int64 v85; // [rsp+B8h] [rbp-98h]
  __int64 v86; // [rsp+C0h] [rbp-90h]
  __int64 v87; // [rsp+C8h] [rbp-88h]
  unsigned __int64 v88; // [rsp+D0h] [rbp-80h]
  __int64 *v89; // [rsp+D8h] [rbp-78h]
  void *s; // [rsp+E0h] [rbp-70h]
  __int64 v91; // [rsp+E8h] [rbp-68h]
  void *v92; // [rsp+F0h] [rbp-60h]
  __int64 v93; // [rsp+F8h] [rbp-58h]
  int v94; // [rsp+100h] [rbp-50h]
  __int64 v95; // [rsp+108h] [rbp-48h]
  _QWORD v96[8]; // [rsp+110h] [rbp-40h] BYREF

  v75 = *(_DWORD *)(a3 + 68);
  v72 = *(_DWORD *)(a3 + 56);
  v70 = *(_QWORD *)(a1 + 32);
  if ( !v72 )
  {
    v12 = nullptr;
    v30 = a3;
    if ( !v75 )
      goto LABEL_27;
    goto LABEL_14;
  }
  v7 = *(_QWORD *)(a3 + 80);
  v77 = v7 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v7 > 7 )
    ++*(_DWORD *)((v7 & 0xFFFFFFFFFFFFFFF8LL) + 8);
  v8 = (_QWORD *)sub_186B270(0x18u);
  *v8 = 2;
  v9 = a3;
  v10 = v8 + 1;
  v11 = 1;
  v12 = v8 + 1;
  while ( 1 )
  {
    v9 += 8;
    *v10 = v77;
    *((_DWORD *)v12 - 1) = v11;
    if ( a3 + 8LL * v72 == v9 )
      break;
    v77 = *(_QWORD *)(v9 + 80) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(v9 + 80) > 7u )
      ++*(_DWORD *)((*(_QWORD *)(v9 + 80) & 0xFFFFFFFFFFFFFFF8LL) + 8);
    v13 = *((_DWORD *)v12 - 1);
    if ( v13 == *((_DWORD *)v12 - 2) )
    {
      v14 = (3 * v13 + 1) >> 1;
      v15 = 8 * v14 + 8;
      if ( 8 * v13 + 8 >= (unsigned int)v15 || v13 >= v14 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v81.m128i_i64, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v81);
        sub_233E40((__int64)&v81);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v16 = (unsigned int *)sub_186B300(v12 - 1, v15);
      v17 = v16[1];
      v12 = v16 + 2;
      *v16 = v14;
      v10 = (unsigned __int64 *)&v16[2 * v17 + 2];
      v11 = v17 + 1;
    }
    else
    {
      v10 = &v12[v13];
      v11 = v13 + 1;
    }
  }
  if ( v75 )
  {
LABEL_14:
    v76 = 0;
    v18 = (__int64 *)(a3 + 80);
    do
    {
      v19 = *v18;
      v20 = *(__int64 **)(a1 + 3096);
      v21 = *(_QWORD *)((*v18 & 0xFFFFFFFFFFFFFFF8LL) + 16);
      v22 = *(unsigned int *)(a1 + 3104);
      v23 = *(_DWORD *)(v21 + 12);
      v24 = v22 - 1;
      v22 *= 16;
      v25 = (__int64 *)((char *)v20 + v22);
      v26 = 16LL * (v23 & v24);
      v27 = &v20[(unsigned __int64)v26 / 8];
      if ( v26 != v22 )
      {
        v28 = &v20[(unsigned __int64)v26 / 8];
        do
        {
          v29 = *v28;
          if ( (unsigned __int64)*v28 > 1 )
          {
            if ( *(_DWORD *)(v29 + 12) == v23 && v21 == v29 )
              goto LABEL_37;
          }
          else if ( !v29 )
          {
            goto LABEL_22;
          }
          v28 += 2;
        }
        while ( v25 != v28 );
      }
      for ( ; v27 != v20; v20 += 2 )
      {
        v64 = *v20;
        if ( (unsigned __int64)*v20 > 1 )
        {
          if ( *(_DWORD *)(v64 + 12) == v23 && v21 == v64 )
          {
            v28 = v20;
LABEL_37:
            v39 = v28[1];
            v40 = *(_QWORD *)(a1 + 32);
            v41 = 0;
            v82 = nullptr;
            v84 = nullptr;
            v74 = v39;
            s = v96;
            LODWORD(v39) = *(_DWORD *)(v21 + 32);
            v83 = v40;
            v85 = 0;
            v86 = 0;
            v87 = 0;
            v88 = v40;
            v89 = nullptr;
            v91 = 1;
            v92 = nullptr;
            v93 = 0;
            v94 = 1065353216;
            v95 = 0;
            v96[0] = 0;
            v81 = _mm_unpacklo_epi64((__m128i)v40, (__m128i)v40);
            if ( (_DWORD)v39 )
            {
              while ( 1 )
              {
                v78 = *(_QWORD *)((v19 & 0xFFFFFFFFFFFFFFF8LL) + 8LL * v41 + 32);
                v42 = sub_15DB5C0(v40, v41, *(_QWORD *)(v21 + 8LL * v41 + 48));
                sub_14EA0D0(&v81, v42, v78);
                v40 = *(_QWORD *)(a1 + 32);
                if ( ++v41 >= *(_DWORD *)(v21 + 32) )
                  break;
                v19 = *v18;
              }
            }
            a4 = _mm_unpacklo_epi64((__m128i)v74, (__m128i)v40);
            v79 = (__m128)a4;
            if ( v74 )
              ++*(_DWORD *)(v74 + 8);
            sub_14EA2A0(&v81, v74, &v79);
            v43 = v79.m128_u64[0];
            if ( v79.m128_u64[0] )
              ++*(_DWORD *)(v79.m128_u64[0] + 8);
            if ( v12 )
            {
              v44 = *((_DWORD *)v12 - 1);
              if ( v44 == *((_DWORD *)v12 - 2) )
              {
                v65 = (3 * v44 + 1) >> 1;
                v66 = 8 * v65 + 8;
                if ( 8 * v44 + 8 >= v66 || v44 >= v65 )
                {
                  v5 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v80, "Overflow encountered when expanding vector");
                  *v5 = (char *)off_1C63128;
                  sub_2333C0(v5 + 1, v80);
                  sub_233E40((__int64)v80);
                  __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v67 = (unsigned int *)sub_186B300(v12 - 1, v66);
                v68 = v67[1];
                v12 = v67 + 2;
                *v67 = v65;
                v46 = v79.m128_u64[0];
                LODWORD(v67) = v68;
                v48 = &v12[v68];
                v47 = (_DWORD)v67 + 1;
              }
              else
              {
                v45 = v44;
                v46 = v43;
                v47 = v44 + 1;
                v48 = &v12[v45];
              }
            }
            else
            {
              v69 = (_QWORD *)sub_186B270(0x18u);
              *v69 = 2;
              v46 = v79.m128_u64[0];
              v47 = 1;
              v12 = v69 + 1;
              v48 = v12;
            }
            *v48 = v43;
            *((_DWORD *)v12 - 1) = v47;
            if ( v46 )
            {
              v49 = v79.m128_u64[1];
              v38 = (*(_DWORD *)(v46 + 8))-- == 1;
              if ( v38 )
                sub_15D7BC0(v49, v46);
            }
            v50 = v92;
            if ( v92 )
            {
              do
              {
                v51 = v50;
                v50 = (_QWORD *)*v50;
                operator delete(v51, 0x18u);
              }
              while ( v50 );
            }
            memset(s, 0, 8 * v91);
            v93 = 0;
            v92 = nullptr;
            if ( s != v96 )
              operator delete(s, 8 * v91);
            v52 = v89;
            if ( v89 )
            {
              if ( v89 >= &v89[*((unsigned int *)v89 - 1)] )
                goto LABEL_63;
              v53 = (unsigned __int64)&v89[*((unsigned int *)v89 - 1)];
              do
              {
                while ( 1 )
                {
                  v54 = *v52;
                  if ( *v52 )
                  {
                    v55 = v88;
                    v38 = (*(_DWORD *)(v54 + 8))-- == 1;
                    if ( v38 )
                      break;
                  }
                  if ( (unsigned __int64)++v52 >= v53 )
                    goto LABEL_62;
                }
                sub_15D7BC0(v55, v54);
                ++v52;
              }
              while ( (unsigned __int64)v52 < v53 );
LABEL_62:
              v52 = v89;
              if ( v89 )
LABEL_63:
                sub_186B220(v52 - 1);
            }
            if ( v87 )
              sub_186B220((void *)(v87 - 8));
            if ( v86 )
              sub_186B220((void *)(v86 - 8));
            if ( v85 )
              sub_186B220((void *)(v85 - 8));
            v56 = v84;
            if ( v84 )
            {
              if ( v84 >= &v84[*((unsigned int *)v84 - 1)] )
                goto LABEL_78;
              v57 = (unsigned __int64)&v84[*((unsigned int *)v84 - 1)];
              do
              {
                while ( 1 )
                {
                  v58 = *v56;
                  if ( *v56 )
                  {
                    v59 = v83;
                    v38 = (*(_DWORD *)(v58 + 8))-- == 1;
                    if ( v38 )
                      break;
                  }
                  if ( (unsigned __int64)++v56 >= v57 )
                    goto LABEL_77;
                }
                sub_15D7BC0(v59, v58);
                ++v56;
              }
              while ( (unsigned __int64)v56 < v57 );
LABEL_77:
              v56 = v84;
              if ( v84 )
LABEL_78:
                sub_186B220(v56 - 1);
            }
            v60 = v82;
            if ( v82 )
            {
              if ( v82 >= &v82[*((unsigned int *)v82 - 1)] )
                goto LABEL_87;
              v61 = (unsigned __int64)&v82[*((unsigned int *)v82 - 1)];
              do
              {
                while ( 1 )
                {
                  v62 = *v60;
                  if ( *v60 )
                  {
                    v63 = v81.m128i_i64[1];
                    v38 = (*(_DWORD *)(v62 + 8))-- == 1;
                    if ( v38 )
                      break;
                  }
                  if ( (unsigned __int64)++v60 >= v61 )
                    goto LABEL_86;
                }
                sub_15D7BC0(v63, v62);
                ++v60;
              }
              while ( (unsigned __int64)v60 < v61 );
LABEL_86:
              v60 = v82;
              if ( v82 )
LABEL_87:
                sub_186B220(v60 - 1);
            }
            break;
          }
        }
        else if ( !v64 )
        {
          break;
        }
      }
LABEL_22:
      ++v76;
      ++v18;
    }
    while ( v76 < v75 );
    if ( v12 )
      v11 = *((_DWORD *)v12 - 1);
    else
      v11 = 0;
  }
  if ( v72 == v11 )
    v30 = a3;
  else
    v30 = sub_62C680(*(_QWORD *)(a1 + 40), *(_QWORD *)(a3 + 40), v11, (_DWORD)v12, 0, (int)a3 + 72, 1);
LABEL_27:
  sub_63DAD0(a2, v30, *(double *)a4.m128i_i64);
  result = sub_62F7F0(*(_QWORD *)(a1 + 40), a3, v30, v31, v32, v33);
  if ( v12 )
  {
    v35 = v12;
    if ( v12 < &v12[*((unsigned int *)v12 - 1)] )
    {
      v36 = (unsigned __int64)&v12[*((unsigned int *)v12 - 1)];
      do
      {
        while ( 1 )
        {
          v37 = *v35;
          if ( *v35 )
          {
            v38 = (*(_DWORD *)(v37 + 8))-- == 1;
            if ( v38 )
              break;
          }
          if ( (unsigned __int64)++v35 >= v36 )
            return sub_186B220(v12 - 1);
        }
        ++v35;
        sub_15D7BC0(v70, v37);
      }
      while ( (unsigned __int64)v35 < v36 );
    }
    return sub_186B220(v12 - 1);
  }
  return result;
}

