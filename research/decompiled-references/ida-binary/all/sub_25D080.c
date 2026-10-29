unsigned __int64 __fastcall sub_25D080(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8)
{
  __m128 v8; // xmm0
  size_t v9; // rbx
  __int64 v10; // rdx
  char *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 debugger_plugins; // r12
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  __int64 v17; // rsi
  unsigned __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // r15
  __int64 v21; // rbx
  __int64 v22; // rax
  const void *v23; // r15
  __int64 v24; // rbx
  size_t v25; // rax
  size_t v26; // r8
  size_t v27; // r9
  __int64 v28; // rsi
  void *v29; // rdx
  QT::QVariant *v30; // rdi
  __int64 v31; // rax
  _BOOL8 v32; // rsi
  __int64 bpt_kernel_interface; // rax
  const char *v35; // rsi
  char v36; // bl
  char *v37; // rbx
  char *v38; // r13
  __int64 v39; // rbp
  unsigned __int8 v40; // bl
  __int64 v41; // rsi
  char *v42; // r12
  char *v43; // rdi
  const char *v44; // rsi
  __int64 v45; // rdx
  int v46; // r8d
  int v47; // r9d
  double v48; // xmm4_8
  double v49; // xmm5_8
  char v50; // al
  bool v51; // r15
  char *v52; // rdi
  __int64 v53; // rax
  _BOOL4 v54; // r14d
  int v55; // ebp
  __int64 v56; // rax
  unsigned int v57; // r12d
  char *v58; // rdi
  _QWORD *v59; // rax
  char *v60; // rdi
  __int64 v61; // r15
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdi
  __int64 v65; // rbp
  __int64 v66; // rbx
  __int64 *v67; // rdx
  __int64 v68; // rdi
  char v69; // [rsp-8h] [rbp-A8h]
  void *v70; // [rsp+0h] [rbp-A0h]
  size_t v71; // [rsp+8h] [rbp-98h]
  size_t v72; // [rsp+10h] [rbp-90h]
  char *v73; // [rsp+20h] [rbp-80h] BYREF
  char *s1; // [rsp+28h] [rbp-78h] BYREF
  __int128 v75; // [rsp+30h] [rbp-70h]
  __int64 v76; // [rsp+48h] [rbp-58h] BYREF
  __int128 v77; // [rsp+50h] [rbp-50h]
  unsigned __int64 v78; // [rsp+60h] [rbp-40h]

  v8 = 0;
  v78 = __readfsqword(0x28u);
  v75 = 0;
  s1 = nullptr;
  if ( (unsigned __int8)sub_256790((__int64 *)&s1, "Platform") )
  {
    v9 = v75;
    if ( (unsigned __int64)v75 > 1 )
    {
      v42 = s1;
      v43 = qword_8CC310;
      if ( *(&xmmword_8CC318 + 1) < (unsigned __int64)v75 )
      {
        qword_8CC310 = (char *)qvector_reserve(&qword_8CC310, qword_8CC310, v75, 1);
        v43 = qword_8CC310;
      }
      xmmword_8CC318 = v9;
      memmove(v43, v42, v9 - 1);
      qword_8CC310[v9 - 1] = 0;
    }
    else
    {
      xmmword_8CC318 = 0;
    }
  }
  debugger_plugins = get_debugger_plugins(&v73);
  if ( (*(_DWORD *)debug & 0x10000) != 0 )
  {
    v76 = 0;
    v8 = 0;
    v77 = 0;
    if ( debugger_plugins )
    {
      v17 = 0;
      v18 = 0;
      v19 = 0;
      v20 = 2;
      v21 = 0;
      while ( 1 )
      {
        if ( v18 < 2 )
          goto LABEL_17;
        while ( 1 )
        {
          *(_QWORD *)&v77 = v20;
          *(_BYTE *)(v17 + v21) = 32;
          *(_BYTE *)(v76 + v21 + 1) = 0;
          v22 = *(_QWORD *)&v73[16 * v19 + 8];
          v23 = *(const void **)(v22 + 8);
          if ( v23 )
          {
            v24 = v77;
            v25 = strlen(*(const char **)(v22 + 8));
            v26 = v25;
            v27 = v25;
            if ( v24 )
            {
              --v24;
              v27 = v25 + v24;
            }
            v28 = v76;
            v29 = (void *)(v27 + 1);
            if ( *((_QWORD *)&v77 + 1) < v27 + 1 )
            {
              v72 = v25;
              v71 = v27;
              v70 = (void *)(v27 + 1);
              v76 = qvector_reserve(&v76, v76, v29, 1);
              v26 = v72;
              v28 = v76;
              v27 = v71;
              v29 = v70;
            }
            *(_QWORD *)&v77 = v29;
            *(_BYTE *)(v28 + v27) = 0;
            memmove((void *)(v24 + v76), v23, v26);
          }
          ++v19;
          v21 = v77;
          if ( debugger_plugins == v19 )
          {
            v35 = &::s1;
            if ( (_QWORD)v77 )
              v35 = (const char *)v76;
            sub_169700(
              (int)"Loaded debugger plugins:%s\n",
              (__int64)v35,
              v10,
              (__int64)v11,
              v12,
              v13,
              (__m128)0LL,
              a2,
              a3,
              a4,
              v15,
              v16,
              a7,
              a8,
              v69);
            if ( v76 )
            {
              *(_QWORD *)&v77 = 0;
              *(double *)v8.m128_u64 = qfree(v76, v35);
            }
LABEL_28:
            if ( debugger_plugins == 1 )
            {
              sub_258CA0(
                v73,
                0,
                v10,
                v11,
                v12,
                v13,
                v8,
                a2,
                a3,
                a4,
                *(double *)v15.m128_u64,
                *(double *)v16.m128_u64,
                a7,
                a8);
              goto LABEL_35;
            }
            v36 = sub_256790((__int64 *)&s1, "Name");
            if ( v36 )
            {
              v37 = v73;
              v38 = (char *)&::s1;
              if ( (_QWORD)v75 )
                v38 = s1;
              v39 = 0;
              while ( strcmp(v38, *(const char **)(*(_QWORD *)v37 + 16LL)) )
              {
                ++v39;
                v37 += 16;
                if ( debugger_plugins == v39 )
                  goto LABEL_35;
              }
              sub_258CA0(
                v37,
                0,
                v10,
                v11,
                v12,
                v13,
                v8,
                a2,
                a3,
                a4,
                *(double *)v15.m128_u64,
                *(double *)v16.m128_u64,
                a7,
                a8);
LABEL_35:
              v30 = (QT::QVariant *)(&dword_0 + 1);
              v31 = dbg;
              if ( !dbg )
              {
LABEL_36:
                v40 = 1;
                v41 = 0;
                goto LABEL_39;
              }
              goto LABEL_20;
            }
            v44 = "Host";
            if ( !(unsigned __int8)sub_256790((__int64 *)&s1, "Host") )
            {
              v44 = "DefaultRemoteHost64";
              v50 = reg_str_get(&s1, "DefaultRemoteHost64", 0);
              v51 = v50;
              v36 = 1;
              if ( !v50 )
              {
LABEL_48:
                if ( debugger_plugins == 2 )
                {
                  v52 = v73;
                  v53 = *((_QWORD *)v73 + 1);
                  if ( *(_DWORD *)(v53 + 16) == *(_DWORD *)(*((_QWORD *)v73 + 3) + 16LL) )
                  {
                    if ( v51 != (*(_BYTE *)(v53 + 32) & 1) )
                      v52 = v73 + 16;
                    sub_258CA0(v52, 0, v45, v73 + 16, v46, v47, v8, a2, a3, a4, v48, v49, a7, a8);
                    goto LABEL_35;
                  }
                }
                v8 = 0;
                v76 = 0;
                v77 = 0;
                if ( (unsigned __int8)sub_22C090((__int64)&v76) )
                {
                  if ( (_QWORD)v77 )
                  {
                    v54 = v51;
                    v55 = 0;
                    v56 = 0;
                    v57 = !v51;
                    while ( 1 )
                    {
                      v60 = (char *)&::s1;
                      v61 = 24 * v56;
                      v62 = 24 * v56 + v76;
                      if ( *(_QWORD *)(v62 + 8) )
                        v60 = *(char **)v62;
                      v44 = (const char *)v54;
                      v59 = (_QWORD *)sub_22D9A0(
                                        v60,
                                        v54,
                                        (__m128)0LL,
                                        a2,
                                        a3,
                                        a4,
                                        *(double *)v15.m128_u64,
                                        *(double *)v16.m128_u64,
                                        a7,
                                        a8);
                      if ( v59 )
                        break;
                      if ( v36 )
                      {
                        v58 = (char *)&::s1;
                        if ( *(_QWORD *)(v61 + v76 + 8) )
                          v58 = *(char **)(v61 + v76);
                        v44 = (const char *)v57;
                        v59 = (_QWORD *)sub_22D9A0(
                                          v58,
                                          v57,
                                          (__m128)0LL,
                                          a2,
                                          a3,
                                          a4,
                                          *(double *)v15.m128_u64,
                                          *(double *)v16.m128_u64,
                                          a7,
                                          a8);
                        if ( v59 )
                          break;
                      }
                      v56 = ++v55;
                      if ( v55 >= (unsigned __int64)v77 )
                        goto LABEL_62;
                    }
                    v44 = nullptr;
                    sub_258CA0(
                      v59,
                      0,
                      v10,
                      v11,
                      v12,
                      v13,
                      (__m128)0LL,
                      a2,
                      a3,
                      a4,
                      *(double *)v15.m128_u64,
                      *(double *)v16.m128_u64,
                      a7,
                      a8);
                    goto LABEL_62;
                  }
                  v64 = v76;
                  if ( !v76 )
                  {
LABEL_69:
                    v30 = (QT::QVariant *)(&dword_0 + 1);
                    v31 = dbg;
                    if ( !dbg )
                      goto LABEL_36;
                    goto LABEL_20;
                  }
                }
                else
                {
LABEL_62:
                  v63 = v76;
                  v64 = v76;
                  if ( !v76 )
                    goto LABEL_69;
                  v65 = v77;
                  if ( (_QWORD)v77 )
                  {
                    v66 = 0;
                    do
                    {
                      v67 = (__int64 *)(v63 + 24 * v66);
                      v68 = *v67;
                      if ( *v67 )
                      {
                        v67[1] = 0;
                        qfree(v68, v44);
                        v63 = v76;
                      }
                      ++v66;
                      v64 = v63;
                    }
                    while ( v65 != v66 );
                  }
                }
                *(_QWORD *)&v77 = 0;
                *(double *)v8.m128_u64 = qfree(v64, v44);
                goto LABEL_69;
              }
              v36 = v50;
            }
            v51 = (unsigned __int64)v75 > 1;
            goto LABEL_48;
          }
          v18 = *((_QWORD *)&v77 + 1);
          v17 = v76;
          v20 = 2;
          if ( !(_QWORD)v77 )
            break;
          v20 = v77 + 1;
          v21 = v77 - 1;
          if ( *((_QWORD *)&v77 + 1) < (unsigned __int64)(v77 + 1) )
          {
LABEL_17:
            v76 = qvector_reserve(&v76, v17, v20, 1);
            v17 = v76;
          }
        }
      }
    }
    sub_169700(
      (int)"Loaded debugger plugins:%s\n",
      (__int64)&::s1,
      v10,
      (__int64)v11,
      v12,
      v13,
      (__m128)0LL,
      a2,
      a3,
      a4,
      v15,
      v16,
      a7,
      a8,
      v69);
    if ( v76 )
    {
      *(_QWORD *)&v77 = 0;
      *(double *)v8.m128_u64 = qfree(v76, &::s1);
    }
  }
  else if ( debugger_plugins )
  {
    goto LABEL_28;
  }
  v30 = nullptr;
  v31 = dbg;
  if ( dbg )
    goto LABEL_20;
  v40 = 0;
  v41 = 2;
LABEL_39:
  sub_258CA0(nullptr, v41, v10, v11, v12, v13, v8, a2, a3, a4, *(double *)v15.m128_u64, *(double *)v16.m128_u64, a7, a8);
  v31 = dbg;
  v30 = (QT::QVariant *)v40;
  if ( dbg )
LABEL_20:
    v32 = *(_QWORD *)(v31 + 40) != 0;
  else
    v32 = 0;
  sub_24BA10(v30, v32, 0, *(double *)v8.m128_u64, (__int64)v11, v12, v13);
  bpt_kernel_interface = get_bpt_kernel_interface(v30, v32);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)bpt_kernel_interface + 272LL))(bpt_kernel_interface, 1);
  if ( s1 )
  {
    *(_QWORD *)&v75 = 0;
    qfree(s1, (_BYTE *)&dword_0 + 1);
  }
  return v78 - __readfsqword(0x28u);
}
