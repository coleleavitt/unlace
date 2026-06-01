__int64 __fastcall sub_F34700(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  _QWORD v4[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  switch ( ((*(_WORD *)(v2 + 18) >> 3) + 339) & 0x1FF )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      result = a2[2344];
      break;
    default:
      sub_A40CA0((__int64)v4, a2, v2);
      result = v4[0];
      break;
  }
  return result;
}

