__int64 __fastcall sub_2155310(__int64 a1)
{
  __int64 v2; // rdi
  void **v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rdi
  __int64 v9; // r12
  _DWORD **v10; // rax
  _DWORD *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  _DWORD **v16; // rax
  _DWORD **v17; // rax
  _QWORD *v18; // rdi
  _DWORD **v19; // rax
  _DWORD *v20; // r15
  __m128i *v21; // rax
  __int32 v22; // edx
  __int64 v23; // rbx
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int8 v27; // [rsp+8h] [rbp-D0h]
  unsigned __int8 v28; // [rsp+8h] [rbp-D0h]
  unsigned __int8 v29; // [rsp+8h] [rbp-D0h]
  __m128i *v30; // [rsp+10h] [rbp-C8h]
  __int64 v31; // [rsp+18h] [rbp-C0h]
  __m128i si128; // [rsp+20h] [rbp-B8h] BYREF
  void *v33; // [rsp+30h] [rbp-A8h]
  _BYTE v34[24]; // [rsp+38h] [rbp-A0h] BYREF
  void *v35; // [rsp+50h] [rbp-88h]
  __int64 v36; // [rsp+58h] [rbp-80h]
  __m128i v37; // [rsp+60h] [rbp-78h] BYREF
  void **v38; // [rsp+70h] [rbp-68h] BYREF
  __int64 v39; // [rsp+78h] [rbp-60h]
  __int64 v40; // [rsp+80h] [rbp-58h]
  __int64 v41; // [rsp+88h] [rbp-50h]
  __int16 v42; // [rsp+90h] [rbp-48h]

  v2 = **(_QWORD **)(a1 + 32);
  v3 = *(void ***)(v2 + 8);
  v4 = *(_QWORD *)(v2 + 16);
  if ( *(_DWORD *)v2 != 2 )
  {
    v5 = *(_QWORD *)(a1 + 24);
    v40 = *(_QWORD *)(v2 + 8);
    v38 = (void **)"Expected label after .type directive, got: ";
    v39 = 43;
    v41 = v4;
    v42 = 1285;
    v6 = sub_2124B50(v2);
    return sub_2153E90(v5, v6, (__int64)&v38, 0, 0);
  }
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) + 8LL);
  v38 = v3;
  v42 = 261;
  v39 = v4;
  v9 = sub_21093A0(v8, &v38);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 152LL))(*(_QWORD *)(a1 + 8));
  v10 = *(_DWORD ***)(a1 + 32);
  v11 = *v10;
  if ( **v10 != 26
    || ((*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 152LL))(*(_QWORD *)(a1 + 8)),
        v16 = *(_DWORD ***)(a1 + 32),
        v11 = *v16,
        **v16 != 46)
    || ((*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 152LL))(*(_QWORD *)(a1 + 8)),
        v17 = *(_DWORD ***)(a1 + 32),
        v11 = *v17,
        **v17 != 2) )
  {
    v12 = *((_QWORD *)v11 + 1);
    v13 = *((_QWORD *)v11 + 2);
    v39 = 39;
    v38 = (void **)"Expected label,@type declaration, got: ";
    v14 = *(_QWORD *)(a1 + 24);
LABEL_6:
    v40 = v12;
    v42 = 1285;
    v41 = v13;
    v15 = sub_2124B50((__int64)v11);
    return sub_2153E90(v14, v15, (__int64)&v38, 0, 0);
  }
  v13 = *((_QWORD *)v11 + 2);
  v12 = *((_QWORD *)v11 + 1);
  if ( v13 == 8 )
  {
    if ( *(_QWORD *)v12 != 0x6E6F6974636E7566LL )
    {
LABEL_11:
      v14 = *(_QWORD *)(a1 + 24);
      v39 = 26;
      v38 = (void **)"Unknown WASM symbol type: ";
      goto LABEL_6;
    }
    v18 = *(_QWORD **)(a1 + 8);
    *(_BYTE *)(v9 + 36) = 1;
    *(_DWORD *)(v9 + 32) = 0;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18[3] + 288LL) + 8LL) + 176LL) )
      *(_BYTE *)(v9 + 42) = 1;
  }
  else
  {
    if ( v13 != 6 )
      goto LABEL_11;
    if ( *(_DWORD *)v12 == 1651469415 && *(_WORD *)(v12 + 4) == 27745 )
    {
      *(_DWORD *)(v9 + 32) = 2;
      v18 = *(_QWORD **)(a1 + 8);
      *(_BYTE *)(v9 + 36) = 1;
    }
    else
    {
      if ( *(_DWORD *)v12 != 1701470831 || *(_WORD *)(v12 + 4) != 29795 )
        goto LABEL_11;
      *(_DWORD *)(v9 + 32) = 1;
      v18 = *(_QWORD **)(a1 + 8);
      *(_BYTE *)(v9 + 36) = 1;
    }
  }
  (*(void (__fastcall **)(_QWORD *))(*v18 + 152LL))(v18);
  v19 = *(_DWORD ***)(a1 + 32);
  v20 = *v19;
  if ( **v19 == 9 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 152LL))(*(_QWORD *)(a1 + 8));
    return 0;
  }
  else
  {
    strcpy(v37.m128i_i8, "Expected EOL");
    v33 = &v34[8];
    *(__m128i *)&v34[8] = _mm_load_si128(&v37);
    v35 = &v37;
    v36 = 0;
    v37.m128i_i8[0] = 0;
    v21 = (__m128i *)operator new(0x1Fu);
    v21->m128i_i64[0] = *(_QWORD *)&v34[8];
    v22 = *(_DWORD *)&v34[16];
    strcpy(&v21->m128i_i8[12], ", instead got: ");
    v21->m128i_i32[2] = v22;
    *(__m128i *)v34 = _mm_load_si128((const __m128i *)&xmmword_23AB500);
    v30 = &si128;
    if ( v21 == (__m128i *)&v34[8] )
    {
      v21 = &si128;
      si128 = _mm_load_si128((const __m128i *)&v34[8]);
    }
    else
    {
      v30 = v21;
      si128.m128i_i64[0] = *(_QWORD *)&v34[8];
    }
    v23 = *(_QWORD *)(a1 + 24);
    v34[8] = 0;
    v31 = *(_QWORD *)v34;
    *(_QWORD *)v34 = 0;
    v24 = *((_QWORD *)v20 + 1);
    v33 = &v34[8];
    v25 = *((_QWORD *)v20 + 2);
    v40 = v24;
    v39 = v31;
    v41 = v25;
    v42 = 1285;
    v38 = (void **)v21;
    v26 = sub_2124B50((__int64)v20);
    result = sub_2153E90(v23, v26, (__int64)&v38, 0, 0);
    if ( v30 != &si128 )
    {
      v27 = result;
      operator delete(v30);
      result = v27;
    }
    if ( v33 != &v34[8] )
    {
      v28 = result;
      operator delete(v33);
      result = v28;
    }
    if ( v35 != &v37 )
    {
      v29 = result;
      operator delete(v35);
      return v29;
    }
  }
  return result;
}
