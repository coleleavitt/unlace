unsigned __int64 __fastcall sub_54CE40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 (__fastcall *v8)(__int64); // rax
  char v9; // al
  __int64 v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  char **exception; // rbx
  __int64 (__fastcall *v15)(__int64); // rax
  char v16; // al
  __int64 v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rax
  _QWORD *v20; // rdx
  __int64 (__fastcall *v21)(__int64); // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  __int64 (__fastcall *v27)(__int64); // rax
  unsigned __int64 result; // rax
  __int64 (__fastcall *v29)(__int64); // rax
  __int64 v30; // rdx
  __int64 v31; // r14
  __int64 v32; // rdi
  __int64 v33; // r12
  __int64 v34; // r14
  __int64 v35; // xmm0_8
  __int64 v36; // xmm1_8
  __int64 v37; // rdi
  int v38; // eax
  __m128i v39; // xmm0
  int v40; // r8d
  int v41; // r9d
  __int64 v42; // rsi
  __int64 v43; // r10
  bool v44; // zf
  _QWORD *v45; // rcx
  void (***v46)(void); // rdi
  __int64 v47; // r13
  _QWORD *v48; // r12
  _QWORD *v49; // r15
  __int64 v50; // rsi
  __int64 v51; // rdi
  __int64 *v52; // r12
  __int64 *v53; // r15
  __int64 v54; // r13
  _QWORD *v55; // rdx
  _QWORD *v56; // rax
  _QWORD *v57; // rcx
  unsigned int v58; // eax
  __int64 v59; // rcx
  __int64 (__fastcall *v60)(__int64); // rax
  __int64 v61; // rax
  __int64 v62; // r12
  _QWORD *v63; // rbx
  _QWORD *v64; // r13
  __int64 v65; // rsi
  __int64 v66; // rdi
  unsigned int v67; // ecx
  size_t v68; // rsi
  _DWORD *v69; // rax
  __int64 v70; // rcx
  __int64 v71; // r14
  _QWORD *v72; // r15
  _QWORD *v73; // r12
  __int64 v74; // rsi
  __int64 v75; // rdi
  __int64 *v76; // r15
  __int64 *v77; // r12
  __int64 v78; // r14
  _QWORD *v79; // rcx
  _QWORD *v80; // rax
  _QWORD *v81; // rsi
  unsigned int v82; // eax
  __int64 v83; // rsi
  unsigned int v84; // r9d
  size_t v85; // rsi
  _DWORD *v86; // rax
  __int64 v87; // rsi
  __int64 *v88; // rbx
  __int64 *v89; // r14
  __int64 v90; // r12
  _QWORD *v91; // rdx
  _QWORD *v92; // rax
  _QWORD *v93; // rcx
  unsigned int v94; // eax
  __int64 v95; // rcx
  unsigned int v96; // r13d
  size_t v97; // rsi
  unsigned int *v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rbx
  void (**v101)(void); // rax
  int v102; // [rsp+0h] [rbp-98h]
  __int64 v103; // [rsp+8h] [rbp-90h]
  __m128i ptr; // [rsp+10h] [rbp-88h] BYREF
  __int64 v105; // [rsp+20h] [rbp-78h]
  __int64 v106; // [rsp+28h] [rbp-70h]
  int v107; // [rsp+30h] [rbp-68h]
  int v108; // [rsp+38h] [rbp-60h]
  __int64 v109[11]; // [rsp+40h] [rbp-58h] BYREF

  v6 = *(_QWORD *)a3;
  v7 = *(_QWORD *)(a2 + 8);
  v106 = a1;
  v8 = *(__int64 (__fastcall **)(__int64))(v6 + 24);
  v103 = a4;
  if ( v8 == sub_54A3A0 )
    v9 = *(_BYTE *)(a3 + 28);
  else
    v9 = v8(a3);
  if ( !v9 )
  {
    v10 = *(_QWORD *)(a3 + 16);
    if ( v10 )
    {
      v11 = *(unsigned int *)(v10 - 4);
      if ( (_DWORD)v11 )
      {
        v12 = *(_QWORD **)(a3 + 40);
        v13 = &v12[v11];
        while ( *v12 )
        {
          if ( v13 == ++v12 )
            goto LABEL_10;
        }
        goto LABEL_9;
      }
    }
  }
