void __fastcall sub_22754C0(__int64 a1, __m128 *a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // rdi
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  __int64 v16; // rax
  char *v17; // xmm1_8
  _QWORD *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  const char *v22; // rax
  void *v23; // rdi
  __int64 v24; // r12
  __int64 ***v25; // rax
  __int64 **v26; // rax
  __int64 *v27; // rax
  __int64 v28; // rdi
  _QWORD *v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __m128i v32; // xmm0
  int v33; // [rsp+0h] [rbp-98h]
  void *v34; // [rsp+18h] [rbp-80h] BYREF
  _BYTE v35[24]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v36[3]; // [rsp+40h] [rbp-58h] BYREF
  void *v37; // [rsp+58h] [rbp-40h]
  __int16 v38; // [rsp+60h] [rbp-38h]
  _BYTE v39[48]; // [rsp+68h] [rbp-30h] BYREF

  v7 = ***(__int64 ****)(a1 + 8);
  v8 = *v7;
  if ( *(_BYTE *)(*v7 + 75) )
    goto LABEL_17;
  v9 = *(_QWORD *)(a1 + 80);
  if ( !v9 )
    goto LABEL_8;
  v10 = *(_QWORD *)(v9 + 72);
  if ( v10 || (v10 = sub_2275030(*(_QWORD *)(a1 + 80), a2, a3, a4, a5, a6)) != 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v15 = *(_QWORD *)(v9 + 80);
    if ( v15 || (v15 = sub_2275200(v9, a2, v11, v12, v13, v14)) != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  }
  if ( *(_DWORD *)(a1 + 72) == 2 )
  {
LABEL_17:
    *(_BYTE *)(a1 + 77) = 1;
    *(_QWORD *)(a1 + 80) = 0;
    return;
  }
  v8 = ****(_QWORD ****)(a1 + 8);
LABEL_8:
  v16 = sub_2273810(v8, a2, a3, a4, a5, a6);
  v17 = (char *)_mm_loadu_si128((const __m128i *)(v16 + 8)).m128i_u64[0];
  v33 = *(_DWORD *)v16;
  v34 = v35;
  sub_226E090(&v34, *(_BYTE **)(v16 + 24), *(_QWORD *)(v16 + 24) + *(_QWORD *)(v16 + 32));
  if ( (v33 & 0xFFFFFFFD) != 0x10 )
  {
    v21 = *(unsigned int *)(a1 + 72);
    if ( (_DWORD)v21 )
    {
      if ( v33 == 11 )
      {
        sub_2273D80((__int64)v36, ****(__m128 *****)(a1 + 8), v21, v18, v19, v20);
        if ( v37 != v39 )
          operator delete(v37);
        sub_22754C0(a1);
        v23 = v34;
        if ( v34 != v35 )
          goto LABEL_16;
        return;
      }
      if ( v33 != 15 )
      {
        if ( !v33 )
          goto LABEL_14;
        v22 = "Unexpected token. Expected Key, Flow Entry, or Flow Mapping End.";
        goto LABEL_13;
      }
    }
    else
    {
      if ( !v33 )
      {
LABEL_14:
        *(_BYTE *)(a1 + 77) = 1;
        *(_QWORD *)(a1 + 80) = 0;
        goto LABEL_15;
      }
      if ( v33 != 8 )
      {
        v22 = "Unexpected token. Expected Key or Block End";
LABEL_13:
        v36[0] = v22;
        v38 = 259;
        sub_226E270(****(_QWORD ****)(a1 + 8), (__int64)v36, v17);
        goto LABEL_14;
      }
    }
    sub_2273D80((__int64)v36, ****(__m128 *****)(a1 + 8), v21, v18, v19, v20);
    if ( v37 != v39 )
      operator delete(v37);
    goto LABEL_14;
  }
  v24 = sub_9C3B30((__int64 *)(**(_QWORD **)(a1 + 8) + 8LL), 88, 4u);
  v25 = *(__int64 ****)(a1 + 8);
  *(_QWORD *)(v24 + 16) = 0;
  *(_QWORD *)(v24 + 8) = v25;
  v26 = *v25;
  *(_QWORD *)v24 = off_2BEBBC8;
  *(_QWORD *)(v24 + 24) = 0;
  v27 = *v26;
  *(_DWORD *)(v24 + 32) = 3;
  *(_QWORD *)(v24 + 40) = 0;
  v28 = *v27;
  *(_QWORD *)(v24 + 48) = 0;
  *(_QWORD *)(v24 + 56) = 0;
  *(_QWORD *)(v24 + 64) = 0;
  v32 = _mm_loadl_epi64((const __m128i *)(sub_2273810(v28, &qword_58, (__int64)off_2BEBBC8, v29, v30, v31) + 8));
  *(__m128i *)(v24 + 16) = _mm_unpacklo_epi64(v32, v32);
  *(_QWORD *)v24 = off_2BEBC48;
  *(_OWORD *)(v24 + 72) = 0;
  *(_QWORD *)(a1 + 80) = v24;
LABEL_15:
  v23 = v34;
  if ( v34 != v35 )
LABEL_16:
    operator delete(v23);
}
