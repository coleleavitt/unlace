__int64 __fastcall sub_1B12F10(__int64 a1, unsigned __int64 a2, __m128 a3)
{
  __int64 v3; // r12
  unsigned int v4; // eax
  unsigned int v5; // ebx
  __int64 *v7; // r15
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  char v10; // cl
  unsigned int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r13
  __int64 v17; // rax
  _QWORD *v18; // rax
  double v19[2]; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v20; // [rsp+18h] [rbp-D0h] BYREF
  __m128 v21; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v23; // [rsp+40h] [rbp-A8h] BYREF
  char v24; // [rsp+98h] [rbp-50h]
  unsigned int v25; // [rsp+A0h] [rbp-48h]
  char v26; // [rsp+A4h] [rbp-44h]

  v3 = *(_QWORD *)(a2 + 16);
  if ( (*(_BYTE *)(v3 + 28) & 0x7Fu) - 40 <= 6 && (LOBYTE(v4) = sub_9B48E0(*(_QWORD *)(a2 + 16)), v5 = v4, (_BYTE)v4) )
  {
    v7 = (__int64 *)(*(_QWORD *)a1 + 8LL);
    if ( (*(_QWORD *)a2 & 0x80000LL) != 0 )
    {
      v8 = *(_QWORD *)(a2 + 32);
      if ( v8 )
      {
        v19[0] = *(double *)(a2 + 40);
        a3 = _mm_loadh_ps(v19);
        v21 = a3;
        v9 = *(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v9 )
        {
          v21.m128_u64[0] = v9;
          v10 = 0;
          while ( (*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            v10 = v5;
            v9 = *(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          }
          if ( v10 )
            v21.m128_u64[0] = v9;
        }
        v11 = sub_E90530((__int64 *)&v21);
      }
      else
      {
        v11 = 0;
      }
    }
    else
    {
      v11 = *(_DWORD *)(a2 + 4);
    }
    sub_168B9F0((__int64)&v21, v7, v11, 0x11BAu, 0);
    v20 = sub_EEC8C0(a2, (__int64)v7, *(double *)a3.m128_u64);
    sub_1587DB0((__int64)&v21, &v20);
    sub_15F7200(&v21);
    sub_168B9F0((__int64)&v21, (__int64 *)(*(_QWORD *)a1 + 8LL), *(_DWORD *)(v3 + 24), 0x170Bu, 0);
    if ( v24 )
    {
      sub_AE9DF0(&v23, v3, 0xAu);
    }
    else if ( v26 )
    {
      v16 = sub_168B9E0(&v21);
      v17 = v22;
      if ( v22 )
        v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 32LL))(v22);
      v20 = v17;
      v18 = sub_1587BC0(v16, &v20, v12, v13, v14, v15);
      sub_AE9DF0((unsigned __int8 **)(*v18 + 32LL * v25 + 8), v3, 0xAu);
    }
    v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    sub_1587DB0((__int64)&v21, &v20);
    sub_15F7200(&v21);
  }
  else
  {
    return 0;
  }
  return v5;
}
