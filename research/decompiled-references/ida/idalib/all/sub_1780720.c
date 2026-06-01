__int64 __fastcall sub_1780720(__int64 *a1, __int64 a2, double a3)
{
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdi
  unsigned int *v7; // rax
  unsigned __int64 v8; // r13
  __m128i **v9; // r15
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // r14
  _BYTE *v17; // rdi
  unsigned __int64 v18; // r12
  __int64 v20; // r14
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r15
  int v24; // r8d
  int v25; // ecx
  __m128i v26; // xmm0
  __int64 v27; // rax
  int v28; // esi
  __int64 v29; // rax
  __m128i *v30; // [rsp+0h] [rbp-138h]
  __int64 v31; // [rsp+0h] [rbp-138h]
  __int64 v32; // [rsp+10h] [rbp-128h] BYREF
  int v33; // [rsp+18h] [rbp-120h]
  __int64 v34; // [rsp+20h] [rbp-118h]
  __m128i v35; // [rsp+30h] [rbp-108h] BYREF
  __int64 v36; // [rsp+40h] [rbp-F8h]
  __m128i v37; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v38; // [rsp+60h] [rbp-D8h]
  void *ptr; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v40; // [rsp+78h] [rbp-C0h]
  _BYTE v41[184]; // [rsp+80h] [rbp-B8h] BYREF

  v4 = *a1;
  v5 = *(unsigned int *)(a2 + 12);
  v32 = 0;
  v6 = *(_QWORD *)(v4 + 760);
  v33 = 0;
  v34 = 0;
  sub_1B5B570(v6, 2, &v32, 0, v5);
  v40 = 0x1000000000LL;
  v7 = *(unsigned int **)(a2 + 24);
  ptr = v41;
  if ( v7 )
  {
    v8 = *v7;
    v9 = (__m128i **)(v7 + 4);
    v10 = (__int64)&v7[2 * v8 + 4];
    if ( v8 <= 0x10 )
    {
      if ( v9 == (__m128i **)v10 )
      {
LABEL_15:
        if ( *((_BYTE *)v7 + 8) && *(_QWORD *)&v7[2 * v7[1] + 4 + 2 * (unsigned __int64)*v7] )
        {
          sub_1AF3B60(*(_QWORD *)(*a1 + 760), *(unsigned int *)(a2 + 8), 0);
          v20 = *a1;
          sub_1C36400(*a1, 0);
          v23 = sub_177B9C0(
                  a1,
                  *(unsigned __int16 **)(*(_QWORD *)(a2 + 24)
                                       + 8
                                       * (*(unsigned int *)(*(_QWORD *)(a2 + 24) + 4LL)
                                        + (unsigned __int64)**(unsigned int **)(a2 + 24))
                                       + 16),
                  0,
                  a3,
                  *(unsigned int *)(*(_QWORD *)(a2 + 24) + 4LL),
                  v21,
                  v22);
          sub_1C36470(v20);
          v16 = sub_1B14300(*(_QWORD *)(*a1 + 760), v23, ptr, (unsigned int)v40);
          if ( v16 == 1 )
          {
            v17 = ptr;
            v18 = 0;
            goto LABEL_19;
          }
          goto LABEL_17;
        }
LABEL_16:
        LODWORD(v16) = 0;
LABEL_17:
        v17 = ptr;
        if ( v8 != (unsigned int)v40 )
        {
          v18 = 0;
          v16 = 1;
          goto LABEL_19;
        }
        goto LABEL_28;
      }
      do
      {
LABEL_10:
        while ( !*v9 )
        {
          v14 = (unsigned int)v40;
          v15 = (unsigned int)v40 + 1LL;
          if ( v15 > HIDWORD(v40) )
          {
            sub_2237220(&ptr, v41, v15, 8);
            v14 = (unsigned int)v40;
          }
          ++v9;
          *((_QWORD *)ptr + v14) = 0;
          LODWORD(v40) = v40 + 1;
          if ( (__m128i **)v10 == v9 )
            goto LABEL_14;
        }
        v30 = *v9;
        sub_1AF3B20(*(_QWORD *)(*a1 + 760), (*v9)->m128i_u32[2]);
        v31 = sub_177AD70(a1, v30, a3);
        sub_1AF3B30(*(_QWORD *)(*a1 + 760));
        v11 = v31;
        if ( v31 )
        {
          v12 = (unsigned int)v40;
          v13 = (unsigned int)v40 + 1LL;
          if ( v13 > HIDWORD(v40) )
          {
            sub_2237220(&ptr, v41, v13, 8);
            v12 = (unsigned int)v40;
            v11 = v31;
          }
          *((_QWORD *)ptr + v12) = v11;
          LODWORD(v40) = v40 + 1;
        }
        ++v9;
      }
      while ( (__m128i **)v10 != v9 );
    }
    else
    {
      sub_2237220(&ptr, v41, *v7, 8);
      if ( v9 != (__m128i **)v10 )
        goto LABEL_10;
    }
LABEL_14:
    v7 = *(unsigned int **)(a2 + 24);
    if ( !v7 )
      goto LABEL_16;
    goto LABEL_15;
  }
  LODWORD(v8) = 0;
  LODWORD(v16) = 0;
  LODWORD(v17) = (_DWORD)ptr;
LABEL_28:
  v35.m128i_i64[0] = 0;
  v24 = *(_DWORD *)(a2 + 16);
  v35.m128i_i32[2] = 0;
  v25 = *(_DWORD *)(a2 + 12);
  v26 = _mm_load_si128(&v35);
  v27 = *a1;
  v36 = 0;
  v38 = 0;
  v28 = *(_DWORD *)(a2 + 8);
  v37 = v26;
  v29 = sub_1AF4010(
          *(_QWORD *)(v27 + 760),
          v28,
          (unsigned int)&v37,
          (_DWORD)v17,
          v8,
          (unsigned int)v16 & 0xFFFFFFFE,
          v25,
          v24);
  v17 = ptr;
  v16 = v29;
  v18 = v29 & 0xFFFFFFFFFFFFFFFELL;
LABEL_19:
  if ( v17 != v41 )
    free(v17);
  sub_1B335B0(*(_QWORD *)(*a1 + 760), v18);
  return v16;
}
