unsigned __int64 __fastcall sub_1A46A0(__int128 a1)
{
  __int64 v1; // r14
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rbx
  bool v6; // bp
  __int64 v7; // rax
  __int64 v8; // r13
  int v9; // ebx
  __int64 v10; // r12
  __m128 v11; // xmm0
  __int64 v12; // rbp
  int v14; // ebp
  __int64 v15; // rdi
  __int64 v16; // rax
  int v17; // r15d
  unsigned __int64 *v18; // rbp
  int **v19; // r13
  int *v20; // rcx
  int *v21; // rdx
  int *v22; // r12
  __int64 v23; // rax
  __int64 v24; // rbp
  int v25; // ebp
  int *v26; // rdx
  int *v27; // rax
  __int64 v28; // [rsp+0h] [rbp-208h]
  __int64 v29; // [rsp+30h] [rbp-1D8h]
  __int64 v30; // [rsp+38h] [rbp-1D0h]
  _QWORD v31[2]; // [rsp+50h] [rbp-1B8h] BYREF
  __int64 v32[2]; // [rsp+60h] [rbp-1A8h] BYREF
  int *v33; // [rsp+70h] [rbp-198h] BYREF
  __int128 v34; // [rsp+78h] [rbp-190h]
  __int64 v35; // [rsp+90h] [rbp-178h] BYREF
  __int128 v36; // [rsp+98h] [rbp-170h]
  __int64 v37; // [rsp+A8h] [rbp-160h]
  char v38; // [rsp+B0h] [rbp-158h]
  unsigned __int64 v39; // [rsp+B8h] [rbp-150h]
  char v40; // [rsp+C0h] [rbp-148h]
  __m128 v41; // [rsp+D0h] [rbp-138h] BYREF
  _QWORD *v42; // [rsp+E0h] [rbp-128h]
  __int128 v43; // [rsp+F0h] [rbp-118h]
  __int128 v44; // [rsp+100h] [rbp-108h]
  __int128 v45; // [rsp+110h] [rbp-F8h]
  __int64 v46; // [rsp+120h] [rbp-E8h]
  __int128 v47; // [rsp+128h] [rbp-E0h]
  __int64 v48[2]; // [rsp+148h] [rbp-C0h] BYREF
  __int64 v49; // [rsp+158h] [rbp-B0h] BYREF
  __int128 v50; // [rsp+160h] [rbp-A8h]
  __int64 v51[2]; // [rsp+170h] [rbp-98h] BYREF
  __int64 v52; // [rsp+180h] [rbp-88h] BYREF
  __int128 v53; // [rsp+188h] [rbp-80h]
  __int64 v54; // [rsp+198h] [rbp-70h]
  __int64 v55; // [rsp+1A0h] [rbp-68h]
  __int64 v56; // [rsp+1A8h] [rbp-60h]
  __int128 v57; // [rsp+1B0h] [rbp-58h]
  bool v58; // [rsp+1C4h] [rbp-44h]
  unsigned __int64 v59; // [rsp+1C8h] [rbp-40h]

  *(_QWORD *)&a1 = *(_QWORD *)(a1 + 16);
  v28 = *((_QWORD *)&a1 + 1);
  v1 = *(_QWORD *)(a1 + 280);
  v59 = __readfsqword(0x28u);
  v30 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 72LL)
      + *(__int16 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)a1 + 24LL))(a1);
  v31[0] = -4294967291LL;
  v4 = (_QWORD *)j__qalloc_or_throw(16, *((__int64 *)&a1 + 1), v2, v3);
  *v4 = v1;
  v4[1] = v30;
  v31[1] = v4;
  HIDWORD(v31[0]) = *(_DWORD *)(*(_QWORD *)(v1 + 1504) + 80LL);
  v5 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 104LL);
  v6 = (*(_BYTE *)(*((_QWORD *)&a1 + 1) + 8LL) & 0x10) != 0;
  if ( !v5 )
  {
    if ( !under_debugger )
      sub_383060(52555);
    goto LABEL_69;
  }
  v7 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 96LL);
  v8 = *(_QWORD *)(v7 + 8 * v5 - 8);
  v9 = v5 - 2;
  if ( v9 >= 0 )
  {
    v10 = 8LL * (unsigned int)v9;
    while ( 1 )
    {
      while ( !v8 )
      {
        --v9;
        v10 -= 8;
        if ( v9 == -1 )
          goto LABEL_10;
      }
      if ( !sub_122240(*(_QWORD *)(v7 + v10), *(_QWORD *)(v8 + 8), 0) )
        break;
LABEL_9:
      --v9;
      v7 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 96LL);
      v8 = *(_QWORD *)(v7 + v10);
      v10 -= 8;
      if ( v9 == -1 )
        goto LABEL_10;
    }
    while ( 1 )
    {
      --v9;
      v10 -= 8;
      if ( v9 == -1 )
        break;
      if ( sub_122240(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)&a1 + 1) + 96LL) + v10), *(_QWORD *)(v8 + 8), 0) )
        goto LABEL_9;
    }
  }
