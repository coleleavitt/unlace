_DWORD *__fastcall sub_55D9B0(__int64 a1, int a2, int a3, char a4)
{
  _DWORD *result; // rax

  result = *(_DWORD **)(a1 + 64);
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
    *(_DWORD *)(a1 + 4LL * a2 + 488) = a3;
  }
  return result;
}

