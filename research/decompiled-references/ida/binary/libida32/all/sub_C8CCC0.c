__int64 __fastcall sub_C8CCC0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  int v3; // eax
  __int64 result; // rax
  __int64 v5[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = *(_DWORD *)(a2 + 28);
  v3 = sub_CC2440(*(_QWORD *)(a1 + 488), *(_QWORD *)(a2 + 8));
  v5[0] = a2 | 4;
  switch ( v3 )
  {
    case 0:
      result = sub_C850C0(a1, v2, v5);
      break;
    case 1:
      result = sub_C853C0(a1, v2, v5);
      break;
    case 2:
      result = sub_C851C0(a1, v2, v5);
      break;
    case 3:
      result = sub_C854C0(a1, v2, v5);
      break;
    case 4:
      result = sub_C86FA0(a1, v2, v5);
      break;
    case 5:
      result = sub_C80730(a1, v2, v5);
      break;
    case 6:
      result = sub_C852C0(a1, v2, v5);
      break;
    case 7:
      result = sub_C86740(a1, v2, v5);
      break;
    case 8:
    case 9:
    case 10:
      result = sub_C82120(a1, v2 != 0, v5);
      break;
  }
  return result;
}

