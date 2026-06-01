__int64 __fastcall dwarf_discr_entry_s(__int64 *a1, unsigned __int64 a2, _WORD *a3, _QWORD *a4, _QWORD *a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13[9]; // [rsp+0h] [rbp-48h] BYREF

  result = 0xFFFFFFFFLL;
  v13[1] = __readfsqword(0x28u);
  if ( a2 < a1[1] )
  {
    if ( !*((_DWORD *)a1 + 9) )
    {
      v13[0] = a1[1];
      if ( (unsigned int)sub_1A0F0(*a1, a1[2], a1[3], 0, (_WORD *)a1[5], v13, a6) )
        return 1;
      *((_DWORD *)a1 + 9) = 1;
    }
    v11 = a1[5];
    if ( v11 )
    {
      v12 = v11 + 40 * a2;
      *a3 = *(_WORD *)v12;
      *a4 = *(_QWORD *)(v12 + 24);
      *a5 = *(_QWORD *)(v12 + 32);
      return 0;
    }
    _dwarf_error(*a1, a6, 353);
    return 1;
  }
  return result;
}

