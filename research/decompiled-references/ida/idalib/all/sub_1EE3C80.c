__int64 __fastcall sub_1EE3C80(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rbp
  int v5; // r14d
  __int64 v6; // rax
  int v7; // r15d
  int *v8; // rax
  int v9; // r12d
  int v10; // r13d
  __int64 v11; // rax
  __int64 v12; // r13
  int v13; // eax
  unsigned int v14; // eax
  unsigned __int64 *v15; // r15
  unsigned int v16; // r12d
  unsigned int v17; // eax
  unsigned __int64 *v18; // r14
  __int64 v19; // r13
  _QWORD *v20; // r12
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // r12
  _QWORD *v31; // r14
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rcx
  unsigned __int64 v40; // rdx
  __int64 v41; // rdi
  __int64 v42; // rax
  char *v43; // r15
  __int64 v44; // r12
  char *v45; // r14
  unsigned __int64 v46; // r8
  unsigned __int64 v47; // rdx
  __int64 v48; // r13
  __int64 v49; // r9
  __int64 v50; // r10
  unsigned __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // rdi
  __int64 v54; // rax
  char *v55; // rdi
  const __m128i *v56; // rcx
  unsigned __int64 v57; // rax
  __m128d v58; // xmm0
  __int64 v59; // r12
  __int64 v60; // rax
  char *v61; // r15
  __int64 v62; // r12
  char *v63; // r14
  unsigned __int64 v64; // r8
  unsigned __int64 v65; // rdx
  __int64 v66; // r13
  __int64 v67; // rcx
  __int64 v68; // r10
  unsigned __int64 v69; // rsi
  __int64 v70; // rax
  __int64 v71; // r9
  __int64 v72; // rax
  char *v73; // r9
  const __m128i *v74; // rcx
  unsigned __int64 v75; // rax
  __m128d v76; // xmm0
  __int64 v77; // rax
  _BYTE *v78; // rdi
  char *v79; // r14
  char *v80; // r14
  unsigned int v81; // [rsp+8h] [rbp-A8h]
  unsigned int v82; // [rsp+8h] [rbp-A8h]
  __int64 v83; // [rsp+8h] [rbp-A8h]
  __int64 v84; // [rsp+10h] [rbp-A0h]
  unsigned int v85; // [rsp+18h] [rbp-98h]
  __int64 v86; // [rsp+20h] [rbp-90h]
  _BYTE v87[12]; // [rsp+28h] [rbp-88h] BYREF
  __int16 v88; // [rsp+34h] [rbp-7Ch]
  void *v89; // [rsp+38h] [rbp-78h] BYREF
  __int64 v90; // [rsp+40h] [rbp-70h]
  _BYTE v91[16]; // [rsp+48h] [rbp-68h] BYREF
  void *ptr; // [rsp+58h] [rbp-58h] BYREF
  __int64 v93; // [rsp+60h] [rbp-50h]
  _BYTE v94[72]; // [rsp+68h] [rbp-48h] BYREF

  if ( *(_QWORD *)(a2 + 2696) )
  {
    result = 1;
    if ( *(_DWORD *)(a2 + 412) <= *(_DWORD *)(a1 + 16) )
      return result;
    ++*(_DWORD *)(*(_QWORD *)a1 + 9352LL);
    v4 = *(_QWORD *)(a2 + 2696);
    v5 = sub_1EA7420(*(_QWORD *)(a1 + 8));
    v6 = *(unsigned int *)(*(_QWORD *)(v4 + 8) + 4LL * (v5 & (unsigned int)(*(_DWORD *)v4 - 1)));
    if ( !(_DWORD)v6 )
      return 0;
    *(_QWORD *)v87 = *(_QWORD *)(v4 + 16) + v6;
    v7 = (unsigned __int16)**(_WORD **)v87;
    v8 = (int *)(*(_QWORD *)v87 + 2LL);
    *(_QWORD *)v87 += 2LL;
    if ( !v7 )
      return 0;
    v9 = 0;
    while ( 1 )
    {
      v10 = *v8;
      *(_QWORD *)v87 = v8 + 1;
      v11 = sub_1EA91E0((char **)v87);
      if ( v5 == v10 )
      {
        v85 = v11 + HIDWORD(v11);
        v81 = v11;
        if ( sub_1EE3130(v4 + 24, *(unsigned __int16 **)v87) == *(_QWORD *)(a1 + 8) )
        {
          v12 = *(_QWORD *)v87 + v81;
          if ( v12 )
          {
            ++*(_DWORD *)(*(_QWORD *)a1 + 9356LL);
            ++*(_DWORD *)(*(_QWORD *)a1 + 9336LL);
            ++*(_DWORD *)(*(_QWORD *)a1 + 9340LL);
            v89 = v91;
            v90 = 0x200000000LL;
            ptr = v94;
            v93 = 0x200000000LL;
            v13 = *(_DWORD *)v12;
            if ( *(_DWORD *)v12 )
              v13 = sub_1EDFC70(*(_QWORD *)(v4 + 24), *(_QWORD *)(v4 + 32), v13);
            *(_DWORD *)v87 = v13;
            v14 = *(unsigned __int16 *)(v12 + 4);
            v15 = (unsigned __int64 *)(v12 + 8);
            v16 = *(unsigned __int16 *)(v12 + 6);
            *(_DWORD *)&v87[4] = *(_WORD *)(v12 + 4) & 3;
            LOBYTE(v88) = (v14 & 4) != 0;
            *(_DWORD *)&v87[8] = v16 & 3;
            v82 = v16 >> 3;
            v17 = v14 >> 3;
            HIBYTE(v88) = (v16 & 4) != 0;
            if ( v17 )
            {
              v18 = (unsigned __int64 *)(v12 + 8);
              v84 = v17 - 1;
              v19 = v12 + 8 * v84 + 16;
              do
              {
                v20 = *(_QWORD **)(v4 + 24);
                v21 = *v18++;
                v22 = sub_1EE1310((__int64)v20, *(_QWORD *)(v4 + 32), v21);
                v27 = sub_1EDB980(v20, v22, v23, v24, v25, v26);
                if ( v27 )
                {
                  v28 = (unsigned int)v90;
                  v29 = (unsigned int)v90 + 1LL;
                  if ( v29 > HIDWORD(v90) )
                  {
                    v86 = v27;
                    sub_2237220(&v89, v91, v29, 8);
                    v28 = (unsigned int)v90;
                    v27 = v86;
                  }
                  *((_QWORD *)v89 + v28) = v27;
                  LODWORD(v90) = v90 + 1;
                }
              }
              while ( v18 != (unsigned __int64 *)v19 );
              v15 += v84 + 1;
            }
            if ( v82 )
            {
              v30 = (__int64)&v15[v82];
              do
              {
                v31 = *(_QWORD **)(v4 + 24);
                v32 = *v15++;
                v33 = sub_1EE1310((__int64)v31, *(_QWORD *)(v4 + 32), v32);
                v38 = sub_1EDB980(v31, v33, v34, v35, v36, v37);
                if ( v38 )
                {
                  v39 = (unsigned int)v93;
                  v40 = (unsigned int)v93 + 1LL;
                  if ( v40 > HIDWORD(v93) )
                  {
                    v83 = v38;
                    sub_2237220(&ptr, v94, v40, 8);
                    v39 = (unsigned int)v93;
                    v38 = v83;
                  }
                  *((_QWORD *)ptr + v39) = v38;
                  LODWORD(v93) = v93 + 1;
                }
              }
              while ( v15 != (unsigned __int64 *)v30 );
            }
            v41 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
            if ( v41 )
              (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v41 + 64LL))(
                v41,
                *(unsigned int *)v87,
                *(_QWORD *)(a1 + 8));
            v42 = *(unsigned int *)(a1 + 40);
            v43 = (char *)v89;
            v44 = 8LL * (unsigned int)v90;
            v45 = (char *)v89 + v44;
            v46 = v44 >> 3;
            v47 = (v44 >> 3) + v42;
            v48 = v44 >> 3;
            if ( v47 > *(unsigned int *)(a1 + 44) )
            {
              sub_2237220(a1 + 32, a1 + 48, v47, 8);
              v42 = *(unsigned int *)(a1 + 40);
              v46 = v44 >> 3;
              LODWORD(v47) = (v44 >> 3) + v42;
            }
            v49 = *(_QWORD *)(a1 + 32);
            v50 = 8 * v42;
            v51 = v49 + 8 * v42;
            if ( v44 )
            {
              v52 = -8LL * v46 + 8;
              if ( v44 <= 0 )
                v52 = 0;
              v53 = v44 + v52 - 8;
              v54 = 8;
              v55 = &v43[v53];
              if ( v44 > 0 )
                v54 = v44;
              if ( ((unsigned __int64)v45 <= v51 || (unsigned __int64)v55 >= v49 + v50 + v54) && v44 > 32 )
              {
                v56 = (const __m128i *)&v43[v44 - 16];
                v57 = v51;
                do
                {
                  v58 = (__m128d)_mm_loadu_si128(v56);
                  v57 += 16LL;
                  --v56;
                  *(__m128d *)(v57 - 16) = _mm_shuffle_pd(v58, v58, 1);
                }
                while ( v51 + 16 * (v46 >> 1) != v57 );
                if ( (v46 & 0xFFFFFFFFFFFFFFFELL) != v46 )
                  *(_QWORD *)(v51 + 8 * (v46 & 0xFFFFFFFFFFFFFFFELL)) = *(_QWORD *)&v45[-8
                                                                                      * (v46 & 0xFFFFFFFFFFFFFFFELL)
                                                                                      - 8];
              }
              else
              {
                v79 = &v45[-8 * v46];
                do
                {
                  v51 += 8LL;
                  *(_QWORD *)(v51 - 8) = *(_QWORD *)&v79[8 * v48-- - 8];
                }
                while ( v48 );
              }
            }
            v59 = (unsigned int)v93;
            v60 = *(unsigned int *)(a1 + 88);
            *(_DWORD *)(a1 + 40) = v47;
            v61 = (char *)ptr;
            v62 = 8 * v59;
            v63 = (char *)ptr + v62;
            v64 = v62 >> 3;
            v65 = (v62 >> 3) + v60;
            v66 = v62 >> 3;
            if ( v65 > *(unsigned int *)(a1 + 92) )
            {
              sub_2237220(a1 + 80, a1 + 96, v65, 8);
              v60 = *(unsigned int *)(a1 + 88);
              v64 = v62 >> 3;
              LODWORD(v65) = (v62 >> 3) + v60;
            }
            v67 = *(_QWORD *)(a1 + 80);
            v68 = 8 * v60;
            v69 = v67 + 8 * v60;
            if ( v62 )
            {
              v70 = -8LL * v64 + 8;
              if ( v62 <= 0 )
                v70 = 0;
              v71 = v62 + v70 - 8;
              v72 = 8;
              v73 = &v61[v71];
              if ( v62 > 0 )
                v72 = v62;
              if ( ((unsigned __int64)v63 <= v69 || (unsigned __int64)v73 >= v67 + v68 + v72) && v62 > 32 )
              {
                v74 = (const __m128i *)&v61[v62 - 16];
                v75 = v69;
                do
                {
                  v76 = (__m128d)_mm_loadu_si128(v74);
                  v75 += 16LL;
                  --v74;
                  *(__m128d *)(v75 - 16) = _mm_shuffle_pd(v76, v76, 1);
                }
                while ( v69 + 16 * (v64 >> 1) != v75 );
                if ( (v64 & 0xFFFFFFFFFFFFFFFELL) != v64 )
                  *(_QWORD *)(v69 + 8 * (v64 & 0xFFFFFFFFFFFFFFFELL)) = *(_QWORD *)&v63[-8
                                                                                      * (v64 & 0xFFFFFFFFFFFFFFFELL)
                                                                                      - 8];
              }
              else
              {
                v80 = &v63[-8 * v64];
                do
                {
                  v69 += 8LL;
                  *(_QWORD *)(v69 - 8) = *(_QWORD *)&v80[8 * v66-- - 8];
                }
                while ( v66 );
              }
            }
            v77 = *(_QWORD *)&v87[4];
            v78 = ptr;
            *(_DWORD *)(a1 + 88) = v65;
            *(_QWORD *)(a1 + 20) = v77;
            *(_WORD *)(a1 + 28) = v88;
            if ( v78 != v94 )
              free(v78);
            if ( v89 != v91 )
            {
              free(v89);
              return 0;
            }
          }
          return 0;
        }
        v8 = (int *)(*(_QWORD *)v87 + v85);
        *(_QWORD *)v87 = v8;
      }
      else
      {
        v8 = (int *)(*(_QWORD *)v87 + (unsigned int)(v11 + HIDWORD(v11)));
        *(_QWORD *)v87 = v8;
      }
      if ( v7 == ++v9 )
        return 0;
    }
  }
  return 0;
}
