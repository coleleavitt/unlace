__int64 __fastcall sub_D109D0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdx
  unsigned int v5; // r12d
  __int64 v6; // rdx
  __int64 v7; // rdi
  unsigned int v8; // ebx
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rbp
  unsigned __int8 **v15; // [rsp+18h] [rbp-80h] BYREF
  _QWORD v16[2]; // [rsp+20h] [rbp-78h] BYREF
  void *v17; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v18; // [rsp+38h] [rbp-60h]
  char v19; // [rsp+3Ch] [rbp-5Ch]
  _QWORD v20[11]; // [rsp+40h] [rbp-58h] BYREF

  v16[0] = sub_D08C00(*(_QWORD *)(a1 + 176));
  v16[1] = v4;
  v18 = 32;
  v17 = nullptr;
  v19 = 0;
  sub_CFEAE0((__int64)v20, (__int64)v16);
  v5 = sub_2202BA0(v20, &v17, 0, &v15);
  sub_9955A0(v20);
  LODWORD(v6) = v5 & 1;
  if ( (v5 & 1) != 0 )
  {
    v10 = sub_E1EF60(*(_QWORD *)(a1 + 400));
    v11 = *(_QWORD *)(v10 + 8);
    v15 = (unsigned __int8 **)sub_E33C90(a1, v10, 2464, 0);
    sub_CFEAE0((__int64)v20, (__int64)v16);
    if ( v15 )
    {
      sub_CFDDA0(&v15, v20);
      if ( v15 )
        sub_AE9DF0(v15, v11, 8u);
    }
    sub_9955A0(v20);
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)v8 )
    {
      v12 = *(_QWORD *)(a1 + 176);
      if ( v19 )
      {
        LODWORD(v13) = (_DWORD)v17;
        if ( v18 > 0x40 )
          v13 = *(_QWORD *)v17;
      }
      else if ( v18 > 0x40 )
      {
        LODWORD(v13) = *(_DWORD *)v17;
      }
      else
      {
        LODWORD(v13) = 0;
        if ( v18 )
          v13 = (__int64)((_QWORD)v17 << (64 - (unsigned __int8)v18)) >> (64 - (unsigned __int8)v18);
      }
      *(_DWORD *)sub_E216C0(v12, 8) = v13;
    }
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 176);
    if ( v19 )
    {
      LODWORD(v6) = (_DWORD)v17;
      if ( v18 > 0x40 )
        v6 = *(_QWORD *)v17;
    }
    else if ( v18 > 0x40 )
    {
      LODWORD(v6) = *(_DWORD *)v17;
    }
    else if ( v18 )
    {
      v6 = (__int64)((_QWORD)v17 << (64 - (unsigned __int8)v18)) >> (64 - (unsigned __int8)v18);
    }
    *(_DWORD *)sub_E216C0(v7, 8) = v6;
    v8 = sub_DCADA0(a1, a2, v16, v5, a3);
  }
  if ( v18 > 0x40 && v17 )
    operator delete[](v17);
  return v8;
}
