unsigned __int64 __fastcall sub_278AD0(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v3; // rdi
  unsigned __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    if ( (*(_DWORD *)(v1 + 132))-- == 1 )
    {
      v3 = *a1;
      if ( (*(_BYTE *)(v3 + 128) & 1) == 0 )
        return sub_278550(v3);
    }
  }
  return result;
}
