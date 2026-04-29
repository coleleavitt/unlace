__int64 __fastcall sub_4AF00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v7; // rdx
  int v9; // esi
  int v10; // edi
  __int64 v11; // rax
  __int64 v12; // r9
  _QWORD *v13; // r10
  __int64 v14; // rax
  char v15; // cl
  char v16; // r12
  char v17; // r10
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbp
  _QWORD *v21; // rdi
  __int64 v22; // rax
  char v23; // cl
  __int64 v24; // rax
  unsigned int v25; // ebp
  __int64 v26; // rax
  __int64 v27; // rax
  __m128i v28; // xmm0
  __int64 v30; // rbp
  __int64 v31; // rax
  __int64 v32; // rbp
  __int64 v33; // r13
  __int64 v34; // rbp
  __int64 v35; // r12
  __int64 v36; // rdi
  int v37; // ebp
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rax
  signed int v42; // ebp
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rsi
  __int64 v48; // rax
  unsigned __int64 v49; // rdx
  int v50; // ebp
  __int64 *v51; // rbp
  unsigned __int64 v52; // r12
  __int64 v53; // rax
  unsigned __int64 v54; // r12
  __int64 v55; // r12
  __int64 v56; // rax
  __int64 v57; // r13
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rdi
  __int64 v62; // r12
  __int64 v63; // r13
  __int64 v64; // r14
  __int64 v65; // rdi
  __int64 v66; // rsi
  bool v67; // cf
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rdi
  __int64 v71; // r14
  __int64 v72; // r12
  __int64 v73; // r13
  __int64 v74; // rdi
  __int64 v75; // rsi
  __int64 v76; // [rsp+0h] [rbp-D8h]
  __int64 v77; // [rsp+0h] [rbp-D8h]
  __int64 v78; // [rsp+18h] [rbp-C0h]
  __int64 v79; // [rsp+18h] [rbp-C0h]
  signed int v80; // [rsp+2Ch] [rbp-ACh] BYREF
  _BYTE v81[16]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v82[16]; // [rsp+40h] [rbp-98h] BYREF
  __int32 v83; // [rsp+50h] [rbp-88h]
  _BYTE v84[24]; // [rsp+58h] [rbp-80h] BYREF
  __int64 v85; // [rsp+70h] [rbp-68h] BYREF
  __m128i v86; // [rsp+78h] [rbp-60h] BYREF
  _BYTE v87[16]; // [rsp+88h] [rbp-50h] BYREF
  unsigned __int64 v88; // [rsp+98h] [rbp-40h]

  v7 = *(_QWORD *)(a2 + 240);
  v88 = __readfsqword(0x28u);
  v9 = *(_DWORD *)(v7 + 32);
  if ( v9 == 2 || (v10 = *(_DWORD *)(v7 + 48), v10 == 2) )
  {
    sub_64B50(
      (unsigned int)&v85,
      *(_QWORD *)(a2 + 16),
      (unsigned int)"two-way block %d has invalid successor type",
      *(_DWORD *)(a2 + 256),
      a5,
      a6);
    v27 = v85;
    v28 = _mm_loadu_si128(&v86);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)a1 = v27;
    *(__m128i *)(a1 + 8) = v28;
    return a1;
  }
  if ( v9 )
  {
    if ( v10 )
    {
      v30 = *(_QWORD *)(v7 + 40);
      v31 = sub_4A9C0(a2);
      sub_4C010(v31 + 24, v30);
      goto LABEL_15;
    }
    v12 = *(_QWORD *)(a2 + 104);
    v17 = 0;
  }
  else
  {
    v11 = *(int *)(v7 + 24);
    v12 = *(_QWORD *)(a2 + 104);
    v13 = (_QWORD *)(v12 + 8 * (v11 / 64));
    v14 = v11 % 64;
    v15 = v14;
    if ( v14 < 0 )
    {
      --v13;
      v15 = v14 + 64;
    }
    v16 = (*v13 & (1LL << v15)) != 0;
    v17 = v16;
    if ( v10 )
    {
      v32 = *(_QWORD *)(a2 + 248);
      v33 = v32 + 40;
      v32 += 24;
      sub_4BFB0(&v85, v32);
      sub_4BFE0(v32, v33);
      sub_4BFE0(v33, &v85);
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 248) + 16LL) + 8LL) ^= 1u;
      v20 = *(int *)(*(_QWORD *)(a2 + 240) + 24LL);
      goto LABEL_12;
    }
  }
  v18 = *(int *)(v7 + 40);
  v19 = v18 + 63;
  v20 = v18;
  if ( v18 >= 0 )
    v19 = *(int *)(v7 + 40);
  v21 = (_QWORD *)(v12 + 8 * (v19 >> 6));
  v22 = v18 % 64;
  v23 = v22;
  if ( v22 < 0 )
  {
    --v21;
    v23 = v22 + 64;
  }
  v24 = *v21 & (1LL << v23);
  v16 = v17 | (v24 != 0);
  if ( !v9 )
  {
    if ( v24 && v17 )
    {
      sub_4C000(*(_QWORD *)(a2 + 248) + 24LL, *(unsigned int *)(*(_QWORD *)(a2 + 80) + 4LL * *(int *)(v7 + 24)));
      v25 = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 4LL * *(int *)(*(_QWORD *)(a2 + 240) + 40LL));
      goto LABEL_14;
    }
    if ( !v16 )
    {
      v42 = *(_DWORD *)(v7 + 24);
      v43 = *(_QWORD *)(a2 + 64);
      v44 = *(_QWORD *)(a2 + 56);
      v80 = v42;
      if ( *(_QWORD *)(a2 + 72) < (unsigned __int64)(v43 + 1) )
      {
        v44 = qvector_reserve(a2 + 56, v44, v43 + 1, 4);
        v43 = *(_QWORD *)(a2 + 64);
        *(_QWORD *)(a2 + 56) = v44;
      }
      *(_DWORD *)(v44 + 4 * v43) = v42;
      v45 = *(_QWORD *)(a2 + 64);
      v46 = *(_QWORD *)(a2 + 240);
      v47 = *(_QWORD *)(a2 + 56);
      v48 = v45 + 1;
      v49 = v45 + 2;
      *(_QWORD *)(a2 + 64) = v48;
      v50 = *(_DWORD *)(v46 + 40);
      if ( *(_QWORD *)(a2 + 72) < v49 )
      {
        v58 = qvector_reserve(a2 + 56, v47, v49, 4);
        *(_QWORD *)(a2 + 56) = v58;
        v47 = v58;
        v48 = *(_QWORD *)(a2 + 64);
      }
      *(_DWORD *)(v47 + 4 * v48) = v50;
      ++*(_QWORD *)(a2 + 64);
      sub_4BF90(v81);
      sub_4C000(v81, *(unsigned int *)(a2 + 260));
      v51 = (__int64 *)sub_4AD20((_QWORD *)(a2 + 144), &v80);
      sub_4BFA0(v82, v81);
      v83 = 0;
      sub_4BFA0(v84, v81);
      v52 = v51[2];
      v76 = *v51;
      if ( (unsigned __int64)v82 < *v51 || (unsigned __int64)v82 >= *v51 + 40 * v52 )
      {
        v56 = v51[1];
        if ( v52 < v56 + 1 )
        {
          v59 = qvector_reserve(v51, 0, v56 + 1, 40);
          v60 = v51[2];
          v61 = *v51;
          v51[2] = v52;
          v76 = v59;
          v62 = v59;
          v78 = v60;
          v63 = v61;
          v64 = v51[1] - 1;
          if ( v64 >= 0 )
          {
            do
            {
              sub_4BFB0(v62, v63);
              v65 = v62 + 24;
              v62 += 40;
              *(_DWORD *)(v62 - 24) = *(_DWORD *)(v63 + 16);
              v66 = v63 + 24;
              v63 += 40;
              sub_4BFB0(v65, v66);
              v67 = v64-- == 0;
            }
            while ( !v67 );
            v61 = *v51;
          }
          qfree(v61);
          *v51 = v76;
          v51[2] = v78;
          v56 = v51[1];
        }
        v57 = v76 + 40 * v56;
        sub_4BFB0(v57, v82);
        *(_DWORD *)(v57 + 16) = v83;
        sub_4BFB0(v57 + 24, v84);
      }
      else
      {
        sub_4BFB0(&v85, v82);
        v86.m128i_i32[2] = v83;
        sub_4BFB0(v87, v84);
        v53 = v51[1];
        v54 = v51[2];
        if ( v54 < v53 + 1 )
        {
          v68 = qvector_reserve(v51, 0, v53 + 1, 40);
          v69 = v51[2];
          v70 = *v51;
          v51[2] = v54;
          v77 = v68;
          v71 = v68;
          v79 = v69;
          v72 = v70;
          v73 = v51[1] - 1;
          if ( v73 >= 0 )
          {
            do
            {
              sub_4BFB0(v71, v72);
              v74 = v71 + 24;
              v71 += 40;
              *(_DWORD *)(v71 - 24) = *(_DWORD *)(v72 + 16);
              v75 = v72 + 24;
              v72 += 40;
              sub_4BFB0(v74, v75);
              v67 = v73-- == 0;
            }
            while ( !v67 );
            v70 = *v51;
          }
          qfree(v70);
          *v51 = v77;
          v51[2] = v79;
          v53 = v51[1];
        }
        else
        {
          v77 = *v51;
        }
        v55 = v77 + 40 * v53;
        sub_4BFB0(v55, &v85);
        *(_DWORD *)(v55 + 16) = v86.m128i_i32[2];
        sub_4BFB0(v55 + 24, v87);
      }
      ++v51[1];
      goto LABEL_15;
    }
    if ( v24 )
    {
      v34 = *(_QWORD *)(a2 + 248);
      v35 = v34 + 40;
      v34 += 24;
      sub_4BFB0(&v85, v34);
      v36 = v34;
      v37 = 0;
      sub_4BFE0(v36, v35);
      sub_4BFE0(v35, &v85);
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 248) + 16LL) + 8LL) ^= 1u;
      v7 = *(_QWORD *)(a2 + 240);
      v38 = 1;
    }
    else
    {
      v37 = 1;
      v38 = 0;
    }
    sub_4C000(
      *(_QWORD *)(a2 + 248) + 24LL,
      *(unsigned int *)(*(_QWORD *)(a2 + 80) + 4LL * *(int *)(v7 + 16 * v38 + 24)));
    LODWORD(v20) = *(_DWORD *)(*(_QWORD *)(a2 + 240) + 16 * (v37 + 1LL) + 8);
LABEL_27:
    v39 = *(_QWORD *)(a2 + 64);
    v40 = *(_QWORD *)(a2 + 56);
    if ( *(_QWORD *)(a2 + 72) < (unsigned __int64)(v39 + 1) )
    {
      v41 = qvector_reserve(a2 + 56, v40, v39 + 1, 4);
      *(_QWORD *)(a2 + 56) = v41;
      v40 = v41;
      v39 = *(_QWORD *)(a2 + 64);
    }
    *(_DWORD *)(v40 + 4 * v39) = v20;
    ++*(_QWORD *)(a2 + 64);
    goto LABEL_15;
  }
LABEL_12:
  if ( !v16 )
    goto LABEL_27;
  v25 = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 4 * v20);
LABEL_14:
  v26 = sub_4A9C0(a2);
  sub_4C000(v26 + 24, v25);
LABEL_15:
  sub_4C000(*(_QWORD *)(a2 + 248) + 40LL, (unsigned int)(*(_DWORD *)(a2 + 260) + 1));
  *(_BYTE *)(a1 + 24) = 0;
  return a1;
}
