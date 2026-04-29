__int64 __fastcall sub_3FC4D0(__int64 a1, int a2, int a3, double a4, __m128 a5)
{
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v10; // rbp
  __int64 v11; // r13
  int dtype_size; // eax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 v16; // rdi
  int v17; // r13d
  int v18; // eax
  __int64 v19; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+8h] [rbp-40h]
  char v21; // [rsp+10h] [rbp-38h]
  unsigned __int64 v22; // [rsp+18h] [rbp-30h]

  v6 = *(_BYTE *)(a1 + 65) == 7;
  v22 = __readfsqword(0x28u);
  if ( !v6 )
  {
    v10 = a3;
    v11 = *(int *)(*(_QWORD *)(a1 + 832) + 464LL);
    dtype_size = get_dtype_size(0);
    sub_1D6310(a1, 6u, dtype_size, a2, 0x3BEA45E214ADDC55LL, v11, 0);
    v13 = *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50) + 16LL * *(_QWORD *)(a1 + 24);
    v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 24LL) + 16LL);
    if ( v13 != v14 )
    {
      v14 &= v13;
      if ( v13 == -1 )
        v14 = -1;
    }
    sub_3FC410(a1, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 464LL), v14);
    *(_QWORD *)(a1 + 16) = sub_67FD0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
    *(_BYTE *)(a1 + 896) = 1;
    v19 = a1;
    v20 = 0xFFFFFFFF00000001LL;
    v21 = 0;
    sub_3FA580((int *)&v19, 1, 0, a4);
    if ( !v21 && !(unsigned __int8)sub_3FACB0((__int64)&v19, a4, a5) )
      sub_3EB430(a4, (__int64)&v19, 1);
    v15 = SHIDWORD(v20);
    if ( (unsigned __int16)(*(_WORD *)(a1 + 48) - 245) <= 7u )
    {
      v16 = 15;
      v17 = -1;
    }
    else
    {
      v16 = *(unsigned __int8 *)(a1 + 69);
      v17 = 0;
    }
    v18 = get_dtype_size(v16);
    sub_1D6310(a1, 4u, v18, v15, 0x3BEA45E214ADDC55LL, v10, v17);
    return v22 - __readfsqword(0x28u);
  }
  v7 = *(_QWORD *)(a1 + 80) + 16LL * *(_QWORD *)(a1 + 24);
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 24LL) + 16LL);
  if ( v7 != v8 )
  {
    v8 &= v7;
    if ( v7 == -1 )
      v8 = -1;
  }
  if ( *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50) == v8 )
    return v22 - __readfsqword(0x28u);
  return sub_3FC410(a1, a2, v8);
}
