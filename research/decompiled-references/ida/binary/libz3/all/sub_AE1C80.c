__int64 __fastcall sub_AE1C80(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  char **exception; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // edi
  __int64 *v12; // rcx
  unsigned int v13; // edx
  __int64 *v14; // rsi
  __int64 v15; // rdx
  __int64 *v16; // r8
  __int64 *v17; // rax
  __int64 v18; // rdx
  __int64 *v19; // r12
  __int64 *j; // r14
  __int64 v21; // r13
  __int64 v22; // r15
  __int64 v24; // r13
  _QWORD *v25; // r14
  __int64 i; // rax
  int v27; // ecx
  __int64 v28; // r9
  _QWORD *v29; // r15
  __int64 v30; // rax
  int v31; // edx
  unsigned int v32; // edx
  __int64 v33; // r8
  __int64 v34; // r12
  char *v35; // rax
  _QWORD *v36; // rdi
  unsigned __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rax
  _QWORD *v40; // rdi
  unsigned int v41; // eax
  __int64 v42; // rdx
  int v43; // eax
  __int64 *v44; // rdx
  __int64 v45; // r12
  int v46; // ebx
  int v47; // eax
  int v48; // r8d
  int v49; // r9d
  unsigned int v50; // ebx
  size_t v51; // rsi
  unsigned int *v52; // rax
  __int64 v53; // rdx
  unsigned __int64 v54; // rax
  _QWORD *v55; // rdi
  int v56; // [rsp-8h] [rbp-F0h]
  int v57; // [rsp+0h] [rbp-E8h]
  _QWORD *v58; // [rsp+0h] [rbp-E8h]
  void *v59; // [rsp+0h] [rbp-E8h]
  int v60; // [rsp+0h] [rbp-E8h]
  int v61; // [rsp+8h] [rbp-E0h]
  __int64 v62; // [rsp+8h] [rbp-E0h]
  int v63; // [rsp+8h] [rbp-E0h]
  int v64; // [rsp+10h] [rbp-D8h]
  int v65; // [rsp+10h] [rbp-D8h]
  int v66; // [rsp+10h] [rbp-D8h]
  void *v67; // [rsp+18h] [rbp-D0h]
  void *v68; // [rsp+18h] [rbp-D0h]
  int v69; // [rsp+18h] [rbp-D0h]
  void *v70; // [rsp+20h] [rbp-C8h] BYREF
  char v71[8]; // [rsp+28h] [rbp-C0h]
  int v72; // [rsp+30h] [rbp-B8h] BYREF
  int v73; // [rsp+38h] [rbp-B0h]
  int v74; // [rsp+40h] [rbp-A8h]
  void *v75; // [rsp+48h] [rbp-A0h]
  int v76; // [rsp+50h] [rbp-98h]
  int v77; // [rsp+58h] [rbp-90h]
  int v78; // [rsp+60h] [rbp-88h]
  int v79; // [rsp+68h] [rbp-80h]
  int v80; // [rsp+70h] [rbp-78h]
  int v81; // [rsp+78h] [rbp-70h]
  int v82; // [rsp+80h] [rbp-68h]
  int v83; // [rsp+88h] [rbp-60h]
  int v84; // [rsp+90h] [rbp-58h]
  int v85; // [rsp+98h] [rbp-50h]
  int v86; // [rsp+A0h] [rbp-48h]
  void *v87; // [rsp+A8h] [rbp-40h]
  int v88; // [rsp+B0h] [rbp-38h]
  __int64 v89; // [rsp+B8h] [rbp-30h]

  if ( !*(_WORD *)(a2 + 4) )
  {
    v9 = *(unsigned int *)(a2 + 24);
    if ( (_DWORD)v9 )
    {
      v70 = &v72;
      *(_QWORD *)v71 = 0x1000000000LL;
      v24 = a2 + 32 + 8 * v9;
      v25 = (_QWORD *)(a2 + 32);
      for ( i = sub_AE1C80(a1, *(_QWORD *)(a2 + 32), 0, (int)a2 + 32, a5, a6, (int)&v72, v61, v64, v67);
            ;
            i = sub_AE1C80(a1, *v25, v31, v27, v33, v28, (int)v58, v62, v65, v68) )
      {
        v32 = *(_DWORD *)v71;
        v33 = i;
        if ( *(_DWORD *)v71 < *(_DWORD *)&v71[4] )
        {
          v29 = v70;
        }
        else
        {
          v62 = i;
          v34 = (unsigned int)(2 * *(_DWORD *)&v71[4]);
          v35 = (char *)sub_186B270(8 * v34);
          v32 = *(_DWORD *)v71;
          v36 = v70;
          v29 = v35;
          v33 = v62;
          if ( *(_DWORD *)v71 )
          {
            if ( (unsigned int)(*(_DWORD *)v71 - 1) <= 2 || v35 == (char *)v70 + 8 )
            {
              v54 = 0;
              v28 = 8LL * *(unsigned int *)v71;
              do
              {
                v29[v54 / 8] = v36[v54 / 8];
                v54 += 8LL;
              }
              while ( v54 != v28 );
            }
            else
            {
              v37 = 0;
              v38 = 16LL * (*(_DWORD *)v71 >> 1);
              do
              {
                *(__m128i *)&v29[v37 / 8] = _mm_loadu_si128((const __m128i *)&v36[v37 / 8]);
                v37 += 16LL;
              }
              while ( v37 != v38 );
              if ( (v32 & 1) != 0 )
                v29[v32 & 0xFFFFFFFE] = v36[v32 & 0xFFFFFFFE];
            }
          }
          if ( v36 && v36 != v58 )
          {
            sub_186B220(v36);
            v32 = *(_DWORD *)v71;
            v33 = v62;
          }
          v70 = v29;
          *(_DWORD *)&v71[4] = v34;
        }
        v30 = v32;
        ++v25;
        v31 = v32 + 1;
        v29[v30] = v33;
        *(_DWORD *)v71 = v31;
        if ( (_QWORD *)v24 == v25 )
          break;
      }
      v21 = sub_15DC610(
              *(_QWORD *)a1,
              *(_QWORD *)(a2 + 16),
              v31,
              (int)v29,
              v33,
              v28,
              (int)v58,
              v62,
              v65,
              (int)v68,
              (int)v70,
              v71[0],
              v72,
              v73,
              v74,
              v75);
      if ( v70 && v70 != v59 )
        sub_186B220(v70);
      goto LABEL_46;
    }
  }
  sub_ADEE70((__int64 *)a1);
  v10 = *(unsigned int *)(a1 + 104);
  v11 = *(_DWORD *)(a2 + 12);
  v12 = *(__int64 **)(a1 + 96);
  v13 = v10 - 1;
  v10 *= 16;
  v14 = (__int64 *)((char *)v12 + v10);
  v15 = 16LL * (v11 & v13);
  v16 = &v12[(unsigned __int64)v15 / 8];
  if ( v15 == v10 )
  {
LABEL_35:
    while ( v16 != v12 )
    {
      v39 = *v12;
      if ( (unsigned __int64)*v12 > 1 )
      {
        if ( *(_DWORD *)(v39 + 12) == v11 && a2 == v39 )
        {
          v17 = v12;
          goto LABEL_33;
        }
      }
      else if ( !v39 )
      {
        break;
      }
      v12 += 2;
    }
LABEL_10:
    v19 = *(__int64 **)(a1 + 128);
    if ( v19 )
    {
      for ( j = &v19[*((unsigned int *)v19 - 1)]; j != v19; ++v19 )
      {
        v21 = *v19;
        v22 = sub_15D1F10(*v19);
        if ( v22 == sub_15D1F10(a2) )
          return v21;
      }
    }
    v45 = *(_QWORD *)a1;
    v46 = sub_15D1F10(a2);
    sub_180C5A0(&v70, "sk");
    v47 = sub_15E3D10(
            v45,
            (int)&v70,
            (int)&qword_18D6CD0,
            0,
            0,
            v46,
            1,
            v56,
            v57,
            v61,
            v64,
            (int)v67,
            (int)v70,
            *(int *)v71,
            v72,
            v73,
            v74,
            (int)v75,
            v76,
            v77,
            v78,
            v79,
            v80,
            v81,
            v82,
            v83,
            v84,
            v85,
            v86,
            v87,
            v88,
            v89);
    v21 = sub_15DC610(v45, v47, 0, 0, v48, v49, v60, v63, v66, v69, (int)v70, v71[0], v72, v73, v74, v75);
LABEL_46:
    if ( v21 )
      ++*(_DWORD *)(v21 + 8);
    v40 = *(_QWORD **)(a1 + 128);
    if ( v40 )
    {
      v41 = *((_DWORD *)v40 - 1);
      if ( v41 == *((_DWORD *)v40 - 2) )
      {
        v50 = (3 * v41 + 1) >> 1;
        v51 = 8 * v50 + 8;
        if ( 8 * v41 + 8 >= (unsigned int)v51 || v41 >= v50 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&v70, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v70);
          sub_233E40((__int64)&v70);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v52 = (unsigned int *)sub_186B300(v40 - 1, v51);
        v53 = v52[1];
        v40 = v52 + 2;
        *v52 = v50;
        *(_QWORD *)(a1 + 128) = v52 + 2;
        LODWORD(v52) = v53;
        v44 = &v40[v53];
        v43 = (_DWORD)v52 + 1;
      }
      else
      {
        v42 = v41;
        v43 = v41 + 1;
        v44 = &v40[v42];
      }
    }
    else
    {
      v55 = (_QWORD *)sub_186B270(0x18u);
      *v55 = 2;
      v43 = 1;
      v40 = v55 + 1;
      *(_QWORD *)(a1 + 128) = v40;
      v44 = v40;
    }
    *v44 = v21;
    *((_DWORD *)v40 - 1) = v43;
    sub_B6F650(*(_QWORD *)(a1 + 48));
    return v21;
  }
  v17 = &v12[(unsigned __int64)v15 / 8];
  while ( 1 )
  {
    v18 = *v17;
    if ( (unsigned __int64)*v17 > 1 )
      break;
    if ( !v18 )
      goto LABEL_10;
LABEL_7:
    v17 += 2;
    if ( v14 == v17 )
      goto LABEL_35;
  }
  if ( *(_DWORD *)(v18 + 12) != v11 || a2 != v18 )
    goto LABEL_7;
LABEL_33:
  v21 = v17[1];
  if ( !v21 )
    goto LABEL_10;
  return v21;
}

