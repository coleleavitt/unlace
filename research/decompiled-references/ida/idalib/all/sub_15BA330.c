unsigned __int64 __fastcall sub_15BA330(__int64 a1, const void *a2, size_t a3)
{
  __int64 v5; // rbx
  unsigned int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // r15
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r15
  _QWORD *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  _QWORD *v19; // rbp
  char *v20; // rdx
  _QWORD *v21; // rcx
  unsigned int v22; // eax
  __m128i v23; // xmm1
  unsigned __int64 v24; // rbx
  unsigned __int8 v25; // dl
  _QWORD *v27; // rax
  __int64 v28; // rax
  int v29; // [rsp+Ch] [rbp-10Ch]
  int v30; // [rsp+Ch] [rbp-10Ch]
  __m128i v31; // [rsp+10h] [rbp-108h] BYREF
  __int64 v32; // [rsp+20h] [rbp-F8h] BYREF
  __int64 *v33; // [rsp+30h] [rbp-E8h] BYREF
  void *ptr; // [rsp+38h] [rbp-E0h]
  __int64 v35; // [rsp+40h] [rbp-D8h]
  _BYTE v36[64]; // [rsp+48h] [rbp-D0h] BYREF
  void *v37[2]; // [rsp+88h] [rbp-90h]
  __int64 v38; // [rsp+98h] [rbp-80h]
  __int64 v39; // [rsp+A0h] [rbp-78h]
  __m128i v40; // [rsp+A8h] [rbp-70h]
  __int64 v41; // [rsp+B8h] [rbp-60h]
  __int64 v42; // [rsp+C0h] [rbp-58h]
  __int64 v43; // [rsp+C8h] [rbp-50h]
  __int64 v44; // [rsp+D0h] [rbp-48h]

  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17504LL);
  v6 = sub_2244B30(a2, a3);
  v7 = (unsigned int)sub_2244CB0(v5, a2, a3, v6);
  v9 = (__int64 *)(*(_QWORD *)v5 + 8 * v7);
  if ( !*v9 )
  {
LABEL_11:
    v18 = *(_QWORD *)(v5 + 24);
    *(_QWORD *)(v5 + 104) += a3 + 17;
    v19 = (_QWORD *)((v18 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    v20 = (char *)v19 + a3 + 17;
    if ( *(_QWORD *)(v5 + 32) >= (unsigned __int64)v20 && v18 )
    {
      *(_QWORD *)(v5 + 24) = v20;
    }
    else
    {
      v30 = v7;
      v28 = sub_986170(v5 + 24, a3 + 17, a3 + 17, 3, v7, v8);
      LODWORD(v7) = v30;
      v19 = (_QWORD *)v28;
    }
    v21 = v19 + 2;
    if ( a3 )
    {
      v29 = v7;
      v27 = memcpy(v19 + 2, a2, a3);
      LODWORD(v7) = v29;
      v21 = v27;
    }
    *((_BYTE *)v21 + a3) = 0;
    *v19 = a3;
    v19[1] = 0;
    *v9 = (__int64)v19;
    ++*(_DWORD *)(v5 + 12);
    v22 = sub_22450D0(v5, (unsigned int)v7);
    sub_989490(&v33, (__int64 *)(*(_QWORD *)v5 + 8LL * v22), 0);
    v12 = *v33;
    v13 = *(_QWORD **)(*v33 + 8);
    if ( v13 )
      goto LABEL_17;
    goto LABEL_4;
  }
  if ( *v9 == -8 )
  {
    --*(_DWORD *)(v5 + 16);
    goto LABEL_11;
  }
  sub_989490(&v33, v9, 0);
  v12 = *v33;
  v13 = *(_QWORD **)(*v33 + 8);
  if ( v13 )
  {
LABEL_17:
    v16 = (unsigned __int64)v13;
    goto LABEL_18;
  }
LABEL_4:
  v14 = *(_QWORD *)(v5 + 120);
  if ( v14 )
  {
    v13 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, const void *, size_t))(*(_QWORD *)v14 + 16LL))(v14, a2, a3);
    *(_QWORD *)(v12 + 8) = v13;
    if ( v13 )
      goto LABEL_17;
  }
  v15 = *(_QWORD *)(v5 + 24);
  *(_QWORD *)(v5 + 104) += 24LL;
  v16 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_QWORD *)(v5 + 32) >= v16 + 24 && v15 )
  {
    *(_QWORD *)(v5 + 24) = v16 + 24;
    v13 = (_QWORD *)((v15 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  }
  else
  {
    v13 = (_QWORD *)sub_986170(v5 + 24, 24, 24, 3, v10, v11);
    v16 = (unsigned __int64)v13;
  }
  v17 = *v13 & 0xFFFFF80000000000LL;
  v13[1] = 0;
  *v13 = v17 | 0x1FFFC05;
  *(_QWORD *)(v12 + 8) = v13;
  v13[2] = v12;
LABEL_18:
  *(_WORD *)v13 = *(_WORD *)v13 & 0xFE00 | 5;
  v31.m128i_i64[0] = v16;
  v31.m128i_i32[2] = 0;
  sub_B85890(&v32, v16);
  ptr = v36;
  v23 = _mm_load_si128(&v31);
  v35 = 0x800000000LL;
  *(_OWORD *)v37 = 0;
  v41 = v32;
  v40 = v23;
  v44 = 0x101010000LL;
  v33 = nullptr;
  v38 = 0;
  v39 = a1;
  v42 = 0;
  v43 = 0;
  sub_1A395A0(&v33);
  sub_1A49A10(a1, &v33, *(_QWORD *)(a1 + 608), 0, 0);
  v24 = *(_QWORD *)ptr & 0xFFFFFFFFFFFFFFF8LL;
  v25 = *(_BYTE *)(v24 + 28) & 0x7F;
  if ( (unsigned int)v25 - 53 <= 1 || ((v25 + 52) & 0x7Fu) <= 1 )
    v24 = sub_B72ED0(*(_QWORD *)ptr & 0xFFFFFFFFFFFFFFF8LL);
  if ( !BYTE3(v44) )
  {
LABEL_31:
    if ( !BYTE4(v44) || (_DWORD)v33 != 5 )
      goto LABEL_25;
LABEL_33:
    sub_1A445B0(v39, &v33);
    goto LABEL_25;
  }
  if ( (_DWORD)v33 == 5 )
  {
    if ( !BYTE4(v44) )
      goto LABEL_25;
    goto LABEL_33;
  }
  if ( v37[1] && (*(_BYTE *)(*(_QWORD *)(v39 + 232) + 46LL) & 0x20) != 0 )
  {
    sub_1663B80(v39, &v33);
    goto LABEL_31;
  }
LABEL_25:
  if ( v37[0] )
    sub_1A39780(v37[0]);
  if ( ptr != v36 )
    free(ptr);
  return v24;
}
