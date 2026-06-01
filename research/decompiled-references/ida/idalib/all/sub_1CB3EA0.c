bool __fastcall sub_1CB3EA0(__int64 a1, __int64 a2)
{
  bool result; // al
  __int64 *v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned __int8 v6; // al

  result = 0;
  if ( *(_DWORD *)(a2 + 24) )
  {
    v3 = *(__int64 **)(a2 + 16);
    v4 = *v3;
    if ( *v3
      && ((v5 = *v3, v6 = *(_BYTE *)(v4 + 28) & 0x7F, ((v6 + 52) & 0x7Fu) > 1) && (unsigned int)v6 - 53 > 1
       || (v5 = sub_B72ED0(v5)) != 0) )
    {
      return sub_1CB3DC0(v5, 1, 1) != 0;
    }
    else
    {
      return v4 == 0;
    }
  }
  return result;
}
