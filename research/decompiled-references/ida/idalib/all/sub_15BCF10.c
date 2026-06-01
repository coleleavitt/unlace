__int64 *__fastcall sub_15BCF10(__int64 *a1, char a2, char a3, char a4, int a5)
{
  __int64 v9; // rax
  _QWORD *v10; // rbp
  __int64 v11; // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r13
  __int64 v15; // r14
  __int64 v16; // rdi
  __int64 v17; // rsi
  __m128 v18; // xmm0
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // r13
  _QWORD *v23; // rbp
  unsigned int v24; // eax
  __int64 v25; // r9
  unsigned int v26; // r15d
  __int64 *v27; // r8
  __int64 v28; // r9
  __int64 v29; // r10
  __int64 *v30; // r8
  __int64 *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // rax
  unsigned int v38; // eax
  __int16 v39; // ax
  _QWORD *v40; // rax
  __int64 v41; // rsi
  __int64 v42; // rbp
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 *v51; // r14
  __int64 *v52; // rax
  __int64 v53; // rax
  unsigned int v54; // edx
  unsigned int v55; // eax
  __int64 v56; // rax
  __int64 *v57; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v58; // [rsp+8h] [rbp-A0h]
  __int64 v59; // [rsp+10h] [rbp-98h]
  int v60; // [rsp+1Ch] [rbp-8Ch]
  __int64 v61; // [rsp+20h] [rbp-88h] BYREF
  __int64 *v62; // [rsp+28h] [rbp-80h] BYREF
  void *ptr; // [rsp+30h] [rbp-78h]
  __int64 v64; // [rsp+38h] [rbp-70h]
  _OWORD v65[6]; // [rsp+40h] [rbp-68h] BYREF

  v9 = *a1;
  v60 = a5;
  v10 = *(_QWORD **)(v9 + 248);
  v11 = a1[2];
  if ( v11 )
  {
    v12 = 0;
    v13 = *(_QWORD *)(*(_QWORD *)(v11 + 56) + 24LL);
    if ( (*(_BYTE *)(v13 + 28) & 0x7F) == 0x43 )
      v12 = *(_QWORD *)(v13 + 48) & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v12 = v10[2335];
  }
  v61 = 0;
  v14 = (__int64)sub_A81910(v10, v12, 0);
  v57 = nullptr;
  v15 = sub_B31120((__int64)v10, a2, 0);
  if ( a3 )
    v57 = (__int64 *)sub_B31540((__int64)v10, 0);
  v58 = 0;
  if ( a4 )
    v58 = sub_B316E0((__int64)v10, 0);
  if ( v14 )
    v14 = sub_B310B0((__int64)v10, v14, 0);
  v59 = v15;
  v16 = *a1;
  v17 = v10[2839];
  ptr = v65;
  v18 = _mm_loadh_ps((const double *)&v57);
  v57 = (__int64 *)v14;
  v65[0] = v18;
  v64 = 0x600000004LL;
  v65[1] = _mm_loadh_ps((const double *)&v57);
  if ( (unsigned __int8)sub_19FE430(v16, v17, v65, 4, &v61, 0, v14, v58, v15) )
  {
    v20 = v61;
    v21 = sub_B8C330(a1[1]);
    v22 = *(_QWORD *)(v21 + 17504);
    v23 = (_QWORD *)v21;
    v24 = sub_2244B30("__handle", 8);
    v26 = sub_2244CB0(v22, "__handle", 8, v24);
    v27 = (__int64 *)(*(_QWORD *)v22 + 8LL * v26);
    if ( *v27 )
    {
      if ( *v27 != -8 )
      {
        sub_989490(&v62, v27, 0);
        v29 = *v62;
        v30 = *(__int64 **)(*v62 + 8);
        if ( v30 )
          goto LABEL_29;
LABEL_17:
        v31 = *(__int64 **)(v22 + 120);
        if ( !v31
          || (v32 = *v31,
              v57 = (__int64 *)v29,
              v33 = (*(__int64 (__fastcall **)(__int64 *, const char *, __int64))(v32 + 16))(v31, "__handle", 8),
              v29 = (__int64)v57,
              v30 = (__int64 *)v33,
              (v57[1] = v33) == 0) )
        {
          v34 = *(_QWORD *)(v22 + 24);
          *(_QWORD *)(v22 + 104) += 24LL;
          v30 = (__int64 *)((v34 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( *(_QWORD *)(v22 + 32) >= (unsigned __int64)(v30 + 3) && v34 )
          {
            *(_QWORD *)(v22 + 24) = v30 + 3;
          }
          else
          {
            v57 = (__int64 *)v29;
            v56 = sub_986170(v22 + 24, 24, 24, 3, (__int64)v30, v28);
            v29 = (__int64)v57;
            v30 = (__int64 *)v56;
          }
          v35 = *v30 & 0xFFFFF80000000000LL;
          v30[1] = 0;
          *v30 = v35 | 0x1FFFC05;
          *(_QWORD *)(v29 + 8) = v30;
          v30[2] = v29;
        }
LABEL_29:
        v39 = *(_WORD *)v30;
        v57 = v30;
        *(_WORD *)v30 = v39 & 0xFE00 | 5;
        v40 = sub_A81910(v23, v20, 0);
        v41 = a1[1];
        if ( v41 )
          v41 += 64;
        v42 = sub_B7BC50((__int64)v23, v41, 0, 0, (__int64)v57, v20, (__int64)v40, 0, 0, 0);
        *(_BYTE *)(v42 + 29) = *(_BYTE *)(v42 + 29) & 0x9F | (32 * (v60 & 3)) | 2;
        sub_B94AD0((__m128i *)(a1[1] + 64), v42, v43, v44, v45, v46);
        v47 = sub_2244B30("__handle", 8);
        v48 = (unsigned int)sub_2244CB0(a1 + 5, "__handle", 8, v47);
        v51 = (__int64 *)(a1[5] + 8 * v48);
        if ( *v51 )
        {
          if ( *v51 != -8 )
          {
            sub_15BCED0(&v62, v51, 0);
            v52 = v62;
LABEL_34:
            *(_QWORD *)(*v52 + 8) = v42;
            goto LABEL_11;
          }
          --*((_DWORD *)a1 + 14);
        }
        LODWORD(v57) = v48;
        v53 = sub_22300B0(25, 8, v48, v48, v49, v50);
        v54 = (unsigned int)v57;
        strcpy((char *)(v53 + 16), "__handle");
        *(_QWORD *)v53 = 8;
        *(_QWORD *)(v53 + 8) = 0;
        *v51 = v53;
        ++*((_DWORD *)a1 + 13);
        v55 = sub_22450D0(a1 + 5, v54);
        sub_15BCED0(&v62, (__int64 *)(a1[5] + 8LL * v55), 0);
        v52 = v62;
        goto LABEL_34;
      }
      --*(_DWORD *)(v22 + 16);
    }
    v36 = *(_QWORD *)(v22 + 24);
    *(_QWORD *)(v22 + 104) += 25LL;
    v37 = (v36 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(v22 + 32) >= v37 + 25 && v36 )
    {
      *(_QWORD *)(v22 + 24) = v37 + 25;
    }
    else
    {
      v57 = v27;
      v37 = sub_986170(v22 + 24, 25, 25, 3, (__int64)v27, v25);
      v27 = v57;
    }
    strcpy((char *)(v37 + 16), "__handle");
    *(_QWORD *)v37 = 8;
    *(_QWORD *)(v37 + 8) = 0;
    *v27 = v37;
    ++*(_DWORD *)(v22 + 12);
    v38 = sub_22450D0(v22, v26);
    sub_989490(&v62, (__int64 *)(*(_QWORD *)v22 + 8LL * v38), 0);
    v29 = *v62;
    v30 = *(__int64 **)(*v62 + 8);
    if ( v30 )
      goto LABEL_29;
    goto LABEL_17;
  }
LABEL_11:
  if ( ptr != v65 )
    free(ptr);
  return a1;
}
