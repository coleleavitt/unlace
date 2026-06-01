__int64 __fastcall sub_1785FD0(__int64 *a1, unsigned int a2, int a3)
{
  __int64 v3; // rbx
  __int64 v6; // r13
  __int64 v7; // r15
  _QWORD *v8; // r12
  __int64 v9; // rax
  unsigned __int8 v10; // dl
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // [rsp+18h] [rbp-180h] BYREF
  _QWORD v19[2]; // [rsp+20h] [rbp-178h] BYREF
  __int64 v20; // [rsp+30h] [rbp-168h]
  unsigned __int8 *v21; // [rsp+40h] [rbp-158h] BYREF
  char v22; // [rsp+98h] [rbp-100h]
  unsigned int v23; // [rsp+A0h] [rbp-F8h]
  char v24; // [rsp+A4h] [rbp-F4h]
  __int64 v25; // [rsp+B0h] [rbp-E8h] BYREF
  _QWORD *v26; // [rsp+B8h] [rbp-E0h]
  __int64 v27; // [rsp+C0h] [rbp-D8h]
  _OWORD v28[5]; // [rsp+C8h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+118h] [rbp-80h]
  __int64 *v30; // [rsp+120h] [rbp-78h]
  __int64 v31; // [rsp+128h] [rbp-70h]
  int v32; // [rsp+130h] [rbp-68h]
  __int64 v33; // [rsp+138h] [rbp-60h] BYREF
  __int128 v34; // [rsp+140h] [rbp-58h]
  __int64 v35; // [rsp+150h] [rbp-48h]

  v3 = a1[325];
  if ( !v3 )
  {
    v6 = sub_6F3470(a1[30] + 552, "coroutine_traits", 0x10u);
    v7 = sub_183D350(a1);
    v28[4] = 0;
    v26 = v28;
    v27 = 0x800000000LL;
    v25 = 0;
    v29 = 0;
    v30 = a1;
    v31 = v6;
    v32 = a3;
    sub_B85890(&v33, v6);
    v34 = 0;
    v35 = 0x101010000LL;
    sub_1A395A0(&v25);
    if ( v7 && (unsigned __int8)sub_1A48440(a1, &v25, v7 + 48, 0) )
    {
      v8 = v26;
      if ( (_DWORD)v25 != 2 )
        goto LABEL_15;
      v9 = *v26 & 0xFFFFFFFFFFFFFFF8LL;
      v10 = *(_BYTE *)(v9 + 28) & 0x7F;
      if ( ((v10 + 52) & 0x7Fu) <= 1 || (unsigned int)v10 - 53 <= 1 )
      {
        v9 = sub_B72ED0(v9);
        v10 = *(_BYTE *)(v9 + 28) & 0x7F;
      }
      if ( v10 == 72 )
      {
        a1[325] = v9;
        v3 = v9;
      }
      else
      {
LABEL_15:
        a1[325] = 0;
        *(_WORD *)((char *)&v35 + 3) = 0;
        sub_168B9F0((__int64)v19, a1 + 1, *(_DWORD *)((*v8 & 0xFFFFFFFFFFFFFFF8LL) + 24), 0x1025u, 0);
        sub_15F7200(v19);
      }
    }
    else
    {
      sub_168B9F0((__int64)v19, a1 + 1, a2, 0xF6Bu, 0);
      if ( v22 )
      {
        sub_AE9DF0(&v21, (__int64)"std::coroutine_traits", 1u);
      }
      else if ( v24 )
      {
        v13 = sub_168B9E0(v19);
        v16 = v20;
        if ( v20 )
          v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 32LL))(v20);
        v18 = v16;
        v17 = sub_1587BC0(v13, &v18, v11, v12, v14, v15);
        sub_AE9DF0((unsigned __int8 **)(*v17 + 32LL * v23 + 8), (__int64)"std::coroutine_traits", 1u);
      }
      sub_15F7200(v19);
    }
    sub_169D230((__int64)&v25);
  }
  return v3;
}
