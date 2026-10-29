__int64 __fastcall sub_90F100(_QWORD *a1, __int64 a2, int a3)
{
  _QWORD *v5; // rdi
  __int64 (__fastcall *v6)(__int64); // rax
  _QWORD *v7; // rdi
  unsigned __int8 (*v8)(void); // rdx
  _QWORD *v9; // rdi
  _QWORD **v10; // rdi
  char v11; // al
  __int64 v12; // r13
  const __m128i *v13; // rax
  __m128i v14; // xmm0
  __int64 v15; // rax
  __int64 v16; // r13
  unsigned int v17; // ebx
  __int64 v18; // r12
  __int64 v19; // r13
  __int64 v20; // rax
  __m128i v22; // xmm0
  __m128i v23; // [rsp+0h] [rbp-88h] BYREF
  __int64 v24; // [rsp+10h] [rbp-78h]
  _QWORD v25[4]; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v26; // [rsp+40h] [rbp-48h]
  int v27; // [rsp+50h] [rbp-38h]

  v5 = (_QWORD *)a1[3];
  v6 = *(__int64 (__fastcall **)(__int64))(*v5 + 24LL);
  if ( v6 == sub_8D7F10 )
  {
    v7 = (_QWORD *)v5[3];
    v8 = *(unsigned __int8 (**)(void))(*v7 + 24LL);
    if ( (char *)v8 != (char *)v6 )
      goto LABEL_13;
    v9 = (_QWORD *)v7[3];
    v6 = *(__int64 (__fastcall **)(__int64))(*v9 + 24LL);
    if ( (char *)v6 == (char *)v8 )
    {
      v10 = (_QWORD **)v9[3];
      v8 = (unsigned __int8 (*)(void))(*v10)[3];
      if ( (char *)v8 == (char *)v6 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD *))(*v10[3] + 24LL))(v10[3]);
        goto LABEL_6;
      }
LABEL_13:
      if ( v8() )
        return 0;
      goto LABEL_7;
    }
  }
  v11 = ((__int64 (*)(void))v6)();
LABEL_6:
  if ( v11 )
    return 0;
LABEL_7:
  v12 = a1[23];
  v13 = (const __m128i *)sub_A1A5A0(v12, 24);
  v14 = _mm_loadu_si128(v13);
  v15 = v13[1].m128i_i64[0];
  v23 = v14;
  v24 = v15;
  sub_A1A5E0(v12, 24);
  v16 = a1[25];
  if ( !(unsigned __int8)sub_9D9870(a1, a2, v16 + 40) )
    return 0;
  sub_A1C030(
    v25,
    *(_QWORD *)(v16 + 64),
    (unsigned int)(a3 + *(_DWORD *)(v16 + 40)),
    (unsigned int)(a3 + *(_DWORD *)(v16 + 40)));
  v17 = sub_9E26A0(a1, a2, v25);
  if ( (_BYTE)v17 )
  {
    v18 = v25[3];
    v19 = v25[0];
    if ( !v27 && *(_BYTE *)(sub_8E5480((__int64)v25) + 51) && v26 == v19 )
      v20 = v18 + v26 + 72;
    else
      v20 = v18 + v19 + 40;
    v22 = _mm_load_si128(&v23);
    *(_BYTE *)(v20 + 16) = v24;
    *(__m128i *)v20 = v22;
  }
  sub_A1C0C0(v25);
  return v17;
}

