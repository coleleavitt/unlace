unsigned __int64 __fastcall sub_1E02220(__int64 *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __m128i *v8; // rdi
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx

  v2 = *(_QWORD *)(a2 + 80);
  v3 = sub_B99AD0(a2);
  v4 = sub_B99910(
         *(_QWORD **)(*a1 + 248),
         a1[3],
         *(_DWORD *)(a2 + 24),
         *(_DWORD *)(a2 + 52),
         *(_QWORD *)(a2 + 56),
         *(_QWORD *)(a2 + 64),
         *(_DWORD *)(a2 + 24),
         v3,
         v2);
  v8 = (__m128i *)a1[3];
  v9 = v4;
  v10 = v8->m128i_i8[8] & 0x7F;
  if ( (unsigned __int8)v10 > 0x12u )
  {
    v10 = ((_BYTE)v10 + 94) & 0x7F;
    if ( (unsigned __int8)v10 <= 5u )
      return v9;
    goto LABEL_3;
  }
  if ( ((1LL << v10) & 0x40182) == 0 )
LABEL_3:
    sub_B94AD0(v8, v4, v5, v10, v6, v7);
  return v9;
}
