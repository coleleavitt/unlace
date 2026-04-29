unsigned __int64 __fastcall sub_2B3250(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  bool (__fastcall *v7)(__int64); // rax
  __int64 v8; // rdi
  unsigned __int8 (*v9)(void); // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  char v16; // bl
  __int64 v17; // rdi
  __int64 v18; // r12
  __m128i v19; // xmm1
  __m128i v21; // [rsp+0h] [rbp-68h] BYREF
  __int64 v22; // [rsp+10h] [rbp-58h] BYREF
  __m128i v23; // [rsp+18h] [rbp-50h] BYREF
  char v24; // [rsp+28h] [rbp-40h]
  unsigned __int64 v25; // [rsp+38h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 48);
  if ( a3 >= v3 || *(_QWORD *)(a2 + 48) != v3 )
    goto LABEL_5;
  v5 = 80 * a3;
  v6 = 80 * a3 + *(_QWORD *)(a1 + 40);
  v7 = **(bool (__fastcall ***)(__int64))v6;
  if ( v7 == sub_2AD100 )
  {
    if ( *(_QWORD *)(v6 + 8) == *(_QWORD *)(v6 + 56) && *(_DWORD *)(v6 + 16) == *(_DWORD *)(v6 + 64) )
      goto LABEL_7;
LABEL_5:
    sub_2ADE20();
  }
  if ( ((unsigned __int8 (*)(void))v7)() )
    goto LABEL_5;
LABEL_7:
  v8 = v5 + *(_QWORD *)(a2 + 40);
  v9 = **(unsigned __int8 (***)(void))v8;
  if ( (char *)v9 == (char *)sub_2AD100 )
  {
    if ( *(_QWORD *)(v8 + 8) == *(_QWORD *)(v8 + 56) && *(_DWORD *)(v8 + 16) == *(_DWORD *)(v8 + 64) )
      goto LABEL_5;
  }
  else if ( !v9() )
  {
    goto LABEL_5;
  }
  switch_dbctx();
  v10 = *(_QWORD *)(a1 + 40);
  v22 = 0;
  v11 = v5 + v10;
  v12 = *(_QWORD *)(a2 + 40) + v5;
  v13 = v11;
  *(__m128i *)(v11 + 8) = _mm_loadu_si128((const __m128i *)(v12 + 8));
  v23 = 0;
  sub_2AE320(&v22, v12 + 24, v14, v15);
  v16 = *(_BYTE *)(v12 + 48);
  v17 = *(_QWORD *)(v13 + 24);
  v18 = v22;
  v19 = _mm_loadu_si128(&v23);
  v23 = 0;
  v24 = v16;
  v22 = 0;
  if ( v17 )
  {
    *(_QWORD *)(v13 + 32) = 0;
    v21 = v19;
    qfree(v17);
    v19 = _mm_load_si128(&v21);
  }
  *(_QWORD *)(v13 + 24) = v18;
  *(_BYTE *)(v13 + 48) = v16;
  *(__m128i *)(v13 + 32) = v19;
  return v25 - __readfsqword(0x28u);
}
