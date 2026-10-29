__int64 __fastcall sub_DC8DB0(__int64 a1, __int64 a2, _QWORD *a3, int a4)
{
  unsigned __int8 **v6; // rax
  __int64 *v7; // r13
  __int64 v8; // rax
  __int64 v9; // [rsp+0h] [rbp-40h] BYREF
  __int64 v10; // [rsp+Ch] [rbp-34h] BYREF
  char v11; // [rsp+14h] [rbp-2Ch]

  if ( *a3 != 0xFFFFFFFFLL )
    return 1;
  v9 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
  v6 = (unsigned __int8 **)sub_E33BA0(a1, &v9, 2466, 0);
  v7 = (__int64 *)v6;
  if ( v6 )
  {
    sub_AE9DF0(v6, a4, 2u);
    v8 = sub_E20720(*(_QWORD *)(a1 + 400), a2);
    v11 = 1;
    v10 = v8;
    sub_AEC610(v7, &v10);
  }
  else
  {
    sub_E20720(*(_QWORD *)(a1 + 400), a2);
  }
  return 0;
}
