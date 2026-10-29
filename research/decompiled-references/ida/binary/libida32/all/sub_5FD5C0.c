__int64 __fastcall sub_5FD5C0(__int64 a1)
{
  int v2; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v3; // [rsp+8h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  if ( (unsigned int)get_name_value(&v2, 0xFFFFFFFFLL, a1) == 1 )
    apply_tinfo(v2);
  return 3;
}

