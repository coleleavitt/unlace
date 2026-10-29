__int64 __fastcall sub_817330(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, char a5)
{
  char **exception; // rbp
  __int64 result; // rax
  unsigned int *v11; // rax
  __int64 v12; // rax
  int v13; // ecx
  char *v14; // rdx
  __int64 v15; // rsi
  char *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned int v20; // r15d
  __int64 v21; // rdx
  int v22; // r14d
  __int64 v23; // rax
  int v24; // edx
  bool v25; // zf
  _DWORD *v26; // rdx
  __int64 v27; // rax
  unsigned int *v28; // rax
  int v29; // ecx
  __int64 v30; // rdi
  _QWORD *v32; // rdx
  __int64 v33; // rax
  _DWORD *v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rax
  _QWORD *v37; // rdx
  __int64 v38; // rax
  _DWORD *v39; // rcx
  __int64 v40; // rdx
  int v41; // esi
  unsigned int v42; // r14d
  __int64 v43; // r15
  unsigned int v44; // r8d
  unsigned int v45; // r9d
  __int64 v46; // rax
  _DWORD *v47; // rdx
  __int64 v48; // rax
  unsigned int *v49; // rax
  int v50; // edi
  unsigned int v51; // r8d
  size_t v52; // rsi
  unsigned int *v53; // rax
  __int64 v54; // rdx
  int v55; // ecx
  __int64 v56; // r14
  unsigned int v57; // r15d
  int v58; // ecx
  _DWORD *v59; // rdx
  __int64 v60; // rax
  unsigned int *v61; // rax
  int v62; // edi
  unsigned int v63; // r15d
  size_t v64; // rsi
  unsigned int *v65; // rax
  unsigned int v66; // r8d
  size_t v67; // rsi
  unsigned int *v68; // rax
  __int64 v69; // rax
  unsigned int v70; // r10d
  size_t v71; // rsi
  unsigned int *v72; // rax
  __int64 v73; // rax
  _QWORD *v74; // rdx
  __int64 v75; // rax
  _QWORD *v76; // rax
  unsigned int v77; // r8d
  size_t v78; // rsi
  unsigned int *v79; // rax
  __int64 v80; // rax
  _QWORD *v81; // rax
  unsigned int v82; // r14d
  size_t v83; // rsi
  unsigned int *v84; // rax
  __int64 v85; // rax
  unsigned int v86; // r14d
  size_t v87; // rsi
  unsigned int *v88; // rax
  __int64 v89; // rax
  unsigned int v90; // r15d
  size_t v91; // rsi
  unsigned int *v92; // rax
  unsigned int v93; // ecx
  size_t v94; // rsi
  unsigned int *v95; // rax
  __int64 v96; // rax
  _QWORD *v97; // rax
  _QWORD *v98; // rax
  _QWORD *v99; // rax
  _QWORD *v100; // rax
  int v101; // [rsp+0h] [rbp-78h]
  int v102; // [rsp+0h] [rbp-78h]
  int v103; // [rsp+0h] [rbp-78h]
  int v104; // [rsp+0h] [rbp-78h]
  unsigned int v105; // [rsp+0h] [rbp-78h]
  unsigned int v106; // [rsp+4h] [rbp-74h]
  unsigned int v107; // [rsp+4h] [rbp-74h]
  unsigned int v108; // [rsp+4h] [rbp-74h]
  unsigned int v109; // [rsp+4h] [rbp-74h]
  unsigned int v110; // [rsp+4h] [rbp-74h]
  unsigned int v111; // [rsp+4h] [rbp-74h]
  unsigned int v112; // [rsp+8h] [rbp-70h]
  unsigned int v113; // [rsp+8h] [rbp-70h]
  unsigned int v114; // [rsp+8h] [rbp-70h]
  unsigned int v115; // [rsp+8h] [rbp-70h]
  unsigned int v116; // [rsp+Ch] [rbp-6Ch]
  __int64 v117[11]; // [rsp+20h] [rbp-58h] BYREF

  switch ( *(_DWORD *)(a3 + 8) )
  {
    case 0:
      v32 = (_QWORD *)*a4;
      if ( !*a4 )
      {
        v100 = (_QWORD *)sub_186B270(0x10u);
        v32 = v100 + 1;
        *v100 = 2;
        *a4 = v100 + 1;
        v34 = v100 + 1;
LABEL_29:
        v35 = *(_QWORD *)(a1 + 80);
        *v34 = *(_DWORD *)(a3 + 28);
        v36 = *(_QWORD *)(a1 + 88);
        ++*((_DWORD *)v32 - 1);
        result = sub_7CCF30(
                   v35,
                   a5,
                   *(_QWORD *)(v36 + 8LL * *(unsigned int *)(a3 + 16)),
                   *(_QWORD *)(v36 + 8LL * *(unsigned int *)(a3 + 20)));
        if ( a5 )
          return result;
        goto LABEL_22;
      }
      v33 = *((unsigned int *)v32 - 1);
      v34 = (_DWORD *)v32 + v33;
      if ( (_DWORD)v33 != *((_DWORD *)v32 - 2) )
        goto LABEL_29;
      v86 = (unsigned int)(3 * v33 + 1) >> 1;
      v87 = 4 * v86 + 8;
      if ( 4 * (int)v33 + 8 < (unsigned int)v87 && (unsigned int)v33 < v86 )
      {
        v88 = (unsigned int *)sub_186B300(v32 - 1, v87);
        v32 = v88 + 2;
        *v88 = v86;
        v89 = v88[1];
        *a4 = v32;
        v34 = (_DWORD *)v32 + v89;
        goto LABEL_29;
      }
      goto LABEL_102;
    case 1:
      v37 = (_QWORD *)*a4;
      if ( !*a4 )
      {
        v99 = (_QWORD *)sub_186B270(0x10u);
        v37 = v99 + 1;
        *v99 = 2;
        *a4 = v99 + 1;
        v39 = v99 + 1;
        goto LABEL_33;
      }
      v38 = *((unsigned int *)v37 - 1);
      v39 = (_DWORD *)v37 + v38;
      if ( (_DWORD)v38 != *((_DWORD *)v37 - 2) )
        goto LABEL_33;
      v82 = (unsigned int)(3 * v38 + 1) >> 1;
      v83 = 4 * v82 + 8;
      if ( 4 * (int)v38 + 8 >= (unsigned int)v83 || (unsigned int)v38 >= v82 )
        goto LABEL_102;
      v84 = (unsigned int *)sub_186B300(v37 - 1, v83);
      v37 = v84 + 2;
      *v84 = v82;
      v85 = v84[1];
      *a4 = v37;
      v39 = (_DWORD *)v37 + v85;
LABEL_33:
      *v39 = *(_DWORD *)(a3 + 28);
      result = *(_QWORD *)(a1 + 600);
      ++*((_DWORD *)v37 - 1);
      v40 = *(_QWORD *)(result + 8LL * *(unsigned int *)(a3 + 16));
      if ( v40 )
      {
        v41 = *(_DWORD *)(v40 - 4);
        v42 = v41 - 1;
        if ( v41 )
        {
          v43 = 4LL * v42;
          v101 = *(_DWORD *)(a3 + 12);
          while ( 1 )
          {
            v44 = *(_DWORD *)(v40 + v43);
            result = *(_QWORD *)(result + 8LL * *(unsigned int *)(a3 + 20));
            v45 = *(_DWORD *)(result + v43);
            if ( v45 != v44 )
            {
              v46 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 3288LL);
              if ( v42 == v101 )
              {
                if ( *(_DWORD *)(v46 + 4LL * v45) == -1 )
                  v45 ^= 1u;
                v74 = (_QWORD *)*a4;
                if ( *a4 )
                {
                  v75 = *((unsigned int *)v74 - 1);
                  if ( (_DWORD)v75 == *((_DWORD *)v74 - 2) )
                  {
                    v77 = (unsigned int)(3 * v75 + 1) >> 1;
                    v78 = 4 * v77 + 8;
                    if ( 4 * (int)v75 + 8 >= (unsigned int)v78 || (unsigned int)v75 >= v77 )
                      goto LABEL_102;
                    v114 = (unsigned int)(3 * v75 + 1) >> 1;
                    v109 = v45;
                    v79 = (unsigned int *)sub_186B300(v74 - 1, v78);
                    v45 = v109;
                    v74 = v79 + 2;
                    *v79 = v114;
                    v80 = v79[1];
                    *a4 = v74;
                    result = (__int64)v74 + 4 * v80;
                  }
                  else
                  {
                    result = (__int64)v74 + 4 * v75;
                  }
                }
                else
                {
                  v111 = v45;
                  v97 = (_QWORD *)sub_186B270(0x10u);
                  v45 = v111;
                  v74 = v97 + 1;
                  *v97 = 2;
                  *a4 = v97 + 1;
                  result = (__int64)(v97 + 1);
                }
                *(_DWORD *)result = v45;
                ++*((_DWORD *)v74 - 1);
              }
              else
              {
                if ( *(_DWORD *)(v46 + 4LL * v44) == -1 )
                {
                  v44 ^= 1u;
                  v45 ^= 1u;
                }
                v47 = (_DWORD *)*a4;
                if ( *a4 )
                {
                  v48 = (unsigned int)*(v47 - 1);
                  if ( (_DWORD)v48 == *(v47 - 2) )
                  {
                    v70 = (unsigned int)(3 * v48 + 1) >> 1;
                    v71 = 4 * v70 + 8;
                    if ( 4 * (int)v48 + 8 >= (unsigned int)v71 || (unsigned int)v48 >= v70 )
                      goto LABEL_102;
                    v116 = (unsigned int)(3 * v48 + 1) >> 1;
                    v113 = v44;
                    v108 = v45;
                    v72 = (unsigned int *)sub_186B300(v47 - 2, v71);
                    v45 = v108;
                    v47 = v72 + 2;
                    v44 = v113;
                    *v72 = v116;
                    v73 = v72[1];
                    *a4 = v47;
                    v49 = &v47[v73];
                  }
                  else
                  {
                    v49 = &v47[v48];
                  }
                }
                else
                {
                  v115 = v44;
                  v110 = v45;
                  v81 = (_QWORD *)sub_186B270(0x10u);
                  v45 = v110;
                  v44 = v115;
                  v47 = v81 + 1;
                  *v81 = 2;
                  *a4 = v81 + 1;
                  v49 = (unsigned int *)(v81 + 1);
                }
                *v49 = v44;
                v50 = *(v47 - 1);
                result = (unsigned int)(v50 + 1);
                *(v47 - 1) = result;
                if ( *(v47 - 2) == (_DWORD)result )
                {
                  v51 = (unsigned int)(3 * result + 1) >> 1;
                  v52 = 4 * v51 + 8;
                  if ( 4 * v50 + 12 >= (unsigned int)v52 || (unsigned int)result >= v51 )
                    goto LABEL_102;
                  v112 = (unsigned int)(3 * result + 1) >> 1;
                  v106 = v45;
                  v53 = (unsigned int *)sub_186B300(v47 - 2, v52);
                  v45 = v106;
                  v47 = v53 + 2;
                  *v53 = v112;
                  result = v53[1];
                  *a4 = v47;
                }
                v47[result] = v45;
                ++*(v47 - 1);
              }
            }
            --v42;
            v43 -= 4;
            if ( v42 == -1 )
              break;
            result = *(_QWORD *)(a1 + 600);
            v40 = *(_QWORD *)(result + 8LL * *(unsigned int *)(a3 + 16));
          }
        }
      }
LABEL_21:
      if ( a5 )
        return result;
LABEL_22:
      v30 = *(_QWORD *)(a1 + 80);
      result = *(_QWORD *)(v30 + 24);
      if ( result )
      {
        if ( *(_BYTE *)(result + 352) )
        {
          sub_7A4170(v30);
          return sub_816230(a1, (int *)(a3 + 8));
        }
      }
      return result;
    case 2:
      result = *(_QWORD *)(a1 + 600);
      v54 = *(_QWORD *)(result + 8LL * *(unsigned int *)(a3 + 16));
      if ( !v54 )
        goto LABEL_21;
      v55 = *(_DWORD *)(v54 - 4);
      if ( !v55 )
        goto LABEL_21;
      v56 = 4LL * (unsigned int)(v55 - 1);
      while ( 2 )
      {
        v57 = *(_DWORD *)(v54 + v56);
        result = *(_QWORD *)(result + 8LL * *(unsigned int *)(a3 + 20));
        v58 = *(_DWORD *)(result + v56);
        if ( v58 == v57 )
          goto LABEL_54;
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 3288LL) + 4LL * v57) == -1 )
        {
          v57 ^= 1u;
          v58 ^= 1u;
        }
        v59 = (_DWORD *)*a4;
        if ( *a4 )
        {
          v60 = (unsigned int)*(v59 - 1);
          if ( (_DWORD)v60 == *(v59 - 2) )
          {
            v66 = (unsigned int)(3 * v60 + 1) >> 1;
            v67 = 4 * v66 + 8;
            if ( 4 * (int)v60 + 8 >= (unsigned int)v67 || (unsigned int)v60 >= v66 )
              goto LABEL_102;
            v107 = (unsigned int)(3 * v60 + 1) >> 1;
            v103 = v58;
            v68 = (unsigned int *)sub_186B300(v59 - 2, v67);
            v58 = v103;
            v59 = v68 + 2;
            *v68 = v107;
            v69 = v68[1];
            *a4 = v59;
            v61 = &v59[v69];
          }
          else
          {
            v61 = &v59[v60];
          }
        }
        else
        {
          v104 = v58;
          v76 = (_QWORD *)sub_186B270(0x10u);
          v58 = v104;
          v59 = v76 + 1;
          *v76 = 2;
          *a4 = v76 + 1;
          v61 = (unsigned int *)(v76 + 1);
        }
        *v61 = v57;
        v62 = *(v59 - 1);
        result = (unsigned int)(v62 + 1);
        *(v59 - 1) = result;
        if ( *(v59 - 2) != (_DWORD)result )
          goto LABEL_53;
        v63 = (unsigned int)(3 * result + 1) >> 1;
        v64 = 4 * v63 + 8;
        if ( 4 * v62 + 12 < (unsigned int)v64 && (unsigned int)result < v63 )
        {
          v102 = v58;
          v65 = (unsigned int *)sub_186B300(v59 - 2, v64);
          v58 = v102;
          v59 = v65 + 2;
          *v65 = v63;
          result = v65[1];
          *a4 = v59;
LABEL_53:
          v59[result] = v58;
          ++*(v59 - 1);
LABEL_54:
          v56 -= 4;
          if ( v56 != -4 )
          {
            result = *(_QWORD *)(a1 + 600);
            v54 = *(_QWORD *)(result + 8LL * *(unsigned int *)(a3 + 16));
            continue;
          }
          goto LABEL_21;
        }
        goto LABEL_102;
      }
    case 3:
      v11 = (unsigned int *)sub_7E4F60(a1, *(_DWORD *)(a3 + 24) >> 1);
      v12 = sub_7E4F00(a1, v11);
      v13 = *(_DWORD *)(a1 + 12);
      v14 = (char *)(*(_QWORD *)(v12 + 176) + 88LL);
      if ( *(int *)v14 >> 8 == -1 )
        goto LABEL_84;
      do
      {
        if ( v13 == *v14 )
        {
          v15 = 8LL * (unsigned int)(*(int *)v14 >> 8);
          goto LABEL_7;
        }
        v14 = *((char **)v14 + 1);
      }
      while ( v14 );
