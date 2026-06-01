__int64 __fastcall sub_192E40(__int64 a1, __int64 a2)
{
  __int64 (*v2)(); // rax
  int v3; // ecx
  __int64 result; // rax

  v2 = *(__int64 (**)())(*(_QWORD *)a1 + 32LL);
  if ( v2 == sub_91A50 || (result = v2(), (_BYTE)result) )
  {
    v3 = ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) - 1;
    if ( *(_BYTE *)(a1 + 8) > 3u )
    {
      if ( ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) != 0 )
      {
        sub_18DF40(a1, a2);
        return sub_192EE0();
      }
      v3 = *(char *)(a1 + 11);
    }
    if ( v3 >= 0 )
    {
      if ( TProgram::application )
        (*(void (__fastcall **)(__int64, unsigned __int64, unsigned __int64, _QWORD))(*(_QWORD *)(TProgram::application
                                                                                                + 136LL)
                                                                                    + 176LL))(
          TProgram::application + 136LL,
          (unsigned __int64)((v3 & 0x40) == 0) << v3,
          (unsigned __int64)((v3 & 0x40) != 0) << v3,
          0);
    }
    return 1;
  }
  return result;
}

