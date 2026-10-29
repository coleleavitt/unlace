__int64 __fastcall sub_C34CA0(__int64 a1, const double *a2, __int64 a3)
{
  char v4; // r14
  unsigned __int8 v5; // al
  __m128 v6; // xmm0
  _OWORD *v7; // rax
  __int64 v8; // rax
  double v9; // r12
  void (__fastcall ***v10)(void *); // rbp
  __int64 v11; // rax
  __int64 v12; // r15
  void (***v13)(void); // rdi
  bool v14; // zf
  double v15; // rcx
  double v16; // rcx
  unsigned int v17; // edx
  unsigned int v18; // ebx
  _QWORD *v19; // r15
  __int64 *v20; // rbx
  unsigned __int64 v21; // rbp
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v25; // rbx
  __int64 v26; // rax
  _QWORD *v27; // rdi
  __int64 v28; // rax
  __int64 i; // rax
  unsigned __int8 v30; // [rsp+10h] [rbp-D8h]
  double v31; // [rsp+10h] [rbp-D8h]
  unsigned __int8 v32; // [rsp+1Fh] [rbp-C9h]
  char v33[8]; // [rsp+20h] [rbp-C8h] BYREF
  void *v34; // [rsp+28h] [rbp-C0h] BYREF
  __m128 v35; // [rsp+30h] [rbp-B8h] BYREF
  int v36; // [rsp+40h] [rbp-A8h]
  __int64 (__fastcall **v37)(); // [rsp+48h] [rbp-A0h]
  __int64 v38; // [rsp+58h] [rbp-90h]
  void *v39; // [rsp+60h] [rbp-88h]
  __int64 v40; // [rsp+70h] [rbp-78h]
  void *v41; // [rsp+78h] [rbp-70h]
  char v42; // [rsp+80h] [rbp-68h]
  void *ptr; // [rsp+88h] [rbp-60h]
  __int64 v44; // [rsp+90h] [rbp-58h]
  int v45; // [rsp+98h] [rbp-50h]
  __int64 v46; // [rsp+A0h] [rbp-48h]
  __int64 *v47; // [rsp+A8h] [rbp-40h]

  sub_EE4940(v33, "purify-arith", *(_QWORD *)a2);
  v4 = *(_BYTE *)(*(_QWORD *)a2 + 123LL);
  v30 = sub_1859610(a1 + 32, "elim_root_objects", 1);
  v32 = sub_1859610(a1 + 32, "elim_inverses", 1);
  v5 = sub_1859610(a1 + 32, "complete", 1);
  v38 = 0;
  v6 = _mm_loadh_ps(a2);
  v39 = nullptr;
  v42 = 0;
  v35 = v6;
  v40 = 0;
  v41 = nullptr;
  v36 = ((v4 & 8) != 0) | ((v30 | ((v32 | (v5 << 8)) << 8)) << 8);
  v37 = &off_1C62200;
  v7 = (_OWORD *)sub_186B270(0xC0u);
  ptr = v7;
  *v7 = 0;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  v7[4] = 0;
  v7[5] = 0;
  v7[6] = 0;
  v7[7] = 0;
  v7[8] = 0;
  v7[9] = 0;
  v7[10] = 0;
  v7[11] = 0;
  v44 = 8;
  v45 = 0;
  v8 = *(_QWORD *)v35.m128_u64[0];
  v34 = nullptr;
  v46 = v8;
  v47 = nullptr;
  sub_C32BE0((__int64 **)&v35, &v34, (v4 & 4) != 0);
  v9 = *a2;
  v10 = (void (__fastcall ***)(void *))v34;
  v11 = sub_1336AB0(*(_QWORD *)(*(_QWORD *)a2 + 8LL), v34);
  v12 = v11;
  if ( v11 )
    ++*(_DWORD *)(v11 + 8);
  v13 = *(void (****)(void))(*(_QWORD *)&v9 + 8LL);
  if ( v13 )
  {
    v14 = (*((_DWORD *)v13 + 2))-- == 1;
    if ( v14 )
    {
      (**v13)();
      sub_186B220(v13);
    }
  }
  v15 = *a2;
  *(_QWORD *)(*(_QWORD *)&v9 + 8LL) = v12;
  *(_DWORD *)(*(_QWORD *)&v15 + 120LL) = (*(_DWORD *)(*(_QWORD *)&v15 + 120LL) + 1) & 0x3FFFFFF
                                       | *(_DWORD *)(*(_QWORD *)&v15 + 120LL) & 0xFC000000;
  v16 = *a2;
  if ( *(_QWORD *)a2 )
    ++*(_DWORD *)(*(_QWORD *)&v16 + 32LL);
  v17 = *(_DWORD *)(a3 + 8);
  v18 = *(_DWORD *)(a3 + 12);
  if ( v17 >= v18 )
  {
    v31 = v16;
    v25 = 2 * v18;
    v26 = sub_186B270(8 * v25);
    v17 = *(_DWORD *)(a3 + 8);
    v27 = *(_QWORD **)a3;
    v19 = (_QWORD *)v26;
    v16 = v31;
    if ( v17 )
    {
      if ( v17 - 1 <= 2 || (_QWORD *)v26 == v27 + 1 )
      {
        for ( i = 0; i != v17; ++i )
          v19[i] = v27[i];
      }
      else
      {
        v28 = 0;
        do
        {
          *(__m128i *)&v19[v28] = _mm_loadu_si128((const __m128i *)&v27[v28]);
          v28 += 2;
        }
        while ( v28 != 2LL * (v17 >> 1) );
        if ( (v17 & 1) != 0 )
          v19[v17 & 0xFFFFFFFE] = v27[v17 & 0xFFFFFFFE];
      }
    }
    if ( v27 != (_QWORD *)(a3 + 16) && v27 )
    {
      sub_186B220(v27);
      v17 = *(_DWORD *)(a3 + 8);
      v16 = v31;
    }
    *(_QWORD *)a3 = v19;
    *(_DWORD *)(a3 + 12) = v25;
  }
  else
  {
    v19 = *(_QWORD **)a3;
  }
  *(double *)&v19[v17] = v16;
  *(_DWORD *)(a3 + 8) = v17 + 1;
  if ( v10 )
  {
    v14 = (*((_DWORD *)v10 + 2))-- == 1;
    if ( v14 )
    {
      (**v10)(v10);
      sub_186B220(v10);
    }
  }
  v20 = v47;
  if ( v47 )
  {
    v21 = (unsigned __int64)&v47[*((unsigned int *)v47 - 1)];
    if ( (unsigned __int64)v47 >= v21 )
      goto LABEL_21;
    do
    {
      while ( 1 )
      {
        v22 = *v20;
        if ( *v20 )
        {
          v23 = v46;
          v14 = (*(_DWORD *)(v22 + 8))-- == 1;
          if ( v14 )
            break;
        }
        if ( (unsigned __int64)++v20 >= v21 )
          goto LABEL_20;
      }
      sub_15D7BC0(v23, v22);
      ++v20;
    }
    while ( (unsigned __int64)v20 < v21 );
LABEL_20:
    v20 = v47;
    if ( v47 )
LABEL_21:
      sub_186B220(v20 - 1);
  }
  if ( ptr )
    sub_186B220(ptr);
  v37 = &off_1C62200;
  if ( v41 )
    sub_186B220(v41);
  if ( v39 )
    sub_186B220(v39);
  return sub_EE4A00(v33);
}

