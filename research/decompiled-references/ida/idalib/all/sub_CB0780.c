__int64 __fastcall sub_CB0780(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  int v3; // eax
  __int64 result; // rax
  __int64 v5[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = *(_DWORD *)(a2 + 16);
  v3 = sub_CE6180(*(_QWORD *)(a1 + 488), *(_QWORD *)(a2 + 8));
  v5[0] = a2 | 4;
  switch ( v3 )
  {
    case 0:
      result = sub_CA8E00(a1, v2, v5);
      break;
    case 1:
      result = sub_CA9100(a1, v2, v5);
      break;
    case 2:
      result = sub_CA8F00(a1, v2, v5);
      break;
    case 3:
      result = sub_CA9200(a1, v2, v5);
      break;
    case 4:
      result = sub_CAACE0(a1, v2, v5);
      break;
    case 5:
      result = sub_CA4470(a1, v2, v5);
      break;
    case 6:
      result = sub_CA9000(a1, v2, v5);
      break;
    case 7:
      result = sub_CAA480(a1, v2, v5);
      break;
    case 8:
    case 9:
    case 10:
      result = sub_CA5E60(a1, v2 != 0, v5);
      break;
  }
  return result;
}
