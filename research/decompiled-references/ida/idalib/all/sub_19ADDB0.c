// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall sub_19ADDB0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __m128 a6, __m128 a7)
{
  unsigned __int64 v7; // r14
  unsigned __int8 v8; // bp
  unsigned int v10; // eax
  const char *v11; // rax
  __int64 v12; // rbx
  __int64 result; // rax
  unsigned __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned int *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rsi
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned int v28; // r15d
  _QWORD *v29; // rdi
  __int64 v30; // rbp
  __int64 v31; // rsi
  unsigned __int64 v32; // rax
  char v33; // dl
  unsigned __int64 v34; // r12
  unsigned int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rbp
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned int *v42; // rax
  _QWORD *v43; // rax
  unsigned int *v45; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v46[2]; // [rsp+20h] [rbp-C8h] BYREF
  unsigned int *v47; // [rsp+30h] [rbp-B8h]
  int v48; // [rsp+38h] [rbp-B0h]
  unsigned __int8 *v49[11]; // [rsp+40h] [rbp-A8h] BYREF
  char v50; // [rsp+98h] [rbp-50h]
  unsigned int v51; // [rsp+A0h] [rbp-48h]
  char v52; // [rsp+A4h] [rbp-44h]

  v7 = a2 & 0xFFFFFFFFFFFFFFFELL;
  v8 = a3;
  if ( (*(_BYTE *)(a1[29] + 1) & 8) == 0 )
  {
    v10 = sub_C00A40(a2 & 0xFFFFFFFFFFFFFFFELL, a2, a3, a4, a5);
    sub_168B9F0((__int64)v46, a1 + 1, v10, 0xD27u, 0);
    v11 = "__builtin_operator_new";
    if ( v8 )
      v11 = "__builtin_operator_delete";
    v12 = (__int64)v11;
    if ( v50 )
    {
      sub_AE9DF0(v49, (__int64)v11, 1u);
      if ( !v50 )
        goto LABEL_23;
    }
    else
    {
      if ( !v52 )
      {
LABEL_6:
        sub_15F7200(v46);
        return 1;
      }
      v39 = sub_168B9E0(v46);
      v42 = v47;
      if ( v47 )
        v42 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v47 + 32LL))(v47);
      v45 = v42;
      v43 = sub_1587BC0(v39, (__int64 *)&v45, v37, v38, v40, v41);
      sub_AE9DF0((unsigned __int8 **)(*v43 + 32LL * v51 + 8), v12, 1u);
      if ( !v50 )
      {
LABEL_23:
        if ( v52 )
          sub_19A9980((__int64)v46, (__int64)"C++");
        goto LABEL_6;
      }
    }
    sub_AE9DF0(v49, (__int64)"C++", 1u);
    goto LABEL_6;
  }
  sub_19A70B0((__int64)a1);
  v14 = a2 & 0xFFFFFFFFFFFFFFFELL;
  v45 = nullptr;
  if ( (unsigned __int8)sub_19ACF90((__int64)a1, v14, v8, &v45, *(double *)a6.m128_u64) )
    return 1;
  LODWORD(v46[0]) = sub_C00A40(v7, v14, v15, v16, v17);
  v18 = v45;
  sub_18F5260((__int64)a1, (__int64)v45, (int *)v46, 1u, 0, 0, (__m128i)a6, *(double *)a7.m128_u64, 0, 0, 0);
  v22 = (unsigned int)sub_C00A40(v7, (__int64)v18, v19, v20, v21);
  sub_1910D40((__int64)a1, v22, (__int64)v45, 1, v23, v24, a6, a7);
  v25 = v45;
  v26 = *(_QWORD *)(*((_QWORD *)v45 + 6) & 0xFFFFFFFFFFFFFFF0LL);
  v27 = (unsigned int)*(unsigned __int8 *)(v26 + 16) - 25;
  if ( (unsigned int)v27 > 1 )
  {
    v26 = sub_F63050(*(_QWORD *)(*((_QWORD *)v45 + 6) & 0xFFFFFFFFFFFFFFF0LL), v22, v45, v27);
    v25 = v45;
  }
  *(_QWORD *)(v7 + 8) = *(_QWORD *)(v26 + 24);
  if ( *(_DWORD *)(v7 + 16) )
  {
    v28 = 0;
    while ( 1 )
    {
      v29 = (_QWORD *)a1[31];
      v30 = 8LL * v28;
      v31 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v25 + 15) + v30) + 48LL);
      v48 = 0;
      v46[1] = 0;
      LODWORD(v46[0]) = 1;
      v32 = sub_A73320(v29, v31);
      v33 = *(_BYTE *)(v7 + 2);
      v49[0] = nullptr;
      v47 = (unsigned int *)v32;
      v34 = *(_QWORD *)(v30 + v7 + 8 * (((v33 & 8) != 0) + 1LL) + 32);
      v35 = sub_EEB7E0(v34, v31, *(double *)a6.m128_u64);
      result = sub_1A24E20(a1, v46, v35, v34, 0, 0);
      if ( result == 1 )
        break;
      ++v28;
      *(_QWORD *)(v30 + v7 + 8 * (((*(_BYTE *)(v7 + 2) & 8) != 0) + 1LL) + 32) = result & 0xFFFFFFFFFFFFFFFELL;
      v25 = v45;
      if ( v28 == *(_DWORD *)(v7 + 16) )
        goto LABEL_18;
    }
  }
  else
  {
LABEL_18:
    v36 = *(_QWORD *)(v7 + 32);
    if ( (*(_WORD *)v36 & 0x1FF) != 0x4F )
    {
      *(_QWORD *)byte_8 = *((_QWORD *)v25 + 6);
      BUG();
    }
    *(_QWORD *)(v36 + 8) = *((_QWORD *)v25 + 6);
    return a2;
  }
  return result;
}
