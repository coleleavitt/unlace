__int64 __fastcall sub_3FC4D0(__int64 a1, int a2, int a3, double a4, __m128 a5)
{
  bool v5; // zf
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v9; // rbp
  __int64 v10; // r13
  int dtype_size; // eax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r12
  int v16; // r13d
  int v17; // eax
  __int64 v18; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+8h] [rbp-40h]
  char v20; // [rsp+10h] [rbp-38h]
  unsigned __int64 v21; // [rsp+18h] [rbp-30h]

  v5 = *(_BYTE *)(a1 + 65) == 7;
  v21 = __readfsqword(0x28u);
  if ( !v5 )
  {
    v9 = a3;
    v10 = *(int *)(*(_QWORD *)(a1 + 832) + 464LL);
    dtype_size = get_dtype_size();
    sub_1D6310(a1, 6u, dtype_size, a2, 0x3BEA45E214ADDC55LL, v10, 0);
    v12 = *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50) + 16LL * *(_QWORD *)(a1 + 24);
    v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 24LL) + 16LL);
    if ( v12 != v13 )
    {
      v13 &= v12;
      if ( v12 == -1 )
        v13 = -1;
    }
    sub_3FC410(a1, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 464LL), v13);
    *(_QWORD *)(a1 + 16) = sub_67FD0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2, v14);
    *(_BYTE *)(a1 + 896) = 1;
    v18 = a1;
    v19 = 0xFFFFFFFF00000001LL;
    v20 = 0;
    sub_3FA580((int *)&v18, 1, 0, a4);
    if ( !v20 && !(unsigned __int8)sub_3FACB0((__int64)&v18, a4, a5) )
      sub_3EB430(a4);
    v15 = SHIDWORD(v19);
    if ( (unsigned __int16)(*(_WORD *)(a1 + 48) - 245) <= 7u )
      v16 = -1;
    else
      v16 = 0;
    v17 = get_dtype_size();
    sub_1D6310(a1, 4u, v17, v15, 0x3BEA45E214ADDC55LL, v9, v16);
    return v21 - __readfsqword(0x28u);
  }
  v6 = *(_QWORD *)(a1 + 80) + 16LL * *(_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 24LL) + 16LL);
  if ( v6 != v7 )
  {
    v7 &= v6;
    if ( v6 == -1 )
      v7 = -1;
  }
  if ( *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50) == v7 )
    return v21 - __readfsqword(0x28u);
  return sub_3FC410(a1, a2, v7);
}
