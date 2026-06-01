__int64 __fastcall sub_1D70320(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 *a6,
        double a7,
        double a8,
        __m128i a9,
        __int64 a10,
        __int64 *a11)
{
  __int64 v16; // rdx
  __int64 v17; // rcx
  __m128i v18; // xmm1
  __int64 v19; // rax
  __int64 result; // rax
  __int64 v21; // rax
  int v22; // ebp
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // r15
  _QWORD *v27; // rsi
  unsigned int v28; // r14d
  unsigned __int64 v29; // rax
  __int64 v30; // r10
  _QWORD *v31; // rax
  __int64 v32; // r8
  __int64 v33; // r15
  __m128i si128; // xmm4
  __m128i v35; // xmm6
  __int64 v36; // rax
  void *v37; // r14
  unsigned int v38; // [rsp-20h] [rbp-E8h]
  __int64 *v39; // [rsp-18h] [rbp-E0h]
  __int64 *v40; // [rsp-10h] [rbp-D8h]
  __int64 v41; // [rsp+8h] [rbp-C0h]
  unsigned int v42; // [rsp+8h] [rbp-C0h]
  int v43; // [rsp+14h] [rbp-B4h]
  __int64 v44; // [rsp+18h] [rbp-B0h]
  __int64 v45; // [rsp+20h] [rbp-A8h]
  __int64 v46; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v47; // [rsp+28h] [rbp-A0h]
  __m128i v48; // [rsp+30h] [rbp-98h] BYREF
  __int64 v49; // [rsp+40h] [rbp-88h]
  void *v50[2]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v51; // [rsp+60h] [rbp-68h]
  void *v52[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v53; // [rsp+80h] [rbp-48h]
  char v54; // [rsp+88h] [rbp-40h]

  if ( sub_F1D570((__int64)&a9) )
  {
    sub_F1DF30((__int64)&v48, a9.m128i_i64, v16, v17);
    a9 = _mm_loadu_si128(&v48);
    a10 = v49;
  }
  switch ( a3->m128i_i32[0] & 0x7FFFFFFF )
  {
    case 0:
    case 7:
    case 8:
      v21 = sub_1D365B0(a3->m128i_i64[1], *(_DWORD *)(a4 + 24));
      if ( !v21 )
        goto LABEL_13;
      switch ( a9.m128i_i32[0] & 0x7FFFFFFF )
      {
        case 0:
        case 1:
        case 6:
        case 7:
        case 9:
          v35 = _mm_loadu_si128(&a9);
          *(__m128i *)(a4 + 184) = _mm_loadu_si128(a3);
          v36 = a3[1].m128i_i64[0];
          *(__m128i *)(a4 + 208) = v35;
          *(_QWORD *)(a4 + 200) = v36;
          *(_QWORD *)(a4 + 224) = a10;
          result = 10;
          break;
        case 2:
          v41 = v21;
          v33 = a9.m128i_i64[1];
          sub_F1D290((int *)v50, a10, a9.m128i_i64[1], 0);
          v24 = a4;
          v25 = v33;
          si128 = _mm_load_si128((const __m128i *)v50);
          v54 = 0;
          v53 = v51;
          *(__m128i *)v52 = si128;
          v40 = a11;
          v39 = a6;
          v38 = a5;
          goto LABEL_29;
        case 3:
          v26 = a9.m128i_i64[1];
          v27 = *(_QWORD **)(a1 + 248);
          v42 = a5;
          v45 = v21;
          v44 = v27[2383];
          v28 = (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a9.m128i_i64[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                      & 0xFFFFFFFFFFFFFFF0LL)
                          + 16LL) == 33)
              + 13;
          v43 = *(_DWORD *)(v21 + 24);
          v29 = sub_EEE9A0(16, v27, 8u);
          v30 = v45;
          *(_WORD *)v29 = *(_WORD *)v29 & 0xFE00 | 0x68;
          if ( unk_2CD7484 )
          {
            v47 = v29;
            sub_EE9B50(104);
            v29 = v47;
            v30 = v45;
          }
          v46 = v30;
          *(_WORD *)(v29 + 1) &= 0xF801u;
          *(_QWORD *)(v29 + 8) = v44;
          *(_DWORD *)(v29 + 4) = v43;
          v31 = (_QWORD *)(sub_160A600(a1, v29, v26, v28, 0, 0, a7, a8, 0) & 0xFFFFFFFFFFFFFFFELL);
          v32 = v31[1];
          v52[1] = v31;
          v52[0] = (void *)((unsigned __int64)v52[0] & 0xFFFFFFFE00000000LL | 8);
          v54 = 0;
          result = def_1D6C8B3(a1, a2, v46, (const __m128i *)v52, v32, a4, v42, a6, a11);
          break;
        case 4:
        case 5:
          v41 = v21;
          v23 = sub_F1D610((__int64)&a9);
          v54 = 0;
          v24 = a4;
          v25 = v23;
          *(__m128i *)v52 = _mm_loadu_si128(&a9);
          v53 = a10;
          v40 = a11;
          v39 = a6;
          v38 = a5;
LABEL_29:
          result = def_1D6C8B3(a1, a2, v41, (const __m128i *)v52, v25, v24, v38, v39, v40);
          break;
        case 8:
          if ( (*(_WORD *)a9.m128i_i64[1] & 0x1FF) != 0x4F
            || (*(_WORD *)(a9.m128i_i64[1] + 2) & 0x3F8) != 0
            || (result = sub_1D6C080(
                           a1,
                           a2,
                           *(_QWORD *)(a9.m128i_i64[1] + 8),
                           *(_QWORD *)(*(_QWORD *)(a9.m128i_i64[1] + 16) + 8LL),
                           a4,
                           a6,
                           8u,
                           a5,
                           0,
                           a11),
                !(_DWORD)result) )
          {
            v54 = 0;
            JUMPOUT(0x1D70843);
          }
          return result;
      }
      return result;
    case 1:
      if ( (a9.m128i_i32[0] & 0x7FFFFFFF) != 1 )
        goto LABEL_5;
      result = sub_1D6C080(a1, a2, a3->m128i_i64[1], a9.m128i_i64[1], a4, a6, 0, a5, 0, a11);
      break;
    case 2:
      if ( (a9.m128i_i32[0] & 0x7FFFFFFF) != 2 || !sub_1D38370(a3[1].m128i_i64[0], a10) )
        goto LABEL_5;
LABEL_13:
      result = 0;
      break;
    case 3:
      if ( (a9.m128i_i32[0] & 0x7FFFFFFF) != 3 )
        goto LABEL_5;
      result = 0;
      break;
    case 4:
      if ( (a9.m128i_i32[0] & 0x7FFFFFFF) != 4 )
        goto LABEL_5;
      sub_1CB2F30((__int64)v52, (__int64)&a9);
      sub_1CB2F30((__int64)v50, (__int64)a3);
      v22 = sub_98E2D0((__int64 *)v50, (__int64 *)v52);
      if ( LODWORD(v50[1]) > 0x40 && v50[0] )
        operator delete[](v50[0]);
      if ( LODWORD(v52[1]) > 0x40 && v52[0] )
        operator delete[](v52[0]);
      if ( v22 )
        goto LABEL_5;
      result = 0;
      break;
    case 5:
      if ( (a9.m128i_i32[0] & 0x7FFFFFFF) != 5 || !sub_F1DBF0((__int64)&a9, (__int64)a3) )
        goto LABEL_5;
      result = 0;
      break;
    case 6:
      if ( (a9.m128i_i32[0] & 0x7FFFFFFF) == 6 )
      {
        sub_F22A90(v52, a9.m128i_i64[1]);
        v37 = v52[0];
        sub_F22A90(v52, a3->m128i_i64[1]);
        result = sub_1D3C070(a1, (__int64)v52[0], (__int64)v37, a4, 0, 0, 0, a6, a11);
      }
      else
      {
LABEL_5:
        v18 = _mm_loadu_si128(&a9);
        *(__m128i *)(a4 + 184) = _mm_loadu_si128(a3);
        v19 = a3[1].m128i_i64[0];
        *(__m128i *)(a4 + 208) = v18;
        *(_QWORD *)(a4 + 200) = v19;
        *(_QWORD *)(a4 + 224) = a10;
        result = 10;
      }
      break;
  }
  return result;
}