LABEL_10:
  v15 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL);
  if ( v15 == sub_54A3A0 )
    v16 = *(_BYTE *)(a2 + 28);
  else
    v16 = v15(a2);
  if ( !v16 )
  {
    v17 = *(_QWORD *)(a2 + 16);
    if ( v17 )
    {
      v18 = *(unsigned int *)(v17 - 4);
      if ( (_DWORD)v18 )
      {
        v19 = *(_QWORD **)(a2 + 40);
        v20 = &v19[v18];
        while ( *v19 )
        {
          if ( v20 == ++v19 )
            goto LABEL_19;
        }
        goto LABEL_9;
      }
    }
  }
LABEL_19:
  if ( v103 )
  {
    v21 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v103 + 24LL);
    if ( !(v21 == sub_54A3A0 ? *(_BYTE *)(v103 + 28) : v21(v103)) )
    {
      v23 = *(_QWORD *)(v103 + 16);
      if ( v23 )
      {
        v24 = *(unsigned int *)(v23 - 4);
        if ( (_DWORD)v24 )
        {
          v25 = *(_QWORD **)(v103 + 40);
          v26 = &v25[v24];
          while ( *v25 )
          {
            if ( v26 == ++v25 )
              goto LABEL_29;
          }
LABEL_9:
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v109, "explanations are not supported with undefined predicates");
          goto LABEL_148;
        }
      }
    }
  }
