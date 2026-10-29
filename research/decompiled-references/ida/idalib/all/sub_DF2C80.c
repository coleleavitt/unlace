__int64 __fastcall sub_DF2C80(_QWORD *a1, __int64 a2, __int64 *a3, int a4)
{
  _QWORD *v7; // rdi
  __int64 (__fastcall *v8)(__int64); // rax
  _QWORD *v9; // rdi
  __int64 (*v10)(void); // rdx
  _QWORD *v11; // rdi
  _QWORD **v12; // rdi
  char v13; // al
  __int64 v14; // rbp
  unsigned int v15; // r12d
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rbx
  void *v19; // r13
  __int64 v20; // rax
  __m128i v22; // [rsp+0h] [rbp-B8h] BYREF
  void *v23; // [rsp+10h] [rbp-A8h]
  __int64 v24; // [rsp+18h] [rbp-A0h]
  __m128i v25; // [rsp+20h] [rbp-98h] BYREF
  void *v26; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v27; // [rsp+38h] [rbp-80h]
  void *v28; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v29; // [rsp+48h] [rbp-70h]
  void *v30; // [rsp+50h] [rbp-68h] BYREF
  unsigned int v31; // [rsp+58h] [rbp-60h]
  _BYTE v32[88]; // [rsp+60h] [rbp-58h] BYREF

  v7 = (_QWORD *)a1[3];
  v8 = *(__int64 (__fastcall **)(__int64))(*v7 + 24LL);
  if ( v8 == sub_CF0250 )
  {
    v9 = (_QWORD *)v7[3];
    v10 = *(__int64 (**)(void))(*v9 + 24LL);
    if ( (char *)v10 != (char *)v8 )
    {
LABEL_20:
      v13 = v10();
      goto LABEL_6;
    }
    v11 = (_QWORD *)v9[3];
    v8 = *(__int64 (__fastcall **)(__int64))(*v11 + 24LL);
    if ( (char *)v8 == (char *)v10 )
    {
      v12 = (_QWORD **)v11[3];
      v10 = (__int64 (*)(void))(*v12)[3];
      if ( (char *)v10 == (char *)v8 )
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD *))(*v12[3] + 24LL))(v12[3]);
        goto LABEL_6;
      }
      goto LABEL_20;
    }
  }
  v13 = ((__int64 (*)(void))v8)();
LABEL_6:
  v14 = a1[50];
  if ( (!v13 || *(_DWORD *)(v14 + 24)) && (v15 = sub_DCA720((__int64)a1, a2, v14 + 40), (_BYTE)v15) )
  {
    sub_E23220(
      v32,
      *(_QWORD *)(v14 + 72),
      (unsigned int)(a4 + *(_DWORD *)(v14 + 40)),
      (unsigned int)(a4 + *(_DWORD *)(v14 + 40)));
    v16 = a1[22];
    v22 = _mm_loadu_si128((const __m128i *)sub_E21760(v16, 16));
    sub_E21790(v16, 16);
    v17 = *a3;
    v25 = _mm_load_si128(&v22);
    sub_B78170(v17);
    sub_D47CB0((__int64)&v26, v25.m128i_i64);
    sub_2206A40(&v28, &v26);
    sub_2206D90(&v30, &v28, v25.m128i_u32[2]);
    v18 = v31;
    v19 = v30;
    if ( v31 > 0x40 && v30 )
      operator delete[](v30);
    if ( v29 > 0x40 && v28 )
      operator delete[](v28);
    if ( v27 > 0x40 && v26 )
      operator delete[](v26);
    v20 = sub_D0E1E0((__int64)v32);
    v24 = v18;
    v23 = v19;
    *(_QWORD *)v20 = v19;
    *(_DWORD *)(v20 + 8) = v24;
    sub_E24D00(v32);
    sub_E232A0(v32);
  }
  else
  {
    return 0;
  }
  return v15;
}
