__int64 __fastcall sub_1C00200(
        __int64 a1,
        __int64 a2,
        __m128 *a3,
        int a4,
        __int64 a5,
        unsigned __int64 a6,
        __m128 a7,
        __m128 a8,
        int a9,
        unsigned __int8 (__fastcall *a10)(__int64, __int64),
        __int64 a11)
{
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rdx
  char v19; // al
  unsigned __int64 *v20; // r12
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 *v24; // r13
  __int64 v25; // rbp
  unsigned __int64 *v26; // rax
  unsigned __int64 *v27; // rax
  unsigned __int64 v29; // rdx
  __int128 v30; // [rsp-20h] [rbp-A8h]
  __int128 v31; // [rsp-20h] [rbp-A8h]
  __int128 v32; // [rsp-10h] [rbp-98h]
  __int128 v33; // [rsp-10h] [rbp-98h]
  unsigned __int64 *v34; // [rsp+8h] [rbp-80h]
  __int64 v37; // [rsp+20h] [rbp-68h]
  __int64 v39; // [rsp+38h] [rbp-50h]
  __int64 v40; // [rsp+48h] [rbp-40h]

  sub_1BF2630(a2, a3, *(double *)a7.m128_u64, a8);
  v37 = a1 + 16;
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0x2000000000LL;
  if ( a4 )
  {
    v14 = *(unsigned int *)(a2 + 8);
  }
  else
  {
    v14 = *(unsigned int *)(a2 + 8);
    v29 = v14 + (*(_DWORD *)(a2 + 2864) & 0x3FFFFFFF);
    if ( v29 > 0x20 )
    {
      sub_2237220(a1, v37, v29, 8);
      v14 = *(unsigned int *)(a2 + 8);
    }
  }
  v15 = *(_QWORD *)a2;
  v16 = *(_QWORD *)a2 + 168 * v14;
  if ( *(_QWORD *)a2 != v16 )
  {
    while ( 1 )
    {
      if ( !a10(a11, v15) )
        goto LABEL_9;
      if ( a4 == 1 )
      {
        if ( (*(_BYTE *)(v15 + 104) & 1) != 0 )
          goto LABEL_7;
        v15 += 168;
        if ( v15 == v16 )
          break;
      }
      else
      {
        if ( a4 )
        {
          if ( a4 == 2 && (*(_BYTE *)(v15 + 104) & 2) == 0 )
            goto LABEL_9;
        }
        else
        {
          v19 = *(_BYTE *)(v15 + 104);
          if ( (v19 & 1) == 0 )
          {
            if ( !*(_QWORD *)v15 && (v19 & 4) == 0 )
              goto LABEL_9;
            sub_1BFFC60(a3, v15, a5, a6, *(_DWORD *)(a2 + 2972), a7, a8);
            v17 = *(unsigned int *)(a1 + 8);
            v18 = v17 + 1;
            if ( v17 + 1 <= (unsigned __int64)*(unsigned int *)(a1 + 12) )
              goto LABEL_8;
LABEL_16:
            sub_2237220(a1, v37, v18, 8);
            v17 = *(unsigned int *)(a1 + 8);
            goto LABEL_8;
          }
        }
LABEL_7:
        v17 = *(unsigned int *)(a1 + 8);
        v18 = v17 + 1;
        if ( v17 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
          goto LABEL_16;
LABEL_8:
        *(_QWORD *)(*(_QWORD *)a1 + 8 * v17) = v15;
        ++*(_DWORD *)(a1 + 8);
LABEL_9:
        v15 += 168;
        if ( v15 == v16 )
          break;
      }
    }
  }
  LODWORD(v39) = 0;
  v20 = *(unsigned __int64 **)a1;
  v21 = *(unsigned int *)(a2 + 2972);
  v22 = a6;
  v23 = 8LL * *(unsigned int *)(a1 + 8);
  LODWORD(v40) = *(_DWORD *)(a2 + 2972);
  v24 = (unsigned __int64 *)(*(_QWORD *)a1 + v23);
  v25 = v23 >> 3;
  if ( v23 )
  {
    while ( 1 )
    {
      v26 = (unsigned __int64 *)operator new(8 * v25, (const std::nothrow_t *)&std::nothrow);
      if ( v26 )
        break;
      v25 >>= 1;
      if ( !v25 )
        goto LABEL_25;
    }
    *((_QWORD *)&v32 + 1) = v40;
    *(_QWORD *)&v32 = a6;
    *((_QWORD *)&v30 + 1) = v39;
    *(_QWORD *)&v30 = a3;
    v34 = v26;
    sub_1BE4150(v20, v24, v26, (void *)v25, v12, v13, v30, v32);
    v27 = v34;
  }
  else
  {
LABEL_25:
    *((_QWORD *)&v33 + 1) = v40;
    *(_QWORD *)&v33 = a6;
    *((_QWORD *)&v31 + 1) = v39;
    *(_QWORD *)&v31 = a3;
    sub_1BD2110(v20, v24, v21, v22, v12, v13, v31, v33);
    v27 = nullptr;
  }
  operator delete(v27, (const std::nothrow_t *)&std::nothrow);
  return a1;
}
