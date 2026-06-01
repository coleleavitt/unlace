__int64 __fastcall sub_1093ED0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char ***a6)
{
  int v7; // edi
  __m128i *v8; // rax
  void *v9; // r15
  size_t v10; // r12
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 *v14; // r8
  __int64 *v15; // rax
  __int64 v16; // rax
  unsigned int v17; // r9d
  __int64 *v18; // r8
  __int64 v19; // rcx
  unsigned int v20; // eax
  char *v22; // rax
  size_t v23; // r12
  char *v24; // rbp
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // r15d
  __int64 *v30; // rcx
  void *v31; // rax
  __int64 v32; // rax
  __int64 *v33; // rcx
  __int64 v34; // r13
  unsigned int v35; // eax
  unsigned int v40; // [rsp+28h] [rbp-A0h]
  __int64 *v41; // [rsp+28h] [rbp-A0h]
  __int64 *v42; // [rsp+30h] [rbp-98h]
  __int64 v43; // [rsp+38h] [rbp-90h]
  __int64 *v44; // [rsp+48h] [rbp-80h] BYREF
  void *v45[2]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v46; // [rsp+60h] [rbp-68h] BYREF
  void *src; // [rsp+70h] [rbp-58h] BYREF
  size_t n; // [rsp+78h] [rbp-50h]
  _OWORD v49[4]; // [rsp+80h] [rbp-48h] BYREF

  v7 = *(_DWORD *)(a1 + 512);
  if ( !v7 )
    goto LABEL_2;
  v22 = sub_FF7B80(v7);
  v23 = 0;
  v24 = v22;
  if ( v22 )
    v23 = strlen(v22);
  v25 = sub_2244B30(v24, v23);
  v26 = (unsigned int)sub_2244CB0(a2, v24, v23, v25);
  v29 = v26;
  v30 = (__int64 *)(*(_QWORD *)a2 + 8 * v26);
  if ( !*v30 )
    goto LABEL_23;
  if ( *v30 == -8 )
  {
    --*(_DWORD *)(a2 + 16);
LABEL_23:
    v41 = v30;
    v32 = sub_22300B0(v23 + 17, 8, v26, v30, v27, v28);
    v33 = v41;
    v34 = v32;
    if ( v23 )
    {
      memcpy((void *)(v32 + 16), v24, v23);
      v33 = v41;
    }
    *(_BYTE *)(v34 + v23 + 16) = 0;
    *(_QWORD *)v34 = v23;
    *(_BYTE *)(v34 + 8) = 0;
    *v33 = v34;
    ++*(_DWORD *)(a2 + 12);
    v35 = sub_22450D0(a2, v29);
    sub_10298F0((__int64 **)&src, (__int64 *)(*(_QWORD *)a2 + 8LL * v35), 0);
    v31 = src;
    goto LABEL_26;
  }
  sub_10298F0((__int64 **)&src, v30, 0);
  v31 = src;
LABEL_26:
  *(_BYTE *)(*(_QWORD *)v31 + 8LL) = 1;
LABEL_2:
  sub_D8B070(
    v45,
    (__int64 (__fastcall *)(_BYTE *, __int64, __int64, __va_list_tag *))&vsnprintf,
    16,
    (__int64)"%u",
    *(_DWORD *)(a1 + 516));
  v8 = (__m128i *)sub_99BDC0(v45, 0, 0, "ptx", 3u);
  src = v49;
  if ( (__m128i *)v8->m128i_i64[0] == &v8[1] )
  {
    v49[0] = _mm_loadu_si128(v8 + 1);
  }
  else
  {
    src = (void *)v8->m128i_i64[0];
    *(_QWORD *)&v49[0] = v8[1].m128i_i64[0];
  }
  n = v8->m128i_u64[1];
  v8->m128i_i64[0] = (__int64)v8[1].m128i_i64;
  v8->m128i_i64[1] = 0;
  v8[1].m128i_i8[0] = 0;
  v9 = src;
  v10 = n;
  v11 = sub_2244B30(src, n);
  v12 = (unsigned int)sub_2244CB0(a2, v9, v10, v11);
  v14 = (__int64 *)(*(_QWORD *)a2 + 8 * v12);
  if ( *v14 )
  {
    if ( *v14 != -8 )
    {
      sub_10298F0(&v44, v14, 0);
      v15 = v44;
      goto LABEL_11;
    }
    --*(_DWORD *)(a2 + 16);
  }
  v42 = v14;
  v40 = v12;
  v16 = sub_22300B0(v10 + 17, 8, v12, v13, v14, v12);
  v17 = v40;
  v18 = v42;
  v19 = v16;
  if ( v10 )
  {
    v43 = v16;
    memcpy((void *)(v16 + 16), v9, v10);
    v19 = v43;
    v18 = v42;
    v17 = v40;
  }
  *(_BYTE *)(v19 + v10 + 16) = 0;
  *(_QWORD *)v19 = v10;
  *(_BYTE *)(v19 + 8) = 0;
  *v18 = v19;
  ++*(_DWORD *)(a2 + 12);
  v20 = sub_22450D0(a2, v17);
  sub_10298F0(&v44, (__int64 *)(*(_QWORD *)a2 + 8LL * v20), 0);
  v15 = v44;
LABEL_11:
  *(_BYTE *)(*v15 + 8) = 1;
  if ( src != v49 )
    operator delete(src);
  if ( v45[0] != &v46 )
    operator delete(v45[0]);
  return sub_102FFA0(a1, a2, a3, a4, a5, a6);
}
