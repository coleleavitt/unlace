__int64 __fastcall sub_167EB80(__int64 a1)
{
  __int64 result; // rax
  int v2; // esi

  result = *(_QWORD *)a1;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 232LL) + 107LL) & 4) != 0 )
  {
    v2 = *(_DWORD *)(**(_QWORD **)(a1 + 8) + 24LL);
    if ( v2 )
    {
      result = sub_1021680(*(_QWORD *)(result + 272), v2);
      if ( (_DWORD)result )
      {
        if ( (_DWORD)result != 3 )
        {
          result = *(_QWORD *)(a1 + 16);
          *(_DWORD *)result = 5337;
        }
      }
    }
  }
  return result;
}
