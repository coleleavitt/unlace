unsigned __int64 __fastcall sub_2AA2C0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v5; // rbx
  unsigned __int8 (***v6)(void); // rdi
  unsigned __int8 (*v7)(void); // rax
  bool (__fastcall ***v8)(__int64); // rdi
  bool (__fastcall *v9)(__int64); // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  _QWORD *v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // r12
  __m128i v17; // xmm0
  __m128i v19; // [rsp+0h] [rbp-68h] BYREF
  __int64 v20; // [rsp+10h] [rbp-58h]
  __int64 v21; // [rsp+18h] [rbp-50h] BYREF
  __m128i v22; // [rsp+20h] [rbp-48h] BYREF
  __int64 v23; // [rsp+30h] [rbp-38h]
  unsigned __int64 v24; // [rsp+38h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 48);
  if ( a3 >= v3 || *(_QWORD *)(a2 + 48) != v3 )
    goto LABEL_11;
  v5 = 88 * a3;
  v6 = (unsigned __int8 (***)(void))(88 * a3 + *(_QWORD *)(a1 + 40));
  v7 = **v6;
  if ( (char *)v7 == (char *)sub_2A62E0 )
  {
    if ( !(unsigned int)sub_2508C0((__int64)(v6 + 1), (__int64)(v6 + 8)) )
      goto LABEL_11;
  }
  else if ( !v7() )
  {
    goto LABEL_11;
  }
  v8 = (bool (__fastcall ***)(__int64))(v5 + *(_QWORD *)(a2 + 40));
  v9 = **v8;
  if ( v9 == sub_2A62E0 )
  {
    if ( (unsigned int)sub_2508C0((__int64)(v8 + 1), (__int64)(v8 + 8)) )
      goto LABEL_7;
LABEL_11:
    sub_2A6AC0();
  }
  if ( !((unsigned __int8 (*)(void))v9)() )
    goto LABEL_11;
LABEL_7:
  switch_dbctx(*(int *)(a1 + 8));
  v10 = *(_QWORD *)(a1 + 40);
  v22 = 0;
  v21 = 0;
  v11 = v5 + v10;
  v12 = *(_QWORD *)(a2 + 40) + v5;
  v13 = (_QWORD *)v11;
  *(_QWORD *)(v11 + 8) = *(_QWORD *)(v12 + 8);
  *(_DWORD *)(v11 + 16) = *(_DWORD *)(v12 + 16);
  v20 = *(_QWORD *)(v12 + 24);
  sub_2A6FA0(&v21, v12 + 32);
  v14 = *(_QWORD *)(v12 + 56);
  v15 = v13[4];
  v16 = v21;
  v23 = v14;
  v17 = _mm_load_si128(&v22);
  v13[3] = v20;
  if ( v15 )
  {
    v13[5] = 0;
    v19 = v17;
    qfree(v15);
    v17 = _mm_load_si128(&v19);
  }
  v13[4] = v16;
  v13[7] = v14;
  *(__m128i *)(v13 + 5) = v17;
  return v24 - __readfsqword(0x28u);
}
