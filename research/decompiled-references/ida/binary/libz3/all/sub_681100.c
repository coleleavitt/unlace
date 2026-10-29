__int64 __fastcall sub_681100(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // rax
  unsigned int v5; // ecx
  _DWORD *v6; // rdx
  unsigned int v7; // esi
  unsigned int v8; // edx
  unsigned int **v9; // r14
  __int64 v10; // rbx
  unsigned int *v11; // rbp
  _DWORD *v12; // rax
  unsigned int v13; // esi
  unsigned int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  unsigned int **v17; // rcx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  size_t v20; // rsi
  unsigned int *v21; // rax
  unsigned int v22; // esi
  unsigned int v23; // edx
  _QWORD *v24; // rax
  unsigned int **v25; // rbx
  unsigned int *v26; // r15
  __int64 v27; // rbp
  __int64 v28; // rax
  __int64 v29; // rbp
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned int v33; // ecx
  unsigned int v34; // edx
  unsigned int v35; // esi
  unsigned int v36; // r14d
  __int64 v37; // rbx
  __int64 v38; // rdx
  unsigned int v39; // edx
  __int64 v40; // rbp
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // r11
  __int64 v44; // rbp
  __int64 v45; // r10
  int v46; // eax
  __int64 v47; // r10
  __int64 v48; // rbx
  int v49; // r8d
  __int64 v50; // rax
  unsigned int v51; // edx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // r9
  int v55; // eax
  char v56; // al
  __int64 v57; // rax
  int v58; // eax
  char v59; // al
  __int64 result; // rax
  char **exception; // rbp
  __int64 v62; // rdx
  unsigned int **v63; // [rsp+8h] [rbp-1A0h]
  __int64 v64; // [rsp+8h] [rbp-1A0h]
  __int64 v65; // [rsp+10h] [rbp-198h]
  unsigned int v66; // [rsp+18h] [rbp-190h]
  unsigned int v67; // [rsp+18h] [rbp-190h]
  __int64 v68; // [rsp+18h] [rbp-190h]
  unsigned int v69; // [rsp+20h] [rbp-188h]
  __int64 v70; // [rsp+28h] [rbp-180h]
  __int64 v71; // [rsp+28h] [rbp-180h]
  __int64 v72; // [rsp+28h] [rbp-180h]
  __int64 v73; // [rsp+30h] [rbp-178h]
  __int64 v74; // [rsp+38h] [rbp-170h]
  __int64 v75; // [rsp+38h] [rbp-170h]
  __int64 v76; // [rsp+40h] [rbp-168h]
  __int64 v77; // [rsp+40h] [rbp-168h]
  __int64 v78; // [rsp+48h] [rbp-160h]
  __int64 v79; // [rsp+48h] [rbp-160h]
  __int64 v80; // [rsp+50h] [rbp-158h]
  int v81; // [rsp+50h] [rbp-158h]
  int v82; // [rsp+58h] [rbp-150h]
  __int64 v83[2]; // [rsp+60h] [rbp-148h] BYREF
  __int64 v84; // [rsp+70h] [rbp-138h] BYREF
  unsigned int *v85; // [rsp+78h] [rbp-130h] BYREF
  __int64 v86; // [rsp+88h] [rbp-120h] BYREF
  void *ptr; // [rsp+90h] [rbp-118h]
  __int64 v88[4]; // [rsp+A0h] [rbp-108h] BYREF
  _BYTE v89[48]; // [rsp+C0h] [rbp-E8h] BYREF
  _BYTE v90[64]; // [rsp+F0h] [rbp-B8h] BYREF
  __int64 v91; // [rsp+130h] [rbp-78h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v86 = 0;
  v83[0] = v2;
  v84 = v2;
  ptr = nullptr;
  sub_167E970(v89, a2, 0, 0, 0);
  sub_167F5F0(v90, v89);
  sub_167F5B0(&v91, v89);
  v3 = 0;
  while ( (unsigned __int8)sub_167E490(v90, &v91) )
  {
    v4 = sub_167E460(v90);
    if ( !*(_WORD *)(v4 + 4) )
    {
      v5 = 0;
      v6 = *(_DWORD **)(*(_QWORD *)(v4 + 16) + 24LL);
      if ( v6 && *v6 == *(_DWORD *)(a1 + 144) )
      {
        v23 = v6[1];
        if ( v23 <= 1 )
        {
          v5 = 1;
        }
        else if ( v23 == 5 )
        {
          goto LABEL_26;
        }
      }
      v7 = *(_DWORD *)(v4 + 24);
      v8 = v7 - 1;
      if ( v5 < v7 )
      {
        v9 = (unsigned int **)(v4 + 8LL * v8 + 32);
        v10 = v4 + 8LL * v8 + 24 - 8LL * (v8 - v5);
        do
        {
          while ( 1 )
          {
            v11 = *v9;
            v12 = *(_DWORD **)(sub_15D1F10(*v9) + 24);
            if ( v12 )
            {
              if ( *(_DWORD *)(a1 + 144) == *v12 && !v12[1] )
              {
                v13 = v86;
                if ( *v11 >= (unsigned int)v86 || (*((_DWORD *)ptr + (*v11 >> 5)) & (1 << *v11)) == 0 )
                  break;
              }
            }
            if ( (unsigned int **)v10 == --v9 )
              goto LABEL_26;
          }
          ++v11[2];
          if ( v3 )
          {
            v14 = *(_DWORD *)(v3 - 4);
            if ( v14 == *(_DWORD *)(v3 - 8) )
            {
              v19 = (3 * v14 + 1) >> 1;
              v20 = 8 * v19 + 8;
              if ( 8 * v14 + 8 >= (unsigned int)v20 || v14 >= v19 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_107EF6(v88, "Overflow encountered when expanding vector", v62);
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v88);
                sub_233E40((__int64)v88);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v66 = (3 * v14 + 1) >> 1;
              v21 = (unsigned int *)sub_186B300((void *)(v3 - 8), v20);
              v3 = (__int64)(v21 + 2);
              v22 = v86;
              *v21 = v66;
              LODWORD(v21) = v21[1];
              *(_QWORD *)(v3 + 8LL * (unsigned int)v21) = v11;
              *(_DWORD *)(v3 - 4) = (_DWORD)v21 + 1;
              v18 = *v11;
              if ( *v11 < v22 )
                goto LABEL_18;
LABEL_23:
              v67 = v18;
              sub_186B510(&v86, v18 + 1, 0);
              v18 = v67;
              goto LABEL_18;
            }
            v15 = v14;
            v16 = v14 + 1;
            v17 = (unsigned int **)(v3 + 8 * v15);
          }
          else
          {
            v24 = (_QWORD *)sub_186B270(0x18u);
            v3 = (__int64)(v24 + 1);
            v17 = (unsigned int **)(v24 + 1);
            *v24 = 2;
            v13 = v86;
            v16 = 1;
          }
          *v17 = v11;
          *(_DWORD *)(v3 - 4) = v16;
          v18 = *v11;
          if ( *v11 >= v13 )
            goto LABEL_23;
LABEL_18:
          --v9;
          *((_DWORD *)ptr + (v18 >> 5)) |= 1 << v18;
        }
        while ( (unsigned int **)v10 != v9 );
      }
    }
LABEL_26:
    sub_167EA90(v90);
  }
  sub_6642B0((__int64)&v91);
  sub_6642B0((__int64)v90);
  sub_677270((__int64)v89);
  if ( !v3 || (v63 = (unsigned int **)(v3 + 8LL * *(unsigned int *)(v3 - 4)), v63 == (unsigned int **)v3) )
  {
    v26 = nullptr;
  }
  else
  {
    v25 = (unsigned int **)v3;
    v26 = nullptr;
    do
    {
      v27 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 64LL);
      v28 = sub_67B850(*(__int64 **)(a1 + 16), *v25);
      sub_1374250(&v91, v27, v28);
      v29 = v91;
      if ( !v26 || (v30 = *(v26 - 1), v30 == *(v26 - 2)) )
      {
        v85 = v26;
        sub_23A6F0(&v85);
        v26 = v85;
        v30 = *(v85 - 1);
      }
      ++v25;
      *(_QWORD *)&v26[2 * v30] = v29;
      *(v26 - 1) = v30 + 1;
    }
    while ( v63 != v25 );
  }
  v31 = *(_QWORD *)(a1 + 24);
  v69 = 0;
  v32 = *(_QWORD *)(v31 + 24);
  v33 = *(_DWORD *)(v31 + 32);
