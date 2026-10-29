_QWORD *__fastcall sub_10D8420(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  _BYTE *v8; // rsi
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __m128i *v11; // rax
  size_t v12; // r12
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *v16; // r8
  __int64 *v17; // rax
  __int64 v18; // rax
  unsigned int v19; // r9d
  __int64 *v20; // r8
  _QWORD *v21; // rcx
  unsigned int v22; // eax
  _BYTE *v23; // rbp
  size_t v24; // r12
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r9
  __int64 *v28; // rcx
  __int64 *v29; // rdx
  _QWORD *result; // rax
  int v31; // eax
  __int64 v32; // rbp
  __int64 v33; // rbp
  __int64 v34; // rdi
  __int64 v35; // rax
  unsigned int v36; // r8d
  __int64 *v37; // rcx
  _QWORD *v38; // r13
  unsigned int v39; // eax
  __int64 v40; // r12
  __int64 v41; // rdi
  __int64 v42; // rbp
  __int64 v43; // r12
  __int64 v44; // rbp
  __int64 v45; // rbp
  __int64 v46; // r12
  const void *src; // [rsp+0h] [rbp-B8h]
  _QWORD *srca; // [rsp+0h] [rbp-B8h]
  __int64 v50; // [rsp+8h] [rbp-B0h]
  unsigned int v52; // [rsp+18h] [rbp-A0h]
  unsigned int v53; // [rsp+18h] [rbp-A0h]
  __int64 v54; // [rsp+18h] [rbp-A0h]
  __int64 *v55; // [rsp+20h] [rbp-98h]
  __int64 *v56; // [rsp+20h] [rbp-98h]
  _QWORD *v57; // [rsp+28h] [rbp-90h]
  __int64 *v58; // [rsp+38h] [rbp-80h] BYREF
  void *v59[2]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v60[16]; // [rsp+50h] [rbp-68h] BYREF
  void *v61; // [rsp+60h] [rbp-58h] BYREF
  size_t n; // [rsp+68h] [rbp-50h]
  _OWORD v63[4]; // [rsp+70h] [rbp-48h] BYREF

  v8 = *(_BYTE **)a4;
  v9 = *(_QWORD *)a4 + *(_QWORD *)(a4 + 8);
  v59[0] = v60;
  sub_10B4F90(v59, v8, v9);
  v10 = j__strlen("/");
  if ( v10 > 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v59[1] )
    std::__throw_length_error("basic_string::append");
  sub_9CA820(v59, "/", v10);
  v11 = (__m128i *)sub_9CA820(v59, (_BYTE *)*a5, a5[1]);
  v61 = v63;
  if ( (__m128i *)v11->m128i_i64[0] == &v11[1] )
  {
    v63[0] = _mm_loadu_si128(v11 + 1);
  }
  else
  {
    v61 = (void *)v11->m128i_i64[0];
    *(_QWORD *)&v63[0] = v11[1].m128i_i64[0];
  }
  n = v11->m128i_u64[1];
  v11->m128i_i64[0] = (__int64)v11[1].m128i_i64;
  v11->m128i_i64[1] = 0;
  v11[1].m128i_i8[0] = 0;
  v12 = n;
  src = v61;
  v13 = sub_2220DF0(v61, n);
  v14 = (unsigned int)sub_2220F70(a1 + 1176, src, v12, v13);
  v16 = (__int64 *)(*(_QWORD *)(a1 + 1176) + 8 * v14);
  if ( *v16 )
  {
    if ( *v16 != -8 )
    {
      sub_10D2F20(&v58, v16, 0);
      v17 = v58;
      goto LABEL_11;
    }
    --*(_DWORD *)(a1 + 1192);
  }
  v55 = v16;
  v52 = v14;
  v18 = sub_220C370(v12 + 17, 8, v14, v15, v16, v14);
  v19 = v52;
  v20 = v55;
  v21 = (_QWORD *)v18;
  if ( v12 )
  {
    v57 = (_QWORD *)v18;
    memcpy((void *)(v18 + 16), src, v12);
    v21 = v57;
    v20 = v55;
    v19 = v52;
  }
  *((_BYTE *)v21 + v12 + 16) = 0;
  *v21 = v12;
  v21[1] = 0;
  *v20 = (__int64)v21;
  ++*(_DWORD *)(a1 + 1188);
  v22 = sub_2221390(a1 + 1176, v19);
  sub_10D2F20(&v58, (__int64 *)(*(_QWORD *)(a1 + 1176) + 8LL * v22), 0);
  v17 = v58;
LABEL_11:
  srca = (_QWORD *)*v17;
  if ( v61 != v63 )
    operator delete(v61);
  if ( v59[0] != v60 )
    operator delete(v59[0]);
  v23 = (_BYTE *)*a5;
  v24 = a5[1];
  v25 = sub_2220DF0(*a5, v24);
  v26 = (unsigned int)sub_2220F70(a1 + 1176, v23, v24, v25);
  v28 = (__int64 *)(*(_QWORD *)(a1 + 1176) + 8 * v26);
  if ( *v28 )
  {
    if ( *v28 != -8 )
    {
      sub_10D2F20((__int64 **)&v61, v28, 0);
      v29 = (__int64 *)v61;
      result = (_QWORD *)srca[1];
      if ( result )
        return result;
      goto LABEL_18;
    }
    --*(_DWORD *)(a1 + 1192);
  }
  v56 = v28;
  v53 = v26;
  v35 = sub_220C370(v24 + 17, 8, v26, v28, v26, v27);
  v36 = v53;
  v37 = v56;
  v38 = (_QWORD *)v35;
  if ( v24 )
  {
    memcpy((void *)(v35 + 16), v23, v24);
    v37 = v56;
    v36 = v53;
  }
  *((_BYTE *)v38 + v24 + 16) = 0;
  *v38 = v24;
  v38[1] = 0;
  *v37 = (__int64)v38;
  ++*(_DWORD *)(a1 + 1188);
  v39 = sub_2221390(a1 + 1176, v36);
  sub_10D2F20((__int64 **)&v61, (__int64 *)(*(_QWORD *)(a1 + 1176) + 8LL * v39), 0);
  v29 = (__int64 *)v61;
  result = (_QWORD *)srca[1];
  if ( result )
    return result;
LABEL_18:
  v31 = *(_DWORD *)(a4 + 44);
  v32 = *v29;
  if ( v31 == 21 )
  {
    v40 = *(_QWORD *)(v32 + 8);
    v54 = operator new(0xA10u);
    sub_11BE290(v54, a1, a4, v40, a2);
  }
  else
  {
    if ( v31 != 23 )
      goto LABEL_22;
    if ( a3 == 8 )
    {
      v46 = *(_QWORD *)(v32 + 8);
      v54 = operator new(0x13B0u);
      sub_12196B0(v54, a1, a4, v46, a2);
    }
    else
    {
      if ( a3 != 4 )
        goto LABEL_22;
      v43 = *(_QWORD *)(v32 + 8);
      v54 = operator new(0x13B0u);
      sub_11552D0(v54, a1, a4, v43, a2);
    }
  }
  result = (_QWORD *)v54;
  v41 = srca[1];
  srca[1] = v54;
  if ( !v41 )
    return result;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 48LL))(v41);
  result = (_QWORD *)srca[1];
  if ( result )
    return result;
