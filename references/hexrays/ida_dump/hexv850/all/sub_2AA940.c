unsigned __int64 __fastcall sub_2AA940(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int8 (*v7)(void); // rax
  __int64 v8; // rdi
  bool (__fastcall *v9)(__int64); // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // rdi
  __int64 v15; // rbx
  __m128i v16; // xmm0
  __m128i v18; // [rsp+0h] [rbp-58h] BYREF
  __int64 v19; // [rsp+10h] [rbp-48h] BYREF
  __m128i v20; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+28h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 48);
  if ( a3 >= v3 || *(_QWORD *)(a2 + 48) != v3 )
    goto LABEL_11;
  v5 = 48 * a3;
  v6 = 48 * a3 + *(_QWORD *)(a1 + 40);
  v7 = **(unsigned __int8 (***)(void))v6;
  if ( (char *)v7 == (char *)sub_2A7DA0 )
  {
    if ( *(_DWORD *)(v6 + 8) == *(_DWORD *)(v6 + 40) )
      goto LABEL_11;
  }
  else if ( !v7() )
  {
    goto LABEL_11;
  }
  v8 = v5 + *(_QWORD *)(a2 + 40);
  v9 = **(bool (__fastcall ***)(__int64))v8;
  if ( v9 == sub_2A7DA0 )
  {
    if ( *(_DWORD *)(v8 + 8) != *(_DWORD *)(v8 + 40) )
      goto LABEL_7;
LABEL_11:
    sub_2A8A80();
  }
  if ( !((unsigned __int8 (*)(void))v9)() )
    goto LABEL_11;
LABEL_7:
  switch_dbctx(*(int *)(a1 + 8));
  v10 = *(_QWORD *)(a1 + 40);
  v20 = 0;
  v19 = 0;
  v11 = v5 + v10;
  v12 = *(_QWORD *)(a2 + 40) + v5;
  v13 = v11;
  *(_DWORD *)(v11 + 8) = *(_DWORD *)(v12 + 8);
  sub_2A8F60(&v19, v12 + 16);
  v14 = *(_QWORD *)(v13 + 16);
  v15 = v19;
  v16 = _mm_loadu_si128(&v20);
  if ( v14 )
  {
    *(_QWORD *)(v13 + 24) = 0;
    v18 = v16;
    qfree(v14);
    v16 = _mm_load_si128(&v18);
  }
  *(_QWORD *)(v13 + 16) = v15;
  *(__m128i *)(v13 + 24) = v16;
  return v21 - __readfsqword(0x28u);
}
