__int64 __fastcall sub_50E7C0(__int64 a1, unsigned int a2, const __m128i *a3)
{
  __int64 (__fastcall *v6)(); // r9
  unsigned int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edx
  const __m128i *v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rdx
  unsigned int v13; // ecx
  void *v14; // r13
  void *v15; // r12
  int *v16; // rsi
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  __int64 (__fastcall *v21)(); // r8
  unsigned int v22; // eax
  __int64 v23; // rcx
  unsigned int v24; // edx
  __int64 v25; // rdx
  __int64 result; // rax
  int v27; // [rsp+0h] [rbp-A8h]
  int v28; // [rsp+8h] [rbp-A0h]
  char v29; // [rsp+Fh] [rbp-99h] BYREF
  __m128i v30; // [rsp+10h] [rbp-98h] BYREF
  int v31[4]; // [rsp+20h] [rbp-88h] BYREF
  int v32[6]; // [rsp+30h] [rbp-78h] BYREF
  int v33[4]; // [rsp+48h] [rbp-60h] BYREF
  int v34[14]; // [rsp+58h] [rbp-50h] BYREF
  char v35; // [rsp+90h] [rbp-18h]

  v6 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 168LL);
  v7 = a2;
  do
  {
    v8 = v7;
    v9 = v7;
    v7 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 16LL) + 4LL * v7);
  }
  while ( v9 != v7 );
  v10 = (const __m128i *)(**(_QWORD **)(a1 + 144) + 112 * v8);
  if ( v6 == sub_516210 )
    sub_50CC90(&v30, *(_QWORD *)(a1 + 8), v10, a3, &v29);
  else
    ((void (__fastcall *)(__m128i *, __int64, const __m128i *, const __m128i *, char *))v6)(&v30, a1, v10, a3, &v29);
  v11 = a2;
  do
  {
    v12 = v11;
    v13 = v11;
    v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 16LL) + 4LL * v11);
  }
  while ( v13 != v11 );
  sub_B291A0(**(_QWORD **)(a1 + 144) + 112 * v12, &v30);
  v14 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v33);
  sub_182CBA0(v14, v34);
  v15 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v31);
  v16 = v32;
  sub_182CBA0(v15, v32);
  if ( v29 )
    return sub_5165E0(
             a1,
             (int)v16,
             v17,
             v18,
             v19,
             v20,
             v27,
             v28,
             v30.m128i_i32[0],
             (void *)v30.m128i_i64[1],
             v31[0],
             v31[2],
             v32[0],
             v32[2],
             v32[4],
             v33[0],
             v33[2],
             v34[0],
             v34[2],
             v34[4],
             v34[6],
             v34[8],
             v34[10],
             v34[12],
             v35);
  v21 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 208LL);
  v22 = a2;
  do
  {
    v23 = v22;
    v24 = v22;
    v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 16LL) + 4LL * v22);
  }
  while ( v24 != v22 );
  v25 = **(_QWORD **)(a1 + 144) + 112 * v23;
  if ( v21 == sub_5156D0 )
  {
    LODWORD(v16) = v25 + 8;
    result = sub_B286B0(v25 + 48, v25 + 8);
  }
  else
  {
    LODWORD(v16) = a2;
    result = ((__int64 (__fastcall *)(__int64, _QWORD, __int64))v21)(a1, a2, v25);
  }
  if ( (_BYTE)result )
    return sub_5165E0(
             a1,
             (int)v16,
             v17,
             v18,
             v19,
             v20,
             v27,
             v28,
             v30.m128i_i32[0],
             (void *)v30.m128i_i64[1],
             v31[0],
             v31[2],
             v32[0],
             v32[2],
             v32[4],
             v33[0],
             v33[2],
             v34[0],
             v34[2],
             v34[4],
             v34[6],
             v34[8],
             v34[10],
             v34[12],
             v35);
  return result;
}

