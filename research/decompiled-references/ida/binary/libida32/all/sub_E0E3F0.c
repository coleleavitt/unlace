__int64 __fastcall sub_E0E3F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 result; // rax
  unsigned __int64 v6; // rdi
  __int64 v7; // rdx

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  result = 0;
  if ( v2 )
  {
    v6 = v2 & 0xFFFFFFFFFFFFFFF8LL;
    v7 = v2 & 4;
    if ( (_DWORD)v7 )
    {
      if ( v6 )
      {
        if ( ((*(_WORD *)v6 + 509) & 0x1FFu) <= 0x7E )
          return sub_BDCD00(v6, a2, v7, v3, v4);
        else
          return sub_EC7AA0(v6);
      }
    }
    else if ( v6 )
    {
      return (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return result;
}

