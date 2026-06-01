size_t __fastcall sub_13934B0(__int64 a1, const void *a2, size_t a3, __int64 a4)
{
  const void *v4; // r12
  unsigned __int64 v7; // r14
  _QWORD *v8; // rax
  _QWORD *v9; // [rsp+10h] [rbp-48h] BYREF
  __int64 v10; // [rsp+18h] [rbp-40h] BYREF
  _QWORD *v11; // [rsp+20h] [rbp-38h] BYREF
  char v12; // [rsp+28h] [rbp-30h]

  v4 = a2;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 1LL) & 1) != 0 )
  {
    sub_FD9C70((__int64)&v11, *(_QWORD *)(a4 + 16), a2, a3, 0, 1, 1);
    if ( (v12 & 1) != 0 )
    {
      v8 = v11;
      v11 = nullptr;
      v9 = v8;
      sub_A05760(&v10, &v9);
      if ( v9 )
        (*(void (__fastcall **)(_QWORD *))(*v9 + 8LL))(v9);
      sub_A04D90((__int64 *)&v11);
    }
    else
    {
      v7 = (unsigned __int64)v11;
      sub_A04D90((__int64 *)&v11);
      if ( v7 )
        return sub_FDBE90(*(_QWORD *)(a4 + 16), v7);
    }
  }
  return (size_t)v4;
}
