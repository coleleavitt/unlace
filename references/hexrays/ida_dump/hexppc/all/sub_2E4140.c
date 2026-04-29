unsigned __int64 __fastcall sub_2E4140(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 i; // r13
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rax
  int v13; // edi
  int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 v17; // rbp
  int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // [rsp+8h] [rbp-C0h]
  __int64 (__fastcall **v28)(); // [rsp+20h] [rbp-A8h] BYREF
  __m128i v29; // [rsp+28h] [rbp-A0h]
  int v30; // [rsp+38h] [rbp-90h]
  __m128i v31; // [rsp+40h] [rbp-88h]
  int v32; // [rsp+50h] [rbp-78h]
  __int64 v33; // [rsp+58h] [rbp-70h]
  _BYTE v34[16]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v35; // [rsp+70h] [rbp-58h]
  __int64 (__fastcall *v36)(_BYTE *, __int64, __int64 (__fastcall ***)()); // [rsp+78h] [rbp-50h]
  unsigned __int64 v37; // [rsp+88h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v25 = (a3 - 1) / 2;
  if ( a2 >= v25 )
  {
    v9 = a2;
  }
  else
  {
    for ( i = a2; ; i = v9 )
    {
      v9 = 2 * (i + 1);
      v10 = (i + 1) << 7;
      v11 = a1 + v10;
      if ( !*(_QWORD *)(a5 + 16) )
        std::__throw_bad_function_call();
      if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a5 + 24))(a5, a1 + v10, a1 + v10 - 64) < 0 )
        v11 = a1 + (--v9 << 6);
      v12 = a1 + (i << 6);
      *(_QWORD *)(v12 + 8) = *(_QWORD *)(v11 + 8);
      *(_DWORD *)(v12 + 16) = *(_DWORD *)(v11 + 16);
      *(_DWORD *)(v12 + 24) = *(_DWORD *)(v11 + 24);
      *(_QWORD *)(v12 + 32) = *(_QWORD *)(v11 + 32);
      *(_DWORD *)(v12 + 40) = *(_DWORD *)(v11 + 40);
      *(_DWORD *)(v12 + 48) = *(_DWORD *)(v11 + 48);
      *(_QWORD *)(v12 + 56) = *(_QWORD *)(v11 + 56);
      if ( v9 >= v25 )
        break;
    }
  }
  if ( (a3 & 1) == 0 && (a3 - 2) / 2 == v9 )
  {
    v22 = v9 + 1;
    v23 = a1 + (v9 << 6);
    v24 = a1 + (v22 << 7) - 64;
    *(_QWORD *)(v23 + 8) = *(_QWORD *)(v24 + 8);
    *(_DWORD *)(v23 + 16) = *(_DWORD *)(v24 + 16);
    *(_DWORD *)(v23 + 24) = *(_DWORD *)(v24 + 24);
    *(_QWORD *)(v23 + 32) = *(_QWORD *)(v24 + 32);
    *(_DWORD *)(v23 + 40) = *(_DWORD *)(v24 + 40);
    *(_DWORD *)(v23 + 48) = *(_DWORD *)(v24 + 48);
    *(_QWORD *)(v23 + 56) = *(_QWORD *)(v24 + 56);
    v9 = 2 * v22 - 1;
  }
  sub_2CA330((__int64)v34, (const __m128i *)a5);
  v28 = off_4CFD30;
  v13 = *(_DWORD *)(a4 + 24);
  v14 = *(_DWORD *)(a4 + 48);
  v15 = *(_QWORD *)(a4 + 56);
  v29 = _mm_loadu_si128((const __m128i *)(a4 + 8));
  v30 = v13;
  v32 = v14;
  v33 = v15;
  v31 = _mm_loadu_si128((const __m128i *)(a4 + 32));
  v16 = (v9 - 1) / 2;
  if ( v9 <= a2 )
  {
    v19 = a1 + (v9 << 6);
  }
  else
  {
    while ( 1 )
    {
      v17 = a1 + (v16 << 6);
      if ( !v35 )
        std::__throw_bad_function_call();
      v18 = v36(v34, a1 + (v16 << 6), &v28);
      v19 = a1 + (v9 << 6);
      if ( v18 >= 0 )
      {
        v13 = v30;
        v14 = v32;
        v15 = v33;
        goto LABEL_18;
      }
      v9 = v16;
      *(_QWORD *)(v19 + 8) = *(_QWORD *)(v17 + 8);
      *(_DWORD *)(v19 + 16) = *(_DWORD *)(v17 + 16);
      *(_DWORD *)(v19 + 24) = *(_DWORD *)(v17 + 24);
      *(_QWORD *)(v19 + 32) = *(_QWORD *)(v17 + 32);
      *(_DWORD *)(v19 + 40) = *(_DWORD *)(v17 + 40);
      *(_DWORD *)(v19 + 48) = *(_DWORD *)(v17 + 48);
      *(_QWORD *)(v19 + 56) = *(_QWORD *)(v17 + 56);
      if ( a2 >= v16 )
        break;
      v16 = (v16 - 1) / 2;
    }
    v13 = v30;
    v14 = v32;
    v19 = a1 + (v16 << 6);
    v15 = v33;
  }
LABEL_18:
  v20 = v29.m128i_i64[0];
  *(_DWORD *)(v19 + 24) = v13;
  *(_DWORD *)(v19 + 48) = v14;
  *(_QWORD *)(v19 + 8) = v20;
  LODWORD(v20) = v29.m128i_i32[2];
  *(_QWORD *)(v19 + 56) = v15;
  *(_DWORD *)(v19 + 16) = v20;
  *(_QWORD *)(v19 + 32) = v31.m128i_i64[0];
  *(_DWORD *)(v19 + 40) = v31.m128i_i32[2];
  sub_63210((__int64)v34);
  return v37 - __readfsqword(0x28u);
}
