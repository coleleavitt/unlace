char *__fastcall dwarf_get_alloc(_QWORD *a1, unsigned __int8 a2, __int64 a3)
{
  __int64 *v3; // rax
  __int64 v4; // r13
  __int16 v5; // ax
  size_t v6; // r13
  _WORD *v7; // rax
  char *v8; // r14
  unsigned int (__fastcall *v9)(_QWORD *, char *); // rax

  if ( !a1 || *a1 != 3959286781LL || a2 > 0x41u )
    return nullptr;
  v3 = &qword_B76E0[3 * a2];
  v4 = *(__int16 *)v3;
  v5 = *((_WORD *)v3 + 1);
  if ( v5 )
  {
    if ( v5 == 1 )
      v4 *= a3;
    else
      v4 = 8 * a3;
  }
  v6 = v4 + 16;
  v7 = calloc(v6, 1u);
  if ( !v7 )
    return nullptr;
  *(_QWORD *)v7 = a1;
  v8 = (char *)(v7 + 8);
  v7[5] = a2;
  v7[4] = v6;
  v9 = (unsigned int (__fastcall *)(_QWORD *, char *))qword_B76E0[3 * a2 + 1];
  if ( v9 )
  {
    if ( v9(a1, v8) )
      return nullptr;
  }
  if ( byte_B89E0 )
    _dwarf_tsearch(v8, a1 + 36, sub_F220);
  return v8;
}

