__int64 __fastcall has_external_refs(__int64 a1, __int64 a2)
{
  _QWORD v3[7]; // [rsp+0h] [rbp-38h] BYREF

  v3[3] = __readfsqword(0x28u);
  if ( a2 == -1 )
    return 0;
  if ( !a1 )
    return 1;
  if ( (unsigned __int8)xrefblk_t_first_to(v3, a2, 1) )
  {
    while ( (int)get_func_chunknum(a1, v3[0]) >= 0 )
    {
      if ( !(unsigned __int8)xrefblk_t_next_to(v3) )
        return 0;
    }
    return 1;
  }
  return 0;
}
