unsigned __int64 __fastcall sub_14B2D0(__int64 a1, __int64 *a2, _DWORD *a3)
{
  unsigned __int64 v5; // [rsp+8h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  sub_14B160(*a2);
  if ( (unsigned __int8)is_loaded() )
  {
    sub_94360((__int64 *)(*a2 + 24));
    print_strlit_type();
    get_strlit_contents();
  }
  *a3 = 80;
  return v5 - __readfsqword(0x28u);
}

