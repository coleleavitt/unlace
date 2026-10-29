void __fastcall sub_1A8F9C0(__int64 *a1, __int64 a2, const __m128i *a3)
{
  _DWORD *v4; // rax
  unsigned int v5; // edx
  __int64 v6; // r13
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __m128i *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v24[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v26; // [rsp+30h] [rbp-98h] BYREF
  char v27; // [rsp+88h] [rbp-40h]
  unsigned int v28; // [rsp+90h] [rbp-38h]
  char v29; // [rsp+94h] [rbp-34h]

  v4 = (_DWORD *)sub_168B6E0((__int64)a1);
  switch ( v4[92] )
  {
    case 0:
    case 2:
    case 3:
    case 6:
      goto LABEL_5;
    case 1:
    case 4:
      goto LABEL_9;
    case 5:
      v5 = v4[93];
      if ( v5 <= 1 || (v4[94] & 0x7FFFFFFFu) <= 1 && v5 == 2 )
      {
LABEL_9:
        sub_168B9F0((__int64)v24, a1, a3[1].m128i_u32[2], 0x1C0Du, 0);
        if ( v27 )
        {
          sub_AE9DF0(&v26, (__int64)a3, 0x10u);
        }
        else if ( v29 )
        {
          v18 = sub_168B9E0(v24);
          v21 = v25;
          if ( v25 )
            v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 32LL))(v25);
          v23 = v21;
          v22 = sub_1587BC0(v18, &v23, v16, v17, v19, v20);
          sub_AE9DF0((unsigned __int8 **)(*v22 + 32LL * v28 + 8), (__int64)a3, 0x10u);
        }
        sub_15F7200(v24);
      }
      else
      {
LABEL_5:
        v6 = sub_168B6C0((__int64)a1);
        v7 = (_QWORD *)sub_168B6C0((__int64)a1);
        v10 = v7[294];
        v7[304] += 40LL;
        v11 = (__m128i *)((v10 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v7[295] >= (unsigned __int64)&v11[2].m128i_u64[1] && v10 )
          v7[294] = (char *)v11 + 40;
        else
          v11 = (__m128i *)sub_986170((__int64)(v7 + 294), 40, 40, 3, v8, v9);
        sub_B16000(v11, v6, a3);
        sub_B8CC60(a2, (__int64)v11, v12, v13, v14, v15);
      }
      return;
  }
}
