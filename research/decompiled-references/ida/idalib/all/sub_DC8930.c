__int64 __fastcall sub_DC8930(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // r8d
  __int64 result; // rax
  unsigned __int8 **v7; // rax
  __int64 *v8; // rbp
  __int64 v9; // rax
  __int64 v10; // [rsp+0h] [rbp-40h] BYREF
  __int64 v11; // [rsp+Ch] [rbp-34h] BYREF
  char v12; // [rsp+14h] [rbp-2Ch]

  v4 = *(_DWORD *)(a3 + 24);
  if ( !v4 || v4 == 2 )
  {
    result = 1;
    if ( *(_QWORD *)(a3 + 32) )
      return result;
  }
  else
  {
    result = 1;
    if ( v4 == 3 || *(_QWORD *)(a3 + 40) || *(_QWORD *)a3 )
      return result;
  }
  v10 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
  v7 = (unsigned __int8 **)sub_E33BA0(a1, &v10, 2461, 0);
  v8 = (__int64 *)v7;
  if ( v7 )
  {
    sub_AE9DF0(v7, a4, 2u);
    v9 = sub_E20720(*(_QWORD *)(a1 + 400), a2);
    v12 = 1;
    v11 = v9;
    sub_AEC610(v8, &v11);
  }
  else
  {
    sub_E20720(*(_QWORD *)(a1 + 400), a2);
  }
  return 0;
}
