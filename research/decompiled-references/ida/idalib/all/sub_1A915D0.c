void __fastcall sub_1A915D0(__int64 *a1, __int64 a2, const __m128i *a3)
{
  __int64 v4; // rax
  unsigned int v5; // eax
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // r12
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __m128i *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r13
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v27[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v29; // [rsp+30h] [rbp-98h] BYREF
  char v30; // [rsp+88h] [rbp-40h]
  unsigned int v31; // [rsp+90h] [rbp-38h]
  char v32; // [rsp+94h] [rbp-34h]

  if ( a3[3].m128i_i16[4]
    && (v4 = a3[5].m128i_i64[0], (v4 & 2) != 0)
    && (v6 = v4 & 0xFFFFFFFFFFFFFFFCLL, (v4 & 0xFFFFFFFFFFFFFFFCLL) != 0) )
  {
    v7 = sub_168B6C0((__int64)a1);
    v8 = *(_QWORD *)(v6 + 8);
    v9 = v7;
    v10 = (_QWORD *)sub_168B6C0((__int64)a1);
    v13 = v10[294];
    v10[304] += 48LL;
    v14 = (__m128i *)((v13 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v10[295] >= (unsigned __int64)&v14[3] && v13 )
      v10[294] = v14 + 3;
    else
      v14 = (__m128i *)sub_986170((__int64)(v10 + 294), 48, 48, 3, v11, v12);
    sub_B15B90(v14, v9, a3, v8);
    sub_B8CC60(a2, (__int64)v14, v15, v16, v17, v18);
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
    sub_168B9F0((__int64)v27, a1, v5, 0x10F5u, 0);
    if ( v30 )
    {
      sub_AE9DF0(&v29, (__int64)a3, 0x10u);
    }
    else if ( v32 )
    {
      v23 = sub_168B9E0(v27);
      v24 = v28;
      if ( v28 )
        v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 32LL))(v28);
      v26 = v24;
      v25 = sub_1587BC0(v23, &v26, v19, v20, v21, v22);
      sub_AE9DF0((unsigned __int8 **)(*v25 + 32LL * v31 + 8), (__int64)a3, 0x10u);
    }
    LODWORD(v26) = 0;
    sub_1587D10((__int64)v27, (int *)&v26);
    sub_15F7200(v27);
  }
}
