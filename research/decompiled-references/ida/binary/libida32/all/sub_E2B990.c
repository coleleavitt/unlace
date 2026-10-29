void __fastcall sub_E2B990(
        __int64 *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __int64 a8)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // r8
  int v12; // r9d
  __int64 v13; // r12
  _QWORD *v14; // r13
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r12
  __int64 v20; // r14
  __int64 v21; // rdi
  _BYTE *v22; // rax
  int v23; // edx
  __int64 v24; // r12
  __int64 v25; // r13
  __int64 v26; // rdi
  _BYTE *v27; // rax
  __int64 v28; // rsi
  char v29; // bp
  unsigned __int64 v30; // rax
  __int64 v31; // r12
  __int64 v32; // r14
  __int128 v33; // [rsp-20h] [rbp-118h]
  __int64 v34; // [rsp-10h] [rbp-108h]
  __m128i v35; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v36; // [rsp+10h] [rbp-E8h]
  __int64 v37; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v38; // [rsp+28h] [rbp-D0h] BYREF
  __int64 v39; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v40; // [rsp+38h] [rbp-C0h]
  void *v41; // [rsp+40h] [rbp-B8h] BYREF
  unsigned int v42; // [rsp+48h] [rbp-B0h]
  char v43; // [rsp+4Ch] [rbp-ACh]
  void *v44; // [rsp+80h] [rbp-78h] BYREF
  unsigned int v45; // [rsp+88h] [rbp-70h]

  if ( !(unsigned __int8)sub_EF9810(&a7) || (unsigned __int8)sub_EF97F0(&a7) )
  {
    sub_A92E70(&v35, *(_QWORD **)(*a1 + 8), &a7);
    a7 = _mm_loadu_si128(&v35);
    a8 = v36;
  }
  switch ( a7.m128i_i32[0] & 0x7FFFFFFF )
  {
    case 1:
      sub_E1BE40((__int64)a1, a7.m128i_i64[1], v9, v10, v11);
      return;
    case 2:
      v13 = a8;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a7.m128i_i64[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 48 )
      {
        v44 = *(void **)(a8 + 48);
        v30 = sub_6B4E70(&v44);
        sub_E2FEE0(a1, v30, v13 + 64, 1, a2);
        return;
      }
      v14 = *(_QWORD **)(*a1 + 8);
      BYTE4(v41) &= ~1u;
      LODWORD(v41) = 0;
      if ( (unsigned __int8)sub_B4F1E0(a8) )
      {
        BYTE4(v44) &= ~1u;
        LODWORD(v44) = 0;
        sub_A2FE60((__int64)&v44, v13, 0, 0, 0);
        sub_A2BFE0((__int64)&v41, (__int64)&v44);
        if ( (unsigned int)v44 <= 1 )
          goto LABEL_12;
        goto LABEL_33;
      }
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 48) & 0xFFFFFFFFFFFFFFF0LL)
                                                              + 8LL)
                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                      + 16LL)
                           - 2) <= 4u
        && (v15 = a7.m128i_u64[1],
            v16 = sub_A51FE0(v14, *(_QWORD *)(v13 + 48)),
            (unsigned __int8)sub_A9C330(v14, v16, v15, v17, v18))
        && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8) + 2320LL) + 212LL) > 0x5Fu )
      {
        v38 = 0;
        v37 = 0;
        sub_A2B560((__int64)&v39, v13, 0, 0);
        v31 = v40;
        v32 = v39;
        LODWORD(v44) = 0;
        BYTE4(v44) &= ~1u;
        sub_A2D690((__int64)&v44);
        sub_A2D530((__int64)&v44, v32, v31, &v37, &v38, 1, 0, 0);
      }
      else
      {
        v38 = 0;
        sub_A2B560((__int64)&v39, v13, 0, 0);
        v19 = v40;
        v20 = v39;
        LODWORD(v44) = 0;
        BYTE4(v44) &= ~1u;
        sub_A2D690((__int64)&v44);
        sub_A2D530((__int64)&v44, v20, v19, &v38, nullptr, 0, 0, 0);
      }
      sub_A2BFE0((__int64)&v41, (__int64)&v44);
      if ( (unsigned int)v44 > 1 )
LABEL_33:
        sub_A2BBA0((int *)&v44);
LABEL_12:
      sub_E2FEE0(a1, a7.m128i_i64[1], &v41, 1, a2);
      if ( (unsigned int)v41 > 1 )
        sub_A2BBA0((int *)&v41);
      return;
    case 3:
      sub_E23300((__int64)a1, a7.m128i_i64[1], v9, v10, v11);
      return;
    case 4:
      v28 = a7.m128i_i32[1] & 0x7FFFFFFF;
      v29 = (unsigned __int8)a7.m128i_i8[7] >> 7;
      if ( (unsigned int)v28 > 0x40 )
      {
        sub_21E18C0(&v44, v28, a7.m128i_i64[1], ((unsigned __int64)(unsigned int)v28 + 63) >> 6);
        v43 = v29;
        v42 = v45;
        v41 = v44;
      }
      else
      {
        v42 = a7.m128i_i32[1] & 0x7FFFFFFF;
        v43 = (unsigned __int8)a7.m128i_i8[7] >> 7;
        v41 = (void *)a7.m128i_i64[1];
      }
      sub_E234C0((__int64)a1, a8, (__int64)&v41, v10, v11);
      if ( v42 > 0x40 && v41 )
        operator delete[](v41);
      return;
    case 5:
      sub_E2FEE0(a1, a8, a7.m128i_i64[1], 1, a2);
      return;
    case 6:
      goto LABEL_16;
    case 7:
      sub_971800(a1[1], "Dp");
LABEL_16:
      sub_EFED50(&v44, a7.m128i_i64[1]);
      sub_E2B860((__int64)a1, (__int64)v44);
      return;
    case 8:
      sub_E2E9D0(a1, a7.m128i_i64[1]);
      return;
    case 9:
      v21 = a1[1];
      v22 = *(_BYTE **)(v21 + 32);
      if ( (unsigned __int64)v22 >= *(_QWORD *)(v21 + 24) )
      {
        sub_2257CD0(v21, 74);
      }
      else
      {
        v23 = (_DWORD)v22 + 1;
        *(_QWORD *)(v21 + 32) = v22 + 1;
        *v22 = 74;
      }
      v24 = a7.m128i_i64[1];
      v25 = a7.m128i_i64[1] + 24LL * a7.m128i_u32[1];
      if ( v25 != a7.m128i_i64[1] )
      {
        do
        {
          v34 = *(_QWORD *)(v24 + 16);
          *((_QWORD *)&v33 + 1) = *(_QWORD *)(v24 + 8);
          v24 += 24;
          *(_QWORD *)&v33 = *(_QWORD *)(v24 - 24);
          sub_E2B990((_DWORD)a1, a2, v23, v10, v11, v12, v33, v34);
        }
        while ( v25 != v24 );
      }
      v26 = a1[1];
      v27 = *(_BYTE **)(v26 + 32);
      if ( (unsigned __int64)v27 >= *(_QWORD *)(v26 + 24) )
      {
        sub_2257CD0(v26, 69);
      }
      else
      {
        *(_QWORD *)(v26 + 32) = v27 + 1;
        *v27 = 69;
      }
      return;
    default:
      return;
  }
}

