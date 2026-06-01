__int64 __fastcall dbg_get_input_path(char *s, __int64 a2)
{
  __int64 v2; // r12

  v2 = qword_2CA1698;
  if ( (getinf(3) & 0x80u) == 0LL )
    return sub_6141A0(v2, 97, s, a2);
  else
    return get_root_filename(s);
}

