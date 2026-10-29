__int64 __fastcall sub_9DDCE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned int v7; // ebx
  __int64 v8; // rax
  __m128i v9; // xmm0
  __int64 v11; // r13
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r13
  unsigned __int8 **v14; // rax
  unsigned __int8 **v15; // r12
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  __m128i v24; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v25; // [rsp+18h] [rbp-D0h] BYREF
  void *v26[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v28[24]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+58h] [rbp-90h]
  int v30; // [rsp+70h] [rbp-78h]
  _DWORD v31[26]; // [rsp+80h] [rbp-68h] BYREF

  v3 = *(_QWORD *)(a1 + 184);
  v24.m128i_i64[0] = a3;
  v4 = sub_A1A5A0(v3, 56);
  sub_A1C070(v28, v4);
  sub_A1A5E0(v3, 56);
  if ( v30 )
  {
LABEL_12:
    v7 = 0;
    goto LABEL_5;
  }
  if ( v29 && *(_BYTE *)(*(_QWORD *)(v29 + 32) + 52LL) )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    v12 = sub_8E8FB0((__int64)v28);
    v13 = sub_6C4DA0(v11, v12, 1u);
    v25 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    v14 = (unsigned __int8 **)sub_A2E0C0(a1, &v25, 2277, 0);
    v15 = v14;
    if ( v14 )
    {
      sub_9B5410(v14, 7);
      v16 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
      sub_A1E120(v31, v28, v16);
      v17 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
      sub_6A3290((__int64)v26, (__int64)v31, v17, v13, v18, v19);
      sub_838D50(v15, (_BYTE *)v26[0], (size_t)v26[1]);
    }
    else
    {
      v20 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
      sub_A1E120(v31, v28, v20);
      v21 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
      sub_6A3290((__int64)v26, (__int64)v31, v21, v13, v22, v23);
    }
    if ( v26[0] != &v27 )
      operator delete(v26[0], v27 + 1);
    if ( v31[0] > 1u )
      sub_69F740((__int64)v31);
    goto LABEL_12;
  }
  v5 = *(_QWORD *)(a1 + 184);
  sub_8E8FB0((__int64)v28);
  v6 = v5;
  v7 = 1;
  v24 = (__m128i)_mm_loadh_ps((const double *)v24.m128i_i64);
  v8 = sub_A1A4E0(v6, 56);
  v9 = _mm_load_si128(&v24);
  *(_QWORD *)v8 = 0;
  *(_DWORD *)(v8 + 48) = 3;
  *(_OWORD *)(v8 + 8) = 0;
  *(__m128i *)(v8 + 24) = v9;
LABEL_5:
  sub_A1C0C0(v28);
  return v7;
}

