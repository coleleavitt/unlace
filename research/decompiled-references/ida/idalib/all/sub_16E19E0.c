__int64 __fastcall sub_16E19E0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, double a7)
{
  __int64 v11; // rax
  int v12; // edx
  unsigned int v13; // r13d
  _DWORD *v14; // rax
  _BYTE *v15; // rsi
  __int64 v17; // [rsp+34h] [rbp-84h]
  int v18; // [rsp+3Ch] [rbp-7Ch]
  _BYTE *v19; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v20; // [rsp+48h] [rbp-70h]
  _BYTE *v21; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v22; // [rsp+68h] [rbp-50h]

  if ( *(_BYTE *)(a2 + 96) )
  {
    sub_168B9B0((__int64)&v21, *(_QWORD *)(a1 + 8) + 8LL, 7290);
    sub_16B6F70(&v21, (unsigned int)(a6 + 1));
    sub_16B6F70(&v21, *(unsigned int *)(a1 + 40));
    sub_1582CA0((__int64)&v19, &v21);
    if ( v21 && v22 )
      sub_1580C40(v22, (unsigned __int64)v21);
  }
  else
  {
    sub_168B9B0((__int64)&v19, *(_QWORD *)(a1 + 8) + 8LL, 7285);
  }
  v11 = sub_16B5B90(a1, a4, a5);
  v18 = v12;
  v17 = v11;
  v13 = sub_16B5B40(a1, *(_QWORD *)(a3 + 8));
  sub_1582CA0((__int64)&v21, &v19);
  sub_16DE8D0(
    *(_QWORD *)(a1 + 8),
    *(unsigned __int8 *)(a1 + 98),
    *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL * *(unsigned int *)(a1 + 80)),
    (__int64)&v21,
    v13,
    a7,
    v17,
    v17,
    v18,
    nullptr,
    0);
  if ( v21 && v22 )
    sub_1580C40(v22, (unsigned __int64)v21);
  v14 = *(_DWORD **)(a1 + 112);
  *v14 = -2;
  v15 = v19;
  v14[4] = 0;
  if ( v15 && v20 )
    sub_1580C40(v20, (unsigned __int64)v15);
  return 0;
}
