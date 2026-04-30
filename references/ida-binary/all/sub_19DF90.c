__int64 __fastcall expidc_ah_t__::vfunc_0(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  int v11; // edx
  char *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // rdi
  __int64 bpt_kernel_interface; // rax
  _QWORD *v24; // rbx
  __int64 v25; // rbp
  __int64 v26; // rax
  __int64 v27; // r15
  const char *v28; // rsi
  __int64 *v29; // rdi
  __m128i *v30; // rax
  int v31; // eax
  const char *v32; // rdx
  const char *v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdi
  unsigned __int64 v36; // rax
  const char *v37; // rsi
  __int64 v38; // rax
  const char *v39; // rdx
  const char *v40; // rdx
  __int64 v41; // rax
  const char *v42; // rsi
  const char *v43; // rdx
  const char *v44; // rsi
  const char *v45; // rdx
  const char *v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // r15
  __int64 v49; // r8
  unsigned __int64 v50; // rdx
  __m128i si128; // xmm0
  __m128i *v52; // r15
  __int64 v53; // rax
  __int64 v54; // rax
  const char *v55; // rcx
  const char *v56; // rdx
  const char *v57; // rcx
  __int64 v58; // r8
  struct _Unwind_Exception *v59; // rbx
  char v60; // [rsp+0h] [rbp-D8h]
  _QWORD *v61; // [rsp+0h] [rbp-D8h]
  bool v62; // [rsp+8h] [rbp-D0h]
  unsigned __int64 v63; // [rsp+8h] [rbp-D0h]
  __int64 v64; // [rsp+10h] [rbp-C8h]
  __int64 v65; // [rsp+10h] [rbp-C8h]
  const char *v66; // [rsp+18h] [rbp-C0h]
  _QWORD *v67; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v68; // [rsp+28h] [rbp-B0h]
  __m128i *v69; // [rsp+40h] [rbp-98h] BYREF
  __int128 v70; // [rsp+48h] [rbp-90h]
  const char *v71; // [rsp+60h] [rbp-78h] BYREF
  __int128 v72; // [rsp+68h] [rbp-70h]
  char *v73; // [rsp+80h] [rbp-58h] BYREF
  __int128 v74; // [rsp+88h] [rbp-50h]
  unsigned __int64 v75; // [rsp+98h] [rbp-40h]

  v75 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 24) )
    return 1;
  v11 = *(_DWORD *)(a2 + 8);
  v12 = *(char **)a2;
  v67 = nullptr;
  v68 = 0;
  sub_19B050((__int64 *)&v67, (const QT::QObject *)v12, v11);
  if ( (_QWORD)v68 )
  {
    v12 = "*.idc";
    v19 = sub_17CD60(
            1u,
            (int)"*.idc",
            (int)"Export selected breakpoints",
            v14,
            v15,
            v16,
            (__m128)0LL,
            a4,
            a5,
            a6,
            v17,
            v18,
            a9,
            a10,
            v60);
    if ( v19 )
    {
      v20 = fopenWT(v19);
      v21 = v20;
      if ( v20 )
      {
        v22 = v20;
        sub_199CF0(v20, (__int64)"static main(void)\n{\n  auto bpt;\n");
        bpt_kernel_interface = get_bpt_kernel_interface(v22, "static main(void)\n{\n  auto bpt;\n");
        v24 = v67;
        v25 = bpt_kernel_interface;
        v61 = &v67[v68];
        if ( v61 != v67 )
        {
          do
          {
            v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v25 + 160LL))(v25, *v24);
            v69 = nullptr;
            v27 = v26;
            v70 = 0;
            if ( !v26 )
            {
LABEL_48:
              v47 = 0;
              v46 = &s1;
              goto LABEL_42;
            }
            v28 = nullptr;
            v29 = (__int64 *)&v69;
            v30 = (__m128i *)qvector_reserve(&v69, 0, 24, 1);
            v69 = v30;
            *(_QWORD *)&v70 = 24;
            *v30 = _mm_load_si128((const __m128i *)&xmmword_5DC550);
            strcpy(&v30->m128i_i8[15], "oint();\n");
            v62 = 1;
            if ( *(_DWORD *)(v27 + 64) == 4 && *(_DWORD *)(v27 + 72) == 9 && !*(_DWORD *)(v27 + 68) )
              v62 = *(_QWORD *)(v27 + 16) > 1u;
            v31 = *(_DWORD *)(v27 + 44);
            if ( v31 )
            {
              switch ( v31 )
              {
                case 2:
                  v66 = "sym";
                  break;
                case 1:
                  v66 = "rel";
                  break;
                case 3:
                  v66 = "src";
                  break;
                default:
                  goto LABEL_16;
              }
              v65 = *(_QWORD *)(v27 + 32);
              v53 = get_bpt_kernel_interface(&v69, 0);
              v54 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v53 + 80LL))(
                      v53,
                      *(unsigned int *)(v27 + 40));
              v73 = nullptr;
              v74 = 0;
              qstr2user(&v73, v54, 0xFFFFFFFFLL);
              v55 = &s1;
              if ( (_QWORD)v74 )
                v55 = v73;
              v28 = "  bpt.set_%s_bpt(\"%s\", 0x%llx);\n";
              sub_16FAA0((__int64 *)&v69, (__int64)"  bpt.set_%s_bpt(\"%s\", 0x%llx);\n", v66, v55, v65);
              v29 = (__int64 *)v73;
              if ( v73 )
              {
                *(_QWORD *)&v74 = 0;
                qfree(v73, "  bpt.set_%s_bpt(\"%s\", 0x%llx);\n", v56, v57, v58);
              }
            }
            else
            {
              v28 = "  bpt.set_abs_bpt(0x%llx);\n";
              v29 = (__int64 *)&v69;
              sub_16FAA0((__int64 *)&v69, (__int64)"  bpt.set_abs_bpt(0x%llx);\n", *(_QWORD *)(v27 + 32));
            }
LABEL_16:
            if ( v62 )
            {
              sub_16FAA0((__int64 *)&v69, (__int64)"  bpt.type=%u;\n", *(_DWORD *)(v27 + 64));
              if ( *(_DWORD *)(v27 + 64) != 4 )
                sub_16FAA0((__int64 *)&v69, (__int64)"  bpt.size=%u;\n", *(_DWORD *)(v27 + 80));
              sub_16FAA0((__int64 *)&v69, (__int64)"  bpt.flags=%u;\n", *(_DWORD *)(v27 + 72));
              v29 = (__int64 *)&v69;
              sub_16FAA0((__int64 *)&v69, (__int64)"  bpt.pass_count=%d;\n", *(_DWORD *)(v27 + 68));
              v28 = *(const char **)(v27 + 8);
              if ( v28 )
              {
                v73 = nullptr;
                v74 = 0;
                qstr2user(&v73, v28, 0xFFFFFFFFLL);
                v32 = &s1;
                if ( (_QWORD)v74 )
                  v32 = v73;
                sub_16FAA0((__int64 *)&v69, (__int64)"  bpt.condition=\"%s\";\n", v32);
                v35 = (__int64)v73;
                if ( v73 )
                {
                  *(_QWORD *)&v74 = 0;
                  qfree(v73, "  bpt.condition=\"%s\";\n", v33);
                }
                v36 = *(_DWORD *)(v27 + 72) >> 28;
                if ( v36 >= (unsigned __int64)xmmword_8CACB8 )
                {
                  v59 = (struct _Unwind_Exception *)sub_199400(
                                                      0.0,
                                                      v35,
                                                      (__int64)"  bpt.condition=\"%s\";\n",
                                                      (__int64)v33,
                                                      v34);
                  if ( v71 )
                  {
                    *(_QWORD *)&v72 = 0;
                    qfree(v71, "  bpt.condition=\"%s\";\n");
                  }
                  if ( v69 )
                  {
                    *(_QWORD *)&v70 = 0;
                    qfree(v69, "  bpt.condition=\"%s\";\n");
                  }
                  if ( v67 )
                  {
                    *(_QWORD *)&v68 = 0;
                    qfree(v67, "  bpt.condition=\"%s\";\n");
                  }
                  _Unwind_Resume(v59);
                }
                v37 = &s1;
                v38 = qword_8CACB0 + 24 * v36;
                if ( *(_QWORD *)(v38 + 8) )
                  v37 = *(const char **)v38;
                v73 = nullptr;
                v74 = 0;
                qstr2user(&v73, v37, 0xFFFFFFFFLL);
                v39 = &s1;
                if ( (_QWORD)v74 )
                  v39 = v73;
                v28 = "  bpt.elang=\"%s\";\n";
                sub_16FAA0((__int64 *)&v69, (__int64)"  bpt.elang=\"%s\";\n", v39);
                v29 = (__int64 *)v73;
                if ( v73 )
                {
                  *(_QWORD *)&v74 = 0;
                  qfree(v73, "  bpt.elang=\"%s\";\n", v40);
                }
              }
            }
            v71 = nullptr;
            v72 = 0;
            v41 = get_bpt_kernel_interface(v29, v28);
            if ( !(*(unsigned __int8 (__fastcall **)(__int64, const char **, __int64))(*(_QWORD *)v41 + 360LL))(
                    v41,
                    &v71,
                    v27 + 32) )
            {
LABEL_50:
              v48 = v70;
              if ( (_QWORD)v70 )
              {
                v49 = v70 + 23;
                v50 = v70 + 24;
                v48 = v70 - 1;
              }
              else
              {
                v50 = 25;
                v49 = 24;
              }
              v44 = (const char *)v69;
              if ( *((_QWORD *)&v70 + 1) < v50 )
              {
                v64 = v49;
                v63 = v50;
                v69 = (__m128i *)qvector_reserve(&v69, v69, v50, 1);
                v49 = v64;
                v44 = (const char *)v69;
                v50 = v63;
              }
              si128 = _mm_load_si128((const __m128i *)&xmmword_5DC560);
              *(_QWORD *)&v70 = v50;
              v44[v49] = 0;
              v52 = (__m128i *)((char *)v69 + v48);
              v52[1].m128i_i64[0] = 0xA3B297470622864LL;
              *v52 = si128;
              goto LABEL_38;
            }
            if ( (_QWORD)v72 )
            {
              v42 = v71;
              if ( *v71 == 47 && !v71[1] )
                goto LABEL_50;
            }
            else
            {
              v42 = &s1;
            }
            v73 = nullptr;
            v74 = 0;
            qstr2user(&v73, v42, 0xFFFFFFFFLL);
            v43 = &s1;
            if ( (_QWORD)v74 )
              v43 = v73;
            v44 = "  Breakpoints.AddToGroup(bpt, \"%s\");\n";
            sub_16FAA0((__int64 *)&v69, (__int64)"  Breakpoints.AddToGroup(bpt, \"%s\");\n", v43);
            if ( v73 )
            {
              *(_QWORD *)&v74 = 0;
              qfree(v73, "  Breakpoints.AddToGroup(bpt, \"%s\");\n", v45);
            }
LABEL_38:
            if ( v71 )
            {
              *(_QWORD *)&v72 = 0;
              qfree(v71, v44);
            }
            if ( !(_QWORD)v70 )
              goto LABEL_48;
            v46 = (const char *)v69;
            v47 = v70 - 1;
LABEL_42:
            qfwrite(v21, v46, v47);
            if ( v69 )
            {
              *(_QWORD *)&v70 = 0;
              qfree(v69, v46);
            }
            ++v24;
          }
          while ( v61 != v24 );
        }
        v12 = "}\n";
        sub_199CF0(v21, (__int64)"}\n");
        qfclose(v21);
      }
      if ( v67 )
      {
        *(_QWORD *)&v68 = 0;
        qfree(v67, v12);
      }
      return 1;
    }
  }
  if ( v67 )
  {
    *(_QWORD *)&v68 = 0;
    qfree(v67, v12, v13, v14, v15);
  }
  return 0;
}
