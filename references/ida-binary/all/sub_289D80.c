__int64 __fastcall sub_289D80(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  __int64 result; // rax

  sub_172FD0(a1, a2, a3, a4);
  result = (unsigned int)(*(_DWORD *)(a4 + 272) / 2);
  if ( (int)result > *(_DWORD *)a2 )
  {
    *(_DWORD *)a2 = result;
    *(_DWORD *)a3 = result;
  }
  return result;
}
