unsigned __int64 __fastcall enum_chooser_t__::vfunc_6(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  unsigned __int64 v8; // rsi
  int tinfo_size; // edx
  char *v10; // r15
  char *v11; // rsi
  __int64 v13; // [rsp+8h] [rbp-68h]
  unsigned __int64 v14; // [rsp+18h] [rbp-58h] BYREF
  _QWORD v15[2]; // [rsp+20h] [rbp-50h] BYREF
  __int16 v16; // [rsp+30h] [rbp-40h]
  unsigned __int64 v17; // [rsp+38h] [rbp-38h]

  v6 = *(_QWORD *)(a1 + 184);
  v17 = __readfsqword(0x28u);
  v14 = 0;
  LODWORD(v6) = *(_DWORD *)(v6 + 4 * a5);
  v16 = 257;
  v15[1] = (unsigned int)v6;
  v15[0] = get_idati(a1);
  create_tinfo(&v14, 61, 189, v15);
  v8 = v14;
  if ( (v14 & 0x100) != 0 )
  {
    get_tinfo_pdata(*a2, v14, 0);
    v8 = v14;
  }
  tinfo_size = get_tinfo_size(0, v8, 0);
  if ( tinfo_size != -1 )
    sub_169A50((__int64 *)(*a2 + 24LL), (__int64)"%08X", tinfo_size);
  v10 = "Y";
  if ( !get_tinfo_property(v14, 291) )
    v10 = "N";
  v11 = *(char **)(*a2 + 48LL);
  v13 = *a2;
  if ( *(_QWORD *)(*a2 + 64LL) <= 1u )
  {
    v11 = (char *)qvector_reserve(*a2 + 48LL, v11, 2, 1);
    *(_QWORD *)(v13 + 48) = v11;
  }
  *(_QWORD *)(v13 + 56) = 2;
  *v11 = *v10;
  *(_BYTE *)(*(_QWORD *)(v13 + 48) + 1LL) = 0;
  sub_169A50((__int64 *)(*a2 + 72LL), (__int64)"%u", *(_DWORD *)(*(_QWORD *)(a1 + 184) + 4 * a5));
  print_tinfo(*a2 + 96LL, 0, 0, 0, 1058, &v14, 0, 0);
  if ( v14 > 0xFF )
    get_tinfo_pdata(*a2 + 120LL, v14, 5);
  clear_tinfo_t(&v14);
  return v17 - __readfsqword(0x28u);
}
