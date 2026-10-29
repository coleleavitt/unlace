__int64 __fastcall sub_213BB30(__int64 a1)
{
  __int64 v1; // rbp
  _DWORD *v2; // rax
  char *v3; // rsi
  __m128i v4; // xmm0
  _DWORD *v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // r9
  __m128 v10; // kr00_16
  unsigned int v11; // eax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // eax
  const char *v16; // rax
  unsigned int v17; // ebx
  __int64 v19; // rdi
  __int64 *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // [rsp+0h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+8h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+10h] [rbp-A0h] BYREF
  __m128 v27; // [rsp+18h] [rbp-98h] BYREF
  void *v28[2]; // [rsp+28h] [rbp-88h] BYREF
  void *v29; // [rsp+38h] [rbp-78h]
  __m128i v30; // [rsp+48h] [rbp-68h] BYREF
  __int16 v31; // [rsp+68h] [rbp-48h]

  v1 = 0;
  v2 = *(_DWORD **)(a1 + 48);
  *(_OWORD *)v28 = 0;
  v29 = nullptr;
  if ( *v2 == 2 )
  {
    while ( 1 )
    {
      v1 = *(_QWORD *)(a1 + 184);
      if ( (unsigned __int8)sub_2153CB0(a1, &v26) )
        break;
      v1 = *(_QWORD *)(a1 + 184);
      if ( (unsigned __int8)sub_2153CB0(a1, &v27) )
        break;
      v3 = (char *)v28[1];
      v4 = (__m128i)_mm_loadh_ps((const double *)v27.m128_u64);
      v30 = v4;
      if ( v28[1] == v29 )
      {
        sub_2130520((char **)v28, (char *)v28[1], &v30);
        if ( **(_DWORD **)(a1 + 48) != 2 )
          goto LABEL_6;
      }
      else
      {
        *(__m128i *)v28[1] = v4;
        v5 = *(_DWORD **)(a1 + 48);
        v28[1] = v3 + 16;
        if ( *v5 != 2 )
          goto LABEL_6;
      }
    }
    v16 = "expected identifier in directive";
    goto LABEL_20;
  }
LABEL_6:
  v30.m128i_i64[0] = (__int64)"expected comma before def_range type in .cv_def_range directive";
  v27 = 0u;
  v31 = 259;
  if ( (unsigned __int8)sub_2154510(a1, 26, &v30) || (unsigned __int8)sub_213B1B0(a1, &v27, v6, v7, v8, v9) )
  {
    v16 = "expected def_range type in directive";
    goto LABEL_20;
  }
  v10 = v27;
  v11 = sub_2244B30(v27.m128_u64[0], v27.m128_u64[1]);
  v12 = sub_2244E60(a1 + 888, v10.m128_u64[0], v10.m128_u64[1], v11);
  if ( v12 == -1 || (v13 = *(_QWORD *)(a1 + 888), v14 = v13 + 8LL * v12, v14 == v13 + 8LL * *(unsigned int *)(a1 + 896)) )
  {
LABEL_25:
    v16 = "unexpected def_range type in .cv_def_range directive";
    goto LABEL_20;
  }
  v15 = *(_DWORD *)(*(_QWORD *)v14 + 8LL);
  if ( v15 == 2 )
  {
    v30.m128i_i64[0] = (__int64)"expected comma before offset in .cv_def_range directive";
    v31 = 259;
    if ( !(unsigned __int8)sub_2154510(a1, 26, &v30) && !(unsigned __int8)sub_21335C0(a1, &v26) )
    {
      v20 = *(__int64 **)(a1 + 24);
      v17 = 1;
      v21 = *v20;
      v30.m128i_i32[0] = v26;
      (*(void (__fastcall **)(__int64 *, void *, signed __int64))(v21 + 784))(
        v20,
        v28[0],
        ((char *)v28[1] - (char *)v28[0]) >> 4);
      goto LABEL_21;
    }
    goto LABEL_39;
  }
  if ( v15 <= 2 )
  {
    if ( v15 != 1 )
      goto LABEL_25;
    v30.m128i_i64[0] = (__int64)"expected comma before register number in .cv_def_range directive";
    v31 = 259;
    if ( !(unsigned __int8)sub_2154510(a1, 26, &v30) && !(unsigned __int8)sub_21335C0(a1, &v26) )
    {
      v19 = *(_QWORD *)(a1 + 24);
      v17 = 1;
      v30.m128i_i32[0] = (unsigned __int16)v26;
      (*(void (__fastcall **)(__int64, void *, signed __int64, _QWORD))(*(_QWORD *)v19 + 776LL))(
        v19,
        v28[0],
        ((char *)v28[1] - (char *)v28[0]) >> 4,
        (unsigned __int16)v26);
      goto LABEL_21;
    }
    goto LABEL_30;
  }
  if ( v15 == 3 )
  {
    v31 = 259;
    v30.m128i_i64[0] = (__int64)"expected comma before register number in .cv_def_range directive";
    if ( !(unsigned __int8)sub_2154510(a1, 26, &v30) && !(unsigned __int8)sub_21335C0(a1, &v25) )
    {
      v31 = 259;
      v30.m128i_i64[0] = (__int64)"expected comma before offset in .cv_def_range directive";
      if ( !(unsigned __int8)sub_2154510(a1, 26, &v30) && !(unsigned __int8)sub_21335C0(a1, &v26) )
      {
        v22 = *(_QWORD *)(a1 + 24);
        v17 = 1;
        v30.m128i_i32[0] = (unsigned __int16)v25;
        v30.m128i_i32[1] = v26;
        (*(void (__fastcall **)(__int64, void *, signed __int64, __int64))(*(_QWORD *)v22 + 768LL))(
          v22,
          v28[0],
          ((char *)v28[1] - (char *)v28[0]) >> 4,
          v30.m128i_i64[0]);
        goto LABEL_21;
      }
LABEL_39:
      v16 = "expected offset value";
      goto LABEL_20;
    }
LABEL_30:
    v16 = "expected register number";
    goto LABEL_20;
  }
  if ( v15 != 4 )
    goto LABEL_25;
  v31 = 259;
  v30.m128i_i64[0] = (__int64)"expected comma before register number in .cv_def_range directive";
  if ( (unsigned __int8)sub_2154510(a1, 26, &v30) || (unsigned __int8)sub_21335C0(a1, &v24) )
  {
    v16 = "expected register value";
LABEL_20:
    v30.m128i_i64[0] = (__int64)v16;
    v31 = 259;
    v17 = sub_2153E90(a1, v1, &v30, 0, 0);
    goto LABEL_21;
  }
  v31 = 259;
  v30.m128i_i64[0] = (__int64)"expected comma before flag value in .cv_def_range directive";
  if ( (unsigned __int8)sub_2154510(a1, 26, &v30) || (unsigned __int8)sub_21335C0(a1, &v25) )
  {
    v16 = "expected flag value";
    goto LABEL_20;
  }
  v30.m128i_i64[0] = (__int64)"expected comma before base pointer offset in .cv_def_range directive";
  v31 = 259;
  if ( (unsigned __int8)sub_2154510(a1, 26, &v30) || (unsigned __int8)sub_21335C0(a1, &v26) )
  {
    v16 = "expected base pointer offset value";
    goto LABEL_20;
  }
  v23 = *(_QWORD *)(a1 + 24);
  v17 = 1;
  v30.m128i_i16[0] = v24;
  v30.m128i_i16[1] = v25;
  v30.m128i_i32[1] = v26;
  (*(void (__fastcall **)(__int64, void *, signed __int64, __int64))(*(_QWORD *)v23 + 760LL))(
    v23,
    v28[0],
    ((char *)v28[1] - (char *)v28[0]) >> 4,
    v30.m128i_i64[0]);
LABEL_21:
  if ( v28[0] )
    operator delete(v28[0]);
  return v17;
}
