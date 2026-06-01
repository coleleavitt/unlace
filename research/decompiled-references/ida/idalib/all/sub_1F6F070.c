__int64 __fastcall sub_1F6F070(__int64 a1, char *a2, __int64 a3)
{
  sub_9B9C90(a3, *(unsigned int *)a2);
  if ( a2[7] < 0 )
  {
    sub_9B9C90(a3, (*((_DWORD *)a2 + 1) & 0x7FFFFFFFu) + 1);
    if ( a2[11] >= 0 )
      return sub_1F6B920(a3);
  }
  else
  {
    sub_1F6B920(a3);
    if ( a2[11] >= 0 )
      return sub_1F6B920(a3);
  }
  return sub_9B9C90(a3, (*((_DWORD *)a2 + 2) & 0x7FFFFFFFu) + 1);
}