LABEL_84:
      v15 = 0x7FFFFFFF8LL;
LABEL_7:
      v16 = (char *)(*(_QWORD *)(v12 + 184) + 88LL);
      if ( *(int *)v16 >> 8 == -1 )
      {
LABEL_83:
        v17 = 0x7FFFFFFF8LL;
      }
      else
      {
        while ( v13 != *v16 )
        {
          v16 = *((char **)v16 + 1);
          if ( !v16 )
            goto LABEL_83;
        }
        v17 = 8LL * (unsigned int)(*(int *)v16 >> 8);
      }
      v18 = *(_QWORD *)(a1 + 600);
      v19 = *(unsigned int *)(a3 + 12);
      v20 = *(_DWORD *)(*(_QWORD *)(v18 + v15) + 4 * v19);
      v21 = *(unsigned int *)(*(_QWORD *)(v18 + v17) + 4 * v19);
      v22 = v21;
      v23 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 3288LL);
      v24 = *(_DWORD *)(v23 + 4 * v21);
      if ( *(_DWORD *)(v23 + 4LL * v20) == -1 )
        v20 ^= 1u;
      v25 = v24 == -1;
      v26 = (_DWORD *)*a4;
      if ( v25 )
        v22 ^= 1u;
      if ( v26 )
      {
        v27 = (unsigned int)*(v26 - 1);
        if ( (_DWORD)v27 == *(v26 - 2) )
        {
          v93 = (unsigned int)(3 * v27 + 1) >> 1;
          v94 = 4 * v93 + 8;
          if ( 4 * (int)v27 + 8 >= (unsigned int)v94 || (unsigned int)v27 >= v93 )
            goto LABEL_102;
          v105 = (unsigned int)(3 * v27 + 1) >> 1;
          v95 = (unsigned int *)sub_186B300(v26 - 2, v94);
          v26 = v95 + 2;
          *v95 = v105;
          v96 = v95[1];
          *a4 = v26;
          v28 = &v26[v96];
        }
        else
        {
          v28 = &v26[v27];
        }
      }
      else
      {
        v98 = (_QWORD *)sub_186B270(0x10u);
        v26 = v98 + 1;
        *v98 = 2;
        *a4 = v98 + 1;
        v28 = (unsigned int *)(v98 + 1);
      }
      *v28 = v20;
      v29 = *(v26 - 1);
      result = (unsigned int)(v29 + 1);
      *(v26 - 1) = result;
      if ( *(v26 - 2) != (_DWORD)result )
      {
LABEL_20:
        v26[result] = v22;
        ++*(v26 - 1);
        goto LABEL_21;
      }
      v90 = (unsigned int)(3 * result + 1) >> 1;
      v91 = 4 * v90 + 8;
      if ( 4 * v29 + 12 < (unsigned int)v91 && (unsigned int)result < v90 )
      {
        v92 = (unsigned int *)sub_186B300(v26 - 2, v91);
        v26 = v92 + 2;
        *v92 = v90;
        result = v92[1];
        *a4 = v26;
        goto LABEL_20;
      }
LABEL_102:
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v117, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v117);
      sub_233E40((__int64)v117);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    case 4:
      sub_7CCF30(*(_QWORD *)(a1 + 80), a5, *(_QWORD *)(a3 + 32), *(_QWORD *)(a3 + 40));
      result = sub_7CCF30(*(_QWORD *)(a1 + 80), a5, *(_QWORD *)(a3 + 32), *(_QWORD *)(a3 + 48));
      if ( !a5 )
        goto LABEL_22;
      return result;
    default:
      goto LABEL_21;
  }
}

