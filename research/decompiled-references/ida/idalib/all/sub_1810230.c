__m128i *__fastcall sub_1810230(__int64 *a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // eax
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __m128i *v11; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r14
  __int64 v19; // rax
  _QWORD *v20; // rax
  bool v21; // [rsp+7h] [rbp-C1h] BYREF
  __int64 v22; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v23[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v25; // [rsp+30h] [rbp-98h] BYREF
  char v26; // [rsp+88h] [rbp-40h]
  unsigned int v27; // [rsp+90h] [rbp-38h]
  char v28; // [rsp+94h] [rbp-34h]

  v8 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)(v8 - 40) > 6 )
  {
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
  if ( v8 == 40 )
  {
    if ( sub_9B48E0(a2) )
    {
      sub_168B9F0((__int64)v23, a1 + 1, *(_DWORD *)(a2 + 24), 0x1B93u, 0);
      v11 = nullptr;
      sub_15F7200(v23);
      return v11;
    }
    goto LABEL_4;
  }
  sub_168B9F0((__int64)v23, a1 + 1, a3[1].m128i_u32[2], 0x19C6u, 0);
  if ( v26 )
  {
    sub_AE9DF0(&v25, (__int64)a3, 0xEu);
  }
  else if ( v28 )
  {
    v18 = sub_168B9E0(v23);
    v19 = v24;
    if ( v24 )
      v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 32LL))(v24);
    v22 = v19;
    v20 = sub_1587BC0(v18, &v22, v14, v15, v16, v17);
    sub_AE9DF0((unsigned __int8 **)(*v20 + 32LL * v27 + 8), (__int64)a3, 0xEu);
  }
  v21 = (a3[2].m128i_i8[3] & 2) != 0;
  v13 = sub_1588420((__int64)v23, (unsigned __int8 *)&v21);
  LODWORD(v22) = (*(_BYTE *)(a1[29] + 1) & 8) == 0 ? 2 : 10;
  sub_180E4C0(v13, (int *)&v22);
  v11 = nullptr;
  sub_15F7200(v23);
  return v11;
}
