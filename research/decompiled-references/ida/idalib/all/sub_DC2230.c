__int64 __fastcall sub_DC2230(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned __int8 **v4; // rax
  __int64 *v5; // rbp
  __int64 result; // rax
  __int64 v7; // [rsp+8h] [rbp-30h] BYREF
  __int64 v8; // [rsp+14h] [rbp-24h] BYREF
  char v9; // [rsp+1Ch] [rbp-1Ch]

  v7 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
  v4 = (unsigned __int8 **)sub_E33BA0(a1, &v7, 2502, 1);
  if ( v4 )
    sub_AE9DF0(v4, (__int64)a3, 0xAu);
  v5 = (__int64 *)sub_E33DB0(a1, a3[6], 103);
  result = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)a3 + 16LL))(a3);
  if ( v5 )
  {
    v8 = result;
    v9 = 1;
    return sub_AEC610(v5, &v8);
  }
  return result;
}