LABEL_29:
  v27 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 24LL);
  if ( v27 == sub_54A3A0 )
    result = *(unsigned __int8 *)(a3 + 28);
  else
    result = v27(a3);
  if ( !(_BYTE)result )
  {
    v29 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL);
    if ( !*(_BYTE *)(v7 + 36) )
    {
      if ( v29 == sub_54A3A0 )
        result = *(unsigned __int8 *)(a2 + 28);
      else
        result = v29(a2);
      if ( !(_BYTE)result )
        return result;
      result = *(_QWORD *)(a2 + 16);
      *(_BYTE *)(a2 + 28) = 0;
      if ( !result )
      {
        v48 = *(_QWORD **)(a2 + 40);
        if ( v48 )
        {
          result = *((unsigned int *)v48 - 1);
          v47 = 0;
          v49 = &v48[result];
          if ( v48 < v49 )
            goto LABEL_60;
          *((_DWORD *)v48 - 1) = 0;
        }
LABEL_75:
        if ( !v103 )
          return result;
        v60 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v103 + 24LL);
        result = v60 == sub_54A3A0 ? *(unsigned __int8 *)(v103 + 28) : v60(v103);
        if ( !(_BYTE)result )
          return result;
        *(_BYTE *)(v103 + 28) = 0;
        v61 = *(_QWORD *)(v103 + 16);
        if ( v61 )
        {
          v62 = *(unsigned int *)(v61 - 4);
          result = *(_QWORD *)(v103 + 40);
          v63 = (_QWORD *)result;
          if ( !result )
            goto LABEL_119;
          v64 = (_QWORD *)(result + 8LL * *(unsigned int *)(result - 4));
          if ( result >= (unsigned __int64)v64 )
            goto LABEL_118;
        }
        else
        {
          result = v103;
          v63 = *(_QWORD **)(v103 + 40);
          if ( !v63 )
            return result;
          v62 = 0;
          v64 = &v63[*((unsigned int *)v63 - 1)];
          if ( v63 >= v64 )
          {
            *((_DWORD *)v63 - 1) = 0;
            return 0;
          }
        }
        do
        {
          v65 = *v63;
          if ( *v63 )
          {
            v66 = *(_QWORD *)(v103 + 32);
            v44 = (*(_DWORD *)(v65 + 8))-- == 1;
            if ( v44 )
              sub_15D7BC0(v66, v65);
          }
          ++v63;
        }
        while ( v63 < v64 );
        result = *(_QWORD *)(v103 + 40);
        if ( !result )
        {
LABEL_119:
          v88 = *(__int64 **)(a3 + 40);
          if ( (_DWORD)v62 )
          {
            v89 = &v88[v62];
            v90 = *v88;
            v91 = (_QWORD *)result;
            if ( *v88 )
              ++*(_DWORD *)(v90 + 8);
            if ( result )
              goto LABEL_127;
            v92 = (_QWORD *)sub_186B270(0x18u);
            *v92 = 2;
            v91 = v92 + 1;
            *(_QWORD *)(v103 + 40) = v92 + 1;
            v93 = v92 + 1;
            for ( result = 1; ; result = (unsigned int)((_DWORD)v98 + 1) )
            {
              ++v88;
              *v93 = v90;
              *((_DWORD *)v91 - 1) = result;
              if ( v89 == v88 )
                break;
              while ( 1 )
              {
                v90 = *v88;
                if ( *v88 )
                  ++*(_DWORD *)(v90 + 8);
LABEL_127:
                v94 = *((_DWORD *)v91 - 1);
                if ( v94 == *((_DWORD *)v91 - 2) )
                  break;
                v95 = v94;
                ++v88;
                result = v94 + 1;
                v91[v95] = v90;
                *((_DWORD *)v91 - 1) = result;
                if ( v89 == v88 )
                  return result;
              }
              v96 = (3 * v94 + 1) >> 1;
              v97 = 8 * v96 + 8;
              if ( 8 * v94 + 8 >= (unsigned int)v97 || v94 >= v96 )
                goto LABEL_147;
              v98 = (unsigned int *)sub_186B300(v91 - 1, v97);
              v99 = v98[1];
              v91 = v98 + 2;
              *v98 = v96;
              *(_QWORD *)(v103 + 40) = v98 + 2;
              LODWORD(v98) = v99;
              v93 = &v91[v99];
            }
          }
          return result;
        }
LABEL_118:
        *(_DWORD *)(result - 4) = 0;
        goto LABEL_119;
      }
      v47 = *(unsigned int *)(result - 4);
      result = *(_QWORD *)(a2 + 40);
      v48 = (_QWORD *)result;
      if ( result )
      {
        v49 = (_QWORD *)(result + 8LL * *(unsigned int *)(result - 4));
        if ( result < (unsigned __int64)v49 )
        {
          do
          {
LABEL_60:
            while ( 1 )
            {
              v50 = *v48;
              if ( *v48 )
              {
                v51 = *(_QWORD *)(a2 + 32);
                v44 = (*(_DWORD *)(v50 + 8))-- == 1;
                if ( v44 )
                  break;
              }
              if ( ++v48 >= v49 )
                goto LABEL_63;
            }
            sub_15D7BC0(v51, v50);
            ++v48;
          }
          while ( v48 < v49 );
LABEL_63:
          result = *(_QWORD *)(a2 + 40);
          if ( !result )
            goto LABEL_65;
        }
        *(_DWORD *)(result - 4) = 0;
      }
