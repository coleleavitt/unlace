__int64 __fastcall sub_CB7570(__int64 a1, signed int a2, __int64 a3)
{
  __int64 v3; // rbx
  int v4; // eax
  __int64 result; // rax
  __int64 v6[4]; // [rsp+8h] [rbp-20h] BYREF

  v3 = a3 | 4;
  v4 = sub_CE6180(*(_QWORD *)(a1 + 488), *(_QWORD *)(a3 + 8));
  v6[0] = v3;
  switch ( v4 )
  {
    case 0:
      result = sub_CA8E00(a1, a2, v6);
      break;
    case 1:
      result = sub_CA9100(a1, a2, v6);
      break;
    case 2:
      result = sub_CA8F00(a1, a2, v6);
      break;
    case 3:
      result = sub_CA9200(a1, a2, v6);
      break;
    case 4:
      result = sub_CAACE0(a1, a2, v6);
      break;
    case 5:
      result = sub_CA4470(a1, a2, v6);
      break;
    case 6:
      result = sub_CA9000(a1, a2, v6);
      break;
    case 7:
      result = sub_CAA480(a1, a2, v6);
      break;
    case 8:
    case 9:
    case 10:
      result = sub_CA5E60(a1, a2 != 0, v6);
      break;
  }
  return result;
}