LABEL_22:
  if ( (unsigned int)(*(_DWORD *)(a4 + 32) - 47) > 4 )
    return sub_10D2F60(a1, a2, a4);
  if ( a3 == 4 )
  {
    v44 = *(_QWORD *)(v32 + 8);
    v50 = operator new(0x968u);
    sub_1290FF0(v50, a1, a4, v44, a2);
    goto LABEL_28;
  }
  if ( a3 <= 4 )
  {
    if ( a3 == 2 )
    {
      v42 = *(_QWORD *)(v32 + 8);
      v50 = operator new(0xA10u);
      sub_11BE290(v50, a1, a4, v42, a2);
      goto LABEL_28;
    }
    return sub_10D2F60(a1, a2, a4);
  }
  if ( a3 == 8 )
  {
    v45 = *(_QWORD *)(v32 + 8);
    v50 = operator new(0x958u);
    sub_1220460(v50, a1, a4, v45, a2);
    goto LABEL_28;
  }
  if ( a3 != 16 )
    return sub_10D2F60(a1, a2, a4);
  v33 = *(_QWORD *)(v32 + 8);
  v50 = operator new(0x960u);
  sub_1291590(v50, a1, a4, v33, a2);
LABEL_28:
  result = (_QWORD *)v50;
  v34 = srca[1];
  srca[1] = v50;
  if ( v34 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 48LL))(v34);
    result = (_QWORD *)srca[1];
    if ( !result )
      return sub_10D2F60(a1, a2, a4);
  }
  return result;
}

