unsigned __int64 __fastcall sub_3EE1E0(__int64 a1, int a2, unsigned __int8 a3)
{
  int v4; // ebx
  unsigned int v5; // r14d
  int v6; // r13d
  __int64 v7; // r8
  __int32 v8; // r9d
  int v9; // r11d
  int v10; // r9d
  _DWORD *v11; // rax
  int v12; // r15d
  unsigned int v13; // eax
  __int64 v15; // rdx
  char v16; // r10
  signed int v17; // [rsp+0h] [rbp-70h]
  unsigned __int8 v18; // [rsp+7h] [rbp-69h]
  _QWORD v19[2]; // [rsp+10h] [rbp-60h] BYREF
  _DWORD v20[6]; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-38h]

  v4 = a2;
  v18 = a3;
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL);
  v21 = __readfsqword(0x28u);
  v19[1] = 0;
  v19[0] = 0xFFFFFFFF00000000LL;
  v6 = sub_3E2110(a1 + 24);
  sub_11E5D0((__int64)v19, v9, v6, v5, v7, v8);
  v11 = *(_DWORD **)(a1 + 832);
  if ( v6 != 2 && v11[120] <= a2 && v11[122] >= a2 )
  {
    v15 = 7;
    v16 = 7;
    if ( v6 == 4 )
    {
      v15 = 2;
      v16 = 2;
    }
    v18 = v16;
    sub_1D3CC0(a1, a3, v15, (unsigned int)a2, (unsigned int)v11[114], 0);
    v11 = *(_DWORD **)(a1 + 832);
    v4 = v11[114];
  }
  v12 = v11[14];
  v13 = v11[15];
  v20[0] = 1;
  v17 = v13;
  *(_QWORD *)&v20[1] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v5), _mm_cvtsi32_si128(v13)).m128i_u64[0];
  sub_1D38D0(a1, 13, (unsigned int)v20, (unsigned int)v19, (unsigned int)v20, v10);
  sub_3ED260(a1, 1u, v18, v4, v12, v17, v5);
  sub_11A960((__int64)v20);
  sub_11A960((__int64)v19);
  return v21 - __readfsqword(0x28u);
}
