__int64 __fastcall sub_19FAA60(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  size_t v4; // rax
  __m128i *v5; // rax
  size_t v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r12
  _QWORD *v9; // rax
  __m128i *v11; // [rsp+0h] [rbp-F8h]
  size_t v12; // [rsp+8h] [rbp-F0h]
  __m128i v13; // [rsp+10h] [rbp-E8h] BYREF
  void *v14; // [rsp+20h] [rbp-D8h] BYREF
  void *ptr; // [rsp+28h] [rbp-D0h]
  __int64 v16; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v17[64]; // [rsp+38h] [rbp-C0h] BYREF
  void *v18[2]; // [rsp+78h] [rbp-80h]
  __int64 v19; // [rsp+88h] [rbp-70h]
  _QWORD *v20; // [rsp+90h] [rbp-68h]
  __int64 v21; // [rsp+98h] [rbp-60h]
  int v22; // [rsp+A0h] [rbp-58h]
  __int64 v23; // [rsp+A8h] [rbp-50h] BYREF
  __int128 v24; // [rsp+B0h] [rbp-48h]
  __int64 v25; // [rsp+C0h] [rbp-38h]

  v3 = sub_2248870(a2, a3);
  sub_D8B070(
    &v14,
    (__int64 (__fastcall *)(_BYTE *, __int64, __int64, __va_list_tag *))&vsnprintf,
    32,
    (__int64)"%lu",
    v3);
  v4 = j__strlen("__hlsl_rootsig_decl_");
  v5 = (__m128i *)sub_99BDC0(&v14, 0, 0, "__hlsl_rootsig_decl_", v4);
  v11 = &v13;
  if ( (__m128i *)v5->m128i_i64[0] == &v5[1] )
  {
    v13 = _mm_loadu_si128(v5 + 1);
  }
  else
  {
    v11 = (__m128i *)v5->m128i_i64[0];
    v13.m128i_i64[0] = v5[1].m128i_i64[0];
  }
  v6 = v5->m128i_u64[1];
  v5[1].m128i_i8[0] = 0;
  v12 = v6;
  v5->m128i_i64[0] = (__int64)v5[1].m128i_i64;
  v5->m128i_i64[1] = 0;
  if ( v14 != &v16 )
    operator delete(v14);
  v7 = sub_168B6C0((__int64)a1);
  v8 = sub_6F3470(*(_QWORD *)(v7 + 17504), v11, v12);
  v9 = (_QWORD *)*a1;
  ptr = v17;
  v16 = 0x800000000LL;
  *(_OWORD *)v18 = 0;
  v20 = v9;
  v14 = nullptr;
  v19 = 0;
  v21 = v8;
  v22 = 0;
  sub_B85890(&v23, v8);
  v24 = 0;
  v25 = 0x101010000LL;
  sub_1A395A0(&v14);
  sub_1A48440(*a1, &v14, *(_QWORD *)(*a1 + 544LL), 0);
  if ( !BYTE3(v25) )
  {
LABEL_17:
    if ( !BYTE4(v25) || (_DWORD)v14 != 5 )
      goto LABEL_9;
LABEL_22:
    sub_1A445B0(v20, &v14);
    goto LABEL_9;
  }
  if ( (_DWORD)v14 == 5 )
  {
    if ( !BYTE4(v25) )
      goto LABEL_9;
    goto LABEL_22;
  }
  if ( v18[1] && (*(_BYTE *)(v20[29] + 46LL) & 0x20) != 0 )
  {
    sub_1663B80(v20, (__int64)&v14);
    goto LABEL_17;
  }
LABEL_9:
  if ( v18[0] )
    sub_1A39780(v18[0]);
  if ( ptr != v17 )
    free(ptr);
  if ( v11 != &v13 )
    operator delete(v11);
  return v8;
}
