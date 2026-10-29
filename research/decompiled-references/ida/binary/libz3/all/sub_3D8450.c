void __fastcall sub_3D8450(__int64 a1, __int64 *a2, char a3, char a4)
{
  __int64 v6; // r15
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rdi
  _DWORD *v11; // rax
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  char *v16; // r10
  __int64 v17; // rsi
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 i; // rcx
  signed __int64 v21; // r15
  char *v22; // rax
  char *v23; // r14
  char *v24; // rdi
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // rdi
  int v28; // r8d
  int v29; // r9d
  char *v30; // r14
  char *v31; // r15
  char *v32; // rdx
  __int64 v33; // rsi
  int *v35; // r14
  void *v36; // [rsp+0h] [rbp-198h]
  __int64 v37; // [rsp+0h] [rbp-198h]
  __int64 v38; // [rsp+0h] [rbp-198h]
  char *v40; // [rsp+8h] [rbp-190h]
  char *v41; // [rsp+8h] [rbp-190h]
  int *v42; // [rsp+8h] [rbp-190h]
  char *v43; // [rsp+10h] [rbp-188h]
  char *v44; // [rsp+10h] [rbp-188h]
  int dest; // [rsp+18h] [rbp-180h]
  void *desta; // [rsp+18h] [rbp-180h]
  char *destb; // [rsp+18h] [rbp-180h]
  void *src; // [rsp+20h] [rbp-178h]
  char *srca; // [rsp+20h] [rbp-178h]
  void *srcb; // [rsp+20h] [rbp-178h]
  __int64 v51; // [rsp+28h] [rbp-170h]
  char *v52; // [rsp+28h] [rbp-170h]
  __int64 v53; // [rsp+30h] [rbp-168h]
  char v54[8]; // [rsp+38h] [rbp-160h] BYREF
  int v55[4]; // [rsp+40h] [rbp-158h] BYREF
  int v56[2]; // [rsp+50h] [rbp-148h] BYREF
  char *v57; // [rsp+58h] [rbp-140h]
  int v58[78]; // [rsp+60h] [rbp-138h] BYREF

  v6 = a2[1];
  *(_QWORD *)v54 = 0;
  sub_1862300(v54, "sort_sums", 1);
  sub_1862300(v54, "gcd_rounding", 1);
  sub_1862300(v54, "arith_ineq_lhs", 1);
  sub_1862300(v54, "som", 1);
  sub_1862300(v54, "flat", 1);
  sub_14B7810((int)v55, v6, (int)v54, v7, v8, v9, v36);
  sub_14B9BF0(v55, a1, a2);
  v10 = *a2;
  if ( !*(_WORD *)(*a2 + 4) )
  {
    v11 = *(_DWORD **)(*(_QWORD *)(v10 + 16) + 24LL);
    if ( v11 )
    {
      if ( !*v11 && v11[1] == 5 )
      {
        *(_QWORD *)v56 = v6;
        v57 = nullptr;
        sub_15EEF60(v10);
        v16 = v57;
        if ( !v57 || (v17 = *((unsigned int *)v57 - 1), (unsigned int)v17 <= 1) )
        {
LABEL_20:
          sub_2334C0((__int64 *)v56);
          goto LABEL_4;
        }
        if ( a3 )
        {
          sub_3D7E20(v56);
          if ( !a4 )
          {
LABEL_36:
            v16 = v57;
            if ( !v57 )
            {
              v25 = *(_QWORD *)v56;
              v17 = 0;
LABEL_17:
              v26 = sub_15EC1C0(v25, v17);
              if ( v26 )
                ++*(_DWORD *)(v26 + 8);
              v27 = *a2;
              *a2 = v26;
              sub_3D2CD0(v27, v25);
              goto LABEL_20;
            }
            v17 = *((unsigned int *)v57 - 1);
LABEL_10:
            v18 = 8LL * (unsigned int)v17;
            v44 = &v16[v18];
            if ( &v16[v18] == v16 )
            {
              v25 = *(_QWORD *)v56;
            }
            else
            {
              v19 = ((v18 >> 3) + 1) >> 1;
              for ( i = v19; ; i = (__int64)(v40 + 1) >> 1 )
              {
                v21 = 8 * i;
                v52 = (char *)v19;
                srca = v16;
                desta = (void *)v18;
                v40 = (char *)i;
                v22 = (char *)operator new(8 * i, (const std::nothrow_t *)&std::nothrow);
                v18 = (__int64)desta;
                v16 = srca;
                v19 = (__int64)v52;
                v23 = v22;
                if ( v22 )
                  break;
                if ( v40 == (_BYTE *)&dword_0 + 1 )
                {
                  v21 = 0;
                  sub_3D38B0(srca, (__int64)v44);
                  goto LABEL_15;
                }
              }
              if ( v40 == v52 )
              {
                v24 = srca;
                srcb = desta;
                v41 = &v16[v21];
                destb = v16;
                sub_3D2DD0(v24, &v16[v21], v22);
                sub_3D2DD0(v41, v44, v23);
                sub_3D3100(destb, v41, v44, v21 >> 3, ((__int64)srcb - v21) >> 3, v23);
              }
              else
              {
                sub_3D3EC0(srca, v44, v22, (__int64)v40);
              }
LABEL_15:
              operator delete(v23, v21);
              v25 = *(_QWORD *)v56;
              if ( v57 )
                v17 = *((unsigned int *)v57 - 1);
              else
                v17 = 0;
            }
            goto LABEL_17;
          }
        }
        else if ( !a4 )
        {
          goto LABEL_10;
        }
        v42 = v58;
        sub_E92440((unsigned int)v58, a2[1], v12, v13, v14, v15, v37);
        if ( v57 )
        {
          v30 = &v57[8 * *((unsigned int *)v57 - 1)];
          if ( v57 == v30 )
            goto LABEL_27;
          v31 = v57;
          do
          {
            sub_E8F9F0((int)v42, v38, (int)v42, (int)v43, dest, (__int64)src, v51, v53);
            v31 += 8;
          }
          while ( v30 != v31 );
          v30 = v57;
          if ( v57 )
          {
LABEL_27:
            v32 = &v30[8 * *((unsigned int *)v30 - 1)];
            if ( v30 >= v32 )
              goto LABEL_34;
            do
            {
              v33 = *(_QWORD *)v30;
              if ( *(_QWORD *)v30 )
              {
                if ( (*(_DWORD *)(v33 + 8))-- == 1 )
                {
                  v43 = v32;
                  sub_15D7BC0(*(_QWORD *)v56, v33);
                  v32 = v43;
                }
              }
              v30 += 8;
            }
            while ( v30 < v32 );
            v30 = v57;
            if ( v57 )
LABEL_34:
              *((_DWORD *)v30 - 1) = 0;
          }
        }
        v35 = v42;
        sub_E8DBC0(
          (_DWORD)v42,
          (unsigned int)v56,
          0,
          1,
          v28,
          v29,
          v38,
          (__int64)v42,
          (_DWORD)v43,
          dest,
          (_DWORD)src,
          v51,
          v53,
          *(_DWORD *)v54,
          v55[0],
          v55[2],
          *(__int64 *)v56);
        sub_E8B810(v35);
        goto LABEL_36;
      }
    }
  }
LABEL_4:
  sub_14B63F0(v55);
  sub_18572D0(v54);
}

