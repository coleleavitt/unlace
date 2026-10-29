__int64 __fastcall sub_A63BF0(_QWORD *a1)
{
  __int64 result; // rax

  switch ( *(_DWORD *)(a1[2181] + 140LL) )
  {
    case 0:
    case 2:
    case 4:
    case 6:
    case 8:
    case 9:
      result = sub_A63B40(a1, 10);
      break;
    case 1:
      result = sub_A63B40(a1, 2);
      break;
    case 3:
      result = sub_A63B40(a1, 4);
      break;
    case 5:
      result = sub_A63B40(a1, 6);
      break;
    case 7:
      result = sub_A63B40(a1, 8);
      break;
  }
  return result;
}
