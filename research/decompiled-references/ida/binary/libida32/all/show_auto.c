__int64 __fastcall show_auto(int a1, int a2)
{
  __int64 result; // rax

  result = sub_3E8690();
  if ( (_BYTE)result )
  {
    result = *(_QWORD *)(qword_2CA1698 + 1344);
    *(_DWORD *)(result + 8) = a2;
    *(_DWORD *)(result + 12) = a1;
  }
  return result;
}

