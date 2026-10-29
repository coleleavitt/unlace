__int64 __fastcall get_auto_display(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = sub_3E8690();
  if ( (_BYTE)result )
  {
    if ( a1 )
    {
      v2 = *(_QWORD *)(qword_2CA1698 + 1344);
      *(_QWORD *)a1 = *(_QWORD *)(v2 + 8);
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(v2 + 16);
    }
  }
  else if ( a1 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = 0xFFFFFFFF00000000LL;
  }
  return result;
}

