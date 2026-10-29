__int64 __fastcall sub_4870C0(__int64 a1, __int64 *a2, __int64 *a3, _DWORD *a4)
{
  char **exception; // rbp
  char **v5; // rbp
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  bool v16; // zf
  _QWORD *v17; // rbx
  _QWORD *v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 *v23; // r12
  __int64 v24; // rax
  __int64 *v25; // rbx
  __m128i *v26; // r12
  __int64 v27; // r13
  __int64 *v28; // r14
  __int64 *v29; // r15
  __int64 v30; // rsi
  __int64 v31; // r13
  __int64 v32; // r15
  void *v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rcx
  _QWORD *v38; // rax
  __int64 v39; // rax
  unsigned int v40; // ebx
  unsigned __int64 v41; // rbp
  __m128i *v42; // rbx
  char *v43; // r13
  unsigned __int64 v44; // rdx
  __m128i *v45; // r14
  unsigned __int32 v46; // r15d
  unsigned __int32 v47; // edx
  __int32 *v48; // rax
  __m128i *v49; // rcx
  __int64 *v50; // rbp
  __int64 v51; // rsi
  __int64 v52; // rsi
  __int64 v53; // rdi
  unsigned __int32 v55; // ecx
  unsigned __int32 v56; // edx
  __int32 *v57; // rax
  __m128i *v58; // rsi
  unsigned __int32 v59; // eax
  char v60; // al
  char v61; // al
  unsigned __int64 v62; // rax
  __int32 v63; // eax
  __int32 v64; // edx
  __int64 v65; // rax
  __int32 *v66; // rax
  __int64 v67; // rax
  __int32 *v68; // rax
  unsigned __int32 v69; // r14d
  unsigned __int32 v70; // edx
  __int32 *v71; // rax
  __m128i *v72; // rcx
  _QWORD *v73; // rax
  unsigned int v74; // ecx
  size_t v75; // rsi
  unsigned int *v76; // rax
  unsigned int v77; // r13d
  unsigned int v78; // edx
  unsigned int *v79; // rax
  _QWORD *v80; // rax
  __int64 v81; // [rsp+0h] [rbp-F8h]
  __int64 *v82; // [rsp+8h] [rbp-F0h]
  __int32 v83; // [rsp+10h] [rbp-E8h]
  __int32 v84; // [rsp+10h] [rbp-E8h]
  __int64 v85; // [rsp+18h] [rbp-E0h]
  unsigned int v86; // [rsp+3Ch] [rbp-BCh]
  int v88; // [rsp+48h] [rbp-B0h]
  unsigned int v89; // [rsp+4Ch] [rbp-ACh]
  __int64 v90; // [rsp+60h] [rbp-98h] BYREF
  __int64 v91; // [rsp+68h] [rbp-90h]
  __int64 v92; // [rsp+70h] [rbp-88h] BYREF
  __int64 *v93; // [rsp+78h] [rbp-80h]
  _QWORD v94[2]; // [rsp+80h] [rbp-78h] BYREF
  _QWORD v95[2]; // [rsp+90h] [rbp-68h] BYREF
  __int64 v96[11]; // [rsp+A0h] [rbp-58h] BYREF

  v9 = *(_QWORD *)(a1 + 16);
  v10 = a2[1];
  v11 = *a2;
  v90 = 0;
  v91 = v9;
  if ( v10 )
    v12 = *(unsigned int *)(v10 - 4);
  else
    v12 = 0;
  v13 = sub_15EC1C0(v11, v12);
  v14 = v13;
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
  v15 = v90;
  v90 = v13;
  if ( v15 )
  {
    v16 = (*(_DWORD *)(v15 + 8))-- == 1;
    if ( v16 )
    {
      sub_15D7BC0(v11, v15);
      v14 = v90;
    }
  }
  sub_3D8450(v14, &v90, 0, 1);
  v17 = (_QWORD *)a2[1];
  if ( v17 )
  {
    v18 = &v17[*((unsigned int *)v17 - 1)];
    if ( v17 >= v18 )
      goto LABEL_16;
    do
    {
      while ( 1 )
      {
        v19 = *v17;
        if ( *v17 )
        {
          v20 = *a2;
          v16 = (*(_DWORD *)(v19 + 8))-- == 1;
          if ( v16 )
            break;
        }
        if ( ++v17 >= v18 )
          goto LABEL_15;
      }
      sub_15D7BC0(v20, v19);
      ++v17;
    }
    while ( v17 < v18 );
LABEL_15:
    v17 = (_QWORD *)a2[1];
    if ( v17 )
LABEL_16:
      *((_DWORD *)v17 - 1) = 0;
  }
  sub_15EEF60(v90);
  v21 = *(_QWORD *)(a1 + 16);
  v22 = *a3;
  v93 = nullptr;
  v92 = v21;
  sub_3D9B60(v22, &v92);
  v23 = v93;
  if ( !v93 )
  {
    v40 = 0;
    goto LABEL_70;
  }
  v24 = *((unsigned int *)v93 - 1);
  if ( (_DWORD)v24 != 1 || (v25 = (__int64 *)a2[1]) == nullptr || (v82 = &v25[*((unsigned int *)v25 - 1)], v25 == v82) )
  {
    v40 = 0;
    goto LABEL_62;
  }
  v26 = nullptr;
  v81 = *v93;
  do
  {
    v27 = *v25;
    if ( !(unsigned __int8)sub_3D9B00(*v25, *(_QWORD *)(a1 + 16)) )
      goto LABEL_48;
    v28 = v93;
    if ( v93 )
    {
      v29 = &v93[*((unsigned int *)v93 - 1)];
      if ( v93 >= v29 )
        goto LABEL_31;
      do
      {
        while ( 1 )
        {
          v30 = *v28;
          if ( *v28 )
          {
            v16 = (*(_DWORD *)(v30 + 8))-- == 1;
            if ( v16 )
              break;
          }
          if ( ++v28 >= v29 )
            goto LABEL_30;
        }
        sub_15D7BC0(v92, v30);
        ++v28;
      }
      while ( v28 < v29 );
LABEL_30:
      v28 = v93;
      if ( v93 )
LABEL_31:
        *((_DWORD *)v28 - 1) = 0;
    }
    sub_3D9B60(v27, &v92);
    if ( !v93 )
      goto LABEL_48;
    if ( *((_DWORD *)v93 - 1) != 1 )
      goto LABEL_48;
    v31 = *v93;
    v88 = *(_DWORD *)(v81 + 24);
    if ( !v88 )
      goto LABEL_48;
    v85 = *(unsigned int *)(v81 + 24);
    v32 = 0;
    v86 = 0;
    do
    {
      while ( 1 )
      {
        v34 = *(_QWORD *)(v81 + 8 * v32 + 32);
        v35 = *(unsigned int *)(v31 + 24);
        if ( *(_WORD *)(v34 + 4) == 1 )
        {
          v94[0] = 0;
          v94[1] = 0;
          v95[0] = 1;
          v95[1] = 0;
          if ( (unsigned int)v32 < (unsigned int)v35 )
          {
            v60 = sub_1666AE0(a1 + 24, *(_QWORD *)(v31 + 8 * v32 + 32), v94, v96);
            v33 = qword_1C7F2C0;
            if ( v60 )
            {
              if ( (v95[0] & 0x100000000LL) == 0 && LODWORD(v95[0]) == 1 )
              {
                v61 = sub_182CFA0(qword_1C7F2C0, v94);
                v33 = qword_1C7F2C0;
                if ( v61 )
                {
                  v62 = sub_182D020(qword_1C7F2C0, v94);
                  v33 = qword_1C7F2C0;
                  if ( !HIDWORD(v62) )
                  {
                    v63 = sub_182D020(qword_1C7F2C0, v94);
                    v64 = v63;
                    if ( v26 )
                    {
                      v65 = v26[-1].m128i_u32[3];
                      if ( (_DWORD)v65 == v26[-1].m128i_i32[2] )
                      {
                        v74 = (unsigned int)(3 * v65 + 1) >> 1;
                        v75 = 4 * v74 + 8;
                        if ( 4 * (int)v65 + 8 >= (unsigned int)v75 || (unsigned int)v65 >= v74 )
                        {
                          exception = (char **)__cxa_allocate_exception(0x28u);
                          sub_24ABB0(v96, "Overflow encountered when expanding vector");
                          *exception = (char *)off_1C63128;
                          sub_2333C0(exception + 1, v96);
                          sub_233E40((__int64)v96);
                          __cxa_throw(
                            exception,
                            (struct type_info *)&`typeinfo for'default_exception,
                            (void (*)(void *))sub_230E50);
                        }
                        v89 = (unsigned int)(3 * v65 + 1) >> 1;
                        v83 = v64;
                        v76 = (unsigned int *)sub_186B300(&v26[-1].m128i_u64[1], v75);
                        v26 = (__m128i *)(v76 + 2);
                        v64 = v83;
                        *v76 = v89;
                        v66 = (__int32 *)&v76[v76[1] + 2];
                      }
                      else
                      {
                        v66 = &v26->m128i_i32[v65];
                      }
                    }
                    else
                    {
                      v84 = v63;
                      v80 = (_QWORD *)sub_186B270(0x10u);
                      *v80 = 2;
                      v64 = v84;
                      v26 = (__m128i *)(v80 + 1);
                      v66 = (__int32 *)(v80 + 1);
                    }
                    *v66 = v64;
                    ++v26[-1].m128i_i32[3];
                    v33 = qword_1C7F2C0;
                  }
                }
              }
            }
          }
          else
          {
            v33 = qword_1C7F2C0;
          }
          sub_182CBA0(v33, v94);
          sub_182CBA0(v33, v95);
          goto LABEL_39;
        }
        v36 = 8 * v35;
        v37 = (_QWORD *)(v31 + 32 + v36);
        if ( v36 )
          break;
LABEL_39:
        if ( v85 == ++v32 )
          goto LABEL_46;
      }
      v38 = (_QWORD *)(v31 + 32);
      while ( *v38 != v34 )
      {
        if ( v37 == ++v38 )
          goto LABEL_39;
      }
      ++v86;
      ++v32;
    }
    while ( v85 != v32 );
LABEL_46:
    if ( v86 >= v88 - 1 && v86 == *(_DWORD *)(v31 + 24) )
    {
      if ( v26 )
      {
        v67 = v26[-1].m128i_u32[3];
        if ( (_DWORD)v67 == v26[-1].m128i_i32[2] )
        {
          v77 = (unsigned int)(3 * v67 + 1) >> 1;
          v78 = 4 * v77 + 8;
          if ( 4 * (int)v67 + 8 >= v78 || (unsigned int)v67 >= v77 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v96, "Overflow encountered when expanding vector");
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, v96);
            sub_233E40((__int64)v96);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v79 = (unsigned int *)sub_186B300(&v26[-1].m128i_u64[1], v78);
          v26 = (__m128i *)(v79 + 2);
          *v79 = v77;
          v68 = (__int32 *)&v79[v79[1] + 2];
        }
        else
        {
          v68 = &v26->m128i_i32[v67];
        }
      }
      else
      {
        v73 = (_QWORD *)sub_186B270(0x10u);
        *v73 = 2;
        v26 = (__m128i *)(v73 + 1);
        v68 = (__int32 *)(v73 + 1);
      }
      *v68 = 0;
      ++v26[-1].m128i_i32[3];
    }
LABEL_48:
    ++v25;
  }
  while ( v82 != v25 );
  if ( v26 )
  {
    v39 = v26[-1].m128i_u32[3];
    v40 = 0;
    if ( (unsigned int)v39 > 1 )
    {
      v41 = 4 * v39;
      v42 = (__m128i *)((char *)v26->m128i_i64 + 4);
      v43 = &v26->m128i_i8[4 * v39];
      _BitScanReverse64(&v44, (4 * v39) >> 2);
      sub_483370(v26, v43, 2LL * (int)v44);
      if ( v41 <= 0x40 )
      {
        v59 = v26->m128i_i32[0];
        do
        {
          v69 = v42->m128i_i32[0];
          if ( v42->m128i_i32[0] < v59 )
          {
            if ( (char *)v42 - (char *)v26 <= 4 )
            {
              if ( (char *)v42 - (char *)v26 == 4 )
                v42->m128i_i32[0] = v59;
            }
            else
            {
              memmove((char *)v26->m128i_i64 + 4, v26, (char *)v42 - (char *)v26);
            }
            v26->m128i_i32[0] = v69;
            v59 = v69;
          }
          else
          {
            v70 = v42[-1].m128i_u32[3];
            v71 = &v42[-1].m128i_i32[3];
            if ( v69 >= v70 )
            {
              v72 = v42;
            }
            else
            {
              do
              {
                v71[1] = v70;
                v72 = (__m128i *)v71;
                v70 = *--v71;
              }
              while ( v69 < v70 );
            }
            v72->m128i_i32[0] = v69;
            v59 = v26->m128i_i32[0];
          }
          v42 = (__m128i *)((char *)v42 + 4);
        }
        while ( v43 != (char *)v42 );
      }
      else
      {
        v45 = v26 + 4;
        do
        {
          v46 = v42->m128i_i32[0];
          if ( v42->m128i_i32[0] < (unsigned __int32)v26->m128i_i32[0] )
          {
            if ( (char *)v42 - (char *)v26 <= 4 )
            {
              if ( (char *)v42 - (char *)v26 == 4 )
                v42->m128i_i32[0] = v26->m128i_i32[0];
            }
            else
            {
              memmove((char *)v26->m128i_i64 + 4, v26, (char *)v42 - (char *)v26);
            }
            v26->m128i_i32[0] = v46;
          }
          else
          {
            v47 = v42[-1].m128i_u32[3];
            v48 = &v42[-1].m128i_i32[3];
            if ( v46 >= v47 )
            {
              v49 = v42;
            }
            else
            {
              do
              {
                v48[1] = v47;
                v49 = (__m128i *)v48;
                v47 = *--v48;
              }
              while ( v46 < v47 );
            }
            v49->m128i_i32[0] = v46;
          }
          v42 = (__m128i *)((char *)v42 + 4);
        }
        while ( v45 != v42 );
        do
        {
          v55 = v45->m128i_i32[0];
          v56 = v45[-1].m128i_u32[3];
          v57 = &v45[-1].m128i_i32[3];
          if ( v45->m128i_i32[0] >= v56 )
          {
            v58 = v45;
          }
          else
          {
            do
            {
              v57[1] = v56;
              v58 = (__m128i *)v57;
              v56 = *--v57;
            }
            while ( v55 < v56 );
          }
          v45 = (__m128i *)((char *)v45 + 4);
          v58->m128i_i32[0] = v55;
        }
        while ( v43 != (char *)v45 );
        v59 = v26->m128i_i32[0];
      }
      v40 = 1;
      *a4 = v26->m128i_i32[1] - v59;
    }
    sub_186B220(&v26[-1].m128i_u64[1]);
  }
  else
  {
    v40 = 0;
  }
  v23 = v93;
  if ( v93 )
  {
    v24 = *((unsigned int *)v93 - 1);
LABEL_62:
    v50 = &v23[v24];
    if ( v23 >= v50 )
      goto LABEL_69;
    do
    {
      while ( 1 )
      {
        v51 = *v23;
        if ( *v23 )
        {
          v16 = (*(_DWORD *)(v51 + 8))-- == 1;
          if ( v16 )
            break;
        }
        if ( ++v23 >= v50 )
          goto LABEL_68;
      }
      sub_15D7BC0(v92, v51);
      ++v23;
    }
    while ( v23 < v50 );
LABEL_68:
    v23 = v93;
    if ( v93 )
LABEL_69:
      sub_186B220(v23 - 1);
  }
LABEL_70:
  v52 = v90;
  if ( v90 )
  {
    v53 = v91;
    v16 = (*(_DWORD *)(v90 + 8))-- == 1;
    if ( v16 )
      sub_15D7BC0(v53, v52);
  }
  return v40;
}

