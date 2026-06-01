unsigned __int64 __fastcall sub_1B20F10(
        __int64 *a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        double a6,
        double a7)
{
  int v7; // r13d
  int v8; // r12d
  int v9; // ebp
  unsigned __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 result; // rax
  __int64 v17; // r14
  unsigned __int16 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r14
  _QWORD *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned int v31; // eax
  __int64 v32; // r13
  size_t v33; // rax
  __int64 v34; // rax
  unsigned int v35; // eax
  __int64 v36; // rax
  __int64 v37; // r12
  unsigned int v38; // eax
  __int64 v39; // rax
  unsigned int v40; // [rsp+8h] [rbp-150h]
  __int64 v41; // [rsp+8h] [rbp-150h]
  __int64 v42; // [rsp+10h] [rbp-148h]
  __int64 v43; // [rsp+18h] [rbp-140h]
  __m128i v44; // [rsp+20h] [rbp-138h] BYREF
  __int64 v45; // [rsp+30h] [rbp-128h] BYREF
  __m128i v46; // [rsp+40h] [rbp-118h] BYREF
  __int64 v47; // [rsp+50h] [rbp-108h] BYREF
  __int64 v48[6]; // [rsp+60h] [rbp-F8h] BYREF
  _BYTE v49[32]; // [rsp+90h] [rbp-C8h] BYREF
  unsigned __int8 *v50[11]; // [rsp+B0h] [rbp-A8h] BYREF
  char v51; // [rsp+108h] [rbp-50h]
  char v52; // [rsp+114h] [rbp-44h]

  v7 = a3;
  v8 = a5;
  v9 = a4;
  v10 = (unsigned __int64)a2;
  if ( (*a2 & 0x3C000) != 0 )
    goto LABEL_2;
  v17 = a1[1];
  v40 = sub_C00A40((unsigned __int64)a2, (__int64)a2, a3, a4, a5);
  if ( (*(_QWORD *)(v17 + 27560) & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v43 = *a1;
    v42 = *(_QWORD *)(*a1 + 240) + 552LL;
    v33 = j__strlen("omp_event_handle_t");
    a2 = (_DWORD *)sub_6F3470(v42, "omp_event_handle_t", v33);
    v34 = sub_18013B0(v43, (__int64)a2, v40, *(_QWORD *)(v43 + 608), 0, 0, a6, a7, 0, 0, 0, 0, 1u, 0, nullptr);
    if ( !v34 || (v34 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
      sub_168B9F0((__int64)v49, (__int64 *)(v43 + 8), v40, 0x1198u, 0);
      if ( v51 )
      {
        sub_AE9DF0(v50, (__int64)"omp_event_handle_t", 1u);
      }
      else if ( v52 )
      {
        sub_1B132F0((__int64)v49, (__int64)"omp_event_handle_t");
      }
      goto LABEL_29;
    }
    *(_QWORD *)(v17 + 27560) = v34;
  }
  v18 = (unsigned __int16 *)sub_BFBAE0(v10);
  v21 = *v18;
  LOWORD(v21) = v21 & 0x1FF;
  if ( (_WORD)v21 != 71 || (v22 = *((_QWORD *)v18 + 2)) == 0 || (*(_BYTE *)(v22 + 28) & 0x7Fu) - 40 > 6 )
  {
    v35 = sub_C00A40(v10, (__int64)a2, v21, v19, v20);
    sub_168B9F0((__int64)v49, a1, v35, 0x1220u, 0);
    if ( v51 )
    {
      sub_AE9DF0(v50, (__int64)"omp_event_handle_t", 1u);
    }
    else if ( v52 )
    {
      sub_1B132F0((__int64)v49, (__int64)"omp_event_handle_t");
    }
    v46.m128i_i32[0] = 0;
    v36 = sub_1587D10((__int64)v49, v46.m128i_i32);
    goto LABEL_28;
  }
  sub_168B6C0((__int64)a1);
  v41 = *(_QWORD *)(v22 + 48);
  v23 = (_QWORD *)v41;
  if ( !sub_1AE80C0(*(_QWORD *)(a1[1] + 27560), v41) || (v23 = (_QWORD *)sub_168B6C0((__int64)a1), sub_F56AE0(v41, v23)) )
  {
    v38 = sub_C00A40(v10, (__int64)v23, v24, v25, v26);
    sub_168B9F0((__int64)v49, a1, v38, 0x1220u, 0);
    if ( v51 )
    {
      sub_AE9DF0(v50, (__int64)"omp_event_handle_t", 1u);
    }
    else if ( v52 )
    {
      sub_1B132F0((__int64)v49, (__int64)"omp_event_handle_t");
    }
    v44.m128i_i32[0] = 1;
    v39 = sub_1587D10((__int64)v49, v44.m128i_i32);
    v46.m128i_i64[0] = *(_QWORD *)(v22 + 48);
    v36 = sub_162B6D0(v39, v46.m128i_i64);
LABEL_28:
    v37 = v36;
    v48[0] = sub_EEC8C0(v10, (__int64)&v46, a6);
    sub_1587DB0(v37, v48);
LABEL_29:
    sub_15F7200(v49);
    return 0;
  }
  v27 = a1[1];
  sub_1AFBE90((__int64)v48, v27, v22);
  if ( HIDWORD(v48[0]) == 106 || HIDWORD(v48[0]) == 36 || !v48[2] )
  {
LABEL_2:
    v11 = (_QWORD *)sub_168B6C0((__int64)a1);
    v14 = v11[294];
    v11[304] += 24LL;
    v15 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v11[295] >= v15 + 24 && v14 )
    {
      v11[294] = v15 + 24;
      result = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      result = sub_986170((__int64)(v11 + 294), 24, 24, 3, v12, v13);
    }
    *(_DWORD *)result = v7;
    *(_DWORD *)(result + 4) = v8;
    *(_DWORD *)(result + 8) = 25;
    *(_DWORD *)(result + 12) = v9;
    *(_QWORD *)(result + 16) = v10;
    return result;
  }
  v31 = sub_C00A40(v10, v27, v28, v29, v30);
  sub_168B9F0((__int64)v49, a1, v31, 0x1229u, 0);
  sub_1AF81E0(&v44, HIDWORD(v48[0]));
  v32 = sub_1682AF0((__int64)v49, (__int64)&v44);
  sub_1AF81E0(&v46, 0x24u);
  sub_1682AF0(v32, (__int64)&v46);
  if ( (__int64 *)v46.m128i_i64[0] != &v47 )
    operator delete((void *)v46.m128i_i64[0]);
  if ( (__int64 *)v44.m128i_i64[0] != &v45 )
    operator delete((void *)v44.m128i_i64[0]);
  sub_15F7200(v49);
  sub_1B20830(*a1, a1[1], v22, (unsigned int *)v48, 0);
  return 0;
}
