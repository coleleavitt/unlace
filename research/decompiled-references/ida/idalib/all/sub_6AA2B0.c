__int64 __fastcall sub_6AA2B0(__int64 a1, unsigned __int64 *a2, _BYTE **a3, void *a4)
{
  unsigned __int64 v6; // rdi
  _BYTE *v8; // rax
  _QWORD v10[7]; // [rsp+0h] [rbp-38h] BYREF

  v6 = *a2;
  v10[1] = __readfsqword(0x28u);
  if ( (get_tinfo_property(v6, 2) & 0xF) != 0xA )
    return 0;
  if ( a4 )
  {
    if ( (unsigned __int8)sub_6A9F90(a4, a2) )
      goto LABEL_5;
    goto LABEL_4;
  }
  if ( !(unsigned __int8)sub_6A9F90(*(void **)(a1 + 8), a2) )
  {
LABEL_4:
    v10[0] = get_tinfo_property(*a2, 9);
    copy_tinfo_t(a2);
    clear_tinfo_t(v10);
  }
LABEL_5:
  if ( a3 )
  {
    v8 = *a3;
    if ( *a3 )
    {
      if ( *v8 == 108 && v8[1] == 112 )
        *a3 = v8 + 2;
    }
  }
  return 1;
}