LABEL_37:
  if ( v32 )
    v34 = *(_DWORD *)(v32 - 4);
  else
    v34 = 0;
  if ( v34 < v33 )
  {
    if ( v3 )
    {
      v35 = v69;
      if ( v69 < *(_DWORD *)(v3 - 4) )
      {
        ++v69;
        v36 = v35 + 1;
        v68 = *(_QWORD *)(v3 + 8LL * v35);
        v64 = *(_QWORD *)&v26[2 * v35];
        while ( 1 )
        {
          if ( v32 )
LABEL_46:
            v39 = *(_DWORD *)(v32 - 4);
          else
            v39 = 0;
          if ( v39 >= v33 )
            goto LABEL_37;
          while ( 1 )
          {
            if ( v36 >= *(_DWORD *)(v3 - 4) )
              goto LABEL_37;
            v40 = *(_QWORD *)&v26[2 * v36];
            if ( v64 != v40 )
              break;
            ++v36;
            if ( v32 )
              goto LABEL_46;
          }
          v65 = *(_QWORD *)(v3 + 8LL * v36);
          v37 = sub_15D1F10(v68);
          if ( v37 == sub_15D1F10(v65) )
          {
            v70 = sub_15D1F10(v65);
            v41 = sub_15D1F10(v68);
            v71 = sub_678D40((const __m128i *)a1, v40, v70);
            v42 = sub_678D40((const __m128i *)a1, v64, v41);
            v43 = v71;
            if ( *(_DWORD *)(v42 + 28) == *(_DWORD *)(v71 + 28) )
            {
              v44 = *(_QWORD *)(v42 + 16);
              v45 = v44 + 40LL * *(unsigned int *)(v42 + 24);
              if ( v44 != v45 )
              {
                while ( *(_DWORD *)(v44 + 4) != 2 )
                {
                  v44 += 40;
                  if ( v45 == v44 )
                    goto LABEL_73;
                }
                if ( v45 != v44 )
                {
                  v73 = v71 + 8;
                  while ( 1 )
                  {
                    v72 = v44 + 8;
                    v46 = sub_675480(
                            (_QWORD *)(*(_QWORD *)(*(_QWORD *)v43 + 40LL) + 8LL * *(unsigned int *)(v44 + 32)),
                            *(unsigned int *)(*(_QWORD *)(v44 + 16) + 24LL));
                    v48 = *(_QWORD *)(v43 + 16);
                    v49 = v46;
                    v50 = *(unsigned int *)(v43 + 24);
                    v51 = v50 - 1;
                    v50 *= 40;
                    v52 = v48 + v50;
                    v53 = 40LL * (v49 & v51);
                    v54 = v48 + v53;
                    if ( v53 == v50 )
                      goto LABEL_76;
                    v48 += v53;
                    while ( 1 )
                    {
                      v55 = *(_DWORD *)(v48 + 4);
                      if ( v55 != 2 )
                      {
                        if ( !v55 )
                          goto LABEL_44;
                        goto LABEL_63;
                      }
                      if ( *(_DWORD *)v48 == v49 )
                      {
                        v82 = v49;
                        v80 = v52;
                        v78 = v54;
                        v76 = v47;
                        v74 = v43;
                        v56 = sub_675CE0(v73, v48 + 8, v72);
                        v43 = v74;
                        v47 = v76;
                        v54 = v78;
                        v52 = v80;
                        v49 = v82;
                        if ( v56 )
                          break;
                      }
LABEL_63:
                      v48 += 40;
                      if ( v52 == v48 )
                      {
                        v48 = *(_QWORD *)(v43 + 16);
LABEL_76:
                        while ( v54 != v48 )
                        {
                          v58 = *(_DWORD *)(v48 + 4);
                          if ( v58 == 2 )
                          {
                            if ( *(_DWORD *)v48 == v49 )
                            {
                              v81 = v49;
                              v79 = v54;
                              v77 = v47;
                              v75 = v43;
                              v59 = sub_675CE0(v73, v48 + 8, v72);
                              v43 = v75;
                              v47 = v77;
                              v54 = v79;
                              v49 = v81;
                              if ( v59 )
                                goto LABEL_67;
                            }
                          }
                          else if ( !v58 )
                          {
                            goto LABEL_44;
                          }
                          v48 += 40;
                        }
                        goto LABEL_44;
                      }
                    }
LABEL_67:
                    if ( *(_QWORD *)(*(_QWORD *)(a1 + 40)
                                   + 8LL
                                   * (unsigned int)(*(_DWORD *)(*(_QWORD *)(v44 + 16) + 24LL) + *(_DWORD *)(v44 + 32))) != *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(v48 + 16) + 24LL) + *(_DWORD *)(v48 + 32))) )
                      goto LABEL_44;
                    v57 = v44 + 40;
                    if ( v47 != v44 + 40 )
                    {
                      while ( 1 )
                      {
                        v44 = v57;
                        if ( *(_DWORD *)(v57 + 4) == 2 )
                          break;
                        v57 += 40;
                        if ( v47 == v57 )
                          goto LABEL_73;
                      }
                      if ( v47 != v57 )
                        continue;
                    }
                    break;
                  }
                }
              }
LABEL_73:
              sub_67E280(a1, v68, v65);
            }
          }
LABEL_44:
          v38 = *(_QWORD *)(a1 + 24);
          ++v36;
          v32 = *(_QWORD *)(v38 + 24);
          v33 = *(_DWORD *)(v38 + 32);
        }
      }
    }
  }
  v85 = v26;
  sub_2334C0(&v84);
  v83[1] = v3;
  result = sub_2334C0(v83);
  if ( ptr )
    return sub_186B220(ptr);
  return result;
}

