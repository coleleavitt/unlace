__int64 __fastcall sub_1966590(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned int *v5; // rax
  __m128i **v6; // r15
  unsigned __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // r13
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __m128i *v12; // r13
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  _BYTE *v16; // rdi
  __int64 v17; // rbx
  __int64 v19; // rbp
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r15
  __int64 v23; // r9
  int v24; // r8d
  int v25; // ecx
  int v26; // esi
  __m128i v27; // xmm0
  __int64 v28; // r10
  __int64 v29; // rax
  unsigned __int64 v30; // [rsp+0h] [rbp-118h]
  __m128i v31; // [rsp+10h] [rbp-108h] BYREF
  __int64 v32; // [rsp+20h] [rbp-F8h]
  __m128i v33; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v34; // [rsp+40h] [rbp-D8h]
  void *ptr; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+58h] [rbp-C0h]
  _BYTE v37[184]; // [rsp+60h] [rbp-B8h] BYREF

  v36 = 0x1000000000LL;
  v5 = *(unsigned int **)(a2 + 24);
  ptr = v37;
  if ( v5 )
  {
    v6 = (__m128i **)(v5 + 4);
    v7 = *v5;
    v30 = v7;
    v8 = (__int64)&v5[2 * v7 + 4];
    if ( v7 <= 0x10 )
    {
      if ( v6 == (__m128i **)v8 )
      {
LABEL_15:
        if ( *((_BYTE *)v5 + 8) && *(_QWORD *)&v5[2 * v5[1] + 4 + 2 * (unsigned __int64)*v5] )
        {
          sub_1AF3B60(*(_QWORD *)(*a1 + 760), *(unsigned int *)(a2 + 8), 0);
          v19 = *a1;
          sub_1C36400(*a1, 0);
          v22 = sub_1961D20(
                  a1,
                  *(unsigned __int16 **)(*(_QWORD *)(a2 + 24)
                                       + 8
                                       * (*(unsigned int *)(*(_QWORD *)(a2 + 24) + 4LL)
                                        + (unsigned __int64)**(unsigned int **)(a2 + 24))
                                       + 16),
                  0,
                  a3,
                  a4,
                  *(unsigned int *)(*(_QWORD *)(a2 + 24) + 4LL),
                  v20,
                  v21);
          sub_1C36470(v19);
          v15 = sub_1B14300(*(_QWORD *)(*a1 + 760), v22, ptr, (unsigned int)v36);
          if ( v15 == 1 )
          {
            v17 = 1;
            v16 = ptr;
            goto LABEL_19;
          }
          goto LABEL_17;
        }
LABEL_16:
        LODWORD(v15) = 0;
LABEL_17:
        v16 = ptr;
        if ( (unsigned int)v36 != v30 )
        {
          v17 = 1;
          goto LABEL_19;
        }
        goto LABEL_28;
      }
      do
      {
LABEL_10:
        while ( 1 )
        {
          v12 = *v6;
          if ( *v6 )
            break;
          v13 = (unsigned int)v36;
          v14 = (unsigned int)v36 + 1LL;
          if ( v14 > HIDWORD(v36) )
          {
            sub_2237220(&ptr, v37, v14, 8);
            v13 = (unsigned int)v36;
          }
          ++v6;
          *((_QWORD *)ptr + v13) = 0;
          LODWORD(v36) = v36 + 1;
          if ( (__m128i **)v8 == v6 )
            goto LABEL_14;
        }
        sub_1AF3B20(*(_QWORD *)(*a1 + 760), v12->m128i_u32[2]);
        v9 = sub_1959330(a1, v12, a3, a4);
        sub_1AF3B30(*(_QWORD *)(*a1 + 760));
        if ( v9 )
        {
          v10 = (unsigned int)v36;
          v11 = (unsigned int)v36 + 1LL;
          if ( v11 > HIDWORD(v36) )
          {
            sub_2237220(&ptr, v37, v11, 8);
            v10 = (unsigned int)v36;
          }
          *((_QWORD *)ptr + v10) = v9;
          LODWORD(v36) = v36 + 1;
        }
        ++v6;
      }
      while ( (__m128i **)v8 != v6 );
    }
    else
    {
      sub_2237220(&ptr, v37, v7, 8);
      if ( v6 != (__m128i **)v8 )
        goto LABEL_10;
    }
LABEL_14:
    v5 = *(unsigned int **)(a2 + 24);
    if ( !v5 )
      goto LABEL_16;
    goto LABEL_15;
  }
  LODWORD(v30) = 0;
  LODWORD(v15) = 0;
  LODWORD(v16) = (_DWORD)ptr;
LABEL_28:
  v23 = *a1;
  v24 = *(_DWORD *)(a2 + 16);
  v25 = *(_DWORD *)(a2 + 12);
  v26 = *(_DWORD *)(a2 + 8);
  v31.m128i_i64[0] = 0;
  v31.m128i_i32[2] = 0;
  v27 = _mm_load_si128(&v31);
  v32 = 0;
  v28 = *(_QWORD *)(v23 + 760);
  v33 = v27;
  v34 = 0;
  v29 = sub_1AF4010(v28, v26, (unsigned int)&v33, (_DWORD)v16, v30, (unsigned int)v15 & 0xFFFFFFFE, v25, v24);
  v16 = ptr;
  v17 = v29;
LABEL_19:
  if ( v16 != v37 )
    free(v16);
  return v17;
}
