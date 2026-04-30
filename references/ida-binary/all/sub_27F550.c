__int64 __fastcall sub_27F550(const __m128i *a1, __int64 a2, char a3, __int64 a4)
{
  unsigned int v4; // r12d
  __int64 v5; // rdx
  int v6; // r13d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  int v12; // eax
  __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // rdi
  __m128i v17; // xmm0
  __m128i v18; // [rsp+0h] [rbp-68h] BYREF
  __m128i v19; // [rsp+10h] [rbp-58h] BYREF
  __int64 v20; // [rsp+20h] [rbp-48h]
  __int64 v21; // [rsp+28h] [rbp-40h]
  unsigned __int64 v22; // [rsp+38h] [rbp-30h]

  v4 = a1[46].m128i_u8[5];
  v22 = __readfsqword(0x28u);
  if ( (_BYTE)v4 )
    return v4;
  v5 = a3 & 1;
  v20 = 0;
  v4 = (_DWORD)v5 == 0 ? 1 : 5;
  v21 = 0;
  v6 = sub_1EC090((__int64)a1, 0, v5, a4, 0.0);
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64, __int64, _QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(a2 + 40) + 128LL))(
          *(_QWORD *)(a2 + 40),
          0,
          v7,
          v8,
          v9,
          v10,
          0,
          0,
          0,
          -1);
  v12 = sub_27DCD0(a1, (__int64)&v18, v11, -1, v6, v4, 0.0);
  LOBYTE(v4) = v12 == 1;
  if ( v12 != 1 )
    goto LABEL_3;
  v14 = *(_QWORD *)(a2 + 40);
  if ( v14 )
  {
    qfree(v14, v18.m128i_i8);
    *(_QWORD *)(a2 + 40) = 0;
  }
  v15 = v20;
  v16 = v21;
  *(__m128i *)a2 = _mm_load_si128(&v18);
  v17 = _mm_load_si128(&v19);
  *(_DWORD *)(a2 + 32) = v15;
  *(__m128i *)(a2 + 16) = v17;
  if ( v16 )
  {
    *(_QWORD *)(a2 + 40) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
LABEL_3:
    if ( v21 )
      qfree(v21, v18.m128i_i8);
  }
  return v4;
}
