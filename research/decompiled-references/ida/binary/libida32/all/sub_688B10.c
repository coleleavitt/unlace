__int64 __fastcall sub_688B10(__int64 a1, unsigned __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v7; // edx
  __int64 result; // rax
  int v9; // eax

  if ( a2 >= *(_QWORD *)(a1 + 8) )
  {
    set_error_data(0, a2, a3, a4, a5, a6);
    return 4294967289LL;
  }
  else
  {
    v7 = compare_arglocs(*(_QWORD *)a1 + 80 * a2, a3);
    result = 1;
    if ( v7 )
    {
      v9 = *(_DWORD *)(a1 + 24);
      BYTE1(v9) &= ~1u;
      *(_DWORD *)(a1 + 24) = v9;
      if ( *a3 == 1 )
      {
        BYTE1(v9) |= 2u;
        *(_DWORD *)(a1 + 24) = v9;
      }
      sub_6860B0(a1);
      copy_argloc(80 * a2 + *(_QWORD *)a1, a3);
      return 0;
    }
  }
  return result;
}

