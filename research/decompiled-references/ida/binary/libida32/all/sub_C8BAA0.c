__int64 __fastcall sub_C8BAA0(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v3; // rbx
  int v4; // eax
  __int64 result; // rax
  __int64 v6[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = a3 | 4;
  v4 = sub_CC2440(*(_QWORD *)(a1 + 488), *(_QWORD *)(a3 + 8));
  v6[0] = v3;
  switch ( v4 )
  {
    case 0:
      result = sub_C850C0(a1, a2, v6);
      break;
    case 1:
      result = sub_C853C0(a1, a2, v6);
      break;
    case 2:
      result = sub_C851C0(a1, a2, v6);
      break;
    case 3:
      result = sub_C854C0(a1, a2, v6);
      break;
    case 4:
      result = sub_C86FA0(a1, a2, v6);
      break;
    case 5:
      result = sub_C80730(a1, a2, v6);
      break;
    case 6:
      result = sub_C852C0(a1, a2, v6);
      break;
    case 7:
      result = sub_C86740(a1, a2, v6);
      break;
    case 8:
    case 9:
    case 10:
      result = sub_C82120(a1, a2, v6);
      break;
  }
  return result;
}

