void __fastcall sub_1F09B00(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 *v8; // rsi
  __int64 v9; // r9
  unsigned __int64 v10; // rbx
  _QWORD *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 *v20; // r12
  unsigned __int64 *v21; // r14
  unsigned int v22; // edx
  __int64 *v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 **v29; // rbp
  __int64 v30; // r15
  __int64 v31; // rax
  unsigned int v32; // esi
  int v33; // eax
  bool v34; // zf
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // rbp
  unsigned __int64 v37; // r12
  unsigned __int64 v38; // rax
  __int64 *v39; // rbx
  __int64 v40; // rsi
  __int64 *v41; // rbp
  __int64 *v42; // rdi
  int v43; // r10d
  int v44; // eax
  int v45; // esi
  int v46; // r10d
  __int64 v47; // r9
  __int64 v48; // [rsp+28h] [rbp-C0h] BYREF
  __int64 v49; // [rsp+30h] [rbp-B8h] BYREF
  __int64 *v50; // [rsp+38h] [rbp-B0h] BYREF
  __int64 *v51; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v52; // [rsp+48h] [rbp-A0h]
  unsigned int v53; // [rsp+50h] [rbp-98h]
  __int64 *v54; // [rsp+60h] [rbp-88h] BYREF
  _QWORD *v55; // [rsp+68h] [rbp-80h]
  __int64 **v56; // [rsp+70h] [rbp-78h]
  __m128 v57; // [rsp+80h] [rbp-68h] BYREF
  __int64 v58; // [rsp+90h] [rbp-58h] BYREF

  v48 = a2;
  if ( (*(_BYTE *)(a2 + 9) & 1) == 0 )
    return;
  v55 = (_QWORD *)a1;
  v54 = &v48;
  v3 = a1 + 3792;
  v56 = &v51;
  v51 = nullptr;
  v52 = 0;
  v53 = 0;
  sub_1F097A0(&v54, a1 + 3768, (_DWORD *)(a1 + 9372));
  v4 = *(_QWORD *)(a1 + 3792);
  v5 = *v54;
  v6 = *(unsigned int *)(a1 + 3808);
  if ( !(_DWORD)v6 )
    goto LABEL_48;
  v7 = (v6 - 1) & (((unsigned int)v5 >> 9) ^ ((unsigned int)v5 >> 4));
  v8 = (__int64 *)(v4 + 24LL * v7);
  v9 = *v8;
  if ( v5 != *v8 )
  {
    v45 = 1;
    if ( v9 != -4096 )
    {
      do
      {
        v46 = v45 + 1;
        v7 = (v6 - 1) & (v45 + v7);
        v8 = (__int64 *)(v4 + 24LL * v7);
        v47 = *v8;
        if ( v5 == *v8 )
          goto LABEL_4;
        v45 = v46;
      }
      while ( v47 != -4096 );
    }
LABEL_48:
    sub_1ECCF80(&v57, (_QWORD *)(v4 + 24 * v6), (_QWORD *)(v4 + 24 * v6), v3, 1);
    v10 = v57.m128_u64[0];
    goto LABEL_5;
  }
LABEL_4:
  sub_1ECCF80(&v57, v8, (_QWORD *)(v4 + 24 * v6), v3, 1);
  v10 = v57.m128_u64[0];
LABEL_5:
  v11 = (_QWORD *)(*(_QWORD *)(a1 + 3792) + 24LL * *(unsigned int *)(a1 + 3808));
  sub_1ECCF80(&v57, v11, v11, v3, 1);
  if ( v57.m128_u64[0] != v10 )
  {
    ++*(_DWORD *)(a1 + 9380);
    sub_1F046D0(&v57, (char *)(v10 + 8), v12, v13, v14, v15);
    v20 = (unsigned __int64 *)v57.m128_u64[0];
    v21 = (unsigned __int64 *)(v57.m128_u64[0] + 8LL * v57.m128_u32[2]);
    if ( (unsigned __int64 *)v57.m128_u64[0] != v21 )
    {
      while ( 1 )
      {
        v27 = sub_1EDB980(v55, *v20, v16, v17, v18, v19);
        v29 = v56;
        v30 = v27;
        v31 = *(_QWORD *)(v27 + 40);
        v32 = *((_DWORD *)v56 + 4);
        v49 = v31;
        if ( !v32 )
          break;
        v18 = v32 - 1;
        v22 = v18 & (((unsigned int)v31 >> 9) ^ ((unsigned int)v31 >> 4));
        v19 = 5LL * v22;
        v23 = &(*v56)[11 * v22];
        v24 = *v23;
        if ( v31 != *v23 )
        {
          v43 = 1;
          v19 = 0;
          if ( v24 == -1 )
          {
LABEL_42:
            v44 = *((_DWORD *)v56 + 2);
            v28 = 3 * v32;
            v50 = v23;
            v33 = v44 + 1;
            v17 = (unsigned int)(4 * v33);
            if ( (unsigned int)v17 < (unsigned int)v28 )
            {
              v28 = v32 - *((_DWORD *)v56 + 3) - v33;
              v17 = v32 >> 3;
              if ( (unsigned int)v28 <= (unsigned int)v17 )
              {
LABEL_14:
                sub_1EDD430(v56, v32, v28, v17, v18, v19);
                sub_1EB4070((__int64 *)v29, &v49, &v50);
                v23 = v50;
                v33 = *((_DWORD *)v29 + 2) + 1;
              }
              v34 = *v23 == -1;
              *((_DWORD *)v29 + 2) = v33;
              if ( !v34 )
                --*((_DWORD *)v29 + 3);
              v26 = v23 + 1;
              *v23 = v49;
              v23[1] = (__int64)(v23 + 3);
              v23[2] = 0x800000000LL;
              v25 = 0;
              goto LABEL_10;
            }
LABEL_13:
            v32 *= 2;
            goto LABEL_14;
          }
          while ( 1 )
          {
            if ( !v19 && v24 == -2 )
              v19 = (__int64)v23;
            v22 = v18 & (v22 + v43);
            v23 = &(*v56)[11 * v22];
            v24 = *v23;
            if ( v31 == *v23 )
              break;
            if ( v24 == -1 )
            {
              if ( v19 )
                v23 = (__int64 *)v19;
              goto LABEL_42;
            }
            ++v43;
          }
        }
        v25 = *((unsigned int *)v23 + 4);
        v17 = *((unsigned int *)v23 + 5);
        v26 = v23 + 1;
        if ( v25 + 1 > v17 )
        {
          ++v20;
          sub_2237220(v26, v23 + 3, v25 + 1, 8);
          v16 = *((unsigned int *)v23 + 4);
          *(_QWORD *)(v23[1] + 8 * v16) = v30;
          ++*((_DWORD *)v23 + 4);
          if ( v21 == v20 )
          {
LABEL_19:
            v21 = (unsigned __int64 *)v57.m128_u64[0];
            goto LABEL_20;
          }
        }
        else
        {
LABEL_10:
          v16 = *v26;
          ++v20;
          *(_QWORD *)(*v26 + 8 * v25) = v30;
          ++*((_DWORD *)v26 + 2);
          if ( v21 == v20 )
            goto LABEL_19;
        }
      }
      v50 = nullptr;
      goto LABEL_13;
    }
LABEL_20:
    if ( v21 != (unsigned __int64 *)&v58 )
      free(v21);
  }
  sub_1F097A0(&v54, a1 + 3816, (_DWORD *)(a1 + 9388));
  if ( (_DWORD)v52 )
    sub_1ECD040(&v57, v51, &v51[11 * v53], (__int64)&v51, 0);
  else
    sub_1ECD040(&v57, &v51[11 * v53], &v51[11 * v53], (__int64)&v51, 1);
  v36 = v57.m128_u64[1];
  v35 = v57.m128_u64[0];
  sub_1ECD040(&v57, &v51[11 * v53], &v51[11 * v53], (__int64)&v51, 1);
  v37 = v57.m128_u64[0];
  while ( v37 != v35 )
  {
    sub_B92CE0(v48, *(_QWORD *)v35, *(__int64 **)(v35 + 8), *(unsigned int *)(v35 + 16));
    if ( v35 + 88 != v36 )
    {
      if ( *(_QWORD *)(v35 + 88) < 0xFFFFFFFFFFFFFFFELL )
      {
        v35 += 88LL;
        continue;
      }
      v38 = v35 + 176;
      while ( 1 )
      {
        v35 = v38;
        if ( v38 == v36 )
          break;
        v38 += 88LL;
        if ( *(_QWORD *)v35 < 0xFFFFFFFFFFFFFFFELL )
          goto LABEL_31;
      }
    }
    v35 = v36;
LABEL_31:
    ;
  }
  *(_BYTE *)(v48 + 9) &= ~1u;
  v39 = v51;
  v40 = 88LL * v53;
  if ( v53 )
  {
    v41 = &v51[11 * v53];
    do
    {
      while ( 1 )
      {
        if ( *v39 != -2 && *v39 != -1 )
        {
          v42 = (__int64 *)v39[1];
          if ( v42 != v39 + 3 )
            break;
        }
        v39 += 11;
        if ( v41 == v39 )
          goto LABEL_38;
      }
      free(v42);
      v39 += 11;
    }
    while ( v41 != v39 );
LABEL_38:
    v39 = v51;
    v40 = 88LL * v53;
  }
  operator delete(v39, v40, 8);
}
