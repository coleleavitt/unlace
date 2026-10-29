__int64 __fastcall sub_17AE610(__int64 a1, _BYTE ***a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  __int64 *v7; // rsi
  _BYTE *v8; // rsi
  _BYTE *v9; // rdx
  __int64 v10; // r15
  _BYTE *v11; // rsi
  _BYTE *v12; // rdx
  void *v13[2]; // [rsp+0h] [rbp-108h] BYREF
  __int64 v14; // [rsp+10h] [rbp-F8h] BYREF
  void *v15; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v16; // [rsp+28h] [rbp-E0h]
  _BYTE v17[16]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v18[200]; // [rsp+40h] [rbp-C8h] BYREF

  result = 0;
  if ( !a4 )
    return result;
  v7 = (__int64 *)(*(_QWORD *)a1 + 8LL);
  if ( !a3 )
  {
    sub_168B9F0((__int64)v18, v7, a4, 0x18C2u, 0);
    v11 = **a2;
    if ( v11 )
    {
      v12 = (*a2)[1];
      v15 = v17;
      sub_179C260(&v15, v11, (__int64)&v12[(_QWORD)v11]);
    }
    else
    {
      v17[0] = 0;
      v16 = 0;
      v15 = v17;
    }
LABEL_14:
    sub_1682AF0((__int64)v18, (__int64)&v15);
    if ( v15 != v17 )
      operator delete(v15);
    sub_15F7200(v18);
    return 1;
  }
  sub_168B9F0((__int64)v18, v7, a4, 0x18C3u, 0);
  v8 = **a2;
  if ( v8 )
  {
    v9 = (*a2)[1];
    v15 = v17;
    sub_179C260(&v15, v8, (__int64)&v9[(_QWORD)v8]);
  }
  else
  {
    v17[0] = 0;
    v16 = 0;
    v15 = v17;
  }
  v10 = sub_1682AF0((__int64)v18, (__int64)&v15);
  sub_FEEE60((__int64)v13, (__int64 *)a3, 0);
  sub_1682AF0(v10, (__int64)v13);
  if ( v13[0] != &v14 )
    operator delete(v13[0]);
  if ( v15 != v17 )
    operator delete(v15);
  sub_15F7200(v18);
  result = 1;
  if ( *(_DWORD *)(a3 + 32) )
  {
    sub_168B9F0((__int64)v18, (__int64 *)(*(_QWORD *)a1 + 8LL), *(_DWORD *)(a3 + 32), 0x170Bu, 0);
    sub_FEEE60((__int64)&v15, (__int64 *)a3, 0);
    goto LABEL_14;
  }
  return result;
}
