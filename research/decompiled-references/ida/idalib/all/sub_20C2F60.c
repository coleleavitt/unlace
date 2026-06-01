__int64 __fastcall sub_20C2F60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  switch ( *(_BYTE *)(a1 + 8) )
  {
    case 0:
      result = sub_21F9080();
      break;
    case 1:
      result = sub_21F9090();
      break;
    case 2:
      result = sub_21F90A0();
      break;
    case 3:
      result = sub_21F90B0(a1, a2);
      break;
    case 4:
      result = sub_21F90E0(a1, a2, a3);
      break;
    case 5:
      result = sub_21F90C0();
      break;
    case 6:
      result = sub_21F90D0(a1, a2, a3);
      break;
  }
  return result;
}
