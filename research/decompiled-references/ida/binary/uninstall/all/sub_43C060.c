__int64 __fastcall sub_43C060(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__int64, __int64 *, __int64),
        __int64 a4)
{
  unsigned int v5; // r14d
  const char *v6; // rsi
  int v8; // ecx
  const char *v9; // rbx
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // rcx
  int v13; // r8d
  int v14; // r9d
  _BYTE *v15; // rax
  int v16; // eax
  __int64 v18; // rax
  int v20; // [rsp+Ch] [rbp-D1Ch] BYREF
  __int64 v21[5]; // [rsp+10h] [rbp-D18h] BYREF
  int v22; // [rsp+3Ch] [rbp-CECh]
  int v23; // [rsp+40h] [rbp-CE8h]
  _BYTE *v24; // [rsp+88h] [rbp-CA0h]
  _BYTE *v25; // [rsp+90h] [rbp-C98h]
  int v26; // [rsp+CDCh] [rbp-4Ch]
  __int64 v27; // [rsp+CE0h] [rbp-48h]
  __int64 v28; // [rsp+CE8h] [rbp-40h]

  v5 = 0;
  v6 = *(const char **)(a2 + 8);
  if ( v6 )
  {
    v8 = *(_DWORD *)(a2 + 16);
    v9 = v6;
    v20 = v8;
  }
  else
  {
    v18 = sub_47ACD0(a2, &v20);
    v8 = v20;
    v9 = (const char *)v18;
  }
  sub_438B60(a1, (__int64)v21, (__int64)v9, v8, *(_QWORD **)(a1 + 960), *(_DWORD *)(a1 + 968));
  v10 = sub_47AE70(a2);
  if ( v10 )
  {
    v27 = v10;
    v28 = v10 + 4;
    sub_487510(v10);
  }
  sub_43ADB0(a1, v9, v20, (__int64)v21);
  v15 = v24;
  if ( v24 == v25 )
  {
    sub_439150((__int64)v21);
    v15 = v24;
  }
  *v15 = 0;
  v16 = dword_65440C;
  ++v24;
  v26 = 0;
  if ( dword_65440C )
  {
    if ( dword_65440C == 0x80000000 )
    {
      v16 = 1;
    }
    else if ( dword_65440C < 0 )
    {
      v11 = v23;
      if ( v22 < v23 )
        v22 = v23;
      goto LABEL_11;
    }
    v11 = v23;
LABEL_11:
    v23 = v11 + v16;
  }
  if ( !a3 || (v5 = a3(a1, v21, a4)) == 0 )
    sub_439200(a2, v21, v11, v12, v13, v14);
  sub_438E80((__int64)v21);
  return v5;
}

