__int64 __fastcall show_auto(__int64 a1, int a2)
{
  __int64 result; // rax

  result = sub_3FB5F0();
  if ( (_BYTE)result )
  {
    result = *(_QWORD *)(qword_2CCB598 + 1536);
    *(_DWORD *)(result + 8) = a2;
    *(_QWORD *)(result + 16) = a1;
  }
  return result;
}
