__int64 __fastcall sub_D067F0(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // r13
  __int64 v7; // r12
  int v8; // eax
  __int64 *v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  bool v13; // zf
  __int64 v14; // rax
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rdi
  __int64 v18; // r14
  __int64 v19; // rax
  __m128i v20; // [rsp+0h] [rbp-B8h] BYREF
  _BYTE v21[64]; // [rsp+10h] [rbp-A8h] BYREF
  int v22[14]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int8 v23; // [rsp+88h] [rbp-30h]

  v3 = 1;
  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    *(_QWORD *)(a1 + 1240) = *a3;
    v6 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
    v7 = sub_B9B790(a2, 1);
    v8 = *(_DWORD *)(v6 + 24);
    if ( v8 == 1 )
    {
      v9 = *(__int64 **)(v6 + 32);
    }
    else
    {
      if ( (unsigned int)(v8 - 2) <= 1 )
        BUG();
      v9 = *(__int64 **)(*(_QWORD *)(v6 + 32) + 32LL);
    }
    v10 = *v9;
    v11 = *(unsigned int *)(a1 + 836);
    v12 = v10 & 0xFFFFFFFFFFFFFFFCLL;
    v13 = (v10 & 2) == 0;
    v14 = 0;
    if ( !v13 )
      v14 = v12;
    v20.m128i_i64[0] = v14;
    v15 = *(unsigned int *)(a1 + 832);
    v20.m128i_i64[0] = a2;
    v16 = (__m128i)_mm_loadh_ps((const double *)v20.m128i_i64);
    if ( v15 + 1 > v11 )
    {
      v20 = v16;
      sub_2237220(a1 + 824, a1 + 840, v15 + 1, 16);
      v15 = *(unsigned int *)(a1 + 832);
      v16 = _mm_load_si128(&v20);
    }
    *(__m128i *)(*(_QWORD *)(a1 + 824) + 16 * v15) = v16;
    v17 = *(_QWORD *)(a1 + 408);
    ++*(_DWORD *)(a1 + 832);
    v18 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 8LL);
    v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 104LL))(v17);
    sub_CE5520((__int64)v21, v19);
    sub_E28BE0(v22, v6, v21, v18);
    sub_CE7BE0((__int64)v21);
    v3 = v23;
    if ( v23 )
    {
      sub_A54D20(v7, v22);
      if ( v23 )
      {
        if ( v22[0] > 1u )
          sub_A4F8E0(v22);
      }
    }
  }
  return v3;
}
