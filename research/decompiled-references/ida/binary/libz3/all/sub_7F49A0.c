void __fastcall sub_7F49A0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rsi
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // rdi
  int v16; // eax
  const __m128i *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 *v20; // rdi
  __int64 v21; // rdx
  __int64 (__fastcall *v22)(__int64, __int64, __int64, _QWORD *, __int64, __int64); // r8
  bool v23; // zf
  __int64 v24; // [rsp+0h] [rbp-80h]
  __int64 v25; // [rsp+8h] [rbp-78h]
  __int64 v26; // [rsp+10h] [rbp-70h]
  unsigned __int64 v27; // [rsp+18h] [rbp-68h] BYREF
  int v28; // [rsp+20h] [rbp-60h]
  _QWORD v29[2]; // [rsp+28h] [rbp-58h] BYREF
  __m128i v30[4]; // [rsp+38h] [rbp-48h] BYREF

  if ( a2 != a4 && a4 != a3 )
  {
    v7 = *a1;
    v28 = -2;
    v27 = 0xFFFFFFFEFFFFFFFELL;
    v24 = a1[1];
    sub_79AD00(v30, v7, a2, a4);
    v9 = v30[0].m128i_i64[0];
    if ( v30[0].m128i_i64[0] && !*(_DWORD *)(v30[0].m128i_i64[0] + 8) )
      sub_15D7BC0(v30[0].m128i_i64[1], v30[0].m128i_i64[0]);
    v25 = a1[1];
    sub_79AD00(v30, *a1, a3, a4);
    v10 = v30[0].m128i_i64[0];
    if ( v30[0].m128i_i64[0] && !*(_DWORD *)(v30[0].m128i_i64[0] + 8) )
      sub_15D7BC0(v30[0].m128i_i64[1], v30[0].m128i_i64[0]);
    v26 = a1[1];
    sub_79AD00(v30, *a1, a2, a3);
    v11 = v30[0].m128i_i64[0];
    if ( v30[0].m128i_i64[0] && !*(_DWORD *)(v30[0].m128i_i64[0] + 8) )
      sub_15D7BC0(v30[0].m128i_i64[1], v30[0].m128i_i64[0]);
    v12 = sub_79C480(*a1, v9);
    v13 = *a1;
    LODWORD(v27) = v12 ^ 1;
    v14 = sub_79C480(v13, v10);
    v15 = *a1;
    HIDWORD(v27) = v14 ^ 1;
    v16 = sub_79C480(v15, v11);
    v17 = (const __m128i *)*a1;
    v28 = v16;
    v18 = sub_7A5050(v17, &v27);
    v20 = *(__int64 **)(*a1 + 24);
    v21 = *v20;
    v29[1] = v18;
    v22 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *, __int64, __int64))(v21 + 16);
    v29[0] = 2;
    if ( v22 == sub_788610 )
    {
      v30[0].m128i_i64[0] = 2;
      v30[0].m128i_i64[1] = v18;
      sub_11C4C20(v20, 3, &v27, v30, v22, v19);
    }
    else
    {
      ((void (__fastcall *)(__int64 *, __int64, unsigned __int64 *, _QWORD *))v22)(v20, 3, &v27, v29);
    }
    if ( v11 && (v23 = *(_DWORD *)(v11 + 8) == 1, --*(_DWORD *)(v11 + 8), v23) )
    {
      sub_15D7BC0(v26, v11);
      if ( !v10 )
        goto LABEL_18;
    }
    else if ( !v10 )
    {
      goto LABEL_18;
    }
    v23 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v23 )
    {
      sub_15D7BC0(v25, v10);
      if ( !v9 )
        return;
      goto LABEL_19;
    }
LABEL_18:
    if ( !v9 )
      return;
LABEL_19:
    v23 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v23 )
      sub_15D7BC0(v24, v9);
  }
}