LABEL_10:
  *(_QWORD *)&a1 = **((_QWORD **)&a1 + 1);
  v11 = _mm_loadh_ps((const double *)(v8 + 8));
  if ( !**((_QWORD **)&a1 + 1) )
    sub_195160(*(double *)v11.m128_u64);
  v41 = v11;
  *((_QWORD *)&a1 + 1) = v48;
  v42 = v31;
  v46 = 0;
  v48[0] = 0;
  v48[1] = 0;
  v49 = 0;
  v51[0] = 0;
  v51[1] = 0;
  v52 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v58 = v6;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v47 = 0;
  v50 = 0;
  v53 = 0;
  v57 = 0;
  sub_123EA0(a1, (__int64)v31, 0, 0xFFFF0000);
  sub_1A3420((__int64)&v41);
  v12 = *(_QWORD *)(v28 + 72);
  while ( (unsigned int)sub_1A4170((__int64)&v41) == 1 )
    sub_1A35C0(&v41, v12, 1);
  if ( (unsigned __int8)sub_64820(v48, v51) && (unsigned __int8)sub_317F40(&v52, &v49) )
  {
    v34 = 0;
    v32[0] = 0;
    v32[1] = 0;
    v14 = *(_DWORD *)(v41.m128_u64[0] + 72);
    v33 = nullptr;
    v33 = (int *)qvector_reserve((__int64)&v33, 0, 1, 4);
    v33[(_QWORD)v34] = v14;
    v15 = *(_QWORD *)(v1 + 784);
    *(_QWORD *)&v34 = v34 + 1;
    v29 = sub_1108E0(v15, 0);
    if ( v29 )
    {
      ++*(_DWORD *)(v29 + 24);
      while ( 2 )
      {
        while ( 2 )
        {
          v16 = v34;
          if ( !(_QWORD)v34 )
            goto LABEL_41;
LABEL_28:
          v17 = v33[v16 - 1];
          *(_QWORD *)&v34 = v16 - 1;
          v18 = (unsigned __int64 *)(*(_QWORD *)v29 + 24LL * v17);
          sub_64190(v32, v17);
          v35 = 0;
          v37 = v30;
          v38 = 5;
          v39 = 0xFFFFFFFF00000001LL;
          v40 = 1;
          v36 = 0;
          v19 = (int **)sub_104DF0(v18, (__int64)&v35);
          if ( v35 )
          {
            *(_QWORD *)&v36 = 0;
            qfree(v35);
          }
          if ( !v19 )
            continue;
          break;
        }
        v20 = v19[1];
        v21 = *v19;
        v22 = *v19;
        if ( !(4LL * (_QWORD)v20) )
          continue;
        break;
      }
      while ( 1 )
      {
        v23 = (unsigned int)*v22;
        if ( (_DWORD)v23 != v17 )
        {
          if ( (unsigned int)v23 >= *(_DWORD *)(v1 + 64) )
          {
            if ( !under_debugger )
              sub_383060(52719);
            goto LABEL_69;
          }
          v41 = _mm_loadh_ps((const double *)(*(_QWORD *)(*(_QWORD *)(v1 + 528) + 8 * v23) + 48LL));
          sub_1A3420((__int64)&v41);
          v24 = *(_QWORD *)(v28 + 72);
          while ( (unsigned int)sub_1A4170((__int64)&v41) == 1 )
            sub_1A35C0(&v41, v24, 1);
          if ( (unsigned __int8)sub_64820(v48, v51) && (unsigned __int8)sub_317F40(&v52, &v49) && !sub_64930(v32, *v22) )
          {
            v25 = *v22;
            v26 = &v33[v34];
            if ( v33 == v26 )
              goto LABEL_59;
            v27 = v33;
            while ( v25 != *v27 )
            {
              if ( v26 == ++v27 )
                goto LABEL_59;
            }
            if ( v26 == v27 )
            {
LABEL_59:
              if ( *((_QWORD *)&v34 + 1) < (unsigned __int64)(v34 + 1) )
              {
                v33 = (int *)qvector_reserve((__int64)&v33, (__int64)v33, v34 + 1, 4);
                v26 = &v33[v34];
              }
              *v26 = v25;
              *(_QWORD *)&v34 = v34 + 1;
            }
          }
          v21 = *v19;
          v20 = v19[1];
        }
        if ( ++v22 == &v21[(_QWORD)v20] )
        {
          v16 = v34;
          if ( !(_QWORD)v34 )
          {
LABEL_41:
            sub_104E10(v29);
            if ( v33 )
            {
              *(_QWORD *)&v34 = 0;
              qfree((__int64)v33);
            }
            qfree(v32[0]);
            if ( v56 )
            {
              *(_QWORD *)&v57 = 0;
              qfree(v56);
            }
            qfree(v54);
            if ( v52 )
            {
              *(_QWORD *)&v53 = 0;
              qfree(v52);
            }
            qfree(v51[0]);
            if ( v49 )
            {
              *(_QWORD *)&v50 = 0;
              qfree(v49);
            }
            qfree(v48[0]);
            if ( v46 )
            {
              *(_QWORD *)&v47 = 0;
              qfree(v46);
            }
            goto LABEL_23;
          }
          goto LABEL_28;
        }
      }
    }
    if ( !under_debugger )
      sub_383060(50446);
LABEL_69:
    BUG();
  }
  if ( v56 )
  {
    *(_QWORD *)&v57 = 0;
    qfree(v56);
  }
  qfree(v54);
  if ( v52 )
  {
    *(_QWORD *)&v53 = 0;
    qfree(v52);
  }
  qfree(v51[0]);
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree(v49);
  }
  qfree(v48[0]);
  if ( v46 )
  {
    *(_QWORD *)&v47 = 0;
    qfree(v46);
  }
LABEL_23:
  sub_11CDA0((__int64)v31);
  return v59 - __readfsqword(0x28u);
}
