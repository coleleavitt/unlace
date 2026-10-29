unsigned __int64 __fastcall sub_1577D0(__int64 a1, __int64 *a2)
{
  char *v3; // r15
  _BYTE *v4; // rsi
  __int64 v6; // [rsp+8h] [rbp-68h]
  unsigned __int64 v7; // [rsp+38h] [rbp-38h]

  v7 = __readfsqword(0x28u);
  get_idati();
  create_tinfo();
  if ( (unsigned int)get_tinfo_size() != -1 )
    sub_94440((__int64 *)(*a2 + 24));
  v3 = "Y";
  if ( !get_tinfo_property() )
    v3 = (char *)"N";
  v4 = *(_BYTE **)(*a2 + 48);
  v6 = *a2;
  if ( *(_QWORD *)(*a2 + 64) <= 1u )
  {
    v4 = (_BYTE *)qvector_reserve();
    *(_QWORD *)(v6 + 48) = v4;
  }
  *(_QWORD *)(v6 + 56) = 2;
  *v4 = *v3;
  *(_BYTE *)(*(_QWORD *)(v6 + 48) + 1LL) = 0;
  sub_94440((__int64 *)(*a2 + 72));
  print_tinfo();
  clear_tinfo_t();
  return v7 - __readfsqword(0x28u);
}

