__int64 __fastcall sub_CBA160(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // [rsp+0h] [rbp-18h] BYREF
  __int64 v6[2]; // [rsp+8h] [rbp-10h] BYREF

  v6[0] = a4 | 4;
  switch ( (unsigned __int64)&v5 )
  {
    case 0xFFFFFFFFFFFFFFF8LL:
      result = sub_CA8E00(a1, a2, v6);
      break;
    case 0xFFFFFFFFFFFFFFF9LL:
      result = sub_CA9100(a1, a2, v6);
      break;
    case 0xFFFFFFFFFFFFFFFALL:
      result = sub_CA8F00(a1, a2, v6);
      break;
    case 0xFFFFFFFFFFFFFFFBLL:
      result = sub_CA9200(a1, a2, v6);
      break;
    case 0xFFFFFFFFFFFFFFFCLL:
      result = sub_CAACE0(a1, a2, v6);
      break;
    case 0xFFFFFFFFFFFFFFFDLL:
      result = sub_CA4470(a1, a2, v6);
      break;
    case 0xFFFFFFFFFFFFFFFELL:
      result = sub_CA9000(a1, a2, v6);
      break;
    case 0xFFFFFFFFFFFFFFFFLL:
      result = sub_CAA480(a1, a2, v6);
      break;
    case 0uLL:
    case 1uLL:
    case 2uLL:
      result = sub_CA5E60(a1, a2, v6);
      break;
  }
  return result;
}
