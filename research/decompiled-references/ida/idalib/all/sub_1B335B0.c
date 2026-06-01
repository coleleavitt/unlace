__int64 __fastcall sub_1B335B0(__int64 *a1, __int64 a2, __m128 a3, double a4)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned int *v8; // rax
  __int64 v9; // r14
  int v10; // eax
  __int64 *v11; // rbx
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  _DWORD *v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r12
  __int64 v18; // r13
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r8
  const char *v30; // r12
  unsigned __int64 v31; // r8
  unsigned int *v32; // r12
  __int64 v33; // rdx
  unsigned __int64 v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // r12
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  __int64 v43; // rdx
  void *v44; // rdi
  __int64 v45; // rcx
  __int64 *v46; // rdx
  __int64 v47; // rcx
  unsigned int **v48; // rdx
  unsigned __int64 v49; // rax
  __int64 v50; // rdx
  unsigned __int64 *v51; // rbx
  __int64 v52; // rbp
  unsigned __int64 v53; // rax
  __int64 v54; // rcx
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // r12
  __int64 v57; // rdi
  __int64 v58; // rax
  char v59; // dl
  __int64 v60; // rcx
  unsigned __int64 v61; // rdx
  _QWORD *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // [rsp-8h] [rbp-140h]
  __int64 *i; // [rsp+0h] [rbp-138h]
  __int64 v66; // [rsp+8h] [rbp-130h]
  __int64 v67; // [rsp+8h] [rbp-130h]
  __int64 v68; // [rsp+18h] [rbp-120h]
  unsigned __int64 v69; // [rsp+18h] [rbp-120h]
  size_t v70; // [rsp+20h] [rbp-118h]
  __int64 v71; // [rsp+28h] [rbp-110h]
  unsigned __int64 v72; // [rsp+28h] [rbp-110h]
  __int64 v73; // [rsp+28h] [rbp-110h]
  __int64 v74; // [rsp+38h] [rbp-100h]
  __int64 v75; // [rsp+40h] [rbp-F8h]
  __int64 v76; // [rsp+48h] [rbp-F0h]
  unsigned int v77; // [rsp+64h] [rbp-D4h] BYREF
  __int64 *v78; // [rsp+68h] [rbp-D0h] BYREF
  unsigned __int64 v79; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v80; // [rsp+78h] [rbp-C0h] BYREF
  _BYTE v81[4]; // [rsp+80h] [rbp-B8h] BYREF
  int v82; // [rsp+84h] [rbp-B4h]
  unsigned __int64 v83; // [rsp+98h] [rbp-A0h]
  void *ptr; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v85; // [rsp+B8h] [rbp-80h]
  _BYTE v86[120]; // [rsp+C0h] [rbp-78h] BYREF

  v76 = a2;
  v78 = a1;
  if ( !a2 || ((*(_WORD *)a2 + 351) & 0x1FFu) > 0x4B )
    goto LABEL_3;
  v8 = *(unsigned int **)(a2 + 24);
  if ( v8 )
  {
    v74 = (__int64)&v8[2 * *v8 + 4];
    if ( (unsigned int *)v74 != v8 + 4 )
    {
      for ( i = (__int64 *)(v8 + 4); (__int64 *)v74 != i; ++i )
      {
        v9 = *i;
        v10 = *(_DWORD *)(*i + 8);
        if ( v10 == 52 )
        {
          v11 = (__int64 *)(v9 + 64);
          ptr = v86;
          v85 = 0x800000000LL;
          v71 = v9 + 8LL * *(unsigned int *)(v9 + 16) + 64;
          if ( v71 != v9 + 64 )
          {
            v75 = v9;
            while ( 2 )
            {
              v14 = (_DWORD *)*v11;
              if ( ((*(_DWORD *)*v11 >> 14) & 0xC) != 0 )
                goto LABEL_10;
              v15 = sub_BFB9F0(*v11);
              v17 = *(_QWORD *)(v15 + 16);
              v18 = v15;
              v19 = *(_QWORD *)(v17 + 48);
              v20 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL);
              if ( (unsigned int)*(unsigned __int8 *)(v20 + 16) - 43 <= 1
                || (v50 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL)
                                                           + 16LL)
                        - 43,
                    (unsigned int)v50 <= 1)
                && (v20 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v17 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, v50, v16)) != 0 )
              {
                while ( 1 )
                {
                  v21 = *(_QWORD *)(v20 + 32);
                  if ( (*(_BYTE *)(v20 + 18) & 0x10) == 0 )
                    break;
                  while ( 1 )
                  {
                    v22 = v21 & 0xFFFFFFFFFFFFFFF0LL;
                    v20 = *(_QWORD *)v22;
                    v23 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v22 + 16LL) - 43;
                    if ( (unsigned int)v23 <= 1 )
                      break;
                    v24 = sub_F63050(v20, a2, v23, v22);
                    v21 = *(_QWORD *)(v24 + 32);
                    if ( (*(_BYTE *)(v24 + 18) & 0x10) == 0 )
                      goto LABEL_18;
                  }
                }
LABEL_18:
                v19 = v21;
              }
              a2 = a1[1];
              sub_1AFBE90((__int64)v81, a2, v17);
              if ( v82 != 52 )
                goto LABEL_10;
              v66 = 0;
              if ( (*(_BYTE *)(v17 + 29) & 1) != 0 )
              {
                v62 = sub_B8C3D0(v17, a2, v25, v26, v27, v28);
                v29 = *(_QWORD *)(v17 + 40);
                v66 = (__int64)v62;
                if ( (v29 & 7) == 0 )
                  goto LABEL_22;
              }
              else
              {
                v29 = *(_QWORD *)(v17 + 40);
                if ( (v29 & 7) == 0 )
                {
LABEL_22:
                  v30 = &byte_22F0C30;
                  v31 = v29 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( v31 )
                  {
                    v32 = *(unsigned int **)(v31 + 16);
                    v31 = *v32;
                    v30 = (const char *)(v32 + 4);
                  }
LABEL_24:
                  v33 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL);
                  if ( (*(_BYTE *)(v33 + 8) & 0xF) != 0 )
                  {
                    v69 = v31;
                    v49 = sub_F64F00(v19, a2, v33, v26, v31);
                    v31 = v69;
                    v34 = v49 & 0xFFFFFFFFFFFFFFF0LL;
                  }
                  else
                  {
                    v34 = v33 & 0xFFFFFFFFFFFFFFF0LL;
                  }
                  v70 = v31;
                  v68 = v34;
                  v35 = sub_C00A40((unsigned __int64)v14, a2, v34, v26, v31);
                  v36 = sub_1AFE600((_QWORD *)*a1, v35, v68, v30, v70, v66, v18);
                  a2 = v36;
                  sub_17D5BF0(*a1, (__int64 *)v36, *(double *)a3.m128_u64, a4);
                  if ( *(char *)(v36 + 28) < 0 )
                  {
LABEL_10:
                    v12 = (unsigned int)v85;
                    v13 = (unsigned int)v85 + 1LL;
                    if ( v13 > HIDWORD(v85) )
                    {
                      a2 = (__int64)v86;
                      sub_2237220(&ptr, v86, v13, 8);
                      v12 = (unsigned int)v85;
                    }
                    ++v11;
                    *((_QWORD *)ptr + v12) = 0;
                    LODWORD(v85) = v85 + 1;
                    if ( (__int64 *)v71 == v11 )
                    {
LABEL_30:
                      v9 = v75;
                      a2 = (__int64)ptr;
                      v43 = (unsigned int)v85;
                      goto LABEL_31;
                    }
                  }
                  else
                  {
                    v39 = sub_C00A40((unsigned __int64)v14, v36, v64, v37, v38);
                    v40 = sub_1AE9760(*a1, v36, *((_QWORD *)v14 + 1), v39);
                    v41 = (unsigned int)v85;
                    a2 = HIDWORD(v85);
                    v42 = (unsigned int)v85 + 1LL;
                    if ( v42 > HIDWORD(v85) )
                    {
                      a2 = (__int64)v86;
                      v67 = v40;
                      sub_2237220(&ptr, v86, v42, 8);
                      v41 = (unsigned int)v85;
                      v40 = v67;
                    }
                    ++v11;
                    *((_QWORD *)ptr + v41) = v40;
                    LODWORD(v85) = v85 + 1;
                    if ( (__int64 *)v71 == v11 )
                      goto LABEL_30;
                  }
                  continue;
                }
              }
              break;
            }
            v31 = 0;
            v30 = &byte_22F0C30;
            goto LABEL_24;
          }
          v43 = 0;
          a2 = (__int64)v86;
