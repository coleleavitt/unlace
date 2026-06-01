__int64 __fastcall sub_DC5550(_QWORD *a1, __int64 a2, __int64 *a3, int a4)
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
  __int64 v19; // rdx
  __int64 v20; // r13
  __int64 v21; // rax
  __m128i v23; // [rsp+0h] [rbp-88h] BYREF
  __int64 v24; // [rsp+10h] [rbp-78h]
  __int64 v25; // [rsp+18h] [rbp-70h]
  __m128i v26; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v27[88]; // [rsp+30h] [rbp-58h] BYREF

  v7 = (_QWORD *)a1[3];
  v8 = *(__int64 (__fastcall **)(__int64))(*v7 + 24LL);
  if ( v8 == sub_CCC510 )
  {
    v9 = (_QWORD *)v7[3];
    v10 = *(__int64 (**)(void))(*v9 + 24LL);
    if ( (char *)v10 != (char *)v8 )
    {
LABEL_10:
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
      goto LABEL_10;
    }
  }
  v13 = ((__int64 (*)(void))v8)();
LABEL_6:
  v14 = a1[50];
  if ( v13 && !*(_DWORD *)(v14 + 24) )
    return 0;
  v15 = sub_DA69E0((__int64)a1, a2, v14 + 40);
  if ( !(_BYTE)v15 )
    return 0;
  sub_DFF4E0(
    v27,
    *(_QWORD *)(v14 + 72),
    (unsigned int)(a4 + *(_DWORD *)(v14 + 40)),
    (unsigned int)(a4 + *(_DWORD *)(v14 + 40)));
  v16 = a1[22];
  v23 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v16, 16));
  sub_DFDA50(v16, 16);
  v17 = *a3;
  v26 = _mm_load_si128(&v23);
  sub_B54430(v17);
  v18 = sub_D2AB80((__int64)&v26);
  v20 = v19;
  v21 = sub_CEA4F0((__int64)v27);
  v25 = v20;
  v24 = v18;
  *(_QWORD *)v21 = v18;
  *(_DWORD *)(v21 + 8) = v25;
  sub_E00FC0(v27);
  sub_DFF560(v27);
  return v15;
}

