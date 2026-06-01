void __fastcall sub_162EDA0(__int64 a1, __int64 a2, const __m128i *a3)
{
  unsigned __int64 *v5; // rdi
  unsigned __int8 v6; // al
  __int64 v7; // r13
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __m128i *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v25[16]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v27; // [rsp+30h] [rbp-98h] BYREF
  char v28; // [rsp+88h] [rbp-40h]
  unsigned int v29; // [rsp+90h] [rbp-38h]
  char v30; // [rsp+94h] [rbp-34h]

  if ( (*(_BYTE *)(sub_168B6E0(a1) + 1) & 8) == 0 )
    goto LABEL_4;
  v5 = (unsigned __int64 *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
  {
    if ( sub_B8E4C0(*v5) )
      goto LABEL_4;
LABEL_14:
    sub_168B9F0(v25, a1, a3[1].m128i_u32[2], 3204, 0);
    if ( v28 )
    {
      sub_AE9DF0(&v27, (__int64)a3, 0x10u);
    }
    else if ( v30 )
    {
      v19 = sub_168B9E0(v25);
      v22 = v26;
      if ( v26 )
        v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 32LL))(v26);
      v24 = v22;
      v23 = sub_1587BC0(v19, &v24, v17, v18, v20, v21);
      sub_AE9DF0((unsigned __int8 **)(*v23 + 32LL * v29 + 8), (__int64)a3, 0x10u);
    }
    goto LABEL_7;
  }
  if ( !sub_B8E4C0((unsigned __int64)v5) )
    goto LABEL_14;
LABEL_4:
  v6 = sub_B81B70(a2);
  if ( !v6 )
    goto LABEL_21;
  if ( v6 <= 3u )
  {
    sub_168B9F0(v25, a1, a3[1].m128i_u32[2], 6557, 0);
LABEL_7:
    sub_15F7200(v25);
    return;
  }
  if ( v6 > 6u )
LABEL_21:
    BUG();
  v7 = sub_168B6C0(a1);
  v8 = (_QWORD *)sub_168B6C0(a1);
  v11 = v8[294];
  v8[304] += 40LL;
  v12 = (__m128i *)((v11 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v8[295] >= (unsigned __int64)&v12[2].m128i_u64[1] && v11 )
    v8[294] = (char *)v12 + 40;
  else
    v12 = (__m128i *)sub_986170((__int64)(v8 + 294), 40, 40, 3, v9, v10);
  sub_B0FAE0(v12, v7, a3);
  sub_B8CC60(a2, (__int64)v12, v13, v14, v15, v16);
}
