__int64 __fastcall sub_6D4BF0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int16 v3; // dx
  __int64 result; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v3 = (*(_WORD *)(v2 + 18) >> 3) & 0x1FF;
  if ( *(_BYTE *)(v2 + 16) == 13 && ((v3 + 57) & 0x1FFu) <= 0xB )
    return a2;
  switch ( (v3 + 45) & 0x1FF )
  {
    case 0:
      result = a1[2335];
      break;
    case 1:
      result = a1[2336];
      break;
    case 2:
      result = a1[2337];
      break;
    case 3:
      result = a1[2338];
      break;
    case 4:
      result = a1[2339];
      break;
    case 5:
      result = a1[2340];
      break;
    case 6:
      result = a1[2341];
      break;
    case 7:
      result = a1[2342];
      break;
    case 8:
      result = a1[2343];
      break;
    case 9:
      result = a1[2344];
      break;
    case 0xA:
      result = a1[2345];
      break;
    case 0xB:
      result = a1[2346];
      break;
  }
  return result;
}

