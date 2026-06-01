__int64 __fastcall sub_6B9F50(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 (__fastcall ***v5)(_QWORD); // rdi
  __int64 (__fastcall **v6)(_QWORD); // rax
  int v7; // r8d
  int v8; // r9d
  unsigned int v9; // r12d
  _QWORD **v10; // rdi
  __int64 (__fastcall *v11)(__int64, __int64, unsigned __int8, __int64 *); // rax
  __int64 v13; // rsi
  _DWORD *v14; // rax
  int v15; // edx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 (__fastcall *v19)(__int64, __int64, unsigned __int8, __int64 *); // rax
  __int64 v20; // rcx
  __int64 *v21; // r15
  __int64 v22; // rax
  __int64 *v23; // r13
  unsigned int v24; // esi
  _QWORD *v25; // rdi
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdi
  int v29; // edx
  __int64 v30; // rax
  int v31; // [rsp+0h] [rbp-A8h]
  int v32[2]; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+10h] [rbp-98h] BYREF
  __int64 v34; // [rsp+18h] [rbp-90h] BYREF
  int v35[2]; // [rsp+20h] [rbp-88h] BYREF
  char v36[8]; // [rsp+28h] [rbp-80h]
  __m128i v37; // [rsp+30h] [rbp-78h] BYREF
  __m128i v38; // [rsp+40h] [rbp-68h] BYREF
  __m128 v39; // [rsp+50h] [rbp-58h] BYREF
  __m128i v40[4]; // [rsp+60h] [rbp-48h] BYREF

  v4 = *a1;
  v5 = (__int64 (__fastcall ***)(_QWORD))a1[1];
  *(_QWORD *)v32 = 0;
  *(_QWORD *)v36 = v4;
  v6 = *v5;
  *(_QWORD *)v35 = 0;
  v9 = (*v6)(v5);
  if ( !(_BYTE)v9 )
  {
    v37 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a2, (__m128i)(unsigned __int64)a2);
    sub_686B20((__int64)(a1 + 3), &v37);
LABEL_8:
    v9 = 1;
    goto LABEL_9;
  }
  if ( *(_WORD *)(a2 + 4) )
    goto LABEL_3;
  v13 = *(_QWORD *)(a2 + 16);
  v14 = *(_DWORD **)(v13 + 24);
  if ( !v14 || *v14 )
    goto LABEL_3;
  v15 = v14[1];
  if ( v15 != 5 && v15 != 6 )
  {
    if ( v14[1] == 8 && *(_DWORD *)(a2 + 24) == 1 )
    {
      v16 = a1[2];
      v17 = *(_QWORD *)(a2 + 32);
      v18 = *(_QWORD *)v16;
      *(_QWORD *)v32 = v17;
      v19 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int8, __int64 *))(v18 + 16);
      if ( v19 == sub_6A9FD0 )
        sub_6AA4B0(*(_QWORD **)(v16 + 8), v17, 0, (__int64 *)v35);
      else
        v19(v16, v17, 0, (__int64 *)v35);
      v39 = _mm_loadh_ps((const double *)v35);
      sub_686B20((__int64)(a1 + 3), (const __m128i *)&v39);
      v33 = *(_QWORD *)v35;
      if ( *(_QWORD *)v35 )
        ++*(_DWORD *)(*(_QWORD *)v35 + 8LL);
      sub_6ACBA0(a1 + 8, &v33);
      goto LABEL_8;
    }
LABEL_3:
    v10 = (_QWORD **)a1[2];
    v11 = (__int64 (__fastcall *)(__int64, __int64, unsigned __int8, __int64 *))(*v10)[2];
    if ( v11 == sub_6A9FD0 )
      sub_6AA4B0(v10[1], a2, 1u, (__int64 *)v35);
    else
      v11((__int64)v10, a2, 1u, (__int64 *)v35);
    v34 = *(_QWORD *)v35;
    if ( *(_QWORD *)v35 )
      ++*(_DWORD *)(*(_QWORD *)v35 + 8LL);
    sub_6ACBA0(a1 + 8, &v34);
    v40[0] = (__m128i)_mm_loadh_ps((const double *)v35);
    sub_686B20((__int64)(a1 + 3), v40);
    goto LABEL_8;
  }
  v20 = a1[9];
  if ( v20 )
  {
    *(_DWORD *)(v20 - 4) = 0;
    v21 = (__int64 *)(a2 + 32);
    v22 = 8LL * *(unsigned int *)(a2 + 24);
    v23 = (__int64 *)(a2 + 32 + v22);
    if ( !v22 )
    {
      v28 = *a1;
LABEL_35:
      v29 = *(_DWORD *)(v20 - 4);
      goto LABEL_32;
    }
  }
  else
  {
    v21 = (__int64 *)(a2 + 32);
    v27 = 8LL * *(unsigned int *)(a2 + 24);
    v23 = (__int64 *)(a2 + 32 + v27);
    if ( !v27 )
    {
      v28 = *a1;
      v29 = 0;
LABEL_32:
      v30 = sub_15DC610(
              v28,
              v13,
              v29,
              v20,
              v7,
              v8,
              v31,
              v32[0],
              v33,
              v34,
              v35[0],
              v36[0],
              v37.m128i_i32[0],
              v37.m128i_i32[2],
              v38.m128i_i32[0],
              (void *)v38.m128i_i64[1]);
      v38.m128i_i64[0] = a2;
      v38.m128i_i64[1] = v30;
      sub_686B20((__int64)(a1 + 3), &v38);
      goto LABEL_8;
    }
  }
  do
  {
    v24 = *((_DWORD *)a1 + 8);
    v25 = (_QWORD *)a1[3];
    v40[0].m128i_i64[0] = *v21;
    v26 = sub_6A98D0(v25, v24, v40[0].m128i_i64[0]);
    if ( v26 )
    {
      *(_QWORD *)v32 = v26[1];
      sub_6ACBA0(a1 + 9, v32);
    }
    else
    {
      sub_6ACBA0(a1 + 6, v40);
      v9 = 0;
    }
    ++v21;
  }
  while ( v23 != v21 );
  if ( (_BYTE)v9 )
  {
    v20 = a1[9];
    v13 = *(_QWORD *)(a2 + 16);
    v28 = *a1;
    if ( !v20 )
    {
      v29 = 0;
      goto LABEL_32;
    }
    goto LABEL_35;
  }
LABEL_9:
  sub_6A99C0(*(__int64 *)v35, *(__int64 *)v36);
  return v9;
}

