__int64 __fastcall sub_D612E0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 *a5)
{
  int *v6; // rax
  unsigned int v7; // r15d
  __int64 v8; // rax
  void *v9; // r14
  __int64 v10; // rbx
  __int64 result; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  bool v14; // zf
  unsigned __int64 v15; // r13
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  __m128i v21; // xmm0
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // [rsp+0h] [rbp-78h] BYREF
  __int64 v28; // [rsp+8h] [rbp-70h]
  int v29[2]; // [rsp+10h] [rbp-68h] BYREF
  int v30[2]; // [rsp+18h] [rbp-60h]
  int v31[4]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v32; // [rsp+30h] [rbp-48h] BYREF
  __int64 v33; // [rsp+38h] [rbp-40h]
  int v34; // [rsp+40h] [rbp-38h]
  void *v35; // [rsp+48h] [rbp-30h]

  if ( *(_BYTE *)(a1 + 520) )
  {
    v6 = *(int **)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 24LL) + 8LL);
    if ( *((_BYTE *)v6 + 8) )
      sub_DBF6E(0);
    v7 = *v6;
    memset(v31, 0, sizeof(v31));
    v32 = 1;
    v33 = 0;
    sub_182CBA0(qword_1C7F2C0, &v32);
    BYTE4(v32) &= ~1u;
    LODWORD(v32) = 1;
    v8 = sub_1674520(a1 + 232, v31, v7);
    v9 = qword_1C7F2C0;
    v10 = v8;
    sub_182CBA0(qword_1C7F2C0, v31);
    result = sub_182CBA0(v9, &v32);
    if ( v10 )
      ++*(_DWORD *)(v10 + 8);
    v12 = *a5;
    if ( *a5 )
    {
      v13 = a5[1];
      v14 = (*(_DWORD *)(v12 + 8))-- == 1;
      if ( v14 )
        result = sub_15D7BC0(v13, v12);
    }
    *a5 = v10;
  }
  else
  {
    v15 = *(_QWORD *)(*a4 + 32);
    sub_D60A90(&v27, a1, a4[1]);
    v16 = v27;
    v17 = v28;
    *(_QWORD *)v29 = sub_15D1F10(v15);
    v18 = sub_15D1F10(v16);
    v19 = *(_QWORD *)(a2 + 40);
    *(_QWORD *)v30 = v18;
    v20 = sub_D567F0(a1, a2, v29, v19);
    v21 = _mm_unpacklo_epi64((__m128i)v15, (__m128i)(unsigned __int64)v16);
    result = sub_15DC610(
               *(_QWORD *)(a1 + 8),
               v20,
               2,
               (int)v31,
               v22,
               v23,
               v27,
               v28,
               v29[0],
               v30[0],
               v21.m128i_i32[0],
               v21.m128i_i8[8],
               v32,
               v33,
               v34,
               v35);
    v24 = result;
    if ( result )
      ++*(_DWORD *)(result + 8);
    v25 = *a5;
    if ( *a5 )
    {
      v26 = a5[1];
      v14 = (*(_DWORD *)(v25 + 8))-- == 1;
      if ( v14 )
        result = sub_15D7BC0(v26, v25);
    }
    *a5 = v24;
    v14 = (*(_DWORD *)(v16 + 8))-- == 1;
    if ( v14 )
      return sub_15D7BC0(v17, v16);
  }
  return result;
}

