unsigned __int64 __fastcall sub_1E9FB0(__int64 a1, __int64 a2)
{
  __int64 i; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // r9d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // r9d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r9d
  __int64 *v16; // rdi
  __int64 *v17; // r15
  __int64 v18; // rax
  __m128i v19; // xmm0
  __int64 *v21; // [rsp+8h] [rbp-A0h]
  __int64 *v22; // [rsp+8h] [rbp-A0h]
  __int64 v23; // [rsp+8h] [rbp-A0h]
  __int64 v24; // [rsp+10h] [rbp-98h] BYREF
  __int64 v25; // [rsp+18h] [rbp-90h]
  __int64 v26; // [rsp+20h] [rbp-88h] BYREF
  __m128i v27; // [rsp+28h] [rbp-80h] BYREF
  __int64 v28; // [rsp+40h] [rbp-68h] BYREF
  __int64 v29; // [rsp+48h] [rbp-60h]
  __int64 v30; // [rsp+50h] [rbp-58h] BYREF
  __m128i v31; // [rsp+58h] [rbp-50h]
  unsigned __int64 v32; // [rsp+68h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  for ( i = *(_QWORD *)(a1 + 48); i; i = *(_QWORD *)(i + 8) )
  {
    sub_11A700((_BYTE *)i, a2);
    sub_123820((__int64)&v24, a1, i, 0x1000u);
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    if ( *(_DWORD *)i == 61 )
    {
      v18 = v24;
      v19 = _mm_loadu_si128(&v27);
      v27 = 0;
      v24 = 0;
      v28 = v18;
      v31 = v19;
      v29 = v25;
      v25 = 0;
      v30 = v26;
      v26 = 0;
    }
    else
    {
      sub_11B0D0((_BYTE *)i, (__int64)&v28, *(_QWORD *)(a1 + 64));
    }
    sub_1E86A0((__int64)&v24, *(_QWORD **)(a1 + 64));
    sub_1E86A0((__int64)&v28, *(_QWORD **)(a1 + 64));
    sub_60440(&v28, &v24, v4, v5, v6, v7);
    sub_312EE0(&v30, &v26);
    v21 = *(__int64 **)(a2 + 48);
    sub_60080(v21, &v24);
    sub_311F30(v21 + 2, &v26);
    v22 = *(__int64 **)(a2 + 48);
    sub_60440(v22, &v28, v8, v9, v10, v11);
    sub_312EE0(v22 + 2, &v30);
    v16 = *(__int64 **)(a2 + 56);
    if ( v16 )
    {
      v23 = *(_QWORD *)(a2 + 56);
      sub_60440(v16, &v24, v12, v13, v14, v15);
      sub_312EE0(v23 + 16, &v26);
      v17 = *(__int64 **)(a2 + 56);
      sub_60080(v17, &v28);
      sub_311F30(v17 + 2, &v30);
    }
    if ( v30 )
    {
      v31.m128i_i64[0] = 0;
      qfree(v30);
    }
    qfree(v28);
    if ( v26 )
    {
      v27.m128i_i64[0] = 0;
      qfree(v26);
    }
    qfree(v24);
  }
  return v32 - __readfsqword(0x28u);
}
