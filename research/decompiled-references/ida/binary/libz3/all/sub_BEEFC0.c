__int64 __fastcall sub_BEEFC0(__int64 a1, unsigned int a2, __m128 a3)
{
  char **exception; // r14
  _QWORD *v6; // r13
  __int64 result; // rax
  unsigned int *v8; // r14
  __int64 v9; // r12
  unsigned int *v10; // rsi
  int v11; // r13d
  __int64 v12; // rax
  bool v13; // zf
  __int64 v14; // rax
  __int64 *v15; // r14
  __int64 v16; // rdi
  __int64 *v17; // r13
  unsigned int *v18; // rax
  unsigned int *v19; // rsi
  __int64 v20; // rdi
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdx
  _DWORD *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r15
  int v28; // eax
  __int64 v29; // rdi
  unsigned int *v30; // r8
  __int64 v31; // rax
  unsigned int *v32; // rsi
  __int64 v33; // rdi
  unsigned int v34; // eax
  unsigned int *v35; // rdx
  unsigned int v36; // r15d
  __int64 v37; // rax
  unsigned int v38; // ecx
  size_t v39; // rsi
  unsigned int *v40; // rax
  __int64 *v41; // rbx
  unsigned __int64 v42; // r15
  __int64 v43; // rsi
  __int64 v44; // rsi
  __int64 v45; // rsi
  __int64 v46; // rdi
  unsigned int *v47; // rsi
  __int64 v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rdi
  __int64 v51; // [rsp+10h] [rbp-E0h]
  __int64 v52; // [rsp+18h] [rbp-D8h]
  __int64 v53; // [rsp+20h] [rbp-D0h]
  __int64 v54; // [rsp+28h] [rbp-C8h]
  __int64 v55; // [rsp+30h] [rbp-C0h]
  unsigned int v56; // [rsp+30h] [rbp-C0h]
  unsigned int *v57; // [rsp+30h] [rbp-C0h]
  __int64 *i; // [rsp+38h] [rbp-B8h]
  int v59; // [rsp+38h] [rbp-B8h]
  unsigned int *v60; // [rsp+48h] [rbp-A8h] BYREF
  unsigned int *v61; // [rsp+50h] [rbp-A0h] BYREF
  __int64 v62; // [rsp+58h] [rbp-98h]
  __int64 v63[2]; // [rsp+60h] [rbp-90h] BYREF
  __int64 v64; // [rsp+70h] [rbp-80h] BYREF
  __int64 *v65; // [rsp+78h] [rbp-78h]
  __m128 v66; // [rsp+80h] [rbp-70h] BYREF
  unsigned int *v67; // [rsp+90h] [rbp-60h] BYREF
  __int64 v68; // [rsp+98h] [rbp-58h]
  __int64 v69[10]; // [rsp+A0h] [rbp-50h] BYREF

  v6 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8840LL) + 8LL * (a2 >> 1));
  if ( !(unsigned __int8)sub_1407860(*(_QWORD *)a1 + 1848LL, *(_QWORD *)a1 + 2128LL, v6) )
  {
    sub_1872CE0("");
    sub_1873130(114, 506);
  }
  v8 = (unsigned int *)v6[4];
  v9 = v6[5];
  v54 = v6[6];
  result = sub_BEA930((__int64 *)a1, (__int64)v8, a2, *(double *)a3.m128_u64);
  if ( !(_BYTE)result )
  {
    sub_155D090(&v61, *(_QWORD *)a1 + 1224LL);
    sub_14B9B80(*(_QWORD *)a1 + 1192LL, &v61);
    result = *(_QWORD *)(a1 + 16);
    v10 = v61;
    if ( v61 == *(unsigned int **)(result + 856) )
    {
      if ( v61 )
      {
        v50 = v62;
        v13 = v61[2]-- == 1;
        if ( v13 )
          return sub_15D7BC0(v50, v10);
      }
      return result;
    }
    v11 = sub_966440(*(_QWORD *)a1, v61);
    sub_BE7FA0((__int64)v63, (__int64 *)a1, v8, v54);
    v51 = *(_QWORD *)(a1 + 16);
    sub_BE7720(v69, (_QWORD *)a1, v63[0], (__int64)v8);
    v53 = v69[0];
    v12 = sub_186B270(0x10u);
    v13 = v11 == dword_1C7ED98;
    *(_DWORD *)(v12 + 8) = a2 ^ 1;
    v60 = (unsigned int *)(v12 + 8);
    *(_QWORD *)v12 = 0x100000002LL;
    if ( !v13 )
    {
      *(_DWORD *)(v12 + 12) = v11;
      *(_DWORD *)(v12 + 4) = 2;
    }
    v14 = *(_QWORD *)(a1 + 16);
    v65 = nullptr;
    v64 = v14;
    sub_BED870(a1, v53, (__int64)&v64);
    v15 = v65;
    v16 = *(_QWORD *)a1;
    if ( v65 )
    {
      v52 = v64;
      v17 = &v65[2 * *((unsigned int *)v65 - 1)];
      if ( v17 != v65 )
      {
        for ( i = v65; v17 != i; i += 2 )
        {
          v23 = v9;
          v24 = i[1];
          while ( !*(_WORD *)(v23 + 4) )
          {
            v25 = *(_DWORD **)(*(_QWORD *)(v23 + 16) + 24LL);
            if ( !v25 || *(_DWORD *)(v16 + 1768) != *v25 || v25[1] != 29 || *(_DWORD *)(v23 + 24) != 2 )
              break;
            if ( v24 == *(_QWORD *)(v23 + 40) )
              goto LABEL_20;
            v23 = *(_QWORD *)(v23 + 32);
          }
          if ( v24 == v23 )
            continue;
          v26 = *i;
          a3 = _mm_loadh_ps((const double *)(a1 + 16));
          v66 = a3;
          if ( v26 )
            ++*(_DWORD *)(v26 + 8);
          sub_15637F0(v16 + 1224, v63[0], &v66);
          sub_14B9B80(*(_QWORD *)a1 + 1192LL, &v66);
          v21 = v66.m128_u64[0];
          if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 864LL) == v66.m128_u64[0] )
          {
            if ( !v66.m128_u64[0] )
              goto LABEL_19;
            v22 = v66.m128_u64[1];
            v13 = (*(_DWORD *)(v66.m128_u64[0] + 8))-- == 1;
            if ( !v13 )
              goto LABEL_19;
          }
          else
          {
            v27 = *(_QWORD *)a1;
            v55 = *(_QWORD *)a1 + 1848LL;
            v28 = sub_15E1B70(*(_QWORD *)(*(_QWORD *)a1 + 1760LL));
            sub_1407560(
              (unsigned int)&v67,
              v55,
              v27 + 2128,
              i[1],
              v28,
              v54,
              0,
              *(_QWORD *)(*(_QWORD *)(v27 + 1848) + 840LL),
              0);
            v29 = *(_QWORD *)(a1 + 16);
            v30 = v67;
            if ( *(_QWORD *)(v29 + 856) != v66.m128_u64[0] )
            {
              v31 = sub_15E1B70(v29);
              v30 = (unsigned int *)v31;
              if ( v31 )
                ++*(_DWORD *)(v31 + 8);
              v32 = v67;
              if ( v67 )
              {
                v33 = v68;
                v13 = v67[2]-- == 1;
                if ( v13 )
                {
                  v57 = (unsigned int *)v31;
                  sub_15D7BC0(v33, v32);
                  v30 = v57;
                }
              }
              v67 = v30;
            }
            v34 = sub_966440(*(_QWORD *)a1, v30);
            v35 = v60;
            v36 = v34;
            if ( v60 )
            {
              v37 = *(v60 - 1);
              if ( (_DWORD)v37 == *(v60 - 2) )
              {
                v38 = (unsigned int)(3 * v37 + 1) >> 1;
                v39 = 4 * v38 + 8;
                if ( 4 * (int)v37 + 8 >= (unsigned int)v39 || (unsigned int)v37 >= v38 )
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
                v56 = (unsigned int)(3 * v37 + 1) >> 1;
                v40 = (unsigned int *)sub_186B300(v60 - 2, v39);
                v35 = v40 + 2;
                v60 = v40 + 2;
                *v40 = v56;
                v18 = &v40[v40[1] + 2];
              }
              else
              {
                v18 = &v60[v37];
              }
            }
            else
            {
              v49 = sub_186B270(0x10u);
              v35 = (unsigned int *)(v49 + 8);
              *(_QWORD *)v49 = 2;
              v60 = (unsigned int *)(v49 + 8);
              v18 = (unsigned int *)(v49 + 8);
            }
            v19 = v67;
            *v18 = v36;
            ++*(v35 - 1);
            if ( v19 )
            {
              v20 = v68;
              v13 = v19[2]-- == 1;
              if ( v13 )
                sub_15D7BC0(v20, v19);
            }
            v21 = v66.m128_u64[0];
            if ( !v66.m128_u64[0] )
              goto LABEL_19;
            v22 = v66.m128_u64[1];
            v13 = (*(_DWORD *)(v66.m128_u64[0] + 8))-- == 1;
            if ( !v13 )
              goto LABEL_19;
          }
          sub_15D7BC0(v22, v21);
LABEL_19:
          v16 = *(_QWORD *)a1;
LABEL_20:
          ;
        }
      }
      sub_BBF120((_QWORD *)v16, &v60, *(double *)a3.m128_u64);
      v41 = v15;
      if ( v15 < &v15[2 * *((unsigned int *)v15 - 1)] )
      {
        v42 = (unsigned __int64)&v15[2 * *((unsigned int *)v15 - 1)];
        do
        {
          while ( 1 )
          {
            v44 = *v41;
            if ( *v41 )
            {
              v13 = (*(_DWORD *)(v44 + 8))-- == 1;
              if ( v13 )
                sub_15D7BC0(v52, v44);
            }
            v43 = v41[1];
            if ( v43 )
            {
              v13 = (*(_DWORD *)(v43 + 8))-- == 1;
              if ( v13 )
                break;
            }
            v41 += 2;
            if ( (unsigned __int64)v41 >= v42 )
              goto LABEL_57;
          }
          v41 += 2;
          sub_15D7BC0(v52, v43);
        }
        while ( (unsigned __int64)v41 < v42 );
      }
LABEL_57:
      result = sub_186B220(v15 - 1);
    }
    else
    {
      result = sub_BBF120((_QWORD *)v16, &v60, *(double *)a3.m128_u64);
    }
    if ( v60 )
      result = sub_186B220(v60 - 2);
    if ( v53 )
    {
      v59 = *(_DWORD *)(v53 + 8);
      result = (unsigned int)(v59 - 1);
      *(_DWORD *)(v53 + 8) = result;
      if ( v59 == 1 )
        result = sub_15D7BC0(v51, v53);
    }
    v45 = v63[0];
    if ( v63[0] )
    {
      v46 = v63[1];
      v13 = (*(_DWORD *)(v63[0] + 8))-- == 1;
      if ( v13 )
        result = sub_15D7BC0(v46, v45);
    }
    v47 = v61;
    if ( v61 )
    {
      v48 = v62;
      v13 = v61[2]-- == 1;
      if ( v13 )
        return sub_15D7BC0(v48, v47);
    }
  }
  return result;
}

