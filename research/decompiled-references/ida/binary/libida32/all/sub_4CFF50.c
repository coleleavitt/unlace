unsigned __int64 __fastcall sub_4CFF50(__int64 a1)
{
  unsigned __int64 v2; // [rsp+1128h] [rbp-40h]

  v2 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 56) )
    get_ida_subdirs();
  return v2 - __readfsqword(0x28u);
}

