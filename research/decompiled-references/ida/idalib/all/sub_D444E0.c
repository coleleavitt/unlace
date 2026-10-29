__int64 __fastcall sub_D444E0(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v3; // ebp
  __int64 v5; // r15
  _QWORD *v7; // r13
  __int64 v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rax
  __m128i v11; // rax
  int v12; // edx
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // ecx
  __m128i *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __m128i v19; // [rsp+0h] [rbp-C8h] BYREF
  unsigned int v20; // [rsp+1Ch] [rbp-ACh]
  __m128i v21; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v22; // [rsp+30h] [rbp-98h] BYREF
  __m128i v23; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v24[4]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v25[11]; // [rsp+70h] [rbp-58h] BYREF

  v3 = 1;
  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    v5 = *(_QWORD *)(a1 + 560);
    v7 = (_QWORD *)(a1 + 384);
    v8 = *(_QWORD *)(a1 + 1232);
    *(_QWORD *)(a1 + 1240) = *a3;
    v19 = _mm_loadu_si128((const __m128i *)sub_E21760(v5, 16));
    sub_E21790(v5, 16);
    v9 = *(_QWORD *)(a1 + 560);
    v23 = _mm_load_si128(&v19);
    v19 = _mm_loadu_si128((const __m128i *)sub_E21760(v9, 16));
    sub_E21790(v9, 16);
    v22 = _mm_load_si128(&v19);
    v10 = sub_21F8CF0(v22.m128i_u32[2]);
    v11.m128i_i64[0] = sub_D421E0(v7, v10);
    v21 = v11;
    v12 = (a2 >> 3) & 7;
    if ( ((a2 >> 3) & 7) == 7 )
      LOBYTE(v12) = 1;
    v19.m128i_i8[0] = v12;
    LOBYTE(v20) = v12;
    sub_CFEAE0((__int64)v24, (__int64)&v22);
    sub_CFEAE0((__int64)v25, (__int64)&v23);
    v14 = sub_21F90D0(v25, &v23, v13);
    if ( v24[0] == v14 )
      v15 = sub_2200970(v24, v25, v19.m128i_u8[0]);
    else
      v15 = sub_21FD850(v24, v25, v19.m128i_u8[0]);
    v20 = v15;
    v19.m128i_i64[0] = (__int64)&v21;
    sub_CFED10((__int64)&v21, v24);
    sub_9955A0(v25);
    sub_9955A0(v24);
    v16 = (__m128i *)sub_E216C0(*(_QWORD *)(a1 + 560), 16);
    v17 = v20;
    v18 = v19.m128i_i64[0];
    *v16 = _mm_load_si128(&v21);
    return (unsigned int)sub_DCADA0(v7, v8, v18, v17, a2);
  }
  return v3;
}
