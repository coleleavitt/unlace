void __fastcall sub_E4F6D0(
        __int64 *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __int64 a8)
{
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // r12
  _QWORD *v13; // r13
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r12
  __int64 v19; // r14
  __int64 v20; // rdi
  _BYTE *v21; // rax
  int v22; // edx
  __int64 v23; // r12
  __int64 v24; // r13
  __int64 v25; // rdi
  _BYTE *v26; // rax
  __int64 v27; // rsi
  char v28; // bp
  unsigned __int64 v29; // rax
  __int64 v30; // r12
  __int64 v31; // r14
  __int128 v32; // [rsp-20h] [rbp-118h]
  __int64 v33; // [rsp-10h] [rbp-108h]
  __m128i v34; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v35; // [rsp+10h] [rbp-E8h]
  __int64 v36; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v37; // [rsp+28h] [rbp-D0h] BYREF
  __int64 v38; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+38h] [rbp-C0h]
  void *v40; // [rsp+40h] [rbp-B8h] BYREF
  unsigned int v41; // [rsp+48h] [rbp-B0h]
  char v42; // [rsp+4Ch] [rbp-ACh]
  void *v43; // [rsp+80h] [rbp-78h] BYREF
  unsigned int v44; // [rsp+88h] [rbp-70h]

  if ( !(unsigned __int8)sub_F1D550(&a7) || (unsigned __int8)sub_F1D530(&a7) )
  {
    sub_AB6BB0(&v34, *(_QWORD **)(*a1 + 8), &a7);
    a7 = _mm_loadu_si128(&v34);
    a8 = v35;
  }
  switch ( a7.m128i_i32[0] & 0x7FFFFFFF )
  {
    case 1:
      sub_E3FB80(a1, a7.m128i_i64[1]);
      return;
    case 2:
      v12 = a8;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a7.m128i_i64[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 48 )
      {
        v43 = *(void **)(a8 + 48);
        v29 = sub_6D5440(&v43);
        sub_E53C20(a1, v29, v12 + 64, 1, a2);
        return;
      }
      v13 = *(_QWORD **)(*a1 + 8);
      BYTE4(v40) &= ~1u;
      LODWORD(v40) = 0;
      if ( (unsigned __int8)sub_B72F20(a8) )
      {
        BYTE4(v43) &= ~1u;
        LODWORD(v43) = 0;
        sub_A53BA0((__int64)&v43, v12, 0, 0, 0);
        sub_A4FD20((__int64)&v40, (__int64)&v43);
        if ( (unsigned int)v43 <= 1 )
          goto LABEL_12;
        goto LABEL_33;
      }
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 48) & 0xFFFFFFFFFFFFFFF0LL)
                                                              + 8LL)
                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                      + 16LL)
                           - 2) <= 4u
        && (v14 = a7.m128i_u64[1],
            v15 = sub_A75D20(v13, *(_QWORD *)(v12 + 48)),
            (unsigned __int8)sub_AC0070(v13, v15, v14, v16, v17))
        && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8) + 2320LL) + 212LL) > 0x5Fu )
      {
        v37 = 0;
        v36 = 0;
        sub_A4F2A0((__int64)&v38, v12, 0, 0);
        v30 = v39;
        v31 = v38;
        LODWORD(v43) = 0;
        BYTE4(v43) &= ~1u;
        sub_A513D0((__int64)&v43);
        sub_A51270((__int64)&v43, v31, v30, &v36, &v37, 1, 0, 0);
      }
      else
      {
        v37 = 0;
        sub_A4F2A0((__int64)&v38, v12, 0, 0);
        v18 = v39;
        v19 = v38;
        LODWORD(v43) = 0;
        BYTE4(v43) &= ~1u;
        sub_A513D0((__int64)&v43);
        sub_A51270((__int64)&v43, v19, v18, &v37, nullptr, 0, 0, 0);
      }
      sub_A4FD20((__int64)&v40, (__int64)&v43);
      if ( (unsigned int)v43 > 1 )
LABEL_33:
        sub_A4F8E0((int *)&v43);
LABEL_12:
      sub_E53C20(a1, a7.m128i_i64[1], &v40, 1, a2);
      if ( (unsigned int)v40 > 1 )
        sub_A4F8E0((int *)&v40);
      return;
    case 3:
      sub_E47040((__int64)a1, a7.m128i_i64[1]);
      return;
    case 4:
      v27 = a7.m128i_i32[1] & 0x7FFFFFFF;
      v28 = (unsigned __int8)a7.m128i_i8[7] >> 7;
      if ( (unsigned int)v27 > 0x40 )
      {
        sub_2205600(&v43, v27, a7.m128i_i64[1], ((unsigned __int64)(unsigned int)v27 + 63) >> 6);
        v42 = v28;
        v41 = v44;
        v40 = v43;
      }
      else
      {
        v41 = a7.m128i_i32[1] & 0x7FFFFFFF;
        v42 = (unsigned __int8)a7.m128i_i8[7] >> 7;
        v40 = (void *)a7.m128i_i64[1];
      }
      sub_E47200((__int64)a1, a8, (__int64)&v40);
      if ( v41 > 0x40 && v40 )
        operator delete[](v40);
      return;
    case 5:
      sub_E53C20(a1, a8, a7.m128i_i64[1], 1, a2);
      return;
    case 6:
      goto LABEL_16;
    case 7:
      sub_995540(a1[1], "Dp");
LABEL_16:
      sub_F22A90(&v43, a7.m128i_i64[1]);
      sub_E4F5A0((__int64)a1, (__int64)v43);
      return;
    case 8:
      sub_E52710(a1, a7.m128i_i64[1]);
      return;
    case 9:
      v20 = a1[1];
      v21 = *(_BYTE **)(v20 + 32);
      if ( (unsigned __int64)v21 >= *(_QWORD *)(v20 + 24) )
      {
        sub_227BA10(v20, 74);
      }
      else
      {
        v22 = (_DWORD)v21 + 1;
        *(_QWORD *)(v20 + 32) = v21 + 1;
        *v21 = 74;
      }
      v23 = a7.m128i_i64[1];
      v24 = a7.m128i_i64[1] + 24LL * a7.m128i_u32[1];
      if ( v24 != a7.m128i_i64[1] )
      {
        do
        {
          v33 = *(_QWORD *)(v23 + 16);
          *((_QWORD *)&v32 + 1) = *(_QWORD *)(v23 + 8);
          v23 += 24;
          *(_QWORD *)&v32 = *(_QWORD *)(v23 - 24);
          sub_E4F6D0((_DWORD)a1, a2, v22, v9, v10, v11, v32, v33);
        }
        while ( v24 != v23 );
      }
      v25 = a1[1];
      v26 = *(_BYTE **)(v25 + 32);
      if ( (unsigned __int64)v26 >= *(_QWORD *)(v25 + 24) )
      {
        sub_227BA10(v25, 69);
      }
      else
      {
        *(_QWORD *)(v25 + 32) = v26 + 1;
        *v26 = 69;
      }
      return;
    default:
      return;
  }
}
