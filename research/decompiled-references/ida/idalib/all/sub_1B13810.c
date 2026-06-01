unsigned __int64 __fastcall sub_1B13810(__int64 *a1, _QWORD *a2, __int64 a3, unsigned int a4, int a5, _WORD *a6)
{
  _QWORD *v10; // rax
  _QWORD *v11; // r9
  _QWORD *v12; // rax
  unsigned int v14; // ebp
  __int64 v15; // rax
  __int64 v16; // rdx
  _QWORD v17[2]; // [rsp+0h] [rbp-D8h] BYREF
  _BYTE v18[32]; // [rsp+10h] [rbp-C8h] BYREF
  unsigned __int8 *v19; // [rsp+30h] [rbp-A8h] BYREF
  char v20; // [rsp+88h] [rbp-50h]
  char v21; // [rsp+94h] [rbp-44h]

  if ( !a6 )
    return 1;
  sub_1AEB8B0(*a1, 0x49u, a6);
  v10 = sub_1AE7A80(a2, (__int64)&a2[a3], 55);
  if ( v11 == v10 )
  {
    v14 = *(_DWORD *)(sub_168B6E0((__int64)a1) + 64);
    sub_168B9F0((__int64)v18, a1, a4, 0x11CBu, 0);
    if ( v20 )
    {
      sub_AE9DF0(&v19, (__int64)"'map'", 1u);
    }
    else if ( v21 )
    {
      sub_1B132F0((__int64)v18, (__int64)"'map'");
    }
    v15 = sub_20EAB70(73, v14);
    v17[1] = v16;
    v17[0] = v15;
    sub_166BAF0((__int64)v18, (__int64)v17);
    sub_15F7200(v18);
    return 1;
  }
  else
  {
    v12 = (_QWORD *)sub_168B6C0((__int64)a1);
    return sub_F00040(v12, a4, a5, a2, a3, (__int64)a6);
  }
}