LABEL_31:
          sub_EB8230(v9, a2, v43);
          v44 = ptr;
          if ( ptr != v86 )
            goto LABEL_32;
        }
        else
        {
          if ( v10 != 67 )
          {
            if ( v10 == 112 )
            {
              a2 = *i;
              sub_1B20D10((__int64 *)&v78, *i, *(double *)a3.m128_u64);
            }
            continue;
          }
          v51 = (unsigned __int64 *)(v9 + 24);
          ptr = v86;
          v85 = 0x800000000LL;
          v52 = v9 + 8LL * *(unsigned int *)(v9 + 16) + 24;
          if ( v52 == v9 + 24 )
          {
            v63 = 0;
            a2 = (__int64)v86;
          }
          else
          {
            do
            {
              v56 = *v51;
              v57 = *a1;
              v77 = 0;
              v80 = 0;
              v79 = v56;
              v58 = sub_1B31D70(v57, &v79, &v77, &v80, (__int64)&byte_22F0C30, 0, *(double *)a3.m128_u64);
              if ( v59 )
              {
                v60 = (unsigned int)v85;
                v61 = (unsigned int)v85 + 1LL;
                if ( v61 > HIDWORD(v85) )
                {
                  v73 = v58;
                  sub_2237220(&ptr, v86, v61, 8);
                  v60 = (unsigned int)v85;
                  v58 = v73;
                }
                *((_QWORD *)ptr + v60) = v56;
                LODWORD(v85) = v85 + 1;
              }
              if ( v58 )
              {
                sub_1AFBE90((__int64)v81, a1[1], v58);
                v53 = v83;
                if ( !v83 )
                  v53 = v79;
                v54 = (unsigned int)v85;
                v55 = (unsigned int)v85 + 1LL;
                if ( v55 > HIDWORD(v85) )
                {
                  v72 = v53;
                  sub_2237220(&ptr, v86, v55, 8);
                  v54 = (unsigned int)v85;
                  v53 = v72;
                }
                *((_QWORD *)ptr + v54) = v53;
                LODWORD(v85) = v85 + 1;
              }
              ++v51;
            }
            while ( (unsigned __int64 *)v52 != v51 );
            a2 = (__int64)ptr;
            v63 = (unsigned int)v85;
          }
          sub_EB86E0(v9, a2, v63);
          v44 = ptr;
          if ( ptr != v86 )
LABEL_32:
            free(v44);
        }
      }
    }
  }
  if ( !(unsigned __int8)sub_B8E180(*(_QWORD *)(*a1 + 544)) )
  {
    v45 = 0;
    v46 = *(__int64 **)(v76 + 24);
    if ( v46 )
    {
      v45 = *(unsigned int *)v46;
      v46 += 2;
    }
    sub_1B31F60((__int64 *)*a1, a1[1], v46, v45, *(double *)a3.m128_u64);
  }
  v47 = 0;
  v48 = *(unsigned int ***)(v76 + 24);
  if ( v48 )
  {
    v47 = *(unsigned int *)v48;
    v48 += 2;
  }
  sub_1B0B190(*a1, a1[1], v48, v47, *(double *)a3.m128_u64);
LABEL_3:
  v5 = *(_QWORD *)(a1[1] + 336) + 6776LL * *(unsigned int *)(a1[1] + 344) - 6776;
  v6 = (unsigned int)(*(_DWORD *)(v5 + 8) - 1);
  *(_DWORD *)(v5 + 8) = v6;
  sub_1AEA350(*(_QWORD *)v5 + 1688 * v6);
  sub_18C3E40(*a1);
  return sub_190D5E0(*a1, a3);
}
