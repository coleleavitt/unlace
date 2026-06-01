__int64 __fastcall sub_2154E00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdi
  unsigned int v7; // r14d
  _QWORD *v9; // rax
  __m128i v10; // xmm1
  __m128i *v11; // rax
  _WORD *v12; // rdi
  bool v13; // zf
  __int16 v14; // cx
  __int64 v15; // rdx
  __m128i si128; // xmm0
  __int64 v17; // r14
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rax
  char v21; // r14
  _QWORD *v22; // rax
  __m128i v23; // xmm3
  __m128i *v24; // rax
  _DWORD *v25; // rdi
  __int32 v26; // ecx
  __int64 v27; // rdx
  __m128i v28; // xmm0
  __int64 v29; // rsi
  __int64 v30; // rsi
  __int64 v31; // rax
  _QWORD **v32; // rdi
  _DWORD *v33; // [rsp+0h] [rbp-E8h]
  _DWORD *v34; // [rsp+0h] [rbp-E8h]
  __int64 v35; // [rsp+0h] [rbp-E8h]
  char v36; // [rsp+0h] [rbp-E8h]
  __m128i *v37; // [rsp+8h] [rbp-E0h]
  __m128i *v38; // [rsp+8h] [rbp-E0h]
  __int64 v39; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v40; // [rsp+18h] [rbp-D0h] BYREF
  void *v41; // [rsp+20h] [rbp-C8h]
  __int64 v42; // [rsp+28h] [rbp-C0h]
  __m128i v43; // [rsp+30h] [rbp-B8h] BYREF
  void *v44; // [rsp+40h] [rbp-A8h]
  _BYTE v45[24]; // [rsp+48h] [rbp-A0h] BYREF
  void *v46; // [rsp+60h] [rbp-88h]
  __int64 v47; // [rsp+68h] [rbp-80h]
  __m128i v48; // [rsp+70h] [rbp-78h] BYREF
  const char *v49; // [rsp+80h] [rbp-68h] BYREF
  __int64 v50; // [rsp+88h] [rbp-60h]
  __int64 v51; // [rsp+90h] [rbp-58h]
  __int64 v52; // [rsp+98h] [rbp-50h]
  __int16 v53; // [rsp+A0h] [rbp-48h]

  if ( (unsigned __int8)sub_2153CB0(*(__int64 **)(a1 + 24), &v39) )
  {
    v6 = *(_QWORD *)(a1 + 8);
    v49 = "expected identifier in directive";
    v53 = 259;
    return (unsigned int)sub_21543E0(v6, (__int64)&v49, 0, 0);
  }
  v9 = *(_QWORD **)(a1 + 32);
  if ( *(_DWORD *)*v9 == 26 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 152LL))(*(_QWORD *)(a1 + 8));
  }
  else
  {
    v33 = (_DWORD *)*v9;
    strcpy(v48.m128i_i8, "Expected ,");
    v10 = _mm_load_si128(&v48);
    v44 = &v45[8];
    *(__m128i *)&v45[8] = v10;
    *(_QWORD *)v45 = 10;
    v46 = &v48;
    v47 = 0;
    v48.m128i_i8[0] = 0;
    v11 = (__m128i *)operator new(0x1Fu);
    v12 = v44;
    v13 = v44 == &v45[8];
    v11->m128i_i64[0] = *(_QWORD *)v44;
    v14 = v12[4];
    qmemcpy((char *)&v11->m128i_u64[1] + 2, ", instead got: ", 15);
    v15 = (__int64)v33;
    v11->m128i_i16[4] = v14;
    if ( !v13 )
    {
      v37 = v11;
      operator delete(v12);
      v11 = v37;
      v15 = (__int64)v33;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AB4F0);
    v11[1].m128i_i8[9] = 0;
    *(__m128i *)v45 = si128;
    v41 = &v43;
    if ( v11 == (__m128i *)&v45[8] )
    {
      v11 = &v43;
      v43 = _mm_load_si128((const __m128i *)&v45[8]);
    }
    else
    {
      v41 = v11;
      v43.m128i_i64[0] = *(_QWORD *)&v45[8];
    }
    v17 = *(_QWORD *)(a1 + 24);
    v44 = &v45[8];
    v42 = *(_QWORD *)v45;
    *(_QWORD *)v45 = 0;
    v45[8] = 0;
    v18 = *(_QWORD *)(v15 + 8);
    v19 = *(_QWORD *)(v15 + 16);
    v49 = (const char *)v11;
    v51 = v18;
    v50 = v42;
    v52 = v19;
    v53 = 1285;
    v20 = sub_2124B50(v15);
    v21 = sub_2153E90(v17, v20, (__int64)&v49, 0, 0);
    if ( v41 != &v43 )
      operator delete(v41);
    if ( v44 != &v45[8] )
      operator delete(v44);
    if ( v46 != &v48 )
      operator delete(v46);
    if ( v21 )
      return 1;
  }
  v7 = sub_2153C90(*(__int64 **)(a1 + 24), (__int64)&v40);
  if ( (_BYTE)v7 )
    return 1;
  v22 = *(_QWORD **)(a1 + 32);
  if ( *(_DWORD *)*v22 != 9 )
  {
    v34 = (_DWORD *)*v22;
    strcpy(v48.m128i_i8, "Expected eol");
    v23 = _mm_load_si128(&v48);
    v44 = &v45[8];
    *(__m128i *)&v45[8] = v23;
    *(_QWORD *)v45 = 12;
    v46 = &v48;
    v47 = 0;
    v48.m128i_i8[0] = 0;
    v24 = (__m128i *)operator new(0x1Fu);
    v25 = v44;
    v13 = v44 == &v45[8];
    v24->m128i_i64[0] = *(_QWORD *)v44;
    v26 = v25[2];
    qmemcpy((char *)&v24->m128i_u64[1] + 4, ", instead got: ", 15);
    v27 = (__int64)v34;
    v24->m128i_i32[2] = v26;
    if ( !v13 )
    {
      v38 = v24;
      operator delete(v25);
      v24 = v38;
      v27 = (__int64)v34;
    }
    v28 = _mm_load_si128((const __m128i *)&xmmword_23AB500);
    v24[1].m128i_i8[11] = 0;
    *(__m128i *)v45 = v28;
    v41 = &v43;
    if ( v24 == (__m128i *)&v45[8] )
    {
      v24 = &v43;
      v43 = _mm_load_si128((const __m128i *)&v45[8]);
    }
    else
    {
      v41 = v24;
      v43.m128i_i64[0] = *(_QWORD *)&v45[8];
    }
    v45[8] = 0;
    v44 = &v45[8];
    v29 = *(_QWORD *)(a1 + 24);
    v42 = *(_QWORD *)v45;
    *(_QWORD *)v45 = 0;
    v35 = v29;
    v30 = *(_QWORD *)(v27 + 16);
    v51 = *(_QWORD *)(v27 + 8);
    v50 = v42;
    v52 = v30;
    v53 = 1285;
    v49 = (const char *)v24;
    v31 = sub_2124B50(v27);
    v36 = sub_2153E90(v35, v31, (__int64)&v49, 0, 0);
    if ( v41 != &v43 )
      operator delete(v41);
    if ( v44 != &v45[8] )
      operator delete(v44);
    if ( v46 != &v48 )
      operator delete(v46);
    if ( !v36 )
      goto LABEL_34;
    return 1;
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 152LL))(*(_QWORD *)(a1 + 8));
LABEL_34:
  v32 = *(_QWORD ***)(a1 + 8);
  if ( !*(_BYTE *)(v39 + 36) || *(_DWORD *)(v39 + 32) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*v32[3] + 448LL))(v32[3], v39, v40);
  }
  else
  {
    v49 = ".size directive ignored for function symbols";
    v53 = 259;
    ((void (__fastcall *)(_QWORD **, __int64, const char **, _QWORD, _QWORD))(*v32)[17])(v32, a4, &v49, 0, 0);
  }
  return v7;
}
