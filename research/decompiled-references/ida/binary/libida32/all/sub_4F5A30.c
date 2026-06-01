unsigned __int64 __fastcall sub_4F5A30(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v6; // r13
  unsigned __int64 v7; // rsi
  __int64 v8; // rbp
  int v9; // eax
  __int64 v10; // rdx
  _DWORD *v11; // rax
  _DWORD v13[2]; // [rsp+0h] [rbp-58h] BYREF
  _DWORD v14[2]; // [rsp+8h] [rbp-50h] BYREF
  __m128i v15; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(unsigned int *)(a2 + 4);
  v16 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 1568);
  v7 = v3 + v4;
  v15 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v7);
  v8 = unpack_dq(&v15, v7);
  v13[0] = unpack_dd(&v15);
  v13[1] = unpack_dd(&v15);
  v14[0] = unpack_dd(&v15);
  v9 = unpack_dd(&v15);
  v10 = *(_QWORD *)(v6 + 16);
  v14[1] = v9;
  v11 = v14;
  if ( !a3 )
    v11 = v13;
  *(_QWORD *)(v10 + 8 * v8) = *(_QWORD *)v11;
  *(_QWORD *)(v6 + 8) = -1;
  return v16 - __readfsqword(0x28u);
}

