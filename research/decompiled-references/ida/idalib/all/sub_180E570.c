__m128i *__fastcall sub_180E570(__int64 *a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // eax
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __m128i *v11; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  bool v15; // [rsp+Bh] [rbp-ADh] BYREF
  int v16; // [rsp+Ch] [rbp-ACh] BYREF
  _BYTE v17[168]; // [rsp+10h] [rbp-A8h] BYREF

  v8 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)(v8 - 40) > 6 )
    goto LABEL_4;
  if ( v8 == 40 )
  {
    if ( sub_9B48E0(a2) )
    {
      sub_168B9F0((__int64)v17, a1 + 1, *(_DWORD *)(a2 + 24), 0x1B93u, 0);
      v11 = nullptr;
      sub_15F7200(v17);
      return v11;
    }
LABEL_4:
    v9 = (_QWORD *)a1[31];
    v10 = v9[294];
    v9[304] += 40LL;
    v11 = (__m128i *)((v10 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v9[295] >= (unsigned __int64)&v11[2].m128i_u64[1] && v10 )
      v9[294] = (char *)v11 + 40;
    else
      v11 = (__m128i *)sub_986170((__int64)(v9 + 294), 40, 40, 3, a5, a6);
    sub_B13D70(v11, a1[31], a3);
    return v11;
  }
  sub_168B9F0((__int64)v17, a1 + 1, a3[1].m128i_u32[2], 0x19C6u, 0);
  v13 = sub_15DD120((__int64)v17, (__int64)a3);
  v15 = (a3[2].m128i_i8[3] & 2) != 0;
  v14 = sub_1588420(v13, (unsigned __int8 *)&v15);
  v16 = (*(_BYTE *)(a1[29] + 1) & 8) == 0 ? 2 : 10;
  sub_180E4C0(v14, &v16);
  sub_15F7200(v17);
  return nullptr;
}
