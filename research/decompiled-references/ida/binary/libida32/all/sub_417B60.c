__int64 __fastcall sub_417B60(__int64 a1, __int64 a2, int a3)
{
  switch ( a3 )
  {
    case 1:
      *(_QWORD *)a1 = a2;
      break;
    case 2:
      *(_QWORD *)a1 = *(_QWORD *)a2;
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
      break;
    case 0:
      *(_QWORD *)a1 = 0;
      break;
  }
  return 0;
}

