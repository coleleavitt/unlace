unsigned __int64 __fastcall sub_47C00(__int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // rbp
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 j; // rdi
  __int64 v10; // rcx
  __int64 *v11; // rdi
  __int64 v12; // rsi
  int v13; // r12d
  __int64 v14; // rbp
  __int64 v15; // r15
  void (__fastcall *hexdsp)(__int64, __int64 *, __int64, __int64); // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // r14
  __int64 v22; // r15
  unsigned int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rbp
  __int64 v26; // r15
  void (__fastcall *v27)(__int64, __int64, __int64, __int64); // rax
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rbp
  __int64 v31; // rax
  __int64 v32; // r14
  void (__fastcall *v33)(__int64, __int64, __int64, __int64); // rax
  __int64 m; // r14
  __int64 v35; // rbp
  __int64 n; // r12
  int *v37; // rbx
  int *ii; // r13
  __int64 v39; // rbp
  __int64 v40; // r12
  void (__fastcall *v41)(__int64, __int64, __int64); // rax
  __int64 v43; // rsi
  __int64 v44; // rbp
  __int64 v45; // r15
  void (__fastcall *v46)(__int64, __int64, __int64); // rax
  __int64 v47; // r14
  void (__fastcall *v48)(__int64, __int64, __int64, __int64); // rax
  int v49; // edx
  int v50; // ecx
  int v51; // r8d
  int v52; // r9d
  __int64 v53; // [rsp-8h] [rbp-B8h]
  __int64 v54; // [rsp+0h] [rbp-B0h]
  __int64 v55; // [rsp+8h] [rbp-A8h]
  __int64 i; // [rsp+10h] [rbp-A0h]
  __int64 k; // [rsp+18h] [rbp-98h]
  __int64 v58; // [rsp+20h] [rbp-90h]
  int v59; // [rsp+28h] [rbp-88h]
  __int64 v60; // [rsp+30h] [rbp-80h] BYREF
  __int64 v61; // [rsp+38h] [rbp-78h] BYREF
  __int128 v62; // [rsp+40h] [rbp-70h]
  char v63; // [rsp+50h] [rbp-60h]
  __int64 v64; // [rsp+58h] [rbp-58h] BYREF
  __int64 v65; // [rsp+60h] [rbp-50h]
  char v66; // [rsp+68h] [rbp-48h]
  unsigned __int64 v67; // [rsp+70h] [rbp-40h]
  int v68; // [rsp+78h] [rbp-38h]
  int v69; // [rsp+80h] [rbp-30h]
  int v70; // [rsp+88h] [rbp-28h]
  int v71; // [rsp+90h] [rbp-20h]
  __int64 v72; // [rsp+98h] [rbp-18h]

  v3 = a1[66];
  v67 = __readfsqword(0x28u);
  v62 = 0;
  v61 = 0;
  if ( v3 )
  {
    v61 = qvector_reserve(&v61, 0, v3, 8);
    v5 = v62;
    if ( (unsigned __int64)v62 < v3 )
    {
      *(_QWORD *)(v61 + 8 * v62) = 0;
      v6 = v5 + 1;
      if ( v6 < v3 )
      {
        do
          *(_QWORD *)(v61 + 8 * v6++) = 0;
        while ( v3 != v6 );
      }
    }
    *(_QWORD *)&v62 = v3;
  }
  v7 = a1[13];
  for ( i = (__int64)(a1 + 11); i != v7; v7 = std::_Rb_tree_increment(v7) )
  {
    v8 = *(_QWORD *)(v7 + 40);
    for ( j = v8 + 40LL * *(_QWORD *)(v7 + 48); j != v8; *(_QWORD *)(v8 - 32) = *(_QWORD *)(*(_QWORD *)(a2 + 528)
                                                                                          + 8 * v10) )
    {
      v10 = *(unsigned int *)(v8 + 16);
      if ( (unsigned int)v10 >= *(_DWORD *)(a2 + 64) )
      {
        if ( !under_debugger )
          interr(52719);
        BUG();
      }
      v8 += 40;
    }
  }
  v11 = &v64;
  v12 = (__int64)a1;
  sub_46E00(&v64, a1, a2);
  v13 = 0;
  v14 = 0;
  if ( a1[66] )
  {
    do
    {
      v15 = *(_QWORD *)(v64 + 8 * v14);
      hexdsp = (void (__fastcall *)(__int64, __int64 *, __int64, __int64))get_hexdsp(v11, v12);
      hexdsp(417, &v60, a2, v15);
      v11 = (__int64 *)a2;
      *(_QWORD *)(v64 + 8 * v14) = v60;
      v12 = (unsigned int)(*(_DWORD *)(a2 + 64) - 1);
      v17 = sub_6DCB0(a2, v12);
      ++v13;
      *(_QWORD *)(v61 + 8 * v14) = v17;
      v18 = a1[66];
      v14 = v13;
    }
    while ( v13 < v18 );
    if ( v18 )
    {
      HIDWORD(v55) = 0;
      v19 = 0;
      do
      {
        v20 = *(_QWORD *)(v61 + 8 * v19);
        v21 = *(_QWORD *)(v20 + 32);
        v22 = a1[65] + 56 * v19;
        v23 = *(_DWORD *)(v22 + 4);
        if ( v23 == 2 )
        {
          sub_47A80((__int64)a1, v22);
          v28 = *(_QWORD *)(v22 + 16);
          v29 = v21;
          v30 = *(_QWORD *)(v20 + 56);
          v31 = sub_49E20(
                  v21,
                  v28,
                  v49,
                  v50,
                  v51,
                  v52,
                  v53,
                  v54,
                  v55,
                  i,
                  k,
                  v58,
                  v59,
                  v60,
                  v61,
                  v62,
                  SBYTE8(v62),
                  v63,
                  v64,
                  v65,
                  v66,
                  v67,
                  v68,
                  v69,
                  v70,
                  v71,
                  v72);
        }
        else
        {
          if ( v23 > 2 )
          {
            if ( v23 == 3 )
            {
              sub_47AF0((__int64)a1, v22);
              v43 = *(_QWORD *)(v22 + 16);
              v44 = sub_4A560(v21, v43);
              if ( *(_DWORD *)(v22 + 32) )
                v45 = *(_QWORD *)(v22 + 24);
              else
                v45 = *(_QWORD *)(v64 + 8LL * *(int *)(v22 + 24));
              v46 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(v21, v43);
              v46(287, v44 + 64, v45);
              v47 = *(_QWORD *)(v20 + 56);
              v48 = (void (__fastcall *)(__int64, __int64, __int64, __int64))get_hexdsp(287, v44 + 64);
              v12 = v20;
              v11 = (_QWORD *)(off_168 + 4);
              v48(364, v20, v44, v47);
            }
            goto LABEL_22;
          }
          if ( v23 )
          {
            v24 = *(_QWORD *)(v22 + 16);
            v25 = *(_QWORD *)(v24 + 8);
            v58 = v24;
            v54 = *(_QWORD *)(v24 + 16);
            for ( k = v25 + 32 * v54; k != v25; v25 += 32 )
            {
              v26 = *(_QWORD *)(v20 + 56);
              v54 = sub_4A760(v21, v25);
              v27 = (void (__fastcall *)(__int64, __int64, __int64, __int64))get_hexdsp(v21, v25);
              v27(364, v20, v54, v26);
            }
            v28 = v58;
            v29 = v21;
            v30 = *(_QWORD *)(v20 + 56);
            v31 = sub_4A6B0(v21, v58);
          }
          else
          {
            if ( *(_DWORD *)(v22 + 32) )
              v29 = *(_QWORD *)(v22 + 24);
            else
              v29 = *(_QWORD *)(v64 + 8LL * *(int *)(v22 + 24));
            v28 = *(_QWORD *)(v20 + 32);
            v30 = *(_QWORD *)(v20 + 56);
            v31 = sub_6DB50(v29, v28);
          }
        }
        v32 = v31;
        v33 = (void (__fastcall *)(__int64, __int64, __int64, __int64))get_hexdsp(v29, v28);
        v12 = v20;
        v11 = (_QWORD *)(off_168 + 4);
        v33(364, v20, v32, v30);
LABEL_22:
        ++HIDWORD(v55);
        v19 = SHIDWORD(v55);
      }
      while ( SHIDWORD(v55) < (unsigned __int64)a1[66] );
    }
  }
  for ( m = a1[13]; i != m; m = std::_Rb_tree_increment(m) )
  {
    v35 = *(_QWORD *)(m + 40);
    for ( n = v35 + 40LL * *(_QWORD *)(m + 48); v35 != n; v35 += 40 )
    {
      v12 = *(_QWORD *)(v35 + 8);
      sub_20D10(a2, v12, *(_QWORD *)(v61 + 8LL * *(int *)(v35 + 32)), (_DWORD *)(v35 + 24));
    }
    v11 = (__int64 *)m;
  }
  v37 = (int *)a1[31];
  for ( ii = &v37[4 * a1[32]]; ii != v37; v37 += 4 )
  {
    v39 = *(_QWORD *)(*((_QWORD *)v37 + 1) + 56LL) + 32LL;
    v40 = *(_QWORD *)(*(_QWORD *)(v61 + 8LL * *v37) + 32LL);
    v41 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(v11, v12);
    v12 = v39;
    v11 = &qword_118 + 7;
    v41(287, v39, v40);
  }
  if ( v64 )
  {
    v65 = 0;
    qfree(v64);
  }
  if ( v61 )
  {
    *(_QWORD *)&v62 = 0;
    qfree(v61);
  }
  return v67 - __readfsqword(0x28u);
}
