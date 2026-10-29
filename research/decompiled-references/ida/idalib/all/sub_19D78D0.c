unsigned __int64 __fastcall sub_19D78D0(__int64 *a1, unsigned int a2, __int64 a3, char a4, __int64 a5)
{
  _QWORD *v8; // rdi
  __int64 v9; // rax
  __int64 *v10; // r13
  unsigned __int64 v11; // rbp
  __int64 v13; // rax
  size_t v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rdi
  __int64 v19; // r14
  _QWORD *v20; // r15
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // r15
  size_t v26; // rax
  __int64 v27; // rsi
  __int64 v28; // r8
  __int64 v29; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v30; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD v31[25]; // [rsp+10h] [rbp-C8h] BYREF

  v8 = (_QWORD *)a1[11];
  v30 = a3;
  v29 = a5;
  v9 = sub_E93D70(v8, a3);
  if ( !BYTE4(v9) )
  {
    if ( a4 )
    {
      sub_168B9F0((__int64)v31, a1, a2, 0xFD1u, 0);
      v13 = sub_1605D30((__int64)v31, &v30);
      sub_15884C0(v13, &v29);
      v11 = 0;
      sub_15F7200(v31);
      return v11;
    }
    return 0;
  }
  v10 = &a1[(int)v9];
  v11 = v10[16];
  if ( !v11 )
  {
    v14 = sub_E92250(a1[11], v9, 0);
    v18 = a1[12];
    v19 = v14;
    v20 = *(_QWORD **)(*a1 + 248);
    if ( !v18 )
    {
      v18 = sub_19D76D0((__int64 *)*a1, a2, 2u);
      a1[12] = v18;
      if ( !v18 )
        return 0;
    }
    if ( (a1[14] & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
      v21 = sub_A82070((__int64)v20, v18, 0, v15, v16, v17);
      v22 = sub_A74EC0((__int64)v20, v21);
      v18 = a1[12];
      a1[14] = v22;
    }
    v11 = sub_BAD910(v18, v19, 0, 0, 1, 0);
    if ( !v11 && (*(_BYTE *)(sub_168B6E0((__int64)a1) + 106) & 1) != 0 )
    {
      v23 = a1[12];
      if ( v23 )
        v23 += 48;
      v24 = sub_BA7B60(v20, 0, 0, v19, a1[14], 0, v23, 0, 0, 0, 0, 1, 0, 1, 0);
      v25 = v20[2188];
      v11 = v24;
      v26 = j__strlen("value");
      v27 = v11 + 48;
      v28 = sub_6F3470(v25, "value", v26);
      if ( !v11 )
        v27 = 0;
      v31[0] = sub_B74530(*(_QWORD *)(*a1 + 248), v27, 0, 0, v28, v30, 0, 0, 0);
      sub_BA9CC0(v11, *(_QWORD *)(*a1 + 248), v31, 1, 0, 0);
    }
    if ( (unsigned __int8)sub_19D4020(*a1, a2, a1[12], v19, v11) )
    {
      v10[16] = v11;
      return v11;
    }
    return 0;
  }
  return v11;
}
