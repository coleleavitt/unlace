void __fastcall sub_EA8520(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  unsigned int *v7; // r13
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  int v10; // r14d
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // [rsp+8h] [rbp-40h] BYREF
  __m128 v16[3]; // [rsp+10h] [rbp-38h] BYREF

  v6 = *(_QWORD *)(a1 + 32);
  if ( (unsigned __int64)(v6 + 1) > *(_QWORD *)(a1 + 40) )
  {
    sub_2236E10(a1 + 24, a1 + 48, v6 + 1, 1);
    v6 = *(_QWORD *)(a1 + 32);
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + v6) = (a2 & 0xFFFFFFFFFFFFFFF0LL) == 0;
  ++*(_QWORD *)(a1 + 32);
  if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v7 = (unsigned int *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
    v8 = a2 & 7;
    if ( (a2 & 8) != 0 )
    {
      v8 |= *(__int64 *)((char *)&qword_18 + (a2 & 0xFFFFFFFFFFFFFFF0LL));
      v7 = *(unsigned int **)v7;
    }
    v9 = *(unsigned int *)(a1 + 184);
    v10 = v8;
    if ( v9 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
    {
      sub_2237220(a1 + 176, a1 + 192, v9 + 1, 4);
      v9 = *(unsigned int *)(a1 + 184);
    }
    v11 = HIDWORD(v8);
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v9) = v10;
    v12 = *(unsigned int *)(a1 + 188);
    v13 = (unsigned int)(*(_DWORD *)(a1 + 184) + 1);
    *(_DWORD *)(a1 + 184) = v13;
    if ( v13 + 1 > v12 )
    {
      sub_2237220(a1 + 176, a1 + 192, v13 + 1, 4);
      v13 = *(unsigned int *)(a1 + 184);
    }
    v14 = *(_QWORD *)(a1 + 176);
    v15 = a1;
    *(_DWORD *)(v14 + 4 * v13) = v11;
    ++*(_DWORD *)(a1 + 184);
    v16[0] = _mm_loadh_ps((const double *)&v15);
    sub_EA6540((__int64 *)v16, v7, v14, v12, a5, a6);
  }
}
