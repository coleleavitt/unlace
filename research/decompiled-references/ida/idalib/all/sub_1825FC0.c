void __fastcall sub_1825FC0(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v5; // rax
  unsigned int *v7; // r12
  unsigned int *v8; // rdi
  __int64 v9; // rsi
  __m128i *v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r13
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rax
  int v23; // [rsp+Ch] [rbp-CCh] BYREF
  __int64 v24[2]; // [rsp+10h] [rbp-C8h] BYREF
  _QWORD v25[2]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+30h] [rbp-A8h]
  unsigned __int8 *v27; // [rsp+40h] [rbp-98h] BYREF
  char v28; // [rsp+98h] [rbp-40h]
  unsigned int v29; // [rsp+A0h] [rbp-38h]
  char v30; // [rsp+A4h] [rbp-34h]

  if ( a3[3].m128i_i16[4] && (v5 = a3[5].m128i_i64[0], (v5 & 2) != 0) )
  {
    v7 = (unsigned int *)(v5 & 0xFFFFFFFFFFFFFFFCLL);
    v8 = *(unsigned int **)(*(_QWORD *)((v5 & 0xFFFFFFFFFFFFFFFCLL) + 8) + 16LL);
    v9 = *v8;
    v24[0] = (__int64)(v8 + 4);
    v24[1] = v9;
    if ( (unsigned __int8)sub_B17400((__int64)(v8 + 4), v9, &v23) )
    {
      v10 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 48, 3u);
      sub_B173D0(v10, *(_QWORD *)(a1 + 248), a3, v23);
      sub_B8CC60(a2, (__int64)v10, v11, v12, v13, v14);
    }
    else
    {
      sub_168B9F0((__int64)v25, (__int64 *)(a1 + 8), *v7, 0x19C0u, 0);
      v22 = sub_15DD120((__int64)v25, (__int64)a3);
      sub_1682BA0(v22, (__int64)v24);
      sub_15F7200(v25);
    }
  }
  else
  {
    sub_168B9F0((__int64)v25, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xC57u, 0);
    if ( v28 )
    {
      sub_AE9DF0(&v27, (__int64)a3, 0x10u);
    }
    else if ( v30 )
    {
      v19 = sub_168B9E0(v25);
      v20 = v26;
      if ( v26 )
        v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 32LL))(v26);
      v24[0] = v20;
      v21 = sub_1587BC0(v19, v24, v15, v16, v17, v18);
      sub_AE9DF0((unsigned __int8 **)(*v21 + 32LL * v29 + 8), (__int64)a3, 0x10u);
    }
    LODWORD(v24[0]) = 3;
    sub_180A710((__int64)v25, (int *)v24);
    sub_15F7200(v25);
  }
}
