unsigned __int64 __fastcall sub_F2CE0(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v3; // rdi
  unsigned __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    if ( (*(_DWORD *)(v1 + 236))-- == 1 )
    {
      v3 = *a1;
      if ( (*(_BYTE *)(v3 + 232) & 1) == 0 )
        return sub_F2A40(v3);
    }
  }
  return result;
}

