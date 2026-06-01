__int64 __fastcall sub_21843D0(__int64 a1, __int64 *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  void *v7; // rax
  void **v8; // r12
  void **v9; // rbx
  const __m128i **v11; // rax
  unsigned __int64 v12; // r10
  const __m128i *v13; // r9
  const __m128i *v14; // rsi
  unsigned int v15; // edi
  _DWORD *v16; // rax
  size_t v17; // rax
  void **v18; // r15
  void **v19; // r14
  void *v20; // rax
  void *v21; // rax
  __int64 v22; // rax
  size_t v23; // rax
  _DWORD *v24; // [rsp+0h] [rbp-178h] BYREF
  char v25; // [rsp+8h] [rbp-170h]
  void *v26; // [rsp+10h] [rbp-168h] BYREF
  void *v27; // [rsp+18h] [rbp-160h]
  __int64 v28; // [rsp+20h] [rbp-158h]
  __m128i v29; // [rsp+30h] [rbp-148h]
  void *v30; // [rsp+50h] [rbp-128h] BYREF
  void **v31; // [rsp+58h] [rbp-120h]
  _QWORD v32[7]; // [rsp+70h] [rbp-108h] BYREF
  int v33; // [rsp+A8h] [rbp-D0h]
  __int64 v34; // [rsp+B0h] [rbp-C8h]
  __int64 v35; // [rsp+B8h] [rbp-C0h] BYREF
  __int128 *v36; // [rsp+C0h] [rbp-B8h]
  unsigned __int64 v37; // [rsp+C8h] [rbp-B0h]
  __int64 v38; // [rsp+D0h] [rbp-A8h]
  __int64 v39; // [rsp+D8h] [rbp-A0h]
  int v40; // [rsp+E0h] [rbp-98h]
  __int64 v41; // [rsp+E8h] [rbp-90h]
  __int128 v42; // [rsp+F0h] [rbp-88h] BYREF
  __int64 v43; // [rsp+100h] [rbp-78h]
  __int64 v44; // [rsp+108h] [rbp-70h]
  __int64 v45; // [rsp+110h] [rbp-68h]
  __int64 v46; // [rsp+118h] [rbp-60h]
  __int16 v47; // [rsp+120h] [rbp-58h]
  __int64 v48; // [rsp+128h] [rbp-50h]
  __int64 v49; // [rsp+130h] [rbp-48h]

  sub_22B0340(&v26, &byte_22F0C30, 0);
  if ( ((*(__int64 (__fastcall **)(__int64 *))(*a2 + 536))(a2) & 1) != 0 )
    sub_22B0360(&v26, "zca", 3, 1);
  v3 = (__int64 *)sub_2234150();
  v4 = *v3;
  v5 = v3[1];
  v32[3] = &v35;
  v44 = v5;
  v47 = 1;
  v32[0] = &off_2C75CE0;
  v6 = *a2;
  v33 = 1065353216;
  v40 = 1065353216;
  v32[1] = "riscv";
  v43 = v4;
  v32[2] = 5;
  v32[4] = 1;
  v32[5] = 0;
  v32[6] = 0;
  v34 = 0;
  v35 = 0;
  v36 = &v42;
  v37 = 1;
  v38 = 0;
  v39 = 0;
  v41 = 0;
  v42 = 0;
  v45 = 0;
  v46 = 0;
  v48 = 0;
  v49 = 0;
  (*(void (__fastcall **)(void **, __int64 *, _QWORD *))(v6 + 520))(&v30, a2, v32);
  v7 = v30;
  if ( v30 )
  {
    *(_BYTE *)(a1 + 24) |= 1u;
    *(_QWORD *)a1 = v7;
    goto LABEL_5;
  }
  v11 = *((const __m128i ***)v36 + 5 % v37);
  v12 = 5 % v37;
  if ( !v11 )
    goto LABEL_34;
  v13 = *v11;
  if ( (*v11)->m128i_i32[2] != 5 )
  {
    v14 = (const __m128i *)v13->m128i_i64[0];
    if ( !v13->m128i_i64[0] )
      goto LABEL_34;
    v15 = v14->m128i_u32[2];
    if ( v12 != v15 % v37 )
      goto LABEL_34;
    while ( v15 != 5 )
    {
      if ( !v14->m128i_i64[0] )
        goto LABEL_34;
      v13 = v14;
      v15 = *(_DWORD *)(v14->m128i_i64[0] + 8);
      if ( v12 != v15 % v37 )
        goto LABEL_34;
      v14 = (const __m128i *)v14->m128i_i64[0];
    }
    v13 = (const __m128i *)v13->m128i_i64[0];
    if ( !v13 )
      goto LABEL_34;
  }
  v29 = _mm_loadu_si128(v13 + 1);
  sub_22AACF0(&v24, v29.m128i_i64[0], v29.m128i_i64[1]);
  v16 = v24;
  if ( (v25 & 1) == 0 )
  {
    if ( *v24 == 32 )
    {
      v23 = j__strlen("64bit");
      sub_22B0360(&v26, "64bit", v23, 0);
    }
    else
    {
      v17 = j__strlen("64bit");
      sub_22B0360(&v26, "64bit", v17, 1);
    }
    sub_22AB330(&v30, v24, 0, 1);
    sub_22B04D0(&v26, v30, ((char *)v31 - (_BYTE *)v30) >> 5);
    v18 = v31;
    v19 = (void **)v30;
    if ( v31 != v30 )
    {
      do
      {
        while ( *v19 != v19 + 2 )
        {
          operator delete(*v19);
          v19 += 4;
          if ( v19 == v18 )
            goto LABEL_30;
        }
        v19 += 4;
      }
      while ( v18 != v19 );
LABEL_30:
      v19 = (void **)v30;
    }
    if ( v19 )
      operator delete(v19);
    sub_10A71B0((__int64)&v24);
LABEL_34:
    v20 = v26;
    *(_BYTE *)(a1 + 24) &= ~1u;
    v26 = nullptr;
    *(_QWORD *)a1 = v20;
    v21 = v27;
    v27 = nullptr;
    *(_QWORD *)(a1 + 8) = v21;
    v22 = v28;
    v28 = 0;
    *(_QWORD *)(a1 + 16) = v22;
    goto LABEL_5;
  }
  *(_BYTE *)(a1 + 24) |= 1u;
  *(_QWORD *)a1 = v16;
  v24 = nullptr;
  sub_10A71B0((__int64)&v24);
LABEL_5:
  v32[0] = &off_2C75CE0;
  sub_2182FA0((__int64)v32);
  v8 = (void **)v27;
  v9 = (void **)v26;
  if ( v27 != v26 )
  {
    do
    {
      while ( *v9 != v9 + 2 )
      {
        operator delete(*v9);
        v9 += 4;
        if ( v8 == v9 )
          goto LABEL_8;
      }
      v9 += 4;
    }
    while ( v8 != v9 );
LABEL_8:
    v9 = (void **)v26;
  }
  if ( v9 )
    operator delete(v9);
  return a1;
}
