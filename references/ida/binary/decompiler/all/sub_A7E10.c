__int64 __fastcall sub_A7E10(__int64 a1, char *a2, int a3)
{
  __int64 v3; // rbx
  unsigned int v4; // r12d
  __int64 v6; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 v7[5]; // [rsp+10h] [rbp-28h] BYREF

  v3 = a3;
  v7[1] = __readfsqword(0x28u);
  v6 = 0;
  if ( (unsigned __int8)sub_A7AB0(a1, a2, &v6, v7, 0) )
  {
    v4 = 0;
    if ( !v7[0] )
      LOBYTE(v4) = v3 == get_tinfo_size();
  }
  else
  {
    v4 = 1;
  }
  clear_tinfo_t();
  return v4;
}
