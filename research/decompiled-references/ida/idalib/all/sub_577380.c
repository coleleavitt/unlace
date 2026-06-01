_QWORD *__fastcall sub_577380(__int64 a1, int a2, __int64 a3, char a4)
{
  _QWORD *result; // rax

  result = *(_QWORD **)(a1 + 64);
  if ( result && a4 )
  {
    *(_QWORD *)(a1 + 64) = result + 1;
    *result = a3;
  }
  if ( (*(_BYTE *)(a1 + 146) & 1) != 0 )
  {
    if ( (unsigned __int64)a2 > 7 )
    {
      if ( !under_debugger )
        interr(2030);
      BUG();
    }
    *(_QWORD *)(a1 + 8LL * a2 + 640) = a3;
  }
  return result;
}
