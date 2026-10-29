__int64 __fastcall sub_1C004B0(
        __int64 a1,
        __int64 a2,
        __m128 *a3,
        int a4,
        __int64 a5,
        unsigned __int64 a6,
        __m128 a7,
        __m128 a8,
        unsigned __int8 (__fastcall *a9)(__int64, __int64),
        __int64 a10)
{
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rdx
  char v18; // al
  unsigned __int64 *v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int64 *v23; // r13
  __int64 v24; // rbp
  unsigned __int64 *v25; // rax
  unsigned __int64 *v26; // rax
  unsigned __int64 v28; // rdx
  __int128 v29; // [rsp-20h] [rbp-A8h]
  __int128 v30; // [rsp-20h] [rbp-A8h]
  __int128 v31; // [rsp-10h] [rbp-98h]
  __int128 v32; // [rsp-10h] [rbp-98h]
  unsigned __int64 *v33; // [rsp+8h] [rbp-80h]
  __int64 v36; // [rsp+20h] [rbp-68h]
  __int64 v38; // [rsp+38h] [rbp-50h]
  __int64 v39; // [rsp+48h] [rbp-40h]

  sub_1BF2630(a2, a3, *(double *)a7.m128_u64, a8);
  v36 = a1 + 16;
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0x2000000000LL;
  if ( a4 )
  {
    v13 = *(unsigned int *)(a2 + 8);
  }
  else
  {
    v13 = *(unsigned int *)(a2 + 8);
    v28 = v13 + (*(_DWORD *)(a2 + 2864) & 0x3FFFFFFF);
    if ( v28 > 0x20 )
    {
      sub_2237220(a1, v36, v28, 8);
      v13 = *(unsigned int *)(a2 + 8);
    }
  }
  v14 = *(_QWORD *)a2;
  v15 = *(_QWORD *)a2 + 168 * v13;
  if ( *(_QWORD *)a2 != v15 )
  {
    while ( 1 )
    {
      if ( !a9(a10, v14) )
        goto LABEL_9;
      if ( a4 == 1 )
      {
        if ( (*(_BYTE *)(v14 + 104) & 1) != 0 )
          goto LABEL_7;
        v14 += 168;
        if ( v15 == v14 )
          break;
      }
      else
      {
        if ( a4 )
        {
          if ( a4 == 2 && (*(_BYTE *)(v14 + 104) & 2) == 0 )
            goto LABEL_9;
        }
        else
        {
          v18 = *(_BYTE *)(v14 + 104);
          if ( (v18 & 1) == 0 )
          {
            if ( !*(_QWORD *)v14 && (v18 & 4) == 0 )
              goto LABEL_9;
            sub_1BFFC60(a3, v14, a5, a6, *(_DWORD *)(a2 + 2972), a7, a8);
            v16 = *(unsigned int *)(a1 + 8);
            v17 = v16 + 1;
            if ( v16 + 1 <= (unsigned __int64)*(unsigned int *)(a1 + 12) )
              goto LABEL_8;
LABEL_16:
            sub_2237220(a1, v36, v17, 8);
            v16 = *(unsigned int *)(a1 + 8);
            goto LABEL_8;
          }
        }
LABEL_7:
        v16 = *(unsigned int *)(a1 + 8);
        v17 = v16 + 1;
        if ( v16 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
          goto LABEL_16;
LABEL_8:
        *(_QWORD *)(*(_QWORD *)a1 + 8 * v16) = v14;
        ++*(_DWORD *)(a1 + 8);
LABEL_9:
        v14 += 168;
        if ( v15 == v14 )
          break;
      }
    }
  }
  LODWORD(v38) = 0;
  v19 = *(unsigned __int64 **)a1;
  v20 = *(unsigned int *)(a2 + 2972);
  v21 = a6;
  v22 = 8LL * *(unsigned int *)(a1 + 8);
  LODWORD(v39) = *(_DWORD *)(a2 + 2972);
  v23 = (unsigned __int64 *)(*(_QWORD *)a1 + v22);
  v24 = v22 >> 3;
  if ( v22 )
  {
    while ( 1 )
    {
      v25 = (unsigned __int64 *)operator new(8 * v24, (const std::nothrow_t *)&std::nothrow);
      if ( v25 )
        break;
      v24 >>= 1;
      if ( !v24 )
        goto LABEL_25;
    }
    *((_QWORD *)&v31 + 1) = v39;
    *(_QWORD *)&v31 = a6;
    *((_QWORD *)&v29 + 1) = v38;
    *(_QWORD *)&v29 = a3;
    v33 = v25;
    sub_1BE4150(v19, v23, v25, (void *)v24, v11, v12, v29, v31);
    v26 = v33;
  }
  else
  {
LABEL_25:
    *((_QWORD *)&v32 + 1) = v39;
    *(_QWORD *)&v32 = a6;
    *((_QWORD *)&v30 + 1) = v38;
    *(_QWORD *)&v30 = a3;
    sub_1BD2110(v19, v23, v20, v21, v11, v12, v30, v32);
    v26 = nullptr;
  }
  operator delete(v26, (const std::nothrow_t *)&std::nothrow);
  return a1;
}
