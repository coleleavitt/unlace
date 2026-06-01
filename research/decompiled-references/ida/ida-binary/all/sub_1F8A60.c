__int64 __fastcall sub_1F8A60(__int64 a1, int a2, __int64 a3, __int64 a4, double a5)
{
  __int64 result; // rax

  switch ( a2 )
  {
    case 2:
      if ( *(_QWORD *)(a1 + 896) )
      {
        *(_DWORD *)(a1 + 944) = 2;
        return sub_1F8860(a1, nullptr, a3, a4, a5);
      }
      break;
    case 3:
      if ( *(_QWORD *)(a1 + 904) )
      {
        *(_DWORD *)(a1 + 944) = 3;
        return sub_1F8860(a1, nullptr, a3, a4, a5);
      }
      break;
    case 1:
      if ( *(_QWORD *)(a1 + 888) )
      {
        *(_DWORD *)(a1 + 944) = 1;
        return sub_1F8860(a1, nullptr, a3, a4, a5);
      }
      break;
  }
  return result;
}
