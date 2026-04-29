unsigned __int64 __fastcall sub_23DC60(__int64 a1, char a2)
{
  unsigned __int8 v2; // si
  __int64 v3; // rax
  __int64 v5; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  if ( (a2 & 0xF) == 8 )
    goto LABEL_8;
  v2 = a2 & 0x3F;
  if ( v2 > 0x23u )
  {
    if ( v2 != 50 )
      return v6 - __readfsqword(0x28u);
    goto LABEL_8;
  }
  v3 = 39;
  if ( v2 > 0x21u )
  {
LABEL_4:
    v5 = v3;
    copy_tinfo_t(a1, &v5);
    clear_tinfo_t(&v5);
    return v6 - __readfsqword(0x28u);
  }
  if ( v2 == 3 || (unsigned __int8)(v2 - 18) <= 1u )
  {
LABEL_8:
    v3 = 7;
    goto LABEL_4;
  }
  return v6 - __readfsqword(0x28u);
}
