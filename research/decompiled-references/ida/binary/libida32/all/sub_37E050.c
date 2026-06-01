__int64 __fastcall sub_37E050(__int64 a1, const char *a2)
{
  const char *v2; // rbp
  int v3; // eax
  __int64 v4; // rax
  __int64 result; // rax

  v2 = " ";
  if ( a2 )
  {
    v2 = a2;
    if ( !*a2 )
      v2 = " ";
  }
  do
  {
    v3 = *(_DWORD *)(a1 + 144);
    if ( (v3 & 0x300) != 0x100 )
    {
      v4 = (v3 & 0x10000) != 0 ? *(_QWORD *)(a1 + 528) : *(unsigned int *)(a1 + 60);
      result = ~v4;
      if ( (result & 0x600) != 0 )
        break;
      result = getinf_flag(48, 8);
      if ( (_BYTE)result )
        break;
      result = *(_DWORD *)(a1 + 144) & 0xC0000;
      if ( (_DWORD)result != (_DWORD)&stru_40000 )
        break;
    }
    result = (*(__int64 (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)a1 + 136LL))(a1, v2, 0);
  }
  while ( !(_BYTE)result );
  return result;
}

