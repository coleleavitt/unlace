__int64 __fastcall sub_1F6FD30(char *a1, __int64 a2)
{
  sub_9B9C90(a2, *(unsigned int *)a1);
  if ( a1[7] < 0 )
  {
    sub_9B9C90(a2, (*((_DWORD *)a1 + 1) & 0x7FFFFFFFu) + 1);
    if ( a1[11] >= 0 )
      return sub_1F6B920(a2);
  }
  else
  {
    sub_1F6B920(a2);
    if ( a1[11] >= 0 )
      return sub_1F6B920(a2);
  }
  return sub_9B9C90(a2, (*((_DWORD *)a1 + 2) & 0x7FFFFFFFu) + 1);
}
