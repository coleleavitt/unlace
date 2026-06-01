void __fastcall sub_182B580(__int64 a1, unsigned int *a2, const __m128i *a3)
{
  bool v5; // zf
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rdi
  __int64 v9; // rax
  __m128i *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int32 v15; // [rsp+4h] [rbp-C4h] BYREF
  __int64 v16; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v17[184]; // [rsp+10h] [rbp-B8h] BYREF

  v5 = a3[3].m128i_i16[4] == 0;
  v15 = 0xFFFF;
  if ( v5 || (unsigned __int8)sub_16211A0(a1, a3, a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL, &v15, 0xFFFFFFFFLL, 0) )
  {
    sub_168B9F0((__int64)v17, (__int64 *)(a1 + 8), a2[6], 0x1B2Fu, 0);
    v16 = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)a2 + 16LL))(a2);
    sub_1587DB0((__int64)v17, &v16);
    sub_15F7200(v17);
    v8 = *(_QWORD **)(a1 + 248);
    v9 = v8[294];
    v8[304] += 48LL;
    v10 = (__m128i *)((v9 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v8[295] >= (unsigned __int64)&v10[3] && v9 )
      v8[294] = v10 + 3;
    else
      v10 = (__m128i *)sub_986170((__int64)(v8 + 294), 48, 48, 3, v6, v7);
    sub_B116C0(v10, *(_QWORD *)(a1 + 248), a3, v15);
    sub_B8CC60((__int64)a2, (__int64)v10, v11, v12, v13, v14);
  }
}
