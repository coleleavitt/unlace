__int64 *__fastcall sub_1E667E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __m128i a4,
        double a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  _QWORD *v19; // rax
  unsigned int v20; // [rsp+4h] [rbp-C4h]
  __int64 v21; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+18h] [rbp-B0h] BYREF
  _QWORD v24[2]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+30h] [rbp-98h]
  unsigned __int8 *v26; // [rsp+40h] [rbp-88h] BYREF
  char v27; // [rsp+98h] [rbp-30h]
  unsigned int v28; // [rsp+A0h] [rbp-28h]
  char v29; // [rsp+A4h] [rbp-24h]

  v21 = a2;
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v8 + 16) == 47 )
  {
    v22 = 0;
    v20 = a3;
    if ( sub_F62670(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), &v22, a3, v8, a7, a8) )
    {
      sub_168B9F0((__int64)v24, (__int64 *)(a1 + 8), v20, 0x14EEu, 0);
      sub_1605D30((__int64)v24, &v21);
      sub_15F7200(v24);
      sub_168B9F0((__int64)v24, (__int64 *)(a1 + 8), *(_DWORD *)(v22 + 24), 0x6Bu, 0);
      if ( v27 )
      {
        sub_AE9DF0(&v26, v22, 0xAu);
      }
      else if ( v29 )
      {
        v15 = sub_168B9E0(v24);
        v18 = v25;
        if ( v25 )
          v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 32LL))(v25);
        v23 = v18;
        v19 = sub_1587BC0(v15, &v23, v13, v14, v16, v17);
        sub_AE9DF0((unsigned __int8 **)(*v19 + 32LL * v28 + 8), v22, 0xAu);
      }
      sub_15F7200(v24);
      return nullptr;
    }
    else
    {
      return sub_1E5E690(a1, v21, v20, v10, v11, v12, a4, a5);
    }
  }
  else
  {
    sub_168B9F0((__int64)v24, (__int64 *)(a1 + 8), a3, 0x1235u, 0);
    sub_15F7200(v24);
    return nullptr;
  }
}
