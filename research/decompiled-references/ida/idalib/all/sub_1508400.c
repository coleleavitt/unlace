__m128i *__fastcall sub_1508400(__m128i *a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // eax
  __int64 *v7; // rdi
  unsigned int v8; // eax
  __int64 v9; // rax
  __int64 *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int16 v16; // ax
  unsigned int v17; // r13d
  __int32 v18; // r14d
  size_t v19; // rax
  unsigned int v20; // [rsp+0h] [rbp-A8h]
  unsigned int v21; // [rsp+4h] [rbp-A4h]
  __int64 v22; // [rsp+8h] [rbp-A0h]
  unsigned int v23; // [rsp+8h] [rbp-A0h]
  void *v24[2]; // [rsp+10h] [rbp-98h] BYREF
  _BYTE v25[16]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE *v26; // [rsp+30h] [rbp-78h] BYREF
  char v27; // [rsp+38h] [rbp-70h]
  __int64 v28; // [rsp+40h] [rbp-68h]
  int v29; // [rsp+48h] [rbp-60h]
  __int16 v30; // [rsp+4Ch] [rbp-5Ch]
  __int64 (__fastcall *v31)(__int64); // [rsp+50h] [rbp-58h]
  __int64 v32; // [rsp+58h] [rbp-50h]
  __int64 v33; // [rsp+60h] [rbp-48h]

  v6 = *(_DWORD *)(a2 + 16);
  v7 = *(__int64 **)(a2 + 8);
  *(_DWORD *)(a2 + 40) = v6;
  v21 = v6;
  sub_14634E0(v7, (int *)(a2 + 16));
  v8 = *(_DWORD *)(a2 + 40);
  v28 = a2;
  v20 = v8;
  v26 = (_BYTE *)(a2 + 1952);
  LOBYTE(v8) = *(_BYTE *)(a2 + 1952);
  *(_BYTE *)(a2 + 1952) = 1;
  v27 = v8;
  v30 = 449;
  v29 = 1507350;
  v31 = sub_146A990;
  v32 = 0;
  v33 = 0;
  v9 = sub_20EB760(a3, 0);
  if ( (unsigned __int8)sub_156A040(&v26, 1625, v9, 0) )
  {
    a1[1].m128i_i8[4] = 0;
  }
  else
  {
    v22 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 56LL);
    if ( sub_10CCDE0(*(_WORD *)(a2 + 32)) )
    {
      v24[0] = v25;
      v19 = j__strlen(&byte_22F0C30);
      sub_1504120(v24, &byte_22F0C30, (__int64)(&byte_22F0C30 + v19));
    }
    else
    {
      sub_13D35F0(
        (__int64)v24,
        a2 + 16,
        *(_QWORD *)(*(_QWORD *)(a2 + 8) + 88LL),
        *(_QWORD *)(*(_QWORD *)(a2 + 8) + 56LL),
        nullptr);
    }
    v11 = (__int64 *)v24[0];
    v23 = sub_FFC7C0(a3, (__int64)v24[0], (__int64)v24[1], v22);
    if ( v24[0] != v25 )
      operator delete(v24[0]);
    v16 = *(_WORD *)(a2 + 32);
    v17 = *(_DWORD *)(a2 + 16);
    LOBYTE(v13) = v16 != 23;
    LOBYTE(v12) = v16 != 66;
    if ( v16 != 66 && v16 != 23 && v16 != 449 )
    {
      sub_1504200(a2);
      v18 = *(_DWORD *)(a2 + 16);
    }
    else
    {
      v18 = *(_DWORD *)(a2 + 16);
    }
    if ( !(unsigned __int8)sub_14808E0((__int64)&v26, v11, v12, v13, v14, v15) )
      v18 = HIDWORD(v33);
    a1[1].m128i_i32[0] = v18;
    a1[1].m128i_i8[4] = 1;
    *a1 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v23), _mm_cvtsi32_si128(v21)),
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v20), _mm_cvtsi32_si128(v17)));
  }
  *v26 = v27;
  return a1;
}
