__int64 __fastcall sub_2BB620(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r12d
  __int64 v5; // rcx

  if ( !a2 )
    return 0;
  if ( !*(_BYTE *)(a1 + 289) || (v4 = sub_2A0C20(a2, a2, a3, a4), !(_BYTE)v4) )
  {
    if ( (unsigned int)sub_2BB440(a1, a2, 0, a2) )
    {
      v5 = 1;
      v4 = 1;
    }
    else
    {
      v5 = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 176LL))(a2);
      v4 = v5;
    }
    sub_2BB510(a1, 1, a2, v5);
  }
  return v4;
}
