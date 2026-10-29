__int64 __fastcall sub_16CECE0(__int64 a1, _DWORD **a2, double a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  _QWORD *v9; // rdi
  _DWORD *v10; // rcx
  __int64 v11; // rsi
  __int64 result; // rax
  unsigned __int64 v13; // rax
  _DWORD *v14; // rcx
  __int64 v15; // rcx
  int v16; // [rsp+0h] [rbp-48h] BYREF
  __int64 v17; // [rsp+8h] [rbp-40h]
  unsigned __int64 v18; // [rsp+10h] [rbp-38h]
  int v19; // [rsp+18h] [rbp-30h]
  __int64 v20; // [rsp+20h] [rbp-28h]

  v9 = *(_QWORD **)(a1 + 248);
  v10 = *a2;
  v11 = v9[2340];
  if ( (*v10 & 0x10000) == 0 )
  {
    v17 = 0;
    v19 = 0;
    v16 = 1;
    v13 = sub_A73320(v9, v11);
    v14 = *a2;
    v18 = v13;
    v20 = 0;
    v15 = sub_1A24E20(a1, &v16, 0, v14, 0, 0);
    result = 1;
    if ( v15 == 1 )
      return result;
    v10 = (_DWORD *)(v15 & 0xFFFFFFFFFFFFFFFELL);
    *a2 = v10;
  }
  result = 0;
  if ( (*v10 & 0x20000) == 0 )
    return sub_16CEA20(a1, (unsigned __int64)v10, &v16, a3, (__int64)v10, a6, a7);
  return result;
}
