__int64 __fastcall sub_16B5ED0(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  __int64 result; // rax
  _QWORD *v5; // rdi
  unsigned __int64 v6; // rax
  _DWORD *v7; // rcx
  __int64 v8; // rdx
  int v9; // [rsp+0h] [rbp-48h] BYREF
  __int64 v10; // [rsp+8h] [rbp-40h]
  unsigned __int64 v11; // [rsp+10h] [rbp-38h]
  int v12; // [rsp+18h] [rbp-30h]
  __int64 v13; // [rsp+20h] [rbp-28h]

  result = 0;
  if ( (*(_DWORD *)*a2 & 0x10000) == 0 )
  {
    v5 = *(_QWORD **)(a1 + 248);
    v10 = 0;
    v12 = 0;
    v9 = 1;
    v6 = sub_A73320(v5, a3);
    v7 = (_DWORD *)*a2;
    v11 = v6;
    v13 = 0;
    v8 = sub_1A24E20(a1, &v9, 0, v7, 0, 0);
    result = 1;
    if ( v8 != 1 )
    {
      *a2 = v8 & 0xFFFFFFFFFFFFFFFELL;
      return 0;
    }
  }
  return result;
}
