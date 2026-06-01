__int64 __fastcall sub_BC37F0(__int64 a1, __int64 a2, int a3, unsigned int *a4, unsigned int a5, double a6)
{
  char **v6; // r12
  __int64 v7; // rdx
  char **exception; // rbx
  __int64 v9; // rdx
  unsigned int *v13; // r12
  unsigned int *v14; // r15
  _QWORD *v15; // rax
  unsigned int *v16; // rax
  unsigned int *v17; // rbx
  unsigned int v18; // edx
  int v19; // ecx
  __int64 v20; // rax
  unsigned int v21; // edx
  unsigned int v22; // r8d
  size_t v23; // rsi
  unsigned int *v24; // rax
  unsigned int v25; // r8d
  unsigned int v26; // edx
  int v27; // ebp
  __int64 v28; // r12
  int v29; // eax
  unsigned int v30; // ebp
  double *v31; // rax
  double *v32; // r15
  __int64 v33; // rbp
  __int64 v34; // r15
  __int64 v35; // rax
  __int64 v36; // rbp
  __int64 v37; // rdi
  __int64 v38; // rdi
  __int64 v39; // r12
  char v40; // al
  _QWORD *v42; // rdx
  unsigned int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  __int64 *v46; // rcx
  unsigned int v47; // ebp
  unsigned int v48; // ecx
  unsigned int *v49; // rax
  __int64 v50; // rcx
  _QWORD *v51; // rax
  unsigned int v52; // [rsp+0h] [rbp-F0h]
  unsigned int v53; // [rsp+0h] [rbp-F0h]
  __int64 v54; // [rsp+0h] [rbp-F0h]
  __int64 v55; // [rsp+8h] [rbp-E8h]
  __int64 v56; // [rsp+10h] [rbp-E0h]
  __int64 v57; // [rsp+20h] [rbp-D0h]
  double *v58; // [rsp+38h] [rbp-B8h]
  unsigned int *v59; // [rsp+48h] [rbp-A8h] BYREF
  __int64 v60; // [rsp+50h] [rbp-A0h] BYREF
  __int64 v61[4]; // [rsp+58h] [rbp-98h] BYREF
  __int64 *v62; // [rsp+78h] [rbp-78h] BYREF
  char v63; // [rsp+80h] [rbp-70h]
  int v64; // [rsp+84h] [rbp-6Ch]
  __int64 v65; // [rsp+88h] [rbp-68h]
  int v66; // [rsp+90h] [rbp-60h]
  __int64 v67; // [rsp+98h] [rbp-58h]
  int v68; // [rsp+A0h] [rbp-50h]
  __int64 v69; // [rsp+A8h] [rbp-48h]
  unsigned int v70; // [rsp+B0h] [rbp-40h]

  if ( dword_1C7ED94 == a5 )
    return 0;
  v57 = a5;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + a5) == 1 )
    return 0;
  if ( a3 )
  {
    v13 = a4;
    v14 = &a4[a3];
    v15 = (_QWORD *)sub_186B270(0x10u);
    *v15 = 2;
    v16 = (unsigned int *)(v15 + 1);
    v17 = v16;
    while ( 1 )
    {
      v18 = *v13++;
      *v16 = v18;
      v19 = *(v17 - 1);
      v20 = (unsigned int)(v19 + 1);
      *(v17 - 1) = v20;
      if ( v13 == v14 )
        break;
      v21 = *(v17 - 2);
      if ( v21 == (_DWORD)v20 )
      {
        v22 = (3 * v21 + 1) >> 1;
        v23 = 4 * v22 + 8;
        if ( 4 * v19 + 12 >= (unsigned int)v23 || v21 >= v22 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_154526((__int64 *)&v62, "Overflow encountered when expanding vector", v9);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v62);
          sub_233E40((__int64)&v62);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v52 = (3 * v21 + 1) >> 1;
        v24 = (unsigned int *)sub_186B300(v17 - 2, v23);
        v17 = v24 + 2;
        *v24 = v52;
        v16 = &v24[v24[1] + 2];
      }
      else
      {
        v16 = &v17[v20];
      }
    }
  }
  else
  {
    v17 = nullptr;
  }
  if ( dword_1C7ED90 != a5 )
  {
    sub_9936C0(*(_QWORD *)(a1 + 16), a5 >> 1);
    v59 = v17;
    v60 = 0;
    sub_BB8720(a1, a2, &v60, &v59);
    v17 = v59;
    v56 = v60;
    v55 = *(_QWORD *)(a1 + 16);
    if ( v60 )
      v25 = *(_DWORD *)(v60 - 4);
    else
      v25 = 0;
    if ( v59 )
      v26 = *(v59 - 1);
    else
      v26 = 0;
    v27 = *(_DWORD *)(a1 + 8);
    sub_B72D60((__int64)&v62, v55, v26, v59, v25, v60);
    v68 = v27;
    v69 = 0;
    v70 = a5;
    v62 = (__int64 *)&off_1C57938;
    sub_B733F0((__int64)&v62, v55);
    v28 = sub_180C100(v55 + 8400, 64);
    *(_BYTE *)(v28 + 8) = v63 & 3 | *(_BYTE *)(v28 + 8) & 0xFC;
    *(_DWORD *)(v28 + 12) = v64;
    *(_QWORD *)(v28 + 16) = v65;
    *(_DWORD *)(v28 + 24) = v66;
    *(_QWORD *)(v28 + 32) = v67;
    *(_QWORD *)v28 = qword_1C6E7C8;
    v29 = v68;
    *(_QWORD *)(v28 + 48) = 0;
    *(_DWORD *)(v28 + 40) = v29;
    if ( v69 )
    {
      v30 = *(_DWORD *)(v69 - 4);
      v53 = *(_DWORD *)(v69 - 8);
      v31 = (double *)sub_186B270(16LL * v53 + 8);
      v32 = v31 + 1;
      v58 = v31 + 1;
      *(_QWORD *)&a6 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v53), _mm_cvtsi32_si128(v30)).m128i_u64[0];
      *v31 = a6;
      *(_QWORD *)(v28 + 48) = v31 + 1;
      v33 = v69;
      if ( !v69 || (v54 = v69 + 16LL * *(unsigned int *)(v69 - 4), v69 == v54) )
      {
        *(_QWORD *)v28 = &off_1C57938;
        *(_DWORD *)(v28 + 56) = v70;
        goto LABEL_22;
      }
      do
      {
        sub_15D0E50(v32, v33);
        v33 += 16;
        v32 += 2;
      }
      while ( v54 != v33 );
      v58 = *(double **)(v28 + 48);
      *(_QWORD *)v28 = &off_1C57938;
      *(_DWORD *)(v28 + 56) = v70;
      if ( v58 )
      {
LABEL_22:
        if ( *((_DWORD *)v58 - 1) )
        {
          v42 = *(_QWORD **)(v55 + 8600);
          if ( v42 )
          {
            v43 = *((_DWORD *)v42 - 1);
            if ( v43 == *((_DWORD *)v42 - 2) )
            {
              v47 = (3 * v43 + 1) >> 1;
              v48 = 8 * v47 + 8;
              if ( 8 * v43 + 8 >= v48 || v43 >= v47 )
              {
                v6 = (char **)__cxa_allocate_exception(0x28u);
                sub_154526(v61, "Overflow encountered when expanding vector", v7);
                *v6 = (char *)off_1C63128;
                sub_2333C0(v6 + 1, v61);
                sub_233E40((__int64)v61);
                __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v49 = (unsigned int *)sub_186B300(v42 - 1, v48);
              v42 = v49 + 2;
              *(_QWORD *)(v55 + 8600) = v49 + 2;
              v50 = v49[1];
              *v49 = v47;
              LODWORD(v49) = v50;
              v46 = &v42[v50];
              v45 = (_DWORD)v49 + 1;
            }
            else
            {
              v44 = v43;
              v45 = v43 + 1;
              v46 = &v42[v44];
            }
          }
          else
          {
            v51 = (_QWORD *)sub_186B270(0x18u);
            *v51 = 2;
            v42 = v51 + 1;
            *(_QWORD *)(v55 + 8600) = v51 + 1;
            v46 = v51 + 1;
            v45 = 1;
          }
          *v46 = v28;
          *((_DWORD *)v42 - 1) = v45;
        }
      }
    }
    else
    {
      *(_QWORD *)v28 = &off_1C57938;
      *(_DWORD *)(v28 + 56) = v70;
    }
    v34 = v69;
    v62 = qword_1C6E7C8;
    if ( v69 )
    {
      v35 = *(unsigned int *)(v69 - 4);
      if ( (_DWORD)v35 )
      {
        v36 = v69 + 16 * v35;
        do
        {
          v37 = v34;
          v34 += 16;
          sub_15D0DF0(v37);
        }
        while ( v36 != v34 );
        v34 = v69;
      }
      sub_186B220((void *)(v34 - 8));
    }
    v38 = *(_QWORD *)(a1 + 16);
    v39 = v28 | 3;
    *(_BYTE *)(a1 + 4170) = 1;
    v62 = (__int64 *)v39;
    v40 = *(_BYTE *)(*(_QWORD *)(v38 + 8848) + v57);
    if ( v40 == -1 )
    {
      sub_8E8670(v38, (__int64 *)&v62, a5 ^ 1);
    }
    else if ( !v40 )
    {
      sub_8F28B0(v38, a5, v39, 0);
    }
    sub_BC3570(a1, a5, &v60, &v59, a6);
    if ( v56 )
      sub_186B220((void *)(v56 - 8));
    goto LABEL_34;
  }
  v59 = v17;
  sub_BC3460(a1, a2, &v59, a6);
LABEL_34:
  if ( v17 )
    sub_186B220(v17 - 2);
  return 1;
}

