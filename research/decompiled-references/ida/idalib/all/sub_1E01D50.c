__m128 *__fastcall sub_1E01D50(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  char v5; // al
  bool v6; // zf
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v9; // r13
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // r15
  _QWORD *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // r13
  __int64 v18; // r12
  __int64 v19; // r9
  __int64 v20; // rax
  __int32 v21; // r8d
  char v22; // r12
  char v23; // al
  char v24; // dl
  unsigned __int8 v25; // r13
  unsigned __int64 v26; // r15
  unsigned int v27; // r14d
  int v28; // eax
  __int64 v29; // rcx
  __m128 *v30; // r12
  __int8 v31; // al
  __int64 v32; // r13
  __int64 v33; // rax
  __int64 v34; // r14
  __int64 v35; // rax
  const __m128i *v36; // rsi
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // [rsp-8h] [rbp-A0h]
  unsigned __int8 v43; // [rsp+8h] [rbp-90h]
  int v44; // [rsp+8h] [rbp-90h]
  __int32 v45; // [rsp+10h] [rbp-88h]
  __int32 v46; // [rsp+18h] [rbp-80h]
  char v47; // [rsp+23h] [rbp-75h] BYREF
  int v48; // [rsp+24h] [rbp-74h] BYREF
  __int64 v49; // [rsp+28h] [rbp-70h] BYREF
  __m128i ptr; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v51[11]; // [rsp+40h] [rbp-58h] BYREF

  v5 = *(_BYTE *)(a2 + 60);
  v48 = 0;
  if ( (v5 & 4) != 0 && a2 != -80 )
  {
    v6 = sub_BBE5D0(a2) == 0;
    v5 = *(_BYTE *)(a2 + 60);
    if ( !v6 && (v5 & 4) != 0 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(a2 + 88) + 64LL);
      if ( v7 )
      {
        v8 = v7 + 16;
        v9 = v7 + 16 + 32LL * *(unsigned int *)(v7 + 8);
        if ( v7 + 16 != v9 )
        {
          while ( !(unsigned __int8)sub_F1D5E0(v8) )
          {
            v8 += 32;
            if ( v9 == v8 )
              goto LABEL_18;
          }
          if ( !*(_DWORD *)(a2 + 64) )
          {
            v13 = *(_QWORD *)(a2 + 88);
            v14 = v51;
            ptr.m128i_i64[1] = 0x200000000LL;
            ptr.m128i_i64[0] = (__int64)v51;
            v15 = *(_QWORD *)(v13 + 64);
            v16 = v15 + 16;
            v17 = v15 + 16 + 32LL * *(unsigned int *)(v15 + 8);
            if ( v15 + 16 == v17 )
            {
              v18 = *a1;
              v19 = a1[4];
              v47 = 1;
              v21 = 0;
              LOBYTE(v49) = 0;
            }
            else
            {
              do
              {
                v42 = *(_QWORD *)(v16 + 24);
                v16 += 32;
                *(double *)a3.m128_u64 = sub_1E4C910(
                                           *a1,
                                           (unsigned int)&ptr,
                                           v10,
                                           (_DWORD)v14,
                                           v11,
                                           v12,
                                           *(_QWORD *)(v16 - 32),
                                           *(_QWORD *)(v16 - 24),
                                           *(_QWORD *)(v16 - 16),
                                           v42);
              }
              while ( v17 != v16 );
              v13 = *(_QWORD *)(a2 + 88);
              v18 = *a1;
              v47 = 1;
              v19 = a1[4];
              LODWORD(v14) = ptr.m128i_i32[0];
              v20 = *(_QWORD *)(v13 + 64);
              v21 = ptr.m128i_i32[2];
              LOBYTE(v49) = 0;
              if ( !v20 )
              {
                v46 = ptr.m128i_i32[2];
                v45 = ptr.m128i_i32[0];
                v44 = v19;
                sub_B85A10(v13 + 24);
                LODWORD(v19) = v44;
                LODWORD(v14) = v45;
                v21 = v46;
                v13 = *(_QWORD *)(a2 + 88);
              }
            }
            if ( (unsigned __int8)sub_1E54D70(
                                    v18,
                                    *(_DWORD *)(*(_QWORD *)(a2 + 80) + 20LL),
                                    *(_DWORD *)(v13 + 32),
                                    (_DWORD)v14,
                                    v21,
                                    v19,
                                    (__int64)&v47,
                                    (__int64)&v49,
                                    (__int64)&v48) )
            {
              if ( (_QWORD *)ptr.m128i_i64[0] != v51 )
                free((void *)ptr.m128i_i64[0]);
              return nullptr;
            }
            if ( (_QWORD *)ptr.m128i_i64[0] != v51 )
              free((void *)ptr.m128i_i64[0]);
          }
LABEL_18:
          v5 = *(_BYTE *)(a2 + 60);
        }
      }
    }
  }
  v22 = 0;
  v43 = (v5 & 2) != 0;
  v23 = sub_BBE5D0(a2);
  v24 = *(_BYTE *)(a2 + 60);
  v25 = v23;
  if ( (v24 & 1) != 0 )
    v22 = (v24 & 2) == 0;
  v26 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 40) & 7) != 0 )
    v26 = 0;
  v27 = sub_BBE5B0(a2);
  v28 = sub_BBE590(a2);
  v30 = (__m128 *)sub_BBE1D0(
                    *(_QWORD **)(*a1 + 248),
                    a1[3],
                    *(_DWORD *)(a2 + 56),
                    *(_DWORD *)(a2 + 24),
                    v28 - *(_DWORD *)(a1[4] + 8),
                    v27,
                    v26,
                    v22,
                    v25,
                    v43,
                    v48);
  v31 = v30[1].m128_i8[13];
  v30[1].m128_i8[13] = v31 & 0x9F;
  v30[1].m128_i8[13] = *(_BYTE *)(a2 + 29) & 2 | v31 & 0x9D;
  v32 = *a1;
  if ( (*(_BYTE *)(a2 + 60) & 4) == 0 || a2 == -80 || (*(_BYTE *)(a2 + 29) & 2) != 0 )
  {
    v33 = *(_QWORD *)(a2 + 72);
    if ( (v33 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      goto LABEL_34;
    goto LABEL_27;
  }
  if ( (unsigned __int8)sub_1DD7690(*a1, v30, (__int64 *)(a2 + 80), a1[4], *((unsigned __int8 *)a1 + 56), a3, a4) )
    return nullptr;
  v33 = *(_QWORD *)(a2 + 72);
  v32 = *a1;
  if ( (v33 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    goto LABEL_34;
LABEL_27:
  if ( ((v33 >> 1) & 3) != 1 )
  {
    v34 = a1[4];
    ptr.m128i_i64[1] = 0;
    ptr.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
    v51[1] = 0;
    v49 = 0;
    if ( !(_BYTE)byte_2CCC480 && __cxa_guard_acquire(&byte_2CCC480) )
    {
      qword_2CCC4A0 &= 0xFFFFFFFE00000000LL;
      qword_2CCC4A8 = 0;
      qword_2CCC4B8 = 0;
      __cxa_guard_release(&byte_2CCC480);
    }
    v35 = *(_QWORD *)(a2 + 72);
    v36 = (const __m128i *)(v35 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 72) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v40 = (v35 >> 1) & 3;
      if ( v40 == 1 )
      {
        v41 = v36[4].m128i_i64[1];
        v36 = nullptr;
        if ( !v41 )
          goto LABEL_31;
        v36 = (const __m128i *)(v41 & 0xFFFFFFFFFFFFFFF8LL);
        if ( ((v41 >> 1) & 3) != 2 || !v36 )
          goto LABEL_31;
      }
      else if ( v40 != 2 )
      {
        goto LABEL_31;
      }
      v36 = (const __m128i *)v36->m128i_i64[1];
    }
    else
    {
      v36 = (const __m128i *)&qword_2CCC4A0;
    }
LABEL_31:
    if ( !(unsigned __int8)sub_1DD6BB0(v32, v36, v34, &ptr, 0, &v49, *(double *)a3.m128_u64, a4) )
      sub_BC48F0((__int64)v30, *(_QWORD **)(*a1 + 248), &ptr, v29, v37, v38);
    v32 = *a1;
  }
LABEL_34:
  sub_1DC20B0(*(_QWORD *)(v32 + 11280), a2, (__int64)v30, v29);
  return v30;
}
