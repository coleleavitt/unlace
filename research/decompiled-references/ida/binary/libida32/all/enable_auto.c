__int64 __fastcall enable_auto(char a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = sub_3E8690();
  if ( (_BYTE)result )
  {
    v2 = *(_QWORD *)(**(_QWORD **)(qword_2CA1698 + 1480) + 1344LL);
    result = *(unsigned __int8 *)(v2 + 97);
    *(_BYTE *)(v2 + 97) = a1;
  }
  return result;
}

