__int64 __fastcall sub_DB490(__int64 a1, char a2)
{
  __int64 result; // rax
  unsigned int v3; // eax

  result = 1;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1504) + 48LL) & 1) == 0 )
  {
    v3 = *(_DWORD *)(a1 + 72);
    if ( v3 <= 0x10 )
      v3 = getinf();
    if ( v3 == 176 || v3 == 256 )
      return 0;
    else
      return a2 & 1u & (unsigned __int8)getinf_flag();
  }
  return result;
}
