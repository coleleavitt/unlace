unsigned __int64 __fastcall sub_1E02420(__int64 a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned int *v5; // rdi
  __int64 v6; // rax
  unsigned int *v7; // rdi
  unsigned __int64 *v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 *i; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int16 *v13; // rax
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rdx
  unsigned int *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rbp
  unsigned int *v19; // rbx
  unsigned __int16 *v20; // rax
  unsigned int *v21; // r12
  int v22; // eax
  unsigned __int16 *v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  _BYTE *v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rbx
  unsigned __int64 v30; // [rsp+18h] [rbp-B0h]
  void *ptr; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+28h] [rbp-A0h]
  _BYTE v33[32]; // [rsp+30h] [rbp-98h] BYREF
  void *v34; // [rsp+50h] [rbp-78h] BYREF
  __int64 v35; // [rsp+58h] [rbp-70h]
  _BYTE v36[104]; // [rsp+60h] [rbp-68h] BYREF

  v5 = *(unsigned int **)(a2 + 40);
  v34 = v36;
  v35 = 0x500000000LL;
  v6 = sub_EF5320(v5);
  v7 = *(unsigned int **)(a2 + 40);
  v8 = (unsigned __int64 *)(v6 + 8LL * v7[1]);
  for ( i = (unsigned __int64 *)sub_EF5320(v7); v8 != i; LODWORD(v35) = v35 + 1 )
  {
    while ( 1 )
    {
      v13 = sub_1DF2070(*(_QWORD *)a1, *i, *(_QWORD *)(a1 + 32), v9, v11, v12, a3, a4);
      v9 = HIDWORD(v35);
      v14 = (unsigned __int64)v13 & 0xFFFFFFFFFFFFFFFELL;
      v15 = (unsigned int)v35 + 1LL;
      if ( v15 > HIDWORD(v35) )
        break;
      ++i;
      *((_QWORD *)v34 + (unsigned int)v35) = v14;
      LODWORD(v35) = v35 + 1;
      if ( v8 == i )
        goto LABEL_6;
    }
    ++i;
    sub_2237220(&v34, v36, v15, 8);
    *((_QWORD *)v34 + (unsigned int)v35) = v14;
  }
LABEL_6:
  v16 = *(unsigned int **)(a2 + 40);
  v32 = 0x400000000LL;
  v17 = *v16;
  ptr = v33;
  v18 = (__int64)&v16[2 * v17 + 4];
  v19 = v16 + 4;
  if ( v19 != (unsigned int *)v18 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v21 = *(unsigned int **)v19;
        v22 = *(_DWORD *)(*(_QWORD *)v19 + 8LL);
        if ( v22 != 8 )
          break;
        v20 = sub_1DF2070(*(_QWORD *)a1, *((_QWORD *)v21 + 2), *(_QWORD *)(a1 + 32), v9, v11, v12, a3, a4);
        if ( (unsigned __int64)v20 <= 1 )
          goto LABEL_9;
        v24 = sub_1B13F10(
                *(__int64 **)(*(_QWORD *)a1 + 760LL),
                (_QWORD *)((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFFELL),
                *v21,
                v21[3],
                v21[1],
                a3,
                a4);
LABEL_14:
        v9 = (unsigned int)v32;
        v25 = (unsigned int)v32 + 1LL;
        if ( v25 > HIDWORD(v32) )
        {
          v30 = v24;
          sub_2237220(&ptr, v33, v25, 8);
          v9 = (unsigned int)v32;
          v24 = v30;
        }
        v19 += 2;
        *((_QWORD *)ptr + v9) = v24;
        LODWORD(v32) = v32 + 1;
        if ( (unsigned int *)v18 == v19 )
        {
LABEL_17:
          v26 = ptr;
          v27 = (unsigned int)v32;
          goto LABEL_18;
        }
      }
      if ( v22 != 5 )
      {
        v24 = 0;
        goto LABEL_14;
      }
      v23 = sub_1DF2070(*(_QWORD *)a1, *((_QWORD *)v21 + 2), *(_QWORD *)(a1 + 32), v9, v11, v12, a3, a4);
      if ( (unsigned __int64)v23 > 1 )
      {
        v24 = sub_1B117E0(
                *(__int64 **)(*(_QWORD *)a1 + 760LL),
                (_DWORD *)((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFFELL),
                *v21,
                v21[3],
                v21[1],
                a3,
                a4);
        if ( v24 )
          goto LABEL_14;
      }
LABEL_9:
      v19 += 2;
      if ( (unsigned int *)v18 == v19 )
        goto LABEL_17;
    }
  }
  v27 = 0;
  v26 = v33;
LABEL_18:
  v28 = sub_1B1E970(
          *(__int64 **)(*(_QWORD *)a1 + 760LL),
          (__int64 *)*(unsigned int *)(a2 + 24),
          (unsigned __int64 *)v34,
          (unsigned int)v35,
          (__int64)v26,
          v27,
          *(double *)a3.m128_u64,
          *(__m128i **)(a1 + 24));
  if ( ptr != v33 )
    free(ptr);
  if ( v34 != v36 )
    free(v34);
  return v28;
}
