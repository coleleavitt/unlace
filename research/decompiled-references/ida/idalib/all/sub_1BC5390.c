__int64 __fastcall sub_1BC5390(__int64 *a1, __int64 a2, __m128 a3, __m128 a4, __m128i a5)
{
  __int64 v6; // rax
  int v7; // r8d
  __int64 *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int *v11; // rax
  unsigned __int64 v12; // r13
  __m128i **v13; // r15
  __int64 v14; // r14
  unsigned __int64 v15; // rdx
  __int64 *v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __m128i *v19; // rsi
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // r14
  _BYTE *v23; // r15
  unsigned __int64 v24; // r12
  __int64 v26; // r14
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // r15
  int v30; // edx
  __int64 v31; // rax
  int v32; // r12d
  unsigned __int64 v33; // r14
  _QWORD *v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // [rsp+0h] [rbp-118h]
  int v37; // [rsp+0h] [rbp-118h]
  __m128i v38; // [rsp+10h] [rbp-108h] BYREF
  __int64 v39; // [rsp+20h] [rbp-F8h]
  __int64 v40; // [rsp+30h] [rbp-E8h]
  int v41; // [rsp+38h] [rbp-E0h]
  __int64 v42; // [rsp+40h] [rbp-D8h]
  void *ptr; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v44; // [rsp+58h] [rbp-C0h]
  _BYTE v45[184]; // [rsp+60h] [rbp-B8h] BYREF

  v6 = *a1;
  v7 = *(_DWORD *)(a2 + 12);
  v38.m128i_i32[2] = 0;
  v39 = 0;
  v8 = *(__int64 **)(v6 + 760);
  v38.m128i_i64[0] = 0;
  sub_1B585F0(v8[1], 2, &v38, 0, v7);
  sub_18C74E0(*v8, 6, 0, 4);
  v44 = 0x1000000000LL;
  v11 = *(unsigned int **)(a2 + 24);
  ptr = v45;
  if ( !v11 )
  {
    v12 = 0;
    v22 = 0;
    v23 = ptr;
    goto LABEL_28;
  }
  v12 = *v11;
  v13 = (__m128i **)(v11 + 4);
  v14 = (__int64)&v11[2 * v12 + 4];
  if ( v12 <= 0x10 )
  {
    if ( v13 == (__m128i **)v14 )
      goto LABEL_15;
    do
    {
LABEL_10:
      while ( 1 )
      {
        v19 = *v13;
        if ( *v13 )
          break;
        v20 = (unsigned int)v44;
        v9 = HIDWORD(v44);
        v21 = (unsigned int)v44 + 1LL;
        if ( v21 > HIDWORD(v44) )
        {
          sub_2237220(&ptr, v45, v21, 8);
          v20 = (unsigned int)v44;
        }
        ++v13;
        *((_QWORD *)ptr + v20) = 0;
        LODWORD(v44) = v44 + 1;
        if ( (__m128i **)v14 == v13 )
          goto LABEL_14;
      }
      v15 = v19->m128i_u32[2];
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 760) + 8LL) + 27456LL) = v15;
      v36 = sub_1BC2C80(a1, v19, v15, v9, v10, a3, a4, a5);
      v16 = *(__int64 **)(*a1 + 760);
      *(_DWORD *)(v16[1] + 27456) = 106;
      sub_1906AD0(*v16);
      v17 = v36;
      if ( v36 )
      {
        v9 = (unsigned int)v44;
        v18 = (unsigned int)v44 + 1LL;
        if ( v18 > HIDWORD(v44) )
        {
          sub_2237220(&ptr, v45, v18, 8);
          v9 = (unsigned int)v44;
          v17 = v36;
        }
        *((_QWORD *)ptr + v9) = v17;
        LODWORD(v44) = v44 + 1;
      }
      ++v13;
    }
    while ( (__m128i **)v14 != v13 );
  }
  else
  {
    sub_2237220(&ptr, v45, *v11, 8);
    if ( v13 != (__m128i **)v14 )
      goto LABEL_10;
  }
LABEL_14:
  v11 = *(unsigned int **)(a2 + 24);
  if ( !v11 )
  {
LABEL_16:
    v22 = 0;
    goto LABEL_17;
  }
LABEL_15:
  if ( !*((_BYTE *)v11 + 8) || !*(_QWORD *)&v11[2 * v11[1] + 4 + 2 * (unsigned __int64)*v11] )
    goto LABEL_16;
  sub_1AF3B60(*(__int64 **)(*a1 + 760), *(_DWORD *)(a2 + 8), 0);
  v26 = *a1;
  sub_1C36400(*a1, 0);
  v29 = sub_1B71AD0(
          a1,
          *(const __m128i **)(*(_QWORD *)(a2 + 24)
                            + 8
                            * (*(unsigned int *)(*(_QWORD *)(a2 + 24) + 4LL)
                             + (unsigned __int64)**(unsigned int **)(a2 + 24))
                            + 16),
          0,
          a3,
          a4,
          *(unsigned int *)(*(_QWORD *)(a2 + 24) + 4LL),
          v27,
          v28);
  sub_1C36470(v26);
  v22 = sub_1B14300(*(__int64 **)(*a1 + 760), v29, (__int64 *)ptr, (unsigned int)v44, a3, a4);
  if ( v22 == 1 )
  {
    v23 = ptr;
    v24 = 0;
    goto LABEL_19;
  }
LABEL_17:
  v23 = ptr;
  if ( (unsigned int)v44 != v12 )
  {
LABEL_18:
    v24 = 0;
    v22 = 1;
    goto LABEL_19;
  }
LABEL_28:
  v30 = *(_DWORD *)(a2 + 16);
  v31 = *a1;
  v40 = 0;
  v41 = 0;
  v32 = *(_DWORD *)(a2 + 12);
  v42 = 0;
  v37 = v30;
  v33 = v22 & 0xFFFFFFFFFFFFFFFELL;
  if ( !v33 )
    goto LABEL_18;
  v34 = (_QWORD *)sub_168B6C0(*(_QWORD *)(v31 + 760));
  v35 = sub_F006E0(v34, v32, v37, v23, v12, v33);
  v23 = ptr;
  v22 = v35;
  v24 = v35 & 0xFFFFFFFFFFFFFFFELL;
LABEL_19:
  if ( v23 != v45 )
    free(v23);
  sub_1B335B0(*(__int64 **)(*a1 + 760), v24, a3, *(double *)a4.m128_u64);
  return v22;
}
