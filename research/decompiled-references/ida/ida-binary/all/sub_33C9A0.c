__int64 __fastcall sub_33C9A0(__int64 a1, char a2)
{
  _QWORD *func; // rbx
  __int64 v3; // rax
  bool v4; // r13
  unsigned int v5; // ebx
  char aflags; // r12

  func = (_QWORD *)get_func(a1);
  v3 = get_flags_ex(a1, 4) & 0xC000;
  v4 = v3 == 0x8000;
  if ( func && v3 == 0x8000 )
  {
    if ( (*func == a1 || (unsigned __int8)has_external_refs(func, a1)) && !a2 )
    {
      is_in_nlist(a1);
LABEL_6:
      v5 = 2;
      goto LABEL_7;
    }
    goto LABEL_15;
  }
  if ( a2 )
  {
LABEL_15:
    v5 = 1;
    if ( (unsigned __int8)is_in_nlist(a1) )
      v5 = 3;
    goto LABEL_7;
  }
  if ( (unsigned __int8)is_in_nlist(a1) || v4 )
    goto LABEL_6;
  v5 = 0;
LABEL_7:
  aflags = get_aflags(a1);
  if ( (aflags & 4) != 0 )
    v5 |= 4u;
  if ( (~((unsigned __int16)get_flags_ex(a1, 4) >> 8) & 0xC0) == 0 )
    v5 |= 8u;
  if ( (aflags & 8) != 0 )
    v5 |= 0x10u;
  return v5;
}
