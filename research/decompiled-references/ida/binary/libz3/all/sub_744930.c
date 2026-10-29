_QWORD *__fastcall sub_744930(_QWORD *a1, __int64 *a2, unsigned int a3, unsigned int a4, int a5, int a6, __int64 a7)
{
  char **v7; // r14
  char **exception; // r14
  unsigned int v10; // r12d
  __int64 v12; // r14
  _QWORD *v13; // rax
  __m128i *i; // rbx
  unsigned int v15; // r15d
  size_t v16; // rsi
  unsigned int *v17; // rax
  unsigned int v18; // eax
  size_t v19; // rdx
  __m128i *v20; // r15
  unsigned int v21; // r10d
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 *v24; // rdx
  unsigned int v25; // eax
  unsigned int v26; // r14d
  size_t v27; // rsi
  unsigned int *v28; // rax
  __int64 v29; // rdx
  char *v30; // rdi
  const __m128i *v31; // rax
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  char *m128i_i8; // r15
  __m128d v35; // xmm1
  __m128d v36; // xmm0
  unsigned __int64 v37; // rax
  __int64 *v38; // rdi
  __int64 *v39; // rdx
  __int64 v40; // rax
  int v41; // r9d
  int v42; // ecx
  __int64 v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // rdx
  bool v46; // zf
  __int64 v47; // rsi
  __int64 v48; // rdi
  __int64 v49; // rsi
  __int64 v50; // rdi
  __int64 v51; // rsi
  __int64 v52; // rdi
  __int64 v53; // rsi
  __int64 v54; // rdi
  _QWORD *v56; // rax
  __int64 *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rsi
  __int64 *v61; // [rsp+0h] [rbp-298h]
  __int64 v63; // [rsp+8h] [rbp-290h]
  int v65[2]; // [rsp+18h] [rbp-280h]
  int v66[2]; // [rsp+20h] [rbp-278h] BYREF
  __int64 v67; // [rsp+28h] [rbp-270h]
  __int64 v68[19]; // [rsp+30h] [rbp-268h] BYREF
  int v69; // [rsp+C8h] [rbp-1D0h]
  __int64 v70; // [rsp+D0h] [rbp-1C8h]
  __int64 v71[19]; // [rsp+D8h] [rbp-1C0h] BYREF
  int v72; // [rsp+170h] [rbp-128h]
  int v73[2]; // [rsp+178h] [rbp-120h] BYREF
  int v74; // [rsp+208h] [rbp-90h]
  __int64 v75; // [rsp+210h] [rbp-88h]
  __int64 v76; // [rsp+218h] [rbp-80h]
  __int64 v77; // [rsp+220h] [rbp-78h]
  __int64 v78; // [rsp+228h] [rbp-70h]
  __int64 v79; // [rsp+230h] [rbp-68h]
  __int64 v80; // [rsp+238h] [rbp-60h]
  __int64 v81; // [rsp+240h] [rbp-58h]
  _BYTE v82[80]; // [rsp+248h] [rbp-50h] BYREF

  v10 = a3;
  v12 = *a2;
  *a1 = 0;
  a1[1] = v12;
  if ( a3 )
  {
    v13 = (_QWORD *)sub_186B270(0x18u);
    *v13 = 2;
    for ( i = (__m128i *)(v13 + 1); ; i = (__m128i *)(v17 + 2) )
    {
      v18 = i[-1].m128i_u32[2];
      if ( v18 >= v10 )
        break;
      v15 = (3 * v18 + 1) >> 1;
      v16 = 8 * v15 + 8;
      if ( 8 * v18 + 8 >= (unsigned int)v16 || v18 >= v15 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_743560(v68, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v68);
        sub_233E40((__int64)v68);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v17 = (unsigned int *)sub_186B300(&i[-1].m128i_u64[1], v16);
      *v17 = v15;
    }
    i[-1].m128i_i32[3] = v10;
    v19 = 8LL * v10;
    v20 = (__m128i *)((char *)i + v19);
    memset(i, 0, v19);
    v21 = v10;
    v10 = 0;
    i->m128i_i64[v21 - a5 - 1] = a7;
    if ( a4 )
    {
      do
      {
        v25 = i[-1].m128i_u32[3];
        if ( v25 == i[-1].m128i_i32[2] )
        {
          v26 = (3 * v25 + 1) >> 1;
          v27 = 8 * v26 + 8;
          if ( 8 * v25 + 8 >= (unsigned int)v27 || v25 >= v26 )
          {
            v7 = (char **)__cxa_allocate_exception(0x28u);
            sub_743560(v68, "Overflow encountered when expanding vector");
            *v7 = (char *)off_1C63128;
            sub_2333C0(v7 + 1, v68);
            sub_233E40((__int64)v68);
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v28 = (unsigned int *)sub_186B300(&i[-1].m128i_u64[1], v27);
          v29 = v28[1];
          i = (__m128i *)(v28 + 2);
          *v28 = v26;
          LODWORD(v28) = v29;
          v24 = &i->m128i_i64[v29];
          v23 = (unsigned int)((_DWORD)v28 + 1);
        }
        else
        {
          v22 = v25;
          v23 = v25 + 1;
          v24 = &i->m128i_i64[v22];
        }
LABEL_10:
        ++v10;
        *v24 = 0;
        i[-1].m128i_i32[3] = v23;
      }
      while ( v10 < a4 );
      v20 = (__m128i *)((char *)i + 8 * v23);
    }
    v12 = *a2;
    if ( i != v20 )
    {
      v30 = &v20[-1].m128i_i8[8];
      if ( i < (__m128i *)&v20[-1].m128i_u64[1] )
      {
        v31 = i;
        v32 = (char *)&v20[-1].m128i_u32[1] + 3 - (char *)i;
        if ( v32 <= 0x1F || (v33 = (v32 >> 4) + 1, (char *)v20 - 8 * v33 < (char *)i + 8 * v33) && i < v20 )
        {
          v57 = (__int64 *)i;
          do
          {
            v58 = *v57;
            v59 = *(_QWORD *)v30;
            ++v57;
            v30 -= 8;
            *(v57 - 1) = v59;
            *((_QWORD *)v30 + 1) = v58;
          }
          while ( v57 < (__int64 *)v30 );
        }
        else
        {
          m128i_i8 = v20[-1].m128i_i8;
          do
          {
            v35 = (__m128d)_mm_loadu_si128((const __m128i *)m128i_i8);
            v36 = (__m128d)_mm_loadu_si128(v31++);
            m128i_i8 -= 16;
            v31[-1] = (const __m128i)_mm_shuffle_pd(v35, v35, 1);
            *((__m128d *)m128i_i8 + 1) = _mm_shuffle_pd(v36, v36, 1);
          }
          while ( &i[v33 >> 1] != v31 );
          if ( (v33 & 1) != 0 )
          {
            v37 = v33 & 0xFFFFFFFFFFFFFFFELL;
            v38 = (__int64 *)&v30[v37 * -8];
            v39 = &i->m128i_i64[v37];
            v40 = i->m128i_i64[v37];
            *v39 = *v38;
            *v38 = v40;
          }
        }
      }
    }
  }
  else
  {
    i = nullptr;
    *(_QWORD *)(8LL * (unsigned int)~a5) = a7;
    if ( a4 )
    {
      v56 = (_QWORD *)sub_186B270(0x18u);
      i = (__m128i *)(v56 + 1);
      *v56 = 2;
      v23 = 1;
      v24 = (__int64 *)i;
      goto LABEL_10;
    }
  }
  sub_1584DD0(v68, v12, 0);
  v68[18] = (__int64)v82;
  v68[0] = (__int64)&off_1C4CA60;
  v69 = 0;
  v70 = 0;
  sub_1584DD0(v71, v12, 0);
  v71[18] = 0;
  v72 = 0;
  v71[0] = (__int64)&off_1C61DB8;
  sub_1584DD0(v73, v12, 0);
  v76 = v12;
  v78 = v12;
  v80 = v12;
  *(_QWORD *)v73 = &off_1C61DE0;
  v74 = 0;
  v75 = 0;
  v77 = 0;
  v79 = 0;
  v81 = 0;
  v68[0] = (__int64)&off_1C4CA80;
  v82[8] = 1;
  if ( i )
    v42 = i[-1].m128i_i32[3];
  else
    v42 = 0;
  sub_157BE40(
    (int)v66,
    (int)v68,
    a6,
    v42,
    (int)i,
    v41,
    (int)a2,
    (__int64)v71,
    a6,
    (int)v73,
    v66[0],
    v67,
    v68[0],
    (void *)v68[1]);
  v44 = *(_QWORD *)v66;
  *(_QWORD *)v66 = *a1;
  v43 = *(_QWORD *)v66;
  *a1 = v44;
  if ( v43 )
  {
    v45 = v67;
    v46 = (*(_DWORD *)(v43 + 8))-- == 1;
    if ( v46 )
    {
      sub_15D7BC0(v45, v43);
      v44 = *a1;
    }
  }
  *(_QWORD *)v66 = 0;
  v67 = *v61;
  sub_14BB8A0(v61 + 5, v44, a1, v66);
  v47 = *(_QWORD *)v66;
  if ( *(_QWORD *)v66 )
  {
    v48 = v67;
    v46 = (*(_DWORD *)(*(_QWORD *)v66 + 8LL))-- == 1;
    if ( v46 )
      sub_15D7BC0(v48, v47);
  }
  v68[0] = (__int64)&off_1C4CA60;
  if ( v81 )
    sub_186B220((void *)(v81 - 8));
  v49 = v79;
  if ( v79 )
  {
    v50 = v80;
    v46 = (*(_DWORD *)(v79 + 8))-- == 1;
    if ( v46 )
      sub_15D7BC0(v50, v49);
  }
  v51 = v77;
  if ( v77 )
  {
    v52 = v78;
    v46 = (*(_DWORD *)(v77 + 8))-- == 1;
    if ( v46 )
      sub_15D7BC0(v52, v51);
  }
  v53 = v75;
  if ( v75 )
  {
    v54 = v76;
    v46 = (*(_DWORD *)(v75 + 8))-- == 1;
    if ( v46 )
      sub_15D7BC0(v54, v53);
  }
  *(_QWORD *)v73 = &qword_1C637E8;
  sub_15841B0(*(_QWORD *)v65);
  v71[0] = (__int64)&qword_1C637E8;
  sub_15841B0(v63);
  if ( v70 )
    sub_186B220((void *)(v70 - 8));
  sub_15841B0(v68);
  if ( i )
    sub_186B220(&i[-1].m128i_u64[1]);
  return a1;
}

