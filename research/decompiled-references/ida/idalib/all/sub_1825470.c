void __fastcall sub_1825470(__int64 *a1, __int64 a2, const __m128i *a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r12
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // [rsp+8h] [rbp-B0h] BYREF
  _QWORD v20[2]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+20h] [rbp-98h]
  unsigned __int8 *v22[11]; // [rsp+30h] [rbp-88h] BYREF
  char v23; // [rsp+88h] [rbp-30h]
  unsigned int v24; // [rsp+90h] [rbp-28h]
  char v25; // [rsp+94h] [rbp-24h]

  if ( !a3[3].m128i_i16[4] || (v4 = a3[5].m128i_i64[0], (v4 & 2) == 0) )
  {
    sub_168B9F0((__int64)v20, a1 + 1, a3[1].m128i_u32[2], 0xC57u, 0);
    if ( v23 )
    {
      sub_AE9DF0(v22, (__int64)a3, 0x10u);
      if ( !v23 )
        goto LABEL_12;
    }
    else
    {
      if ( !v25 )
      {
LABEL_5:
        sub_15F7200(v20);
        return;
      }
      v9 = sub_168B9E0(v20);
      v10 = v21;
      if ( v21 )
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 32LL))(v21);
      v19 = v10;
      v11 = sub_1587BC0(v9, &v19, v5, v6, v7, v8);
      sub_AE9DF0((unsigned __int8 **)(*v11 + 32LL * v24 + 8), (__int64)a3, 0x10u);
      if ( !v23 )
      {
LABEL_12:
        if ( v25 )
        {
          v14 = sub_168B9E0(v20);
          v17 = v21;
          if ( v21 )
            v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 32LL))(v21);
          v19 = v17;
          v18 = sub_1587BC0(v14, &v19, v12, v13, v15, v16);
          sub_AE9DF0((unsigned __int8 **)(*v18 + 32LL * v24 + 8), 3, 2u);
        }
        goto LABEL_5;
      }
    }
    sub_AE9DF0(v22, 3, 2u);
    goto LABEL_5;
  }
  sub_1816B80(a1, a2, a3, *(_QWORD *)((v4 & 0xFFFFFFFFFFFFFFFCLL) + 8), 0);
}