LABEL_65:
      v52 = *(__int64 **)(a3 + 40);
      if ( (_DWORD)v47 )
      {
        v53 = &v52[v47];
        v54 = *v52;
        v55 = (_QWORD *)result;
        if ( *v52 )
          ++*(_DWORD *)(v54 + 8);
        if ( result )
          goto LABEL_73;
        v56 = (_QWORD *)sub_186B270(0x18u);
        v55 = v56 + 1;
        *v56 = 2;
        result = 1;
        *(_QWORD *)(a2 + 40) = v55;
        v57 = v55;
        while ( 1 )
        {
          ++v52;
          *v57 = v54;
          *((_DWORD *)v55 - 1) = result;
          if ( v52 == v53 )
            break;
          while ( 1 )
          {
            v54 = *v52;
            if ( *v52 )
              ++*(_DWORD *)(v54 + 8);
LABEL_73:
            v58 = *((_DWORD *)v55 - 1);
            if ( v58 == *((_DWORD *)v55 - 2) )
              break;
            v59 = v58;
            ++v52;
            result = v58 + 1;
            v55[v59] = v54;
            *((_DWORD *)v55 - 1) = result;
            if ( v52 == v53 )
              goto LABEL_75;
          }
          v67 = (3 * v58 + 1) >> 1;
          v68 = 8 * v67 + 8;
          if ( 8 * v58 + 8 >= (unsigned int)v68 || v58 >= v67 )
            goto LABEL_147;
          ptr.m128i_i32[0] = (3 * v58 + 1) >> 1;
          v69 = (_DWORD *)sub_186B300(v55 - 1, v68);
          v55 = v69 + 2;
          *v69 = ptr.m128i_i32[0];
          v70 = (unsigned int)v69[1];
          *(_QWORD *)(a2 + 40) = v69 + 2;
          LODWORD(v69) = v70;
          v57 = &v55[v70];
          result = (unsigned int)((_DWORD)v69 + 1);
        }
      }
      goto LABEL_75;
    }
    if ( v29 == sub_54A3A0 )
      result = *(unsigned __int8 *)(a2 + 28);
    else
      result = v29(a2);
    v30 = *(_QWORD *)(a2 + 16);
    if ( !(_BYTE)result )
    {
      if ( v30 )
      {
        v31 = *(unsigned int *)(v30 - 4);
        if ( (_DWORD)v31 )
        {
          v32 = *(_QWORD *)(a2 + 40);
          v33 = 0;
          v105 = 8 * v31;
          do
          {
            while ( 1 )
            {
              v34 = *(_QWORD *)(a2 + 8);
              v35 = *(_QWORD *)(v32 + v33);
              v36 = *(_QWORD *)(*(_QWORD *)(a3 + 40) + v33);
              v37 = *(_QWORD *)(v34 + 24);
              ptr.m128i_i64[0] = v35;
              ptr.m128i_i64[1] = v36;
              v38 = sub_4D6490(v37);
              v39 = _mm_unpacklo_epi64(_mm_loadl_epi64(&ptr), _mm_loadl_epi64((const __m128i *)&ptr.m128i_u64[1]));
              result = sub_15DC610(
                         v38,
                         *(_QWORD *)(v34 + 40),
                         2,
                         (int)v109,
                         v40,
                         v41,
                         v102,
                         v103,
                         ptr.m128i_i32[0],
                         ptr.m128i_i32[2],
                         v105,
                         v106,
                         v107,
                         v108,
                         v39.m128i_i32[0],
                         (void *)v39.m128i_i64[1]);
              if ( result )
                ++*(_DWORD *)(result + 8);
              v32 = *(_QWORD *)(a2 + 40);
              v42 = *(_QWORD *)(v32 + v33);
              if ( v42 )
              {
                v43 = *(_QWORD *)(a2 + 32);
                v44 = (*(_DWORD *)(v42 + 8))-- == 1;
                if ( v44 )
                  break;
              }
              *(_QWORD *)(v32 + v33) = result;
              v33 += 8;
              if ( v105 == v33 )
                goto LABEL_49;
            }
            ptr.m128i_i64[0] = result;
            sub_15D7BC0(v43, v42);
            v32 = *(_QWORD *)(a2 + 40);
            result = ptr.m128i_i64[0];
            v45 = (_QWORD *)(v32 + v33);
            v33 += 8;
            *v45 = ptr.m128i_i64[0];
          }
          while ( v105 != v33 );
        }
      }
      goto LABEL_49;
    }
    *(_BYTE *)(a2 + 28) = 0;
    if ( v30 )
    {
      result = *(_QWORD *)(a2 + 40);
      v71 = *(unsigned int *)(v30 - 4);
      v72 = (_QWORD *)result;
      if ( !result )
        goto LABEL_103;
      v73 = (_QWORD *)(result + 8LL * *(unsigned int *)(result - 4));
      if ( result >= (unsigned __int64)v73 )
        goto LABEL_102;
      goto LABEL_98;
    }
    v72 = *(_QWORD **)(a2 + 40);
    if ( v72 )
    {
      result = *((unsigned int *)v72 - 1);
      v71 = 0;
      v73 = &v72[result];
      if ( v72 < v73 )
      {
        do
        {
LABEL_98:
          v74 = *v72;
          if ( *v72 )
          {
            v75 = *(_QWORD *)(a2 + 32);
            v44 = (*(_DWORD *)(v74 + 8))-- == 1;
            if ( v44 )
              sub_15D7BC0(v75, v74);
          }
          ++v72;
        }
        while ( v72 < v73 );
        result = *(_QWORD *)(a2 + 40);
        if ( !result )
        {
LABEL_103:
          v76 = *(__int64 **)(a3 + 40);
          if ( (_DWORD)v71 )
          {
            v77 = &v76[v71];
            v78 = *v76;
            v79 = (_QWORD *)result;
            if ( *v76 )
              ++*(_DWORD *)(v78 + 8);
            if ( result )
              goto LABEL_111;
            v80 = (_QWORD *)sub_186B270(0x18u);
            v79 = v80 + 1;
            *v80 = 2;
            result = 1;
            *(_QWORD *)(a2 + 40) = v79;
            v81 = v79;
            while ( 1 )
            {
              ++v76;
              *v81 = v78;
              *((_DWORD *)v79 - 1) = result;
              if ( v77 == v76 )
                goto LABEL_49;
              while ( 1 )
              {
                v78 = *v76;
                if ( *v76 )
                  ++*(_DWORD *)(v78 + 8);
LABEL_111:
                v82 = *((_DWORD *)v79 - 1);
                if ( v82 == *((_DWORD *)v79 - 2) )
                  break;
                v83 = v82;
                ++v76;
                result = v82 + 1;
                v79[v83] = v78;
                *((_DWORD *)v79 - 1) = result;
                if ( v77 == v76 )
                  goto LABEL_49;
              }
              v84 = (3 * v82 + 1) >> 1;
              v85 = 8 * v84 + 8;
              if ( 8 * v82 + 8 >= (unsigned int)v85 || v82 >= v84 )
                break;
              ptr.m128i_i32[0] = (3 * v82 + 1) >> 1;
              v86 = (_DWORD *)sub_186B300(v79 - 1, v85);
              v87 = (unsigned int)v86[1];
              v79 = v86 + 2;
              *v86 = ptr.m128i_i32[0];
              LODWORD(v86) = v87;
              *(_QWORD *)(a2 + 40) = v79;
              v81 = &v79[v87];
              result = (unsigned int)((_DWORD)v86 + 1);
            }
LABEL_147:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v109, "Overflow encountered when expanding vector");
LABEL_148:
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v109);
            sub_233E40((__int64)v109);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          goto LABEL_49;
        }
LABEL_102:
        *(_DWORD *)(result - 4) = 0;
        goto LABEL_103;
      }
      *((_DWORD *)v72 - 1) = 0;
    }
LABEL_49:
    if ( v103 )
    {
      v46 = *(void (****)(void))(v106 + 8);
      if ( !v46 )
      {
        v100 = sub_4C4940(*(_QWORD *)(v7 + 24), v103, a3, 0);
        v46 = *(void (****)(void))(v106 + 8);
        if ( (void (***)(void))v100 != v46 )
        {
          if ( v46 )
          {
            v101 = *v46;
            ptr.m128i_i64[0] = *(_QWORD *)(v106 + 8);
            (*v101)();
            sub_186B220((void *)ptr.m128i_i64[0]);
          }
          v46 = (void (***)(void))v100;
          *(_QWORD *)(v106 + 8) = v100;
        }
      }
      return ((__int64 (__fastcall *)(void (***)(void), __int64, __int64, _QWORD))(*v46)[2])(v46, v103, a3, 0);
    }
  }
  return result;
}

