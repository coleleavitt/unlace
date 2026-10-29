__int64 __fastcall sub_149F400(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 *v7; // rcx
  __int64 result; // rax
  __int64 v9; // rdx
  unsigned int v10; // esi
  __int64 v11; // [rsp+4h] [rbp-84h] BYREF
  char v12; // [rsp+Ch] [rbp-7Ch]
  unsigned __int8 *v13[15]; // [rsp+10h] [rbp-78h] BYREF

  sub_1564820(v13, *(_QWORD *)a1, a3, 1664);
  sub_AE9DF0(v13, **(_DWORD **)(a1 + 8) == 3, 2u);
  sub_AE9DF0(v13, **(unsigned __int16 **)(a1 + 16), 4u);
  sub_AE9DF0(v13, a2, 5u);
  v11 = a4;
  v12 = 1;
  sub_AEC610((__int64 *)v13, &v11);
  sub_AE9DF0(v13, a5, 2u);
  sub_AEA040((__int64)v13);
  v7 = *(__int64 **)(a1 + 24);
  result = *(_QWORD *)(a1 + 8);
  v9 = *v7;
  if ( *v7 && *(_BYTE *)(result + 24) )
  {
    v10 = *(_DWORD *)(v9 + 8);
    if ( v10 <= 1 )
    {
      *v7 = 0;
      *(_DWORD *)result = 0;
    }
    else
    {
      *(_DWORD *)(v9 + 8) = v10 - 1;
    }
  }
  else if ( *(_DWORD *)result == 3 )
  {
    *v7 = 0;
    *(_DWORD *)result = 0;
    *(_QWORD *)(result + 16) = 0;
  }
  return result;
}
