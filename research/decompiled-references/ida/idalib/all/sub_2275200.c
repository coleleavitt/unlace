__int64 __fastcall sub_2275200(__int64 a1, __m128 *a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  _QWORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rax
  __int64 v12; // rdi
  __int64 *v13; // rdi
  __int64 v14; // rbx
  __int64 ***v15; // rax
  __int64 **v16; // rax
  __int64 *v17; // rax
  __int64 v18; // rdi
  _QWORD *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128i v22; // xmm0
  char **v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  __m128 ****v27; // rcx
  unsigned __int64 v28; // rdx
  __m128 **v29; // rcx
  __m128 *v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdx
  _QWORD *v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  _QWORD *v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  char *v41; // rdx
  __int64 ***v42; // rax
  __m128 ***v43; // rdi
  __int64 v44; // rcx
  __m128 *v45; // rsi
  __int64 v46; // rdx
  _QWORD *v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  _DWORD *v50; // rax
  __int64 v51; // rdx
  _QWORD *v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  _QWORD v55[3]; // [rsp+0h] [rbp-58h] BYREF
  void *v56; // [rsp+18h] [rbp-40h]
  __int16 v57; // [rsp+20h] [rbp-38h]
  __int64 v58; // [rsp+28h] [rbp-30h] BYREF

  v7 = *(_QWORD *)(a1 + 72);
  if ( !v7 )
  {
    v7 = sub_2275030(a1, a2, a3, a4, a5, a6);
    if ( !v7 )
    {
      v40 = sub_2273810(****(_QWORD ****)(a1 + 8), a2, v36, v37, v38, v39);
      v55[0] = "Null key in Key Value.";
      v41 = *(char **)(v40 + 8);
      v42 = *(__int64 ****)(a1 + 8);
      v57 = 259;
      sub_226E270(***v42, (__int64)v55, v41);
      v13 = (__int64 *)(**(_QWORD **)(a1 + 8) + 8LL);
      goto LABEL_4;
    }
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v11 = **(__int64 ***)(a1 + 8);
  v12 = *(_QWORD *)*v11;
  if ( !*(_BYTE *)(v12 + 75) )
  {
    v24 = (char **)sub_2273810(v12, a2, *v11, v8, v9, v10);
    v27 = *(__m128 *****)(a1 + 8);
    v28 = *(unsigned int *)v24;
    if ( (unsigned int)v28 <= 0x10 )
    {
      v43 = *v27;
      v44 = 100609;
      if ( _bittest64(&v44, v28) )
      {
        v13 = (__int64 *)(v43 + 1);
        goto LABEL_4;
      }
      v30 = **v43;
    }
    else
    {
      v29 = **v27;
      v30 = *v29;
      if ( (_DWORD)v28 == 17 )
      {
        v45 = *v29;
        sub_2273D80((__int64)v55, *v29, v28, v29, v25, v26);
        if ( v56 != &v58 )
          operator delete(v56);
        v50 = (_DWORD *)sub_2273810(****(_QWORD ****)(a1 + 8), v45, v46, v47, v48, v49);
        v31 = **(_QWORD **)(a1 + 8);
        if ( ((*v50 - 8) & 0xFFFFFFF7) != 0 )
        {
          v14 = sub_2273F00((__int64 **)v31, v45, v51, v52, v53, v54);
          *(_QWORD *)(a1 + 80) = v14;
          return v14;
        }
        goto LABEL_9;
      }
    }
    v55[0] = "Unexpected token in Key Value.";
    v57 = 259;
    sub_226E270((__int64)v30, (__int64)v55, v24[1]);
    v31 = **(_QWORD **)(a1 + 8);
LABEL_9:
    v14 = sub_9C3B30((__int64 *)(v31 + 8), 72, 4u);
    sub_2273D00(v14, *(__int64 ****)(a1 + 8), v32, v33, v34, v35);
    *(_QWORD *)(a1 + 80) = v14;
    return v14;
  }
  v13 = v11 + 1;
LABEL_4:
  v14 = sub_9C3B30(v13, 72, 4u);
  v15 = *(__int64 ****)(a1 + 8);
  *(_QWORD *)(v14 + 16) = 0;
  *(_QWORD *)(v14 + 8) = v15;
  v16 = *v15;
  *(_QWORD *)v14 = off_2BEBBC8;
  v17 = *v16;
  *(_QWORD *)(v14 + 24) = 0;
  *(_DWORD *)(v14 + 32) = 0;
  *(_QWORD *)(v14 + 40) = 0;
  v18 = *v17;
  *(_QWORD *)(v14 + 48) = 0;
  *(_QWORD *)(v14 + 56) = 0;
  *(_QWORD *)(v14 + 64) = 0;
  v22 = _mm_loadl_epi64((const __m128i *)(sub_2273810(v18, &qword_48, (__int64)off_2BEBBC8, v19, v20, v21) + 8));
  *(__m128i *)(v14 + 16) = _mm_unpacklo_epi64(v22, v22);
  *(_QWORD *)v14 = off_2BEBBE8;
  *(_QWORD *)(a1 + 80) = v14;
  return v14;
}
