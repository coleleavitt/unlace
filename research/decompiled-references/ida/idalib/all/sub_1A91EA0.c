void __fastcall sub_1A91EA0(__int64 *a1, __int64 a2, const __m128i *a3)
{
  unsigned __int64 v4; // rax
  _DWORD *v5; // rax
  unsigned int v6; // edx
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
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v32[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v34[11]; // [rsp+30h] [rbp-98h] BYREF
  char v35; // [rsp+88h] [rbp-40h]
  unsigned int v36; // [rsp+90h] [rbp-38h]
  char v37; // [rsp+94h] [rbp-34h]

  v4 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v4 = *(_QWORD *)v4;
  if ( (*(_BYTE *)(v4 + 8) & 0x7F) == 0x13 )
  {
    sub_168B9F0((__int64)v32, a1, a3[1].m128i_u32[2], 0x1103u, 0);
    if ( v35 )
    {
      sub_AE9DF0(v34, 0, 2u);
    }
    else if ( v37 )
    {
      v19 = sub_168B9E0(v32);
      v22 = v33;
      if ( v33 )
        v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 32LL))(v33);
      v31 = v22;
      v23 = sub_1587BC0(v19, &v31, v17, v18, v20, v21);
      sub_AE9DF0((unsigned __int8 **)(*v23 + 32LL * v36 + 8), 0, 2u);
    }
  }
  else
  {
    v5 = (_DWORD *)sub_168B6E0((__int64)a1);
    switch ( v5[92] )
    {
      case 0:
      case 2:
      case 3:
      case 6:
        goto LABEL_8;
      case 1:
      case 4:
        goto LABEL_12;
      case 5:
        v6 = v5[93];
        if ( v6 > 1 && ((v5[94] & 0x7FFFFFFFu) > 1 || v6 != 2) )
        {
LABEL_8:
          v7 = sub_168B6C0((__int64)a1);
          v8 = (_QWORD *)sub_168B6C0((__int64)a1);
          v11 = v8[294];
          v8[304] += 40LL;
          v12 = (__m128i *)((v11 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( v8[295] >= (unsigned __int64)&v12[2].m128i_u64[1] && v11 )
            v8[294] = (char *)v12 + 40;
          else
            v12 = (__m128i *)sub_986170((__int64)(v8 + 294), 40, 40, 3, v9, v10);
          sub_B15FD0(v12, v7, a3);
          sub_B8CC60(a2, (__int64)v12, v13, v14, v15, v16);
          return;
        }
LABEL_12:
        sub_168B9F0((__int64)v32, a1, a3[1].m128i_u32[2], 0x1C0Du, 0);
        if ( v35 )
        {
          sub_AE9DF0(v34, (__int64)a3, 0x10u);
          sub_15F7200(v32);
          return;
        }
        if ( v37 )
        {
          v26 = sub_168B9E0(v32);
          v29 = v33;
          if ( v33 )
            v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 32LL))(v33);
          v31 = v29;
          v30 = sub_1587BC0(v26, &v31, v24, v25, v27, v28);
          sub_AE9DF0((unsigned __int8 **)(*v30 + 32LL * v36 + 8), (__int64)a3, 0x10u);
        }
        break;
    }
  }
  sub_15F7200(v32);
}
