__int64 __fastcall sub_3D3E20(__int64 a1, __int64 a2, _QWORD *a3, int a4, double a5, double a6, double a7, __m128 a8)
{
  __int64 v10; // rax
  __int64 v12; // r13
  __int64 v13; // r15
  char *v14; // rax
  int v15; // edx
  __int64 v16; // rax
  unsigned __int64 *func; // rax
  unsigned __int64 *v18; // r14
  __m128i v19; // xmm0
  volatile signed __int32 *v20; // rdi
  __int64 v21; // rax
  __m128i v23; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v24; // [rsp+18h] [rbp-40h]

  v10 = *a3;
  v24 = __readfsqword(0x28u);
  v12 = (*(__int64 (__fastcall **)(_QWORD *))(v10 + 128))(a3);
  v13 = v12;
  if ( dword_4ED710 == (*(unsigned int (__fastcall **)(_QWORD *))(*a3 + 112LL))(a3) )
    v13 = a3[5];
  v14 = (char *)&unk_4328C0;
  if ( v13 == -1 )
  {
    *(_DWORD *)a2 = -2;
    sub_6AEF0((__int64 *)(a2 + 16));
    return 0;
  }
  while ( 1 )
  {
    v15 = *(_DWORD *)v14;
    if ( *(_DWORD *)v14 >= a4 )
      break;
    v14 += 4;
    if ( "$ mbui.view_id" == v14 )
    {
      v15 = 1;
      break;
    }
  }
  *(_DWORD *)(a2 + 64) = v15;
  v16 = *(_QWORD *)(a1 + 64);
  if ( v16
    && *(_DWORD *)(v16 + 56) == v15
    && *(_QWORD *)(v16 + 24)
    && rangeset_t_find_range()
    && (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 64) + 60LL) - 1) <= 1 )
  {
    return sub_3D2400(a1, a2, (__int64)a3);
  }
  func = (unsigned __int64 *)get_func();
  v18 = func;
  if ( !func )
  {
    *(_DWORD *)a2 = -2;
    *(_QWORD *)(a2 + 8) = v12;
    sub_6AEF0((__int64 *)(a2 + 16));
    return 0;
  }
  sub_3D3940(&v23, *(__int64 **)(a1 + 48), *func, a5, a6, a7, a8);
  v19 = _mm_load_si128(&v23);
  v20 = *(volatile signed __int32 **)(a2 + 48);
  v21 = v19.m128i_i64[0];
  *(__m128i *)(a2 + 40) = v19;
  if ( v20 )
  {
    sub_3CB2E0(v20);
    v21 = *(_QWORD *)(a2 + 40);
  }
  if ( v21 )
    return sub_3D1A00(a1, a2, (__int64)a3);
  else
    return sub_3D3C70(a1, a2, (__int64)a3, v18, *(double *)v19.m128i_i64, a6, a7, a8);
}
