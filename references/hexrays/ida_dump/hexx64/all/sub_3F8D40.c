unsigned __int64 __fastcall sub_3F8D40(__int64 a1, int a2, unsigned __int8 a3)
{
  int v4; // ebx
  unsigned int v5; // r14d
  int v6; // r13d
  __int64 v7; // r8
  __int32 v8; // r9d
  int v9; // r11d
  _DWORD *v10; // rax
  int v11; // r15d
  unsigned int v12; // eax
  unsigned __int8 v14; // dl
  char v15; // r10
  signed int v16; // [rsp+0h] [rbp-70h]
  unsigned __int8 v17; // [rsp+7h] [rbp-69h]
  _QWORD v18[2]; // [rsp+10h] [rbp-60h] BYREF
  unsigned __int8 v19[24]; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-38h]

  v4 = a2;
  v17 = a3;
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL);
  v20 = __readfsqword(0x28u);
  v18[1] = 0;
  v18[0] = 0xFFFFFFFF00000000LL;
  v6 = sub_3ECD50(a1 + 24);
  sub_120A10((__int64)v18, v9, v6, v5, v7, v8);
  v10 = *(_DWORD **)(a1 + 832);
  if ( v6 != 2 && v10[120] <= a2 && v10[122] >= a2 )
  {
    v14 = 7;
    v15 = 7;
    if ( v6 == 4 )
    {
      v14 = 2;
      v15 = 2;
    }
    v17 = v15;
    sub_1D6840(a1, a3, v14, a2, v10[114], 0);
    v10 = *(_DWORD **)(a1 + 832);
    v4 = v10[114];
  }
  v11 = v10[14];
  v12 = v10[15];
  *(_DWORD *)v19 = 1;
  v16 = v12;
  *(_QWORD *)&v19[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v5), _mm_cvtsi32_si128(v12)).m128i_u64[0];
  sub_1D6450(a1, 13, v19, (unsigned __int8 *)v18, v19);
  sub_3F7E20(a1, 1u, v17, v4, v11, v16, v5);
  sub_11CDA0((__int64)v19);
  sub_11CDA0((__int64)v18);
  return v20 - __readfsqword(0x28u);
}
