__int64 __fastcall sub_18ED4D0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v8; // r8
  int v9; // esi
  __int64 *v10; // rsi
  unsigned int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r12
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+18h] [rbp-B0h] BYREF
  _QWORD v23[2]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+30h] [rbp-98h]
  unsigned __int8 *v25; // [rsp+40h] [rbp-88h] BYREF
  char v26; // [rsp+98h] [rbp-30h]
  unsigned int v27; // [rsp+A0h] [rbp-28h]
  char v28; // [rsp+A4h] [rbp-24h]

  result = 1;
  v21 = a4;
  v6 = *(_QWORD *)(a1 + 232);
  if ( (*(_BYTE *)(v6 + 1) & 8) == 0 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v9 = *(unsigned __int8 *)(v8 + 16);
    if ( (unsigned int)(v9 - 25) > 1 || (unsigned int)(a5 - 3) > 1 && a5 )
    {
      result = 1;
      if ( (_BYTE)v9 != 13 || ((*(_WORD *)(v8 + 18) >> 3) & 0x1FF) != 0x1B3 )
        return result;
      v10 = (__int64 *)(a1 + 8);
      v11 = (*(_BYTE *)(v6 + 47) & 0x20) == 0 ? 5669 : 4703;
    }
    else
    {
      v10 = (__int64 *)(a1 + 8);
      v11 = 5668;
    }
    sub_168B9F0((__int64)v23, v10, a3, v11, 0);
    v12 = sub_10CCE40(a5);
    v13 = v12;
    if ( v26 )
    {
      sub_AE9DF0(&v25, v12, 1u);
    }
    else if ( v28 )
    {
      v18 = sub_168B9E0(v23);
      v19 = v24;
      if ( v24 )
        v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 32LL))(v24);
      v22 = v19;
      v20 = sub_1587BC0(v18, &v22, v14, v15, v16, v17);
      sub_AE9DF0((unsigned __int8 **)(*v20 + 32LL * v27 + 8), v13, 1u);
    }
    sub_15884C0((__int64)v23, &v21);
    sub_15F7200(v23);
    return 0;
  }
  return result;
}
