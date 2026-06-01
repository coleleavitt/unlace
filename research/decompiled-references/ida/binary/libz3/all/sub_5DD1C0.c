__int64 __fastcall sub_5DD1C0(
        __int64 a1,
        __int64 a2,
        __m128i a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  char **exception; // rbp
  char **v10; // rbp
  __int64 v12; // rbx
  __int64 v13; // rdx
  double v14; // xmm4_8
  double v15; // xmm5_8
  __int64 *v16; // r12
  __int64 *i; // r13
  __int64 v18; // rax
  __int64 v19; // r12
  _QWORD *v20; // r15
  __int64 v21; // r13
  __int64 *v22; // rbp
  __int64 *v23; // r13
  __int64 v24; // r12
  __int64 v25; // rax
  int v26; // edi
  __int64 *v27; // rcx
  unsigned int v28; // edx
  __int64 *v29; // rsi
  __int64 v30; // rdx
  __int64 *v31; // r9
  __int64 *v32; // rax
  __int64 v33; // rdx
  __int64 *v34; // rax
  __int64 v35; // r12
  __int64 v36; // rax
  _DWORD *v37; // r13
  __int64 v40; // rcx
  _QWORD *v41; // rdx
  unsigned int v42; // eax
  __int64 v43; // rsi
  int v44; // eax
  _QWORD *v45; // rsi
  _QWORD *v46; // rdx
  unsigned int v47; // eax
  __int64 v48; // rsi
  int v49; // eax
  _QWORD *v50; // rsi
  __int64 v51; // rax
  unsigned int v52; // r9d
  size_t v53; // rsi
  unsigned int *v54; // rax
  __int64 v55; // rsi
  unsigned int v56; // r12d
  size_t v57; // rsi
  unsigned int *v58; // rax
  __int64 v59; // rsi
  _QWORD *v60; // rdx
  _QWORD *v61; // rdx
  __int64 v63; // [rsp+10h] [rbp-78h]
  __int64 v64; // [rsp+10h] [rbp-78h]
  __int64 v65; // [rsp+10h] [rbp-78h]
  __int64 v66; // [rsp+10h] [rbp-78h]
  __int64 v67; // [rsp+10h] [rbp-78h]
  unsigned int v68; // [rsp+1Ch] [rbp-6Ch]
  __int64 v69[11]; // [rsp+30h] [rbp-58h] BYREF

  v12 = sub_186B270(0xF8u);
  sub_63D370(v12, *(_QWORD *)(a1 + 24));
  v16 = *(__int64 **)(a2 + 24);
  if ( v16 )
  {
    for ( i = &v16[*((unsigned int *)v16 - 1)]; i != v16; ++v16 )
      sub_5DCA20(a1, v12, *v16, a3);
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 2952LL) )
  {
    v18 = sub_186B270(0x58u);
    v19 = *(_QWORD *)(a1 + 32);
    v20 = (_QWORD *)v18;
    *(_BYTE *)(v18 + 24) = 1;
    *(_DWORD *)(v18 + 8) = 0;
    *(_QWORD *)(v18 + 16) = 0;
    *(_QWORD *)v18 = &off_1C68680;
    *(_QWORD *)(v18 + 32) = v19;
    sub_16669D0(v18 + 40, v19);
    v20[7] = v19;
    v20[8] = 0;
    v21 = *(unsigned int *)(a2 + 40);
    v22 = *(__int64 **)(a2 + 32);
    v20[9] = v19;
    v20[10] = 0;
    v23 = &v22[2 * v21];
    if ( v22 != v23 )
    {
      while ( (unsigned __int64)*v22 <= 1 )
      {
        v22 += 2;
        if ( v23 == v22 )
          goto LABEL_23;
      }
      if ( v23 != v22 )
      {
        v24 = *v22;
        while ( 1 )
        {
          v25 = *(unsigned int *)(a1 + 3104);
          v26 = *(_DWORD *)(v24 + 12);
          v27 = *(__int64 **)(a1 + 3096);
          v28 = v25 - 1;
          v25 *= 16;
          v29 = (__int64 *)((char *)v27 + v25);
          v30 = 16LL * (v26 & v28);
          v31 = &v27[(unsigned __int64)v30 / 8];
          if ( v30 != v25 )
          {
            v32 = &v27[(unsigned __int64)v30 / 8];
            do
            {
              v33 = *v32;
              if ( (unsigned __int64)*v32 > 1 )
              {
                if ( *(_DWORD *)(v33 + 12) == v26 && v33 == v24 )
                  goto LABEL_31;
              }
              else if ( !v33 )
              {
                goto LABEL_18;
              }
              v32 += 2;
            }
            while ( v29 != v32 );
          }
          if ( v27 == v31 )
            goto LABEL_18;
          while ( 1 )
          {
            v51 = *v27;
            if ( (unsigned __int64)*v27 > 1 )
              break;
            if ( !v51 )
              goto LABEL_18;
LABEL_45:
            v27 += 2;
            if ( v31 == v27 )
              goto LABEL_18;
          }
          if ( *(_DWORD *)(v51 + 12) != v26 || v51 != v24 )
            goto LABEL_45;
          v32 = v27;
LABEL_31:
          v40 = v32[1];
          if ( v40 != *(_QWORD *)(v20[4] + 856LL) )
          {
            v41 = (_QWORD *)v20[8];
            ++*(_DWORD *)(v24 + 8);
            if ( v41 )
            {
              v42 = *((_DWORD *)v41 - 1);
              if ( v42 == *((_DWORD *)v41 - 2) )
              {
                v52 = (3 * v42 + 1) >> 1;
                v53 = 8 * v52 + 8;
                if ( 8 * v42 + 8 >= (unsigned int)v53 || v42 >= v52 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v69, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v69);
                  sub_233E40((__int64)v69);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v68 = (3 * v42 + 1) >> 1;
                v63 = v40;
                v54 = (unsigned int *)sub_186B300(v41 - 1, v53);
                v55 = v54[1];
                v41 = v54 + 2;
                v20[8] = v54 + 2;
                v40 = v63;
                *v54 = v68;
                LODWORD(v54) = v55;
                v45 = &v41[v55];
                v44 = (_DWORD)v54 + 1;
              }
              else
              {
                v43 = v42;
                v44 = v42 + 1;
                v45 = &v41[v43];
              }
            }
            else
            {
              v66 = v40;
              v61 = (_QWORD *)sub_186B270(0x18u);
              *v61 = 2;
              v40 = v66;
              v44 = 1;
              v41 = v61 + 1;
              v20[8] = v41;
              v45 = v41;
            }
            *v45 = v24;
            *((_DWORD *)v41 - 1) = v44;
            if ( v40 )
              ++*(_DWORD *)(v40 + 8);
            v46 = (_QWORD *)v20[10];
            if ( v46 )
            {
              v47 = *((_DWORD *)v46 - 1);
              if ( v47 == *((_DWORD *)v46 - 2) )
              {
                v56 = (3 * v47 + 1) >> 1;
                v57 = 8 * v56 + 8;
                if ( 8 * v47 + 8 >= (unsigned int)v57 || v47 >= v56 )
                {
                  v10 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v69, "Overflow encountered when expanding vector");
                  *v10 = (char *)off_1C63128;
                  sub_2333C0(v10 + 1, v69);
                  sub_233E40((__int64)v69);
                  __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v64 = v40;
                v58 = (unsigned int *)sub_186B300(v46 - 1, v57);
                v59 = v58[1];
                v46 = v58 + 2;
                v40 = v64;
                *v58 = v56;
                v20[10] = v58 + 2;
                LODWORD(v58) = v59;
                v50 = &v46[v59];
                v49 = (_DWORD)v58 + 1;
              }
              else
              {
                v48 = v47;
                v49 = v47 + 1;
                v50 = &v46[v48];
              }
            }
            else
            {
              v65 = v40;
              v60 = (_QWORD *)sub_186B270(0x18u);
              *v60 = 2;
              v40 = v65;
              v49 = 1;
              v46 = v60 + 1;
              v20[10] = v46;
              v50 = v46;
            }
            *v50 = v40;
            *((_DWORD *)v46 - 1) = v49;
          }
LABEL_18:
          v34 = v22 + 2;
          if ( v23 != v22 + 2 )
          {
            while ( 1 )
            {
              v24 = *v34;
              v22 = v34;
              if ( (unsigned __int64)*v34 > 1 )
                break;
              v34 += 2;
              if ( v23 == v34 )
                goto LABEL_23;
            }
            if ( v23 != v34 )
              continue;
          }
          break;
        }
      }
    }
LABEL_23:
    v35 = *(_QWORD *)(a1 + 24);
    v36 = sub_1336AB0(*(_QWORD *)(v35 + 2952), v20);
    if ( v36 )
      ++*(_DWORD *)(v36 + 8);
    v37 = *(_DWORD **)(v35 + 2952);
    if ( v37 )
    {
      if ( v37[2]-- == 1 )
      {
        v67 = v36;
        (**(void (__fastcall ***)(_DWORD *))v37)(v37);
        sub_186B220(v37);
        v36 = v67;
      }
    }
    *(_QWORD *)(v35 + 2952) = v36;
  }
  sub_63DFA0(v12, a2, v13, *(double *)a3.m128i_i64, a4, a5, a6, v14, v15, a9);
  return v12;
}

