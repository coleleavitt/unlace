__int64 __fastcall sub_1B7A6D0(_QWORD *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v5; // rax
  int v6; // r8d
  __int64 *v7; // rbx
  unsigned int *v8; // rax
  unsigned __int64 v9; // r13
  int **v10; // r15
  __int64 v11; // r14
  __int64 *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  int *v16; // rsi
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // r14
  _BYTE *v20; // r15
  unsigned __int64 v21; // r12
  __int64 v23; // r14
  unsigned __int64 v24; // r15
  int v25; // edx
  __int64 v26; // rax
  int v27; // r12d
  unsigned __int64 v28; // r14
  _QWORD *v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // [rsp+0h] [rbp-118h]
  int v32; // [rsp+0h] [rbp-118h]
  __m128i v33; // [rsp+10h] [rbp-108h] BYREF
  __int64 v34; // [rsp+20h] [rbp-F8h]
  __int64 v35; // [rsp+30h] [rbp-E8h]
  int v36; // [rsp+38h] [rbp-E0h]
  __int64 v37; // [rsp+40h] [rbp-D8h]
  void *ptr; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+58h] [rbp-C0h]
  _BYTE v40[184]; // [rsp+60h] [rbp-B8h] BYREF

  v5 = *a1;
  v6 = *(_DWORD *)(a2 + 12);
  v33.m128i_i32[2] = 0;
  v34 = 0;
  v7 = *(__int64 **)(v5 + 760);
  v33.m128i_i64[0] = 0;
  sub_1B585F0(v7[1], 2, &v33, 0, v6);
  sub_18C74E0(*v7, 6, 0, 4);
  v39 = 0x1000000000LL;
  v8 = *(unsigned int **)(a2 + 24);
  ptr = v40;
  if ( !v8 )
  {
    v9 = 0;
    v19 = 0;
    v20 = ptr;
    goto LABEL_28;
  }
  v9 = *v8;
  v10 = (int **)(v8 + 4);
  v11 = (__int64)&v8[2 * v9 + 4];
  if ( v9 <= 0x10 )
  {
    if ( v10 == (int **)v11 )
      goto LABEL_15;
    do
    {
LABEL_10:
      while ( 1 )
      {
        v16 = *v10;
        if ( *v10 )
          break;
        v17 = (unsigned int)v39;
        v18 = (unsigned int)v39 + 1LL;
        if ( v18 > HIDWORD(v39) )
        {
          sub_2237220(&ptr, v40, v18, 8);
          v17 = (unsigned int)v39;
        }
        ++v10;
        *((_QWORD *)ptr + v17) = 0;
        LODWORD(v39) = v39 + 1;
        if ( (int **)v11 == v10 )
          goto LABEL_14;
      }
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 760LL) + 8LL) + 27456LL) = v16[2];
      v31 = sub_1B7A300((__int64)a1, v16);
      v12 = *(__int64 **)(*a1 + 760LL);
      *(_DWORD *)(v12[1] + 27456) = 106;
      sub_1906AD0(*v12);
      v13 = v31;
      if ( v31 )
      {
        v14 = (unsigned int)v39;
        v15 = (unsigned int)v39 + 1LL;
        if ( v15 > HIDWORD(v39) )
        {
          sub_2237220(&ptr, v40, v15, 8);
          v14 = (unsigned int)v39;
          v13 = v31;
        }
        *((_QWORD *)ptr + v14) = v13;
        LODWORD(v39) = v39 + 1;
      }
      ++v10;
    }
    while ( (int **)v11 != v10 );
  }
  else
  {
    sub_2237220(&ptr, v40, *v8, 8);
    if ( v10 != (int **)v11 )
      goto LABEL_10;
  }
LABEL_14:
  v8 = *(unsigned int **)(a2 + 24);
  if ( !v8 )
  {
LABEL_16:
    v19 = 0;
    goto LABEL_17;
  }
LABEL_15:
  if ( !*((_BYTE *)v8 + 8) || !*(_QWORD *)&v8[2 * v8[1] + 4 + 2 * (unsigned __int64)*v8] )
    goto LABEL_16;
  sub_1AF3B60(*(__int64 **)(*a1 + 760LL), *(_DWORD *)(a2 + 8), 0);
  v23 = *a1;
  sub_1C36400(*a1, 0);
  v24 = sub_1B7AA40(
          a1,
          *(_QWORD *)(*(_QWORD *)(a2 + 24)
                    + 8
                    * (*(unsigned int *)(*(_QWORD *)(a2 + 24) + 4LL) + (unsigned __int64)**(unsigned int **)(a2 + 24))
                    + 16),
          0);
  sub_1C36470(v23);
  v19 = sub_1B14300(*(__int64 **)(*a1 + 760LL), v24, (__int64 *)ptr, (unsigned int)v39, a3, a4);
  if ( v19 == 1 )
  {
    v20 = ptr;
    v21 = 0;
    goto LABEL_19;
  }
LABEL_17:
  v20 = ptr;
  if ( (unsigned int)v39 != v9 )
  {
LABEL_18:
    v21 = 0;
    v19 = 1;
    goto LABEL_19;
  }
LABEL_28:
  v25 = *(_DWORD *)(a2 + 16);
  v26 = *a1;
  v35 = 0;
  v36 = 0;
  v27 = *(_DWORD *)(a2 + 12);
  v37 = 0;
  v32 = v25;
  v28 = v19 & 0xFFFFFFFFFFFFFFFELL;
  if ( !v28 )
    goto LABEL_18;
  v29 = (_QWORD *)sub_168B6C0(*(_QWORD *)(v26 + 760));
  v30 = sub_F006E0(v29, v27, v32, v20, v9, v28);
  v20 = ptr;
  v19 = v30;
  v21 = v30 & 0xFFFFFFFFFFFFFFFELL;
LABEL_19:
  if ( v20 != v40 )
    free(v20);
  sub_1B335B0(*(__int64 **)(*a1 + 760LL), v21, a3, *(double *)a4.m128_u64);
  return v19;
}
