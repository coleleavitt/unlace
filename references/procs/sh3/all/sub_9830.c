__int64 __fastcall sub_9830(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // r14
  _BYTE *v3; // rbx
  __int64 v4; // rbp

  v2 = *a1;
  v3 = (char *)&unk_11D98 - 8;
  v4 = *a1 - ((_QWORD)&unk_11D98 - 8);
  while ( *v3 == (unsigned __int8)get_byte(&v3[v4]) )
  {
    if ( ++v3 == (_BYTE *)&unk_11D98 )
    {
      *a2 = (unsigned int)get_dword(v2 + 8);
      return 1;
    }
  }
  return 0;
}
