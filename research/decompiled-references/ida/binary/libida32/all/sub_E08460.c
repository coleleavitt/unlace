__m128 *__fastcall sub_E08460(
        __int64 *a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6,
        __int8 a7,
        unsigned int a8)
{
  __int64 v8; // r15
  __int64 *v9; // r14
  __int64 *v10; // r13
  unsigned __int8 v11; // r12
  unsigned __int8 v12; // bl
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdi
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // r15
  __int8 v24; // r9
  __int8 v25; // r8
  __int64 v26; // rdx
  __m128 *v27; // rax
  __int64 v28; // rcx
  __m128 *result; // rax
  __int64 v30; // rsi
  __int64 v31; // rax
  unsigned __int64 v32; // rcx
  __int64 v33; // rdx
  unsigned __int64 v34; // rsi
  _QWORD *v35; // rax
  __int64 v36; // r10
  unsigned int v37; // eax
  __int64 v38; // r8
  __int64 v39; // r10
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  unsigned int v46; // r15d
  __int64 v47; // rdx
  char v48; // r9
  __int64 v49; // rax
  __int64 v50; // r8
  unsigned int v51; // edx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // r12
  __int64 v56; // rdx
  __int64 v57; // r9
  char v58; // r10
  __int64 v59; // rax
  __int64 v60; // r8
  __int64 v61; // rax
  __int64 v62; // r9
  char v63; // r8
  unsigned int v64; // ebp
  __int64 v65; // rbp
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rdx
  char v77; // [rsp-10h] [rbp-68h]
  char v78; // [rsp-8h] [rbp-60h]
  __int64 v79; // [rsp-8h] [rbp-60h]
  __int64 v80; // [rsp+0h] [rbp-58h]
  __m128 *v81; // [rsp+0h] [rbp-58h]
  __int64 v82; // [rsp+0h] [rbp-58h]
  __int64 v83; // [rsp+0h] [rbp-58h]
  __int64 v84; // [rsp+0h] [rbp-58h]
  __int64 v85; // [rsp+0h] [rbp-58h]
  __int64 v86; // [rsp+0h] [rbp-58h]
  unsigned __int64 v87; // [rsp+8h] [rbp-50h]
  __int64 v88; // [rsp+8h] [rbp-50h]
  char v89; // [rsp+8h] [rbp-50h]
  int v90; // [rsp+8h] [rbp-50h]
  unsigned __int64 v91; // [rsp+10h] [rbp-48h]
  int v92; // [rsp+10h] [rbp-48h]
  char v93; // [rsp+10h] [rbp-48h]
  int v94; // [rsp+10h] [rbp-48h]
  int v95; // [rsp+18h] [rbp-40h]

  while ( 1 )
  {
    v8 = a3;
    v9 = a1;
    v10 = (__int64 *)a2;
    v11 = a5;
    v12 = a6;
    v80 = a4;
    v13 = *(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v14 = *(unsigned __int8 *)(v13 + 16);
    if ( (_BYTE)v14 == 48 )
    {
      v15 = sub_F3D1D0(v13, a2, v14, a8, a5);
      v20 = (__int64)(v9 + 16);
      v23 = sub_E05EB0((__int64)v9, v15, v16, v17, v18, v19);
      if ( v23 )
      {
        v24 = v12;
        v25 = v11;
        v26 = v9[16];
        v9[26] += 88;
        v27 = (__m128 *)((v26 + 15) & 0xFFFFFFFFFFFFFFF0LL);
        if ( v9[17] >= (unsigned __int64)&v27[5].m128_u64[1] && v26 )
        {
          v9[16] = (__int64)&v27[5].m128_i64[1];
        }
        else
        {
          v27 = (__m128 *)sub_962430(v20, 88, 88, 4, v11, v12);
          v24 = v12;
          v25 = v11;
        }
        v28 = v80;
        v81 = v27;
        sub_CCB750(v27, a2, v23, v28, v25, v24, a7, a8);
        return v81;
      }
      else
      {
        v40 = v9[16];
        v9[26] += 88;
        v41 = (v40 + 15) & 0xFFFFFFFFFFFFFFF0LL;
        if ( v9[17] >= (unsigned __int64)(v41 + 88) && v40 )
          v9[16] = v41 + 88;
        else
          v41 = sub_962430(v20, 88, 88, 4, v21, v22);
        v42 = v80;
        v82 = v41;
        sub_CCB800(v41, (__int64 *)a2, v42);
        return (__m128 *)v82;
      }
    }
    v30 = *(unsigned __int8 *)(v8 + 16);
    v31 = v8;
    v32 = (unsigned int)(v30 - 2);
    if ( (unsigned __int8)(v30 - 2) <= 4u )
      goto LABEL_9;
    v33 = (unsigned int)(v14 - 2);
    if ( (unsigned __int8)v33 <= 4u )
    {
      v31 = sub_F3F310(v8, v30, v33, v32);
      if ( v31 )
      {
        LOBYTE(v30) = *(_BYTE *)(v31 + 16);
LABEL_9:
        v32 = *(_QWORD *)(v31 + 32);
        v33 = (unsigned int)(unsigned __int8)v30 - 2;
        if ( (unsigned int)v33 <= 1 )
        {
          v34 = *(_QWORD *)(v31 + 40);
          v87 = v34;
          if ( (*(_BYTE *)(v31 + 19) & 2) != 0 )
          {
            v35 = *(_QWORD **)v34;
            if ( *(_DWORD *)(v34 + 8) > 0x40u )
              v35 = (_QWORD *)*v35;
            v87 = (unsigned __int64)v35;
          }
          v91 = v32;
          v36 = sub_CC2440(*v9, v32, v33, v32, a5);
          if ( !BYTE4(v36) )
          {
            v53 = *(_QWORD *)(v91 & 0xFFFFFFFFFFFFFFF0LL);
            v93 = v11;
            v54 = sub_E08460((_DWORD)v9, (_DWORD)v10, v53, 0, v11, v12, 0, 0);
            v55 = v54;
            if ( v54 && v87 < 0xFFFFFFFF / (*(_DWORD *)(v54 + 28) + 16) )
            {
              v56 = v9[16];
              v57 = (unsigned int)v87;
              v58 = v93;
              v9[26] += 88;
              v59 = (v56 + 15) & 0xFFFFFFFFFFFFFFF0LL;
              if ( v9[17] >= (unsigned __int64)(v59 + 88) && v56 )
              {
                v9[16] = v59 + 88;
              }
              else
              {
                v94 = v87;
                v89 = v58;
                v59 = sub_962430((__int64)(v9 + 16), 88, 88, 4, v79, v57);
                LODWORD(v57) = v94;
                v58 = v89;
              }
              v60 = v80;
              v83 = v59;
              sub_CCB600(v59, v10, v8, v55, v60, v57, v58, v12, a7);
              return (__m128 *)v83;
            }
            return nullptr;
          }
          v92 = v36;
          v37 = sub_E05440(v36);
          LODWORD(v39) = v92;
          if ( 0xFFFFFFFF / v37 <= v87 )
            return nullptr;
          v71 = v9[16];
          v48 = v11;
          v9[26] += 88;
          v49 = (v71 + 15) & 0xFFFFFFFFFFFFFFF0LL;
          if ( v9[17] >= (unsigned __int64)(v49 + 88) && v71 )
          {
            v9[16] = v49 + 88;
          }
          else
          {
            v49 = sub_962430((__int64)(v9 + 16), 88, 88, 4, v38, v11);
            LODWORD(v39) = v92;
            v48 = v11;
          }
          v78 = a7;
          v77 = v12;
          LODWORD(v50) = v87;
LABEL_54:
          v52 = v80;
          v51 = v39;
          goto LABEL_55;
        }
        if ( (unsigned __int8)(v30 - 5) <= 1u )
        {
          v88 = *(_QWORD *)(v31 + 32);
          v61 = sub_CC2440(*v9, v32, v33, v32, a5);
          v63 = v11;
          v64 = v61;
          if ( BYTE4(v61) )
          {
            v72 = v9[16];
            v9[26] += 88;
            v73 = (v72 + 15) & 0xFFFFFFFFFFFFFFF0LL;
            if ( v9[17] >= (unsigned __int64)(v73 + 88) && v72 )
            {
              v9[16] = v73 + 88;
            }
            else
            {
              v73 = sub_962430((__int64)(v9 + 16), 88, 88, 4, v11, v62);
              v63 = v11;
            }
            v74 = v80;
            v86 = v73;
            sub_CCB220(v73, v10, v64, v74, v63, v12);
            return (__m128 *)v86;
          }
          else
          {
            v65 = sub_E08460((_DWORD)v9, (_DWORD)v10, *(_QWORD *)(v88 & 0xFFFFFFFFFFFFFFF0LL), 0, v11, v12, 0, 0);
            result = nullptr;
            if ( v65 )
            {
              v68 = v9[16];
              v9[26] += 88;
              v69 = (v68 + 15) & 0xFFFFFFFFFFFFFFF0LL;
              if ( v9[17] >= (unsigned __int64)(v69 + 88) && v68 )
                v9[16] = v69 + 88;
              else
                v69 = sub_962430((__int64)(v9 + 16), 88, 88, 4, v66, v67);
              v70 = v80;
              v84 = v69;
              sub_CCB6B0(v69, v10, v65, v70, v12);
              return (__m128 *)v84;
            }
          }
          return result;
        }
      }
      v30 = *(unsigned __int8 *)(v8 + 16);
    }
    if ( (_BYTE)v30 == 7 )
      goto LABEL_24;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 7 )
      goto LABEL_28;
    v43 = sub_F3F310(v8, v30, v33, v32);
    if ( !v43 )
      break;
    v8 = v43;
LABEL_24:
    a4 = v80;
    a6 = v12;
    a5 = v11;
    a2 = (unsigned __int64 *)v10;
    a1 = v9;
    a8 = 0;
    a3 = *(_QWORD *)(*(_QWORD *)(v8 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  }
  v30 = *(unsigned __int8 *)(v8 + 16);
LABEL_28:
  if ( (_BYTE)v30 != 14 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 14 )
    {
      v75 = sub_F3F310(v8, v30, v33, v32);
      if ( v75 )
      {
        v8 = v75;
        goto LABEL_29;
      }
      v30 = *(unsigned __int8 *)(v8 + 16);
    }
    if ( (unsigned int)(unsigned __int8)v30 - 57 > 1 )
    {
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 > 1 )
        return nullptr;
      v8 = sub_F3F310(v8, v30, v33, v32);
      if ( !v8 )
        return nullptr;
    }
    v39 = sub_CC2440(*v9, *(_QWORD *)(v8 + 32), v33, v32, a5);
    result = nullptr;
    if ( !BYTE4(v39) )
      return result;
    v50 = *(unsigned int *)(v8 + 20);
    v48 = v11;
    v76 = v9[16];
    v9[26] += 88;
    v49 = (v76 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( v9[17] >= (unsigned __int64)(v49 + 88) && v76 )
    {
      v78 = a7;
      v9[16] = v49 + 88;
      v77 = v12;
    }
    else
    {
      v95 = v39;
      v90 = v50;
      v49 = sub_962430((__int64)(v9 + 16), 88, 88, 4, v50, v11);
      LODWORD(v39) = v95;
      v48 = v11;
      LODWORD(v50) = v90;
      v78 = a7;
      v77 = v12;
    }
    goto LABEL_54;
  }
LABEL_29:
  v44 = sub_CC2440(*v9, *(_QWORD *)(v8 + 32), v33, v32, a5);
  v46 = v44;
  result = nullptr;
  if ( BYTE4(v44) )
  {
    v47 = v9[16];
    v48 = v11;
    v9[26] += 88;
    v49 = (v47 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( v9[17] >= (unsigned __int64)(v49 + 88) && v47 )
    {
      v9[16] = v49 + 88;
    }
    else
    {
      v49 = sub_962430((__int64)(v9 + 16), 88, 88, 4, v45, v11);
      v48 = v11;
    }
    v78 = a7;
    LODWORD(v50) = 2;
    v51 = v46;
    v77 = v12;
    v52 = v80;
LABEL_55:
    v85 = v49;
    sub_CCAE10(v49, v10, v51, v52, v50, v48, v77, v78);
    return (__m128 *)v85;
  }
  return result;
}

