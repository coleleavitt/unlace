__int64 __fastcall sub_5DDE80(
        __int64 a1,
        __int64 a2,
        __m128i a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  _QWORD *v10; // r12
  _QWORD *v11; // r13
  __int64 v12; // r13
  void *v14; // r12
  __int64 *v15; // rbx
  unsigned __int64 v16; // rbp
  __int64 v17; // rsi
  __int64 v18; // rdi
  bool v19; // zf
  void *v20; // r15
  double v21; // xmm4_8
  double v22; // xmm5_8
  __int64 v23; // rdx
  double v24; // xmm4_8
  double v25; // xmm5_8
  _QWORD *v26; // rbp
  _QWORD *v27; // r14
  __int64 v28; // rsi
  __int64 v29; // rdi
  char *v30; // rdi
  int v31; // ecx
  __int64 v32; // rsi
  char *v33; // rax
  char *v34; // rdx
  unsigned int v35; // r14d
  size_t v36; // rbp
  _OWORD *v37; // rax
  _OWORD *v38; // rcx
  _OWORD *v39; // rdx
  size_t v40; // rsi
  void *v41; // [rsp+8h] [rbp-110h]
  _BYTE v42[48]; // [rsp+30h] [rbp-E8h] BYREF
  _QWORD v43[8]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 *v44; // [rsp+A0h] [rbp-78h]
  void *v45; // [rsp+A8h] [rbp-70h]
  void *v46; // [rsp+C0h] [rbp-58h]

  if ( !(unsigned __int8)sub_64B370(*(_QWORD *)(a1 + 24)) )
    return 0;
  v10 = *(_QWORD **)(a2 + 24);
  if ( v10 )
  {
    v11 = &v10[*((unsigned int *)v10 - 1)];
    if ( v10 != v11 )
    {
      while ( !(unsigned __int8)sub_62A4D0(*v10) )
      {
        if ( v11 == ++v10 )
          goto LABEL_9;
      }
      return 0;
    }
  }
LABEL_9:
  sub_5F81C0(v43, *(_QWORD *)(a1 + 24), 33000);
  sub_61DE40(v42, *(_QWORD *)(a1 + 24), 33000);
  v14 = (void *)sub_5F9C90(v43, a2);
  sub_5DD5F0(a1, (__int64)v14);
  v12 = 0;
  if ( (unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 32)) )
  {
    v20 = (void *)sub_61DE70(v42, v14);
    sub_5DD5F0(a1, (__int64)v20);
    v41 = (void *)sub_5DD1C0(a1, (__int64)v14, a3, a4, a5, a6, v21, v22, a9);
    v12 = sub_5F8550(v43, v41);
    sub_63DFA0(v12, a2, v23, *(double *)a3.m128i_i64, a4, a5, a6, v24, v25, a9);
    v26 = *(_QWORD **)(a1 + 3128);
    if ( v26 )
    {
      v27 = &v26[*((unsigned int *)v26 - 1)];
      if ( v26 >= v27 )
        goto LABEL_33;
      do
      {
        while ( 1 )
        {
          v28 = *v26;
          if ( *v26 )
          {
            v29 = *(_QWORD *)(a1 + 3120);
            v19 = (*(_DWORD *)(v28 + 8))-- == 1;
            if ( v19 )
              break;
          }
          if ( ++v26 >= v27 )
            goto LABEL_32;
        }
        sub_15D7BC0(v29, v28);
        ++v26;
      }
      while ( v26 < v27 );
LABEL_32:
      v26 = *(_QWORD **)(a1 + 3128);
      if ( v26 )
LABEL_33:
        *((_DWORD *)v26 - 1) = 0;
    }
    if ( !*(_DWORD *)(a1 + 3108) && !*(_DWORD *)(a1 + 3112) )
      goto LABEL_49;
    v30 = *(char **)(a1 + 3096);
    v31 = 0;
    v32 = *(unsigned int *)(a1 + 3104);
    v33 = v30;
    v34 = &v30[16 * v32];
    if ( v30 == v34 )
      goto LABEL_48;
    do
    {
      while ( *(_QWORD *)v33 )
      {
        *(_QWORD *)v33 = 0;
        v33 += 16;
        if ( v34 == v33 )
          goto LABEL_40;
      }
      v33 += 16;
      ++v31;
    }
    while ( v34 != v33 );
LABEL_40:
    if ( (unsigned int)v32 <= 0x10 || 3 * (int)v32 >= (unsigned int)(4 * v31) )
    {
LABEL_48:
      *(_QWORD *)(a1 + 3108) = 0;
LABEL_49:
      sub_63D960(v41);
      sub_186B220(v41);
      if ( v20 )
      {
        sub_63D960(v20);
        sub_186B220(v20);
      }
      goto LABEL_10;
    }
    if ( v30 )
    {
      sub_186B220(v30);
      v35 = *(_DWORD *)(a1 + 3104);
      *(_QWORD *)(a1 + 3096) = 0;
      v35 >>= 1;
      *(_DWORD *)(a1 + 3104) = v35;
      v36 = v35;
      v37 = (_OWORD *)sub_186B270(v36 * 16);
      if ( !v35 )
      {
LABEL_47:
        *(_QWORD *)(a1 + 3096) = v37;
        goto LABEL_48;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 3096) = 0;
      v40 = (unsigned int)v32 >> 1;
      *(_DWORD *)(a1 + 3104) = v40;
      v36 = v40;
      v37 = (_OWORD *)sub_186B270(16 * v40);
    }
    v38 = &v37[v36];
    v39 = v37;
    if ( ((v36 * 16) & 0x10) == 0 || (v39 = v37 + 1, *v37 = 0, v38 != v37 + 1) )
    {
      do
      {
        *v39 = 0;
        v39 += 2;
        *(v39 - 1) = 0;
      }
      while ( v38 != v39 );
    }
    goto LABEL_47;
  }
LABEL_10:
  if ( v14 )
  {
    sub_63D960(v14);
    sub_186B220(v14);
  }
  v43[0] = &off_1C52768;
  if ( v46 )
    sub_186B220(v46);
  if ( v45 )
    sub_186B220(v45);
  v15 = v44;
  if ( v44 )
  {
    v16 = (unsigned __int64)&v44[*((unsigned int *)v44 - 1)];
    if ( (unsigned __int64)v44 >= v16 )
      goto LABEL_24;
    do
    {
      while ( 1 )
      {
        v17 = *v15;
        if ( *v15 )
        {
          v18 = v43[7];
          v19 = (*(_DWORD *)(v17 + 8))-- == 1;
          if ( v19 )
            break;
        }
        if ( (unsigned __int64)++v15 >= v16 )
          goto LABEL_23;
      }
      sub_15D7BC0(v18, v17);
      ++v15;
    }
    while ( (unsigned __int64)v15 < v16 );
LABEL_23:
    v15 = v44;
    if ( v44 )
LABEL_24:
      sub_186B220(v15 - 1);
  }
  return v12;
}

