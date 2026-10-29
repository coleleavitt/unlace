void __fastcall sub_1F42E40(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rdi
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // r12
  unsigned __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rcx
  int v11; // r13d
  __m128 *v12; // rsi
  unsigned int i; // edx
  __m128 *v14; // r10
  unsigned __int64 v15; // rbx
  unsigned int v16; // edx
  unsigned __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 v20; // rax
  _QWORD *v21; // rdi
  unsigned __int64 v22; // r13
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  unsigned __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // r14
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rbp
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  int v43; // r10d
  bool v44; // zf
  int v45; // ebx
  __int64 v46; // rdx
  unsigned __int64 v47; // rdi
  __int64 v48; // rdx
  int v49; // eax
  __int64 v50; // r8
  __int64 v51; // rcx
  __int64 v52; // rcx
  unsigned __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rax
  unsigned __int64 v56; // r12
  __int64 v57; // rax
  unsigned __int64 v58; // rdx
  __int64 v59; // rsi
  __int64 v60; // rcx
  __m128 *v61; // rdx
  __int64 v62; // rax
  _BYTE *v63; // rdi
  unsigned __int64 v64; // r13
  __int64 v65; // rdi
  unsigned __int64 v66; // [rsp+8h] [rbp-A0h] BYREF
  unsigned __int64 v67; // [rsp+18h] [rbp-90h] BYREF
  __m128 v68; // [rsp+20h] [rbp-88h] BYREF
  __int64 v69; // [rsp+30h] [rbp-78h] BYREF
  __m128 v70; // [rsp+40h] [rbp-68h] BYREF
  __int64 v71; // [rsp+50h] [rbp-58h]
  _BYTE v72[80]; // [rsp+58h] [rbp-50h] BYREF

  if ( !*(_QWORD *)(a1 + 32) )
  {
    if ( !*(_BYTE *)(a1 + 24) )
      return;
    v17 = *(_QWORD *)(a1 + 16);
    if ( v17 )
      return;
    v18 = *(_QWORD *)(a1 + 8);
    v19 = *(_QWORD *)(v18 + 40);
    v20 = *(_QWORD *)(v18 + 16);
    v21 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v20 & 4) != 0 )
      v21 = (_QWORD *)*v21;
    v22 = sub_B8EAA0((__int64)v21);
    if ( sub_1EA74C0(*(_QWORD *)(a1 + 8)) )
    {
      v27 = *(_QWORD *)(a1 + 8);
      v28 = *(_QWORD *)(v27 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v27 + 16) & 4) != 0 )
        v28 = *(_QWORD *)(v28 + 8);
      sub_1F38950(*(_QWORD *)a1, v28, *(_DWORD *)(a1 + 28), v27);
      return;
    }
    v29 = *(_QWORD *)a1;
    if ( (*(_BYTE *)(v22 + 8) & 0x7F) != 0 || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v29 + 144) + 2320LL) + 1LL) & 8) != 0 )
    {
      v39 = sub_1F42D60(v29, v22, v23, v24, v25, v26);
      if ( v39 )
        sub_B93950(v39, *(_QWORD *)(a1 + 8), 1, v40, v41, v42);
      return;
    }
    v30 = sub_1EACA10(v29);
    if ( !(unsigned __int8)sub_15C1C30(v30, *(char **)(a1 + 8), v19) )
      return;
    v31 = *(_QWORD *)a1;
    if ( (v19 & 7) == 0 )
      v17 = v19 & 0xFFFFFFFFFFFFFFF8LL;
    v67 = v17;
    if ( (unsigned __int8)sub_1F33510(v31 + 9456, (__int64 *)&v67, &v68) )
    {
      if ( (*(_BYTE *)(v31 + 9456) & 1) != 0 )
      {
        v33 = v31 + 9464;
        v34 = 256;
      }
      else
      {
        v33 = *(_QWORD *)(v31 + 9464);
        v34 = 16LL * *(unsigned int *)(v31 + 9472);
      }
      sub_1ED8660(&v70, v68.m128_u64[0], (_QWORD *)(v34 + v33), v31 + 9456, 1);
      v35 = *(unsigned int *)(v70.m128_u64[0] + 8);
LABEL_33:
      v36 = *(_QWORD *)(a1 + 8);
      v37 = *(_QWORD *)(v31 + 9720) + 40 * v35;
      v38 = *(unsigned int *)(v37 + 16);
      if ( v38 + 1 > (unsigned __int64)*(unsigned int *)(v37 + 20) )
      {
        sub_2237220(v37 + 8, v37 + 24, v38 + 1, 8);
        v38 = *(unsigned int *)(v37 + 16);
      }
      *(_QWORD *)(*(_QWORD *)(v37 + 8) + 8 * v38) = v36;
      ++*(_DWORD *)(v37 + 16);
      return;
    }
    v47 = v68.m128_u64[0];
    v48 = 16;
    v70.m128_u64[0] = v68.m128_u64[0];
    v49 = (*(_DWORD *)(v31 + 9456) >> 1) + 1;
    if ( (*(_BYTE *)(v31 + 9456) & 1) == 0 )
      v48 = *(unsigned int *)(v31 + 9472);
    v50 = (unsigned int)(4 * v49);
    v51 = (unsigned int)(3 * v48);
    if ( (unsigned int)v50 >= (unsigned int)v51 )
    {
      sub_1F3C040(v31 + 9456, 2 * v48, v48, v51, v50, v32);
    }
    else
    {
      v52 = (unsigned int)v48 >> 3;
      if ( (int)v48 - (v49 + *(_DWORD *)(v31 + 9460)) > (unsigned int)v52 )
      {
LABEL_57:
        *(_DWORD *)(v31 + 9456) = *(_DWORD *)(v31 + 9456) & 1 | (2 * v49);
        if ( *(_QWORD *)v47 != -4096 )
          --*(_DWORD *)(v31 + 9460);
        v53 = v67;
        *(_DWORD *)(v47 + 8) = 0;
        *(_QWORD *)v47 = v53;
        v68.m128_u64[0] = v47;
        if ( (*(_BYTE *)(v31 + 9456) & 1) != 0 )
        {
          v54 = v31 + 9464;
          v55 = 256;
        }
        else
        {
          v54 = *(_QWORD *)(v31 + 9464);
          v55 = 16LL * *(unsigned int *)(v31 + 9472);
        }
        sub_1ED8660(&v70, (_QWORD *)v47, (_QWORD *)(v55 + v54), v31 + 9456, 1);
        v56 = v70.m128_u64[0];
        v68.m128_u64[1] = 0x200000000LL;
        v70.m128_u64[0] = v67;
        v71 = 0x200000000LL;
        v57 = *(unsigned int *)(v31 + 9728);
        v70.m128_u64[1] = (unsigned __int64)v72;
        v58 = *(unsigned int *)(v31 + 9732);
        v59 = v57 + 1;
        v68.m128_u64[0] = (unsigned __int64)&v69;
        if ( v57 + 1 > v58 )
        {
          v64 = *(_QWORD *)(v31 + 9720);
          v65 = v31 + 9720;
          if ( v64 > (unsigned __int64)&v70 || (unsigned __int64)&v70 >= v64 + 40 * v57 )
          {
            sub_1F38530(v65, v59);
            v57 = *(unsigned int *)(v31 + 9728);
            v61 = &v70;
            v60 = *(_QWORD *)(v31 + 9720);
          }
          else
          {
            sub_1F38530(v65, v59);
            v60 = *(_QWORD *)(v31 + 9720);
            v57 = *(unsigned int *)(v31 + 9728);
            v61 = (__m128 *)((char *)&v70 + v60 - v64);
          }
        }
        else
        {
          v60 = *(_QWORD *)(v31 + 9720);
          v61 = &v70;
        }
        v62 = v60 + 40 * v57;
        *(_QWORD *)v62 = v61->m128_u64[0];
        *(_QWORD *)(v62 + 8) = v62 + 24;
        *(_QWORD *)(v62 + 16) = 0x200000000LL;
        if ( v61[1].m128_i32[0] )
          sub_AEA1F0((char ***)(v62 + 8), (char ***)&v61->m128_u64[1]);
        v35 = *(unsigned int *)(v31 + 9728);
        v63 = (_BYTE *)v70.m128_u64[1];
        *(_DWORD *)(v31 + 9728) = v35 + 1;
        if ( v63 != v72 )
        {
          free(v63);
          v35 = (unsigned int)(*(_DWORD *)(v31 + 9728) - 1);
        }
        *(_DWORD *)(v56 + 8) = v35;
        goto LABEL_33;
      }
      sub_1F3C040(v31 + 9456, v48, v48, v52, v50, v32);
    }
    sub_1F33510(v31 + 9456, (__int64 *)&v67, &v70);
    v47 = v70.m128_u64[0];
    v49 = (*(_DWORD *)(v31 + 9456) >> 1) + 1;
    goto LABEL_57;
  }
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  v3 = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v2 & 4) != 0 )
    v3 = (_QWORD *)*v3;
  v4 = sub_B8EAA0((__int64)v3);
  v7 = *(_QWORD *)a1;
  v8 = *(_QWORD *)(a1 + 32);
  v9 = *(_QWORD *)(a1 + 8);
  v70.m128_u64[0] = v4;
  v10 = *(unsigned int *)(v7 + 3616);
  v70.m128_u64[1] = v8;
  v71 = v9;
  if ( !(_DWORD)v10 )
  {
    v68.m128_u64[0] = 0;
    goto LABEL_39;
  }
  v6 = *(_QWORD *)(v7 + 3600);
  v11 = 1;
  v12 = nullptr;
  for ( i = (v10 - 1)
          & (((0xBF58476D1CE4E5B9LL
             * (((unsigned int)v8 >> 9) ^ ((unsigned int)v8 >> 4)
              | ((unsigned __int64)(((unsigned int)v4 >> 9) ^ ((unsigned int)v4 >> 4)) << 32))) >> 31)
           ^ (484763065 * (((unsigned int)v8 >> 9) ^ ((unsigned int)v8 >> 4)))); ; i = (v10 - 1) & v16 )
  {
    v14 = (__m128 *)(v6 + 24LL * i);
    v15 = v14->m128_u64[0];
    if ( v4 == v14->m128_u64[0] && v8 == v14->m128_u64[1] )
    {
      sub_1F335E0(&v68, (_QWORD *)(v6 + 24LL * i), (_QWORD *)(v6 + 24 * v10), v7 + 3600, 1);
      return;
    }
    if ( v15 == -4096 )
      break;
    if ( v15 == -8192 && v14->m128_u64[1] == -8192 && !v12 )
      v12 = (__m128 *)(v6 + 24LL * i);
LABEL_12:
    v16 = v11 + i;
    ++v11;
  }
  if ( v14->m128_u64[1] != -4096 )
    goto LABEL_12;
  v45 = *(_DWORD *)(v7 + 3608);
  v5 = (unsigned int)(3 * v10);
  if ( !v12 )
    v12 = v14;
  v43 = v45 + 1;
  v68.m128_u64[0] = (unsigned __int64)v12;
  if ( 4 * (v45 + 1) >= (unsigned int)v5 )
  {
LABEL_39:
    sub_1F3BD80(v7 + 3600, 2 * v10, v5, v10, v9, v6);
    goto LABEL_40;
  }
  v46 = (unsigned int)(v10 - *(_DWORD *)(v7 + 3612) - v43);
  if ( (unsigned int)v46 <= (unsigned int)v10 >> 3 )
  {
    sub_1F3BD80(v7 + 3600, v10, v46, v10, v9, v6);
LABEL_40:
    sub_1F33420((__int64 *)(v7 + 3600), (__int64 *)&v70, (__int64 **)&v68);
    v8 = v70.m128_u64[1];
    v9 = v71;
    v6 = *(_QWORD *)(v7 + 3600);
    v10 = *(unsigned int *)(v7 + 3616);
    v12 = (__m128 *)v68.m128_u64[0];
    v43 = *(_DWORD *)(v7 + 3608) + 1;
  }
  v44 = v12->m128_u64[0] == -4096;
  *(_DWORD *)(v7 + 3608) = v43;
  if ( !v44 || v12->m128_u64[1] != -4096 )
    --*(_DWORD *)(v7 + 3612);
  v66 = v8;
  v12[1].m128_u64[0] = v9;
  *v12 = _mm_loadh_ps((const double *)&v66);
  sub_1F335E0(&v68, v12, (_QWORD *)(v6 + 24 * v10), v7 + 3600, 1);
}
