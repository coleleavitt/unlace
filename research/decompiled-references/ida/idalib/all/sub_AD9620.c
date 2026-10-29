void __fastcall sub_AD9620(__int64 ***a1, char *a2)
{
  __int64 **v2; // rbx
  char v3; // r13
  __int64 v4; // rdi
  _BYTE *v5; // rax
  __int64 *v6; // rax
  __int64 v7; // rbp
  char v8; // r12
  __int64 v9; // rdi
  __int64 v10; // rax
  _BYTE *v11; // rcx
  _BYTE *v12; // rdx
  __int64 *v13; // rdx
  __int64 *v14; // rdi
  unsigned int v15; // ebp
  __int64 v16; // r9
  __int64 *v17; // rax
  __m128d v18; // xmm0
  __int64 *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 *v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rdi
  void (__fastcall *v27)(__int64, __int64, __int64); // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __m128d v30; // [rsp+0h] [rbp-48h]
  char v31[41]; // [rsp+1Fh] [rbp-29h] BYREF

  v2 = *a1;
  v3 = *a2;
  v4 = ***a1;
  v5 = *(_BYTE **)(v4 + 32);
  if ( (unsigned __int64)v5 >= *(_QWORD *)(v4 + 24) )
  {
    sub_227BA10(v4, 10);
  }
  else
  {
    *(_QWORD *)(v4 + 32) = v5 + 1;
    *v5 = 10;
  }
  v6 = *v2;
  v7 = **v2;
  v8 = *((_BYTE *)*v2 + 8);
  v9 = v7;
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v7 + 24LL))(v7, 4, 0, 0);
    v6 = *v2;
    v9 = **v2;
  }
  v10 = sub_227BF10(v9, v6[133], v6[134]);
  v11 = *(_BYTE **)(v10 + 32);
  if ( (unsigned __int64)v11 >= *(_QWORD *)(v10 + 24) )
  {
    v10 = sub_227BA10(v10, v3 == 0 ? 124 : 96);
  }
  else
  {
    *(_QWORD *)(v10 + 32) = v11 + 1;
    *v11 = v3 == 0 ? 124 : 96;
  }
  v12 = *(_BYTE **)(v10 + 32);
  if ( (unsigned __int64)v12 >= *(_QWORD *)(v10 + 24) )
  {
    sub_227BA10(v10, 45);
  }
  else
  {
    *(_QWORD *)(v10 + 32) = v12 + 1;
    *v12 = 45;
  }
  v13 = v2[6];
  v14 = *v2;
  if ( v13 )
  {
    v29 = sub_227BF10(*v14, v2[5], v13);
    sub_995540(v29, ": ");
    v14 = *v2;
  }
  sub_A6F610(v14 + 133, v3 == 0 ? 124 : 32);
  sub_ACC740(*v2 + 133);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
  *((_BYTE *)*v2 + 1057) = 1;
  v15 = *((_DWORD *)*v2 + 6);
  sub_F2A660(v2[1] + 1, v2 + 2);
  v17 = v2[3];
  if ( v17 )
    sub_AD8780((__int64)v2[1], *v17);
  v18 = (__m128d)_mm_loadu_si128((const __m128i *)(v2 + 1));
  v30 = _mm_shuffle_pd(v18, v18, 1);
  sub_AD2220((__int64)(v2[1] + 1), 0, 0, *(__int64 *)&v30.m128d_f64[0], *(__int64 *)&v30.m128d_f64[1], v16);
  v19 = *v2;
  v20 = *((unsigned int *)*v2 + 6);
  if ( v15 < (unsigned int)v20 )
  {
    v21 = v19[2];
    v31[0] = 1;
    v22 = v21 + 32 * v20 - 32;
    if ( !*(_QWORD *)(v22 + 16) )
LABEL_26:
      std::__throw_bad_function_call();
    while ( 1 )
    {
      (*(void (__fastcall **)(__int64, char *))(v22 + 24))(v22, v31);
      v24 = *v2;
      v25 = (unsigned int)(*((_DWORD *)*v2 + 6) - 1);
      *((_DWORD *)v24 + 6) = v25;
      v26 = v24[2] + 32 * v25;
      v27 = *(void (__fastcall **)(__int64, __int64, __int64))(v26 + 16);
      if ( v27 )
        v27(v26, v26, 3);
      v19 = *v2;
      v28 = *((unsigned int *)*v2 + 6);
      if ( v15 >= (unsigned int)v28 )
        break;
      v23 = v19[2];
      v31[0] = 1;
      v22 = v23 + 32 * v28 - 32;
      if ( !*(_QWORD *)(v22 + 16) )
        goto LABEL_26;
    }
  }
  sub_ACC670(v19 + 133, v19[134] - 2);
}
