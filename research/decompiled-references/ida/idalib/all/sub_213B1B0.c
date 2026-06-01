__int64 __fastcall sub_213B1B0(__int64 a1, __m128 *a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  int v6; // edx
  unsigned int v7; // r12d
  unsigned __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __m128 v17; // [rsp+0h] [rbp-68h] BYREF
  __int64 v18; // [rsp+10h] [rbp-58h]
  void *v19; // [rsp+18h] [rbp-50h]
  unsigned int v20; // [rsp+20h] [rbp-48h]

  v6 = **(_DWORD **)(a1 + 48);
  LOBYTE(a4) = v6 == 46 || v6 == 27;
  v7 = a4;
  if ( (_BYTE)a4 )
  {
    v8 = *(_QWORD *)(a1 + 184);
    v17.m128_i32[0] = 0;
    v17.m128_u64[1] = 0;
    v18 = 0;
    v20 = 1;
    v19 = nullptr;
    sub_2128A20(a1 + 48, (__int64)&v17, (char *)&dword_0 + 1, 0, a5, a6);
    if ( ((v17.m128_i32[0] - 2) & 0xFFFFFFFD) == 0 && sub_2124B50((__int64)&v17) == v8 + 1 )
    {
      v7 = 0;
      sub_21318A0(a1 + 48, (__int64)&v17, v8 + 1, v9, v10, v11);
      v16 = *(_QWORD *)(sub_2153C00(a1) + 16);
      a2->m128_u64[0] = v8;
      a2->m128_u64[1] = v16 + 1;
      sub_2132C70(a1, &v17);
    }
    if ( v20 > 0x40 && v19 )
      operator delete[](v19);
  }
  else if ( (unsigned int)(v6 - 2) > 1 )
  {
    return 1;
  }
  else
  {
    v13 = sub_2153C00(a1);
    if ( *(_DWORD *)v13 == 2 )
    {
      v14 = *(_QWORD *)(v13 + 8);
      v15 = *(_QWORD *)(v13 + 16);
    }
    else
    {
      v14 = sub_212C8F0(v13);
    }
    a2->m128_u64[0] = v14;
    a2->m128_u64[1] = v15;
    sub_2132C70(a1, a2);
  }
  return v7;
}
