__int64 __fastcall sub_DBF880(_QWORD *a1, __int64 a2, int a3)
{
  _QWORD *v5; // rdi
  __int64 (__fastcall *v6)(__int64); // rax
  _QWORD *v7; // rdi
  __int64 (*v8)(void); // rdx
  _QWORD *v9; // rdi
  _QWORD **v10; // rdi
  char v11; // al
  __int64 v12; // rbp
  unsigned int v13; // r12d
  __int64 v14; // rbx
  __int64 v15; // rax
  __m128i v17; // [rsp+0h] [rbp-78h] BYREF
  __m128i v18; // [rsp+10h] [rbp-68h]
  _BYTE v19[88]; // [rsp+20h] [rbp-58h] BYREF

  v5 = (_QWORD *)a1[3];
  v6 = *(__int64 (__fastcall **)(__int64))(*v5 + 24LL);
  if ( v6 == sub_CCC510 )
  {
    v7 = (_QWORD *)v5[3];
    v8 = *(__int64 (**)(void))(*v7 + 24LL);
    if ( (char *)v8 != (char *)v6 )
    {
LABEL_10:
      v11 = v8();
      goto LABEL_6;
    }
    v9 = (_QWORD *)v7[3];
    v6 = *(__int64 (__fastcall **)(__int64))(*v9 + 24LL);
    if ( (char *)v6 == (char *)v8 )
    {
      v10 = (_QWORD **)v9[3];
      v8 = (__int64 (*)(void))(*v10)[3];
      if ( (char *)v8 == (char *)v6 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD *))(*v10[3] + 24LL))(v10[3]);
        goto LABEL_6;
      }
      goto LABEL_10;
    }
  }
  v11 = ((__int64 (*)(void))v6)();
LABEL_6:
  v12 = a1[50];
  if ( v11 && !*(_DWORD *)(v12 + 24) )
    return 0;
  v13 = sub_DA69E0((__int64)a1, a2, v12 + 40);
  if ( !(_BYTE)v13 )
    return 0;
  sub_DFF4E0(
    v19,
    *(_QWORD *)(v12 + 72),
    (unsigned int)(a3 + *(_DWORD *)(v12 + 40)),
    (unsigned int)(a3 + *(_DWORD *)(v12 + 40)));
  v14 = a1[22];
  v17 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v14, 16));
  sub_DFDA50(v14, 16);
  v15 = sub_CEA540((__int64)v19);
  v18 = _mm_load_si128(&v17);
  *(_QWORD *)v15 = v18.m128i_i64[0];
  *(_DWORD *)(v15 + 8) = v18.m128i_i32[2];
  sub_DFFFB0(v19);
  sub_E00FC0(v19);
  sub_DFF560(v19);
  return v13;
}

